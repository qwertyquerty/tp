//
// Generated By: dol2asm
// Translation Unit: JASSeqCtrl
//

#include "JSystem/JAudio2/JASSeqCtrl.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JASTrack {
    /* 80292220 */ void checkNoteStop(u32) const;
};

struct JASSeqReader {
    /* 80296108 */ void init();
    /* 80296148 */ void init(void*);
};

struct JASSeqParser {
    /* 80293CAC */ ~JASSeqParser();
};

struct JASSeqCtrl {
    struct IntrType {};

    /* 802938BC */ JASSeqCtrl();
    /* 80293924 */ void init();
    /* 80293980 */ void start(void*, u32);
    /* 802939C4 */ void tickProc(JASTrack*);
    /* 80293ABC */ void interrupt(JASSeqCtrl::IntrType);
    /* 80293AE0 */ void setIntrMask(u32);
    /* 80293AF0 */ void clrIntrMask(u32);
    /* 80293B00 */ void retIntr();
    /* 80293B28 */ void findIntr();
    /* 80293B78 */ void checkIntr();
    /* 80293BE8 */ void timerProcess();

    static u8 sDefaultParser[4 + 4 /* padding */];
};

//
// Forward References:
//

extern "C" void __ct__10JASSeqCtrlFv();
extern "C" void init__10JASSeqCtrlFv();
extern "C" void start__10JASSeqCtrlFPvUl();
extern "C" void tickProc__10JASSeqCtrlFP8JASTrack();
extern "C" void interrupt__10JASSeqCtrlFQ210JASSeqCtrl8IntrType();
extern "C" void setIntrMask__10JASSeqCtrlFUl();
extern "C" void clrIntrMask__10JASSeqCtrlFUl();
extern "C" void retIntr__10JASSeqCtrlFv();
extern "C" void findIntr__10JASSeqCtrlFv();
extern "C" void checkIntr__10JASSeqCtrlFv();
extern "C" void timerProcess__10JASSeqCtrlFv();
extern "C" void __sinit_JASSeqCtrl_cpp();
extern "C" void __dt__12JASSeqParserFv();
extern "C" u8 sDefaultParser__10JASSeqCtrl[4 + 4 /* padding */];

//
// External References:
//

extern "C" void checkNoteStop__8JASTrackCFUl();
extern "C" void init__12JASSeqReaderFv();
extern "C" void init__12JASSeqReaderFPv();
extern "C" void __dl__FPv();
extern "C" void __register_global_object();
extern "C" extern void* __vt__12JASSeqParser[8];

//
// Declarations:
//

/* ############################################################################################## */
/* 80451238-80451240 000738 0004+04 3/3 0/0 0/0 .sbss            sDefaultParser__10JASSeqCtrl */
u8 JASSeqCtrl::sDefaultParser[4 + 4 /* padding */];

/* 802938BC-80293924 28E1FC 0068+00 0/0 1/1 0/0 .text            __ct__10JASSeqCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASSeqCtrl::JASSeqCtrl() {
    nofralloc
#include "asm/JSystem/JAudio2/JASSeqCtrl/__ct__10JASSeqCtrlFv.s"
}
#pragma pop

/* 80293924-80293980 28E264 005C+00 0/0 1/1 0/0 .text            init__10JASSeqCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASSeqCtrl::init() {
    nofralloc
#include "asm/JSystem/JAudio2/JASSeqCtrl/init__10JASSeqCtrlFv.s"
}
#pragma pop

/* 80293980-802939C4 28E2C0 0044+00 0/0 1/1 0/0 .text            start__10JASSeqCtrlFPvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASSeqCtrl::start(void* param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASSeqCtrl/start__10JASSeqCtrlFPvUl.s"
}
#pragma pop

/* 802939C4-80293ABC 28E304 00F8+00 0/0 1/1 0/0 .text            tickProc__10JASSeqCtrlFP8JASTrack
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASSeqCtrl::tickProc(JASTrack* param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASSeqCtrl/tickProc__10JASSeqCtrlFP8JASTrack.s"
}
#pragma pop

/* 80293ABC-80293AE0 28E3FC 0024+00 2/2 2/2 0/0 .text
 * interrupt__10JASSeqCtrlFQ210JASSeqCtrl8IntrType              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASSeqCtrl::interrupt(JASSeqCtrl::IntrType param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASSeqCtrl/interrupt__10JASSeqCtrlFQ210JASSeqCtrl8IntrType.s"
}
#pragma pop

/* 80293AE0-80293AF0 28E420 0010+00 0/0 1/1 0/0 .text            setIntrMask__10JASSeqCtrlFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASSeqCtrl::setIntrMask(u32 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASSeqCtrl/setIntrMask__10JASSeqCtrlFUl.s"
}
#pragma pop

/* 80293AF0-80293B00 28E430 0010+00 0/0 1/1 0/0 .text            clrIntrMask__10JASSeqCtrlFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASSeqCtrl::clrIntrMask(u32 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASSeqCtrl/clrIntrMask__10JASSeqCtrlFUl.s"
}
#pragma pop

/* 80293B00-80293B28 28E440 0028+00 0/0 1/1 0/0 .text            retIntr__10JASSeqCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASSeqCtrl::retIntr() {
    nofralloc
#include "asm/JSystem/JAudio2/JASSeqCtrl/retIntr__10JASSeqCtrlFv.s"
}
#pragma pop

/* 80293B28-80293B78 28E468 0050+00 1/1 0/0 0/0 .text            findIntr__10JASSeqCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASSeqCtrl::findIntr() {
    nofralloc
#include "asm/JSystem/JAudio2/JASSeqCtrl/findIntr__10JASSeqCtrlFv.s"
}
#pragma pop

/* 80293B78-80293BE8 28E4B8 0070+00 1/1 2/2 0/0 .text            checkIntr__10JASSeqCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASSeqCtrl::checkIntr() {
    nofralloc
#include "asm/JSystem/JAudio2/JASSeqCtrl/checkIntr__10JASSeqCtrlFv.s"
}
#pragma pop

/* 80293BE8-80293C6C 28E528 0084+00 1/1 0/0 0/0 .text            timerProcess__10JASSeqCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASSeqCtrl::timerProcess() {
    nofralloc
#include "asm/JSystem/JAudio2/JASSeqCtrl/timerProcess__10JASSeqCtrlFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80431B18-80431B28 05E838 000C+04 1/1 0/0 0/0 .bss             @433 */
static u8 lit_433[12 + 4 /* padding */];

/* 80293C6C-80293CAC 28E5AC 0040+00 0/0 1/0 0/0 .text            __sinit_JASSeqCtrl_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_JASSeqCtrl_cpp() {
    nofralloc
#include "asm/JSystem/JAudio2/JASSeqCtrl/__sinit_JASSeqCtrl_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80293C6C, __sinit_JASSeqCtrl_cpp);
#pragma pop

/* 80293CAC-80293CF4 28E5EC 0048+00 1/1 1/0 0/0 .text            __dt__12JASSeqParserFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASSeqParser::~JASSeqParser() {
    nofralloc
#include "asm/JSystem/JAudio2/JASSeqCtrl/__dt__12JASSeqParserFv.s"
}
#pragma pop
