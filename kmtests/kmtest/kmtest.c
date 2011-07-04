/*
 * PROJECT:         ReactOS kernel-mode tests
 * LICENSE:         GPLv2+ - See COPYING in the top level directory
 * PURPOSE:         Kernel-Mode Test Suite Loader Application
 * PROGRAMMER:      Thomas Faber <thfabba@gmx.de>
 */

#define UNICODE
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <strsafe.h>
#include <winioctl.h>

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "kmtest.h"
#include <kmt_public.h>
#define KMT_DEFINE_TEST_FUNCTIONS
#include <kmt_test.h>

#define SERVICE_NAME        L"Kmtest"
#define SERVICE_PATH        L"kmtest_drv.sys"

#define LOGBUFFER_SIZE      65000
#define RESULTBUFFER_SIZE   FIELD_OFFSET(KMT_RESULTBUFFER, LogBuffer[LOGBUFFER_SIZE])

static HANDLE KmtestHandle;
PCSTR ErrorFileAndLine = "No error";

static void OutputError(DWORD Error);
static DWORD ListTests(VOID);
static PKMT_TESTFUNC FindTest(PCSTR TestName);
static DWORD OutputResult(PCSTR TestName);
static DWORD RunTest(PCSTR TestName);
int __cdecl main(int ArgCount, char **Arguments);

/**
 * @name OutputError
 *
 * Output an error message to the console.
 *
 * @param Error
 *        Win32 error code
 */
static
void
OutputError(
    DWORD Error)
{
    PSTR Message;
    if (!FormatMessageA(FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS | FORMAT_MESSAGE_ALLOCATE_BUFFER,
                   NULL, Error, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPSTR)&Message, 0, NULL))
    {
        fprintf(stderr, "%s: Could not retrieve error message (error 0x%08lx). Original error: 0x%08lx\n",
            ErrorFileAndLine, GetLastError(), Error);
        return;
    }

    fprintf(stderr, "%s: error 0x%08lx: %s\n", ErrorFileAndLine, Error, Message);

    LocalFree(Message);
}

/**
 * @name ListTests
 *
 * Output the list of tests to the console.
 * The list will comprise tests as listed by the driver
 * in addition to user-mode tests in TestList.
 *
 * @return Win32 error code
 */
static
DWORD
ListTests(VOID)
{
    DWORD Error = ERROR_SUCCESS;
    CHAR Buffer[1024];
    DWORD BytesRead;
    PCSTR TestName = Buffer;
    PCKMT_TEST TestEntry = TestList;
    PCSTR NextTestName;

    puts("Valid test names:");

    // get test list from driver
    if (!DeviceIoControl(KmtestHandle, IOCTL_KMTEST_GET_TESTS, NULL, 0, Buffer, sizeof Buffer, &BytesRead, NULL))
        error_goto(Error, cleanup);

    // output test list plus user-mode tests
    while (TestEntry->TestName || *TestName)
    {
        // tests starting with a '-' should not be listed
        while (TestEntry->TestName && *TestEntry->TestName == '-')
            ++TestEntry;

        if (!TestEntry->TestName)
        {
            NextTestName = TestName;
            TestName += strlen(TestName) + 1;
        }
        else if (!*TestName)
        {
            NextTestName = TestEntry->TestName;
            ++TestEntry;
        }
        else
        {
            int Result = strcmp(TestEntry->TestName, TestName);

            if (Result == 0)
            {
                NextTestName = TestEntry->TestName;
                TestName += strlen(TestName) + 1;
                ++TestEntry;
            }
            else if (Result < 0)
            {
                NextTestName = TestEntry->TestName;
                ++TestEntry;
            }
            else
            {
                NextTestName = TestName;
                TestName += strlen(TestName) + 1;
            }
        }
        printf("    %s\n", NextTestName);
    }

cleanup:
    return Error;
}

/**
 * @name FindTest
 *
 * Find a test in TestList by name.
 *
 * @param TestName
 *        Name of the test to look for. Case sensitive
 *
 * @return pointer to test function, or NULL if not found
 */
