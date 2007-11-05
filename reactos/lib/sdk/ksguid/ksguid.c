/*

	ksguid.c - DirectX GUIDs

	Written by Magnus Olsen

	This library is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

*/

#define INITGUID
#include <basetyps.h>
#include <guiddef.h>

DEFINE_GUID(KSNODETYPE_PHONE_LINE,                      0xDFF21EE1, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_ECHO_CANCELING_SPEAKERPHONE,     0xDFF21DE5, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_ECHO_SUPPRESSING_SPEAKERPHONE,   0xDFF21DE4, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_SPEAKERPHONE_NO_ECHO_REDUCTION,  0xDFF21DE3, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_HEADSET,                         0xDFF21DE2, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_HANDSET,                         0xDFF21DE1, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_LOW_FREQUENCY_EFFECTS_SPEAKER,   0xDFF21CE7, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_COMMUNICATION_SPEAKER,           0xDFF21CE6, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_ROOM_SPEAKER,                    0xDFF21CE5, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_DESKTOP_SPEAKER,                 0xDFF21CE4, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_HEAD_MOUNTED_DISPLAY_AUDIO,      0xDFF21CE3, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_HEADPHONES,                      0xDFF21CE2, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_SPEAKER,                         0xDFF21CE1, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSCATEGORY_MICROPHONE_ARRAY_PROCESSOR,      0x830A44F2, 0xA32D, 0x476B, 0xBE, 0x97, 0x42, 0x84, 0x56, 0x73, 0xB3, 0x5A);
DEFINE_GUID(KSNODETYPE_PROCESSING_MICROPHONE_ARRAY,     0xDFF21BE6, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_MICROPHONE_ARRAY,                0xDFF21BE5, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_OMNI_DIRECTIONAL_MICROPHONE,     0xDFF21BE4, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_PERSONAL_MICROPHONE,             0xDFF21BE3, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_DESKTOP_MICROPHONE,              0xDFF21BE2, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_MICROPHONE,                      0xDFF21BE1, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSCOMPONENTID_USBAUDIO,                     0x8F1275F0, 0x26E9, 0x4264, 0xBA, 0x4D, 0x39, 0xFF, 0xF0, 0x1D, 0x94, 0xAA);
DEFINE_GUID(KSINTERFACESETID_Media,                     0x3A13EB40, 0x30A7, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSMEDIUMSETID_VPBus,                        0xA18C15EC, 0xCE43, 0x11D0, 0xAB, 0xE7, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSMEDIUMSETID_MidiBus,                      0x05908040, 0x3246, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSPROPSETID_Service,                        0x3C0D501B, 0x140B, 0x11D1, 0xB4, 0x0F, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNAME_Server,                              0x3C0D501A, 0x140B, 0x11D1, 0xB4, 0x0F, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(GUID_BUS_INTERFACE_MEDIUMS,                 0x4EC35C3E, 0x201B, 0x11D2, 0x87, 0x45, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSDEGRADESETID_Standard,                    0x9F564180, 0x704C, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSEVENTSETID_Connection,                    0x7F4BCBE0, 0x9EA5, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSEVENTSETID_Clock,                         0x364D8E20, 0x62C7, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSPROPSETID_Clock,                          0xDF12A4C0, 0xAC17, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSPROPSETID_Stream,                         0x65AABA60, 0x98AE, 0x11CF, 0xA1, 0x0D, 0x00, 0x20, 0xAF, 0xD1, 0x56, 0xE4);
DEFINE_GUID(KSPROPSETID_StreamInterface,                0x1FDD8EE1, 0x9CD3, 0x11D0, 0x82, 0xAA, 0x00, 0x00, 0xF8, 0x22, 0xFE, 0x8A);
DEFINE_GUID(KSPROPSETID_StreamAllocator,                0xCF6E4342, 0xEC87, 0x11CF, 0xA1, 0x30, 0x00, 0x20, 0xAF, 0xD1, 0x56, 0xE4);
DEFINE_GUID(KSMETHODSETID_StreamAllocator,              0xCF6E4341, 0xEC87, 0x11CF, 0xA1, 0x30, 0x00, 0x20, 0xAF, 0xD1, 0x56, 0xE4);
DEFINE_GUID(KSEVENTSETID_StreamAllocator,               0x75D95571, 0x073C, 0x11D0, 0xA1, 0x61, 0x00, 0x20, 0xAF, 0xD1, 0x56, 0xE4);
DEFINE_GUID(KSMEMORY_TYPE_DEVICE_UNKNOWN,               0x091BB639, 0x603F, 0x11D1, 0xB0, 0x67, 0x00, 0xA0, 0xC9, 0x06, 0x28, 0x02);
DEFINE_GUID(KSMEMORY_TYPE_KERNEL_NONPAGED,              0x4A6D5FC4, 0x7895, 0x11D1, 0xB0, 0x69, 0x00, 0xA0, 0xC9, 0x06, 0x28, 0x02);
DEFINE_GUID(KSMEMORY_TYPE_KERNEL_PAGED,                 0xD833F8F8, 0x7894, 0x11D1, 0xB0, 0x69, 0x00, 0xA0, 0xC9, 0x06, 0x28, 0x02);
DEFINE_GUID(KSMEMORY_TYPE_USER,                         0x8CB0FC28, 0x7893, 0x11D1, 0xB0, 0x69, 0x00, 0xA0, 0xC9, 0x06, 0x28, 0x02);
DEFINE_GUID(KSMEMORY_TYPE_SYSTEM,                       0x091BB638, 0x603F, 0x11D1, 0xB0, 0x67, 0x00, 0xA0, 0xC9, 0x06, 0x28, 0x02);
DEFINE_GUID(KSPROPSETID_Connection,                     0x1D58C920, 0xAC9B, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSPROPSETID_Quality,                        0xD16AD380, 0xAC1A, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSDATAFORMAT_SPECIFIER_NONE,                0x0F6417D6, 0xC318, 0x11D0, 0xA4, 0x3F, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSDATAFORMAT_SPECIFIER_FILEHANDLE,          0x65E8773C, 0x8F56, 0x11D0, 0xA3, 0xB9, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSDATAFORMAT_SPECIFIER_FILENAME,            0xAA797B40, 0xE974, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSDATAFORMAT_SUBTYPE_NONE,                  0xE436EB8E, 0x524F, 0x11CE, 0x9F, 0x53, 0x00, 0x20, 0xAF, 0x0B, 0xA7, 0x70);
DEFINE_GUID(KSDATAFORMAT_TYPE_STREAM,                   0xE436EB83, 0x524F, 0x11CE, 0x9F, 0x53, 0x00, 0x20, 0xAF, 0x0B, 0xA7, 0x70);
DEFINE_GUID(KSNAME_TopologyNode,                        0x0621061A, 0xEE75, 0x11D0, 0xB9, 0x15, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNAME_Allocator,                           0x642F5D00, 0x4791, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSNAME_Clock,                               0x53172480, 0x4791, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSNAME_Pin,                                 0x146F1A80, 0x4791, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSNAME_Filter,                              0x9B365890, 0x165F, 0x11D0, 0xA1, 0x95, 0x00, 0x20, 0xAF, 0xD1, 0x56, 0xE4);
DEFINE_GUID(KSPROPSETID_Pin,                            0x8C134960, 0x51AD, 0x11CF, 0x87, 0x8A, 0x94, 0xF8, 0x01, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSMEDIUMSETID_Standard,                     0x4747B320, 0x62CE, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSINTERFACESETID_FileIo,                    0x8C6F932C, 0xE771, 0x11D0, 0xB8, 0xFF, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSINTERFACESETID_Standard,                  0x1A8766A0, 0x62CE, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSTIME_FORMAT_MEDIA_TIME,                   0x7B785574, 0x8C82, 0x11CF, 0xBC, 0x0C, 0x00, 0xAA, 0x00, 0xAC, 0x74, 0xF6);
DEFINE_GUID(KSTIME_FORMAT_FIELD,                        0x7B785573, 0x8C82, 0x11CF, 0xBC, 0x0C, 0x00, 0xAA, 0x00, 0xAC, 0x74, 0xF6);
DEFINE_GUID(KSTIME_FORMAT_SAMPLE,                       0x7B785572, 0x8C82, 0x11CF, 0xBC, 0x0C, 0x00, 0xAA, 0x00, 0xAC, 0x74, 0xF6);
DEFINE_GUID(KSTIME_FORMAT_BYTE,                         0x7B785571, 0x8C82, 0x11CF, 0xBC, 0x0C, 0x00, 0xAA, 0x00, 0xAC, 0x74, 0xF6);
DEFINE_GUID(KSTIME_FORMAT_FRAME,                        0x7B785570, 0x8C82, 0x11CF, 0xBC, 0x0C, 0x00, 0xAA, 0x00, 0xAC, 0x74, 0xF6);
DEFINE_GUID(KSCATEGORY_QUALITY,                         0x97EBAACB, 0x95BD, 0x11D0, 0xA3, 0xEA, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSCATEGORY_PROXY,                           0x97EBAACA, 0x95BD, 0x11D0, 0xA3, 0xEA, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSCATEGORY_CLOCK,                           0x53172480, 0x4791, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSCATEGORY_FILESYSTEM,                      0x760FED5E, 0x9357, 0x11D0, 0xA3, 0xCC, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSCATEGORY_MEDIUMTRANSFORM,                 0xCF1DDA2E, 0x9743, 0x11D0, 0xA3, 0xEE, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSCATEGORY_INTERFACETRANSFORM,              0xCF1DDA2D, 0x9743, 0x11D0, 0xA3, 0xEE, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSCATEGORY_COMMUNICATIONSTRANSFORM,         0xCF1DDA2C, 0x9743, 0x11D0, 0xA3, 0xEE, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSCATEGORY_DATATRANSFORM,                   0x2EB07EA0, 0x7E70, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSCATEGORY_DATADECOMPRESSOR,                0x2721AE20, 0x7E70, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSCATEGORY_DATACOMPRESSOR,                  0x1E84C900, 0x7E70, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSCATEGORY_SPLITTER,                        0x0A4252A0, 0x7E70, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSCATEGORY_MIXER,                           0xAD809C00, 0x7B88, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSCATEGORY_RENDER,                          0x65E8773E, 0x8F56, 0x11D0, 0xA3, 0xB9, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSCATEGORY_CAPTURE,                         0x65E8773D, 0x8F56, 0x11D0, 0xA3, 0xB9, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSCATEGORY_BRIDGE,                          0x085AFF00, 0x62CE, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSPROPSETID_GM,                             0xAF627536, 0xE719, 0x11D2, 0x8A, 0x1D, 0x00, 0x60, 0x97, 0xD2, 0xDF, 0x5D);
DEFINE_GUID(KSPROPSETID_Topology,                       0x720D4AC0, 0x7533, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSPROPSETID_MediaSeeking,                   0xEE904F0C, 0xD09B, 0x11D0, 0xAB, 0xE9, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSMETHODSETID_StreamIo,                     0x65D003CA, 0x1523, 0x11D2, 0xB2, 0x7A, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSPROPSETID_General,                        0x1464EDA5, 0x6A8F, 0x11D1, 0x9A, 0xA7, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSPROPTYPESETID_General,                    0x97E99BA0, 0xBDEA, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(GUID_NULL,                                  0x00000000, 0x0000, 0x0000, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);
DEFINE_GUID(BUSID_SoftwareDeviceEnumerator,             0x4747B320, 0x62CE, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);


