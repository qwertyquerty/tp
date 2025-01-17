//
// Generated By: dol2asm
// Translation Unit: MetroTRK/Portable/nubevent
//

#include "TRK_MINNOW_DOLPHIN/MetroTRK/Portable/nubevent.h"
#include "TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msgbuf.h"
#include "TRK_MINNOW_DOLPHIN/MetroTRK/Portable/mutex_TRK.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

void TRKDestructEvent();
void TRKConstructEvent();
void TRKPostEvent();
void TRKGetNextEvent();
u8 TRKInitializeEventQueue();

//
// External References:
//

SECTION_INIT void TRK_memcpy();
void TRKReleaseBuffer();

//
// Declarations:
//

/* 8036CC18-8036CC3C 367558 0024+00 0/0 1/1 0/0 .text            TRKDestructEvent */
void TRKDestructEvent(TRKBuffer* buf) {
    TRKReleaseBuffer(buf->_08);
}

/* 8036CC3C-8036CC54 36757C 0018+00 0/0 5/5 0/0 .text            TRKConstructEvent */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKConstructEvent() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/nubevent/TRKConstructEvent.s"
}
#pragma pop

/* ############################################################################################## */
/* 8044D890-8044D8B8 07A5B0 0028+00 3/3 0/0 0/0 .bss             gTRKEventQueue */
static s32 gTRKEventQueue[10];

/* 8036CC54-8036CD34 367594 00E0+00 0/0 5/5 0/0 .text            TRKPostEvent */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKPostEvent() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/nubevent/TRKPostEvent.s"
}
#pragma pop

/* 8036CD34-8036CDE8 367674 00B4+00 0/0 1/1 0/0 .text            TRKGetNextEvent */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKGetNextEvent() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/nubevent/TRKGetNextEvent.s"
}
#pragma pop

/* 8036CDE8-8036CE40 367728 0058+00 0/0 1/1 0/0 .text            TRKInitializeEventQueue */
u8 TRKInitializeEventQueue() {
    TRKInitializeMutex(&gTRKEventQueue);
    TRKAcquireMutex(&gTRKEventQueue);
    gTRKEventQueue[1] = 0;
    gTRKEventQueue[2] = 0;
    gTRKEventQueue[9] = 0x100;
    TRKReleaseMutex();
    return 0;
}