static
PKMT_TESTFUNC
FindTest(
    PCSTR TestName)
{
    PCKMT_TEST TestEntry = TestList;

    for (TestEntry = TestList; TestEntry->TestName; ++TestEntry)
    {
        PCSTR TestEntryName = TestEntry->TestName;

        // skip leading '-' if present
        if (*TestEntryName == '-')
            ++TestEntryName;

        if (!lstrcmpA(TestEntryName, TestName))
            break;
    }

    return TestEntry->TestFunction;
}

/**
 * @name OutputResult
 *
 * Output the test results in ResultBuffer to the console.
 *
 * @param TestName
 *        Name of the test whose result is to be printed
 *
 * @return Win32 error code
 */
static
DWORD
OutputResult(
    PCSTR TestName)
{
    DWORD Error = ERROR_SUCCESS;
    DWORD BytesWritten;

    KmtFinishTest(TestName);

    if (!WriteConsoleA(GetStdHandle(STD_OUTPUT_HANDLE), ResultBuffer->LogBuffer, ResultBuffer->LogBufferLength, &BytesWritten, NULL))
        error(Error);

    return Error;
}

/**
 * @name RunTest
 *
 * Run the named test and output its results.
 *
 * @param TestName
 *        Name of the test to run. Case sensitive
 *
 * @return Win32 error code
 */
static
DWORD
RunTest(
    PCSTR TestName)
{
    DWORD Error = ERROR_SUCCESS;
    PKMT_TESTFUNC TestFunction;
    DWORD BytesRead;

    ResultBuffer = KmtAllocateResultBuffer(LOGBUFFER_SIZE);
    if (!DeviceIoControl(KmtestHandle, IOCTL_KMTEST_SET_RESULTBUFFER, ResultBuffer, RESULTBUFFER_SIZE, NULL, 0, &BytesRead, NULL))
        error_goto(Error, cleanup);

    // check test list
    TestFunction = FindTest(TestName);

    if (TestFunction)
    {
        TestFunction();
        goto cleanup;
    }
    
    // not found in user-mode test list, call driver
    if (!DeviceIoControl(KmtestHandle, IOCTL_KMTEST_RUN_TEST, (PVOID)TestName, strlen(TestName), NULL, 0, &BytesRead, NULL))
        error_goto(Error, cleanup);

cleanup:
    if (!Error)
        OutputResult(TestName);
    
    KmtFreeResultBuffer(ResultBuffer);

    return Error;
}

/**
 * @name main
 *
 * Program entry point
 *
 * @param ArgCount
 * @param Arguments
 *
 * @return EXIT_SUCCESS on success, EXIT_FAILURE on failure
 */
int
main(
    int ArgCount,
    char **Arguments)
{
    INT Status = EXIT_SUCCESS;
    DWORD Error = ERROR_SUCCESS;
    SC_HANDLE ServiceHandle;
    PCSTR AppName = "kmtest.exe";
    PCSTR TestName;

    Error = KmtServiceInit();
    if (Error)
        goto cleanup;

    Error = KmtCreateAndStartService(SERVICE_NAME, SERVICE_PATH, L"ReactOS Kernel-Mode Test Suite Driver", &ServiceHandle, FALSE);
    if (Error)
        goto cleanup;

    KmtestHandle = CreateFile(KMTEST_DEVICE_PATH, GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, 0, NULL);
    if (KmtestHandle == INVALID_HANDLE_VALUE)
        error_goto(Error, cleanup);

    if (ArgCount >= 1)
        AppName = Arguments[0];

    if (ArgCount <= 1)
    {
        printf("Usage: %s <test_name>                 - run the specified test\n", AppName);
        printf("       %s --list                      - list available tests\n", AppName);
        printf("       %s <create|delete|start|stop>  - manage the kmtest driver\n\n", AppName);
        Error = ListTests();
    }
    else
    {
        TestName = Arguments[1];
        if (!lstrcmpA(Arguments[1], "--list"))
            Error = ListTests();
        else
            Error = RunTest(TestName);
    }

cleanup:
    if (KmtestHandle)
        CloseHandle(KmtestHandle);

    if (Error)
        KmtServiceCleanup(TRUE);
    else
        Error = KmtServiceCleanup(FALSE);

    if (Error)
        OutputError(Error);

    if (Error)
        Status = EXIT_FAILURE;

    return Status;
}
