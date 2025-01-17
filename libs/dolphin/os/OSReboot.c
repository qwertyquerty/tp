//
// Generated By: dol2asm
// Translation Unit: OSReboot
//

#include "dolphin/os/OSReboot.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// External References:
//

void OSSetArenaHi();
void OSSetArenaLo();
void OSSetCurrentContext();
void OSClearContext();
void __OSBootDol();
void OSDisableInterrupts();

//
// Declarations:
//

/* 8033F5D0-8033F640 339F10 0070+00 0/0 1/1 0/0 .text            __OSReboot */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __OSReboot(u32 param_0, u32 param_1) {
    nofralloc
#include "asm/dolphin/os/OSReboot/__OSReboot.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451688-8045168C 000B88 0004+00 2/2 0/0 0/0 .sbss            SaveStart */
static void* SaveStart;

/* 8045168C-80451690 000B8C 0004+00 2/2 0/0 0/0 .sbss            SaveEnd */
static void* SaveEnd;

/* 8033F640-8033F64C 339F80 000C+00 0/0 1/1 0/0 .text            OSSetSaveRegion */
void OSSetSaveRegion(void* start, void* end) {
    SaveStart = start;
    SaveEnd = end;
}

/* 8033F64C-8033F660 339F8C 0014+00 0/0 1/1 0/0 .text            OSGetSaveRegion */
void OSGetSaveRegion(void** start, void** end) {
    *start = SaveStart;
    *end = SaveEnd;
}
