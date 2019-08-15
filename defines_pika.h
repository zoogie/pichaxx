#define ROP_POPPC 0x00111810
#define POP_R1PC 0x00215444
#define POP_R3PC 0x00118644
#define POP_R2R6PC 0x0020eeb0
#define POP_R4LR_BXR1 0x001148c4
#define POP_R4R8LR_BXR2 0x0015dbb0
#define POP_R4R5R6PC 0x0010d05c
#define POP_R4FPPC 0x0010e2d8
#define POP_R4R8PC 0x0010def8

#define ROP_STR_R1TOR0 0x0011704c
#define ROP_STR_R0TOR1 0x0010daa8
#define ROP_LDR_R0FROMR0 0x0012cb18
#define ROP_ADDR0_TO_R1 0x00122c0c

#define MEMCPY 0x00214a70

#define svcSleepThread 0x00206cf4

#define GSPGPU_FlushDataCache 0x001195ac
#define GSPGPU_InvalidateDataCache (0x001203d8 + 4)
#define GSPGPU_SERVHANDLEADR 0x00323e28

#define IFile_Read 0x002116f8
//      FAIL:				#define IFile_Write 
//      FAIL:				#define ROP_MOV_R3_R6_BLX_ADDRR5 
//      FAIL:				#define ROP_POPR3_ADDSPR3_POPPC 
#define POP_R0PC 0x002158a8
//      FAIL:				#define ROP_LDRR1R1_STRR1R0 
//      FAIL:				#define POP_R5R6PC 
#define ROP_CMPR0R1_ALT0 0x0027d7cc
#define MEMSET32_OTHER 0x002159ec
#define svcControlMemory 0x002135dc
#define ROP_INITOBJARRAY 0x00211d11
#define svcCreateThread 0x0011028c
#define svcConnectToPort 0x00117570
#define svcGetProcessId 0x0020a640
//      FAIL:				#define THROWFATALERR_IPC 
#define SRV_GETSERVICEHANDLE 0x002100cc
#define CFGIPC_SecureInfoGetRegion 0x0010d0d4
#define ROP_COND_THROWFATALERR 0x00211b34
#define GXLOW_CMD4 0x001200b4
#define GSP_SHAREDMEM_SETUPFRAMEBUF 0x0011fee0
#define GSPTHREAD_OBJECTADDR 0x00304c40
#define FS_MountSdmc 0x001ab00c
//      FAIL:				#define FS_MountSavedata 
#define IFile_Open 0x002117f0
#define IFile_Close 0x00211780
#define IFile_Seek 0x002097e0
