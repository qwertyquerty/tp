//
// Generated By: dol2asm
// Translation Unit: MetroTRK/Export/mslsupp
//

#include "TRK_MINNOW_DOLPHIN/MetroTRK/Export/mslsupp.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

void __TRK_write_console();
void __read_console();

//
// External References:
//

void GetTRKConnected();
void TRKAccessFile();
void GetUseSerialIO();

//
// Declarations:
//

/* 8037219C-80372258 36CADC 00BC+00 0/0 1/1 0/0 .text            __TRK_write_console */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __TRK_write_console() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Export/mslsupp/__TRK_write_console.s"
}
#pragma pop

/* 80372258-80372314 36CB98 00BC+00 0/0 1/0 0/0 .text            __read_console */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __read_console() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Export/mslsupp/__read_console.s"
}
#pragma pop
