//
// Generated By: dol2asm
// Translation Unit: d_a_obj_lv3Water2
//

#include "rel/d/a/obj/d_a_obj_lv3Water2/d_a_obj_lv3Water2.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    static u8 now[48];
};

struct mDoHIO_entry_c {
    /* 80C5A430 */ ~mDoHIO_entry_c();
};

struct J3DMaterialTable {};

struct J3DAnmTextureSRTKey {};

struct mDoExt_btkAnm {
    /* 8000D63C */ void init(J3DMaterialTable*, J3DAnmTextureSRTKey*, int, int, f32, s16, s16);
    /* 8000D6D8 */ void entry(J3DMaterialTable*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct fopAc_ac_c {
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daLv3Water2_c {
    /* 80C5A478 */ void setBaseMtx();
    /* 80C5A4F8 */ void CreateHeap();
    /* 80C5A5E4 */ void create();
    /* 80C5A844 */ void Execute(f32 (**)[3][4]);
    /* 80C5AC10 */ void mode_proc_wait();
    /* 80C5ACB8 */ void mode_init_levelCtrl();
    /* 80C5ACE4 */ void mode_proc_levelCtrl();
    /* 80C5ADA4 */ void Draw();
    /* 80C5AEFC */ void Delete();
    /* 80C5AF3C */ void eventStart();
    /* 80C5B298 */ ~daLv3Water2_c();
};

struct daLv3Water2_HIO_c {
    /* 80C5A40C */ daLv3Water2_HIO_c();
    /* 80C5B14C */ ~daLv3Water2_HIO_c();
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dKy_tevstr_c {};

struct J3DModelData {
    /* 8032600C */ void simpleCalcMaterial(u16, f32 (*)[4]);
};

struct cXyz {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dPa_levelEcallBack {};

struct csXyz {};

struct _GXColor {};

struct dPa_control_c {
    /* 8004D4CC */ void set(u32, u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*,
                            cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*,
                            _GXColor const*, cXyz const*, f32);
};

struct dEvLib_callback_c {
    /* 8004886C */ void eventUpdate();
    /* 80048940 */ void orderEvent(int, int, int);
    /* 80C5B238 */ ~dEvLib_callback_c();
    /* 80C5B280 */ bool eventStart();
    /* 80C5B288 */ bool eventRun();
    /* 80C5B290 */ bool eventEnd();
};

struct dBgW {};

struct cBgS_PolyInfo {};

struct dBgS_MoveBgActor {
    /* 80078624 */ dBgS_MoveBgActor();
    /* 80078690 */ bool Create();
    /* 800786B0 */ bool IsDelete();
    /* 800786B8 */ bool ToFore();
    /* 800786C0 */ bool ToBack();
    /* 800787BC */ void MoveBGCreate(char const*, int,
                                     void (*)(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*,
                                              csXyz*, csXyz*),
                                     u32, f32 (*)[3][4]);
    /* 800788DC */ void MoveBGDelete();
    /* 80078950 */ void MoveBGExecute();
};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

struct J3DTexMtxInfo {
    /* 80325794 */ void setEffectMtx(f32 (*)[4]);
};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80C5A7FC */ ~J3DFrameCtrl();
};

//
// Forward References:
//

extern "C" void __ct__17daLv3Water2_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__13daLv3Water2_cFv();
extern "C" void CreateHeap__13daLv3Water2_cFv();
extern "C" void create__13daLv3Water2_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void Execute__13daLv3Water2_cFPPA3_A4_f();
extern "C" void mode_proc_wait__13daLv3Water2_cFv();
extern "C" void mode_init_levelCtrl__13daLv3Water2_cFv();
extern "C" void mode_proc_levelCtrl__13daLv3Water2_cFv();
extern "C" void Draw__13daLv3Water2_cFv();
extern "C" void Delete__13daLv3Water2_cFv();
extern "C" void eventStart__13daLv3Water2_cFv();
extern "C" static void daLv3Water2_Draw__FP13daLv3Water2_c();
extern "C" static void daLv3Water2_Execute__FP13daLv3Water2_c();
extern "C" static void daLv3Water2_Delete__FP13daLv3Water2_c();
extern "C" static void daLv3Water2_Create__FP10fopAc_ac_c();
extern "C" void __dt__17daLv3Water2_HIO_cFv();
extern "C" void __sinit_d_a_obj_lv3Water2_cpp();
extern "C" static void func_80C5B228();
extern "C" static void func_80C5B230();
extern "C" void __dt__17dEvLib_callback_cFv();
extern "C" bool eventStart__17dEvLib_callback_cFv();
extern "C" bool eventRun__17dEvLib_callback_cFv();
extern "C" bool eventEnd__17dEvLib_callback_cFv();
extern "C" void __dt__13daLv3Water2_cFv();
extern "C" extern char const* const d_a_obj_lv3Water2__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopMsgM_valueIncrease__FiiUc();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void eventUpdate__17dEvLib_callback_cFv();
extern "C" void orderEvent__17dEvLib_callback_cFiii();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool Create__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void setEffectMtx__13J3DTexMtxInfoFPA4_f();
extern "C" void simpleCalcMaterial__12J3DModelDataFUsPA4_f();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void C_MTXLightPerspective();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern u8 const j3dDefaultMtx[48];
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__16dBgS_MoveBgActor[10];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80C5B398-80C5B398 000034 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C5B398 = "Kr03wat04";
#pragma pop

/* 80C5B3A4-80C5B3B0 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C5B3B0-80C5B3C4 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};
#pragma pop

/* 80C5B3C4-80C5B3C8 -00001 0004+00 3/3 0/0 0/0 .data            l_resNameIdx */
SECTION_DATA static void* l_resNameIdx = (void*)&d_a_obj_lv3Water2__stringBase0;

/* 80C5B3C8-80C5B3D4 -00001 000C+00 0/1 0/0 0/0 .data            @3767 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3767[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_proc_wait__13daLv3Water2_cFv,
};
#pragma pop

/* 80C5B3D4-80C5B3E0 -00001 000C+00 0/1 0/0 0/0 .data            @3768 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3768[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_proc_levelCtrl__13daLv3Water2_cFv,
};
#pragma pop

/* 80C5B3E0-80C5B3F8 00003C 0018+00 1/2 0/0 0/0 .data            l_mode_func */
SECTION_DATA static u8 l_mode_func[24] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C5B3F8-80C5B418 -00001 0020+00 1/0 0/0 0/0 .data            l_daLv3Water2_Method */
SECTION_DATA static void* l_daLv3Water2_Method[8] = {
    (void*)daLv3Water2_Create__FP10fopAc_ac_c,
    (void*)daLv3Water2_Delete__FP13daLv3Water2_c,
    (void*)daLv3Water2_Execute__FP13daLv3Water2_c,
    (void*)NULL,
    (void*)daLv3Water2_Draw__FP13daLv3Water2_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C5B418-80C5B448 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Lv3Water2 */
SECTION_DATA extern void* g_profile_Obj_Lv3Water2[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00D60000, (void*)&g_fpcLf_Method,
    (void*)0x00000610, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02690000, (void*)&l_daLv3Water2_Method,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 80C5B448-80C5B454 0000A4 000C+00 3/3 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80C5B454-80C5B46C 0000B0 0018+00 3/3 0/0 0/0 .data            __vt__17dEvLib_callback_c */
SECTION_DATA extern void* __vt__17dEvLib_callback_c[6] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17dEvLib_callback_cFv,
    (void*)eventStart__17dEvLib_callback_cFv,
    (void*)eventRun__17dEvLib_callback_cFv,
    (void*)eventEnd__17dEvLib_callback_cFv,
};

/* 80C5B46C-80C5B4B4 0000C8 0048+00 2/2 0/0 0/0 .data            __vt__13daLv3Water2_c */
SECTION_DATA extern void* __vt__13daLv3Water2_c[18] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__13daLv3Water2_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__13daLv3Water2_cFPPA3_A4_f,
    (void*)Draw__13daLv3Water2_cFv,
    (void*)Delete__13daLv3Water2_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C5B230,
    (void*)func_80C5B228,
    (void*)eventRun__17dEvLib_callback_cFv,
    (void*)eventEnd__17dEvLib_callback_cFv,
    (void*)__dt__13daLv3Water2_cFv,
    (void*)eventStart__13daLv3Water2_cFv,
};

/* 80C5B4B4-80C5B4C0 000110 000C+00 2/2 0/0 0/0 .data            __vt__17daLv3Water2_HIO_c */
SECTION_DATA extern void* __vt__17daLv3Water2_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17daLv3Water2_HIO_cFv,
};

/* 80C5B4C0-80C5B4CC 00011C 000C+00 3/3 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80C5A40C-80C5A430 0000EC 0024+00 1/1 0/0 0/0 .text            __ct__17daLv3Water2_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daLv3Water2_HIO_c::daLv3Water2_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3Water2/d_a_obj_lv3Water2/__ct__17daLv3Water2_HIO_cFv.s"
}
#pragma pop

/* 80C5A430-80C5A478 000110 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3Water2/d_a_obj_lv3Water2/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 80C5A478-80C5A4F8 000158 0080+00 2/2 0/0 0/0 .text            setBaseMtx__13daLv3Water2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv3Water2_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3Water2/d_a_obj_lv3Water2/setBaseMtx__13daLv3Water2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C5B364-80C5B368 000000 0004+00 3/3 0/0 0/0 .rodata          l_bmdIdx */
SECTION_RODATA static u32 const l_bmdIdx = 0x00000005;
COMPILER_STRIP_GATE(0x80C5B364, &l_bmdIdx);

/* 80C5B368-80C5B36C 000004 0004+00 1/1 0/0 0/0 .rodata          l_dzbIdx */
SECTION_RODATA static u32 const l_dzbIdx = 0x0000000D;
COMPILER_STRIP_GATE(0x80C5B368, &l_dzbIdx);

/* 80C5B36C-80C5B370 000008 0004+00 0/1 0/0 0/0 .rodata          l_btkIdx */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const l_btkIdx = 0x00000009;
COMPILER_STRIP_GATE(0x80C5B36C, &l_btkIdx);
#pragma pop

/* 80C5B370-80C5B374 00000C 0004+00 2/5 0/0 0/0 .rodata          @3682 */
SECTION_RODATA static f32 const lit_3682 = 1.0f;
COMPILER_STRIP_GATE(0x80C5B370, &lit_3682);

/* 80C5A4F8-80C5A5E4 0001D8 00EC+00 1/0 0/0 0/0 .text            CreateHeap__13daLv3Water2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv3Water2_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3Water2/d_a_obj_lv3Water2/CreateHeap__13daLv3Water2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C5B374-80C5B37C 000010 0004+04 1/2 0/0 0/0 .rodata          @3747 */
SECTION_RODATA static f32 const lit_3747[1 + 1 /* padding */] = {
    5.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80C5B374, &lit_3747);

/* 80C5B37C-80C5B384 000018 0008+00 1/2 0/0 0/0 .rodata          @3749 */
SECTION_RODATA static u8 const lit_3749[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C5B37C, &lit_3749);

/* 80C5A5E4-80C5A7FC 0002C4 0218+00 1/1 0/0 0/0 .text            create__13daLv3Water2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv3Water2_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3Water2/d_a_obj_lv3Water2/create__13daLv3Water2_cFv.s"
}
#pragma pop

/* 80C5A7FC-80C5A844 0004DC 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3Water2/d_a_obj_lv3Water2/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80C5A844-80C5AC10 000524 03CC+00 1/0 0/0 0/0 .text            Execute__13daLv3Water2_cFPPA3_A4_f
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv3Water2_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3Water2/d_a_obj_lv3Water2/Execute__13daLv3Water2_cFPPA3_A4_f.s"
}
#pragma pop

/* 80C5AC10-80C5ACB8 0008F0 00A8+00 1/0 0/0 0/0 .text            mode_proc_wait__13daLv3Water2_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv3Water2_c::mode_proc_wait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3Water2/d_a_obj_lv3Water2/mode_proc_wait__13daLv3Water2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C5B4D8-80C5B4E4 000008 000C+00 1/1 0/0 0/0 .bss             @3637 */
static u8 lit_3637[12];

/* 80C5B4E4-80C5B4EC 000014 0008+00 2/2 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[8];

/* 80C5ACB8-80C5ACE4 000998 002C+00 1/1 0/0 0/0 .text mode_init_levelCtrl__13daLv3Water2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv3Water2_c::mode_init_levelCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3Water2/d_a_obj_lv3Water2/mode_init_levelCtrl__13daLv3Water2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C5B384-80C5B38C 000020 0008+00 1/1 0/0 0/0 .rodata          @3899 */
SECTION_RODATA static u8 const lit_3899[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C5B384, &lit_3899);

/* 80C5ACE4-80C5ADA4 0009C4 00C0+00 1/0 0/0 0/0 .text mode_proc_levelCtrl__13daLv3Water2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv3Water2_c::mode_proc_levelCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3Water2/d_a_obj_lv3Water2/mode_proc_levelCtrl__13daLv3Water2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C5B38C-80C5B390 000028 0004+00 0/1 0/0 0/0 .rodata          @3951 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3951 = -1.0f / 100.0f;
COMPILER_STRIP_GATE(0x80C5B38C, &lit_3951);
#pragma pop

/* 80C5B390-80C5B394 00002C 0004+00 0/1 0/0 0/0 .rodata          @3952 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3952[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80C5B390, &lit_3952);
#pragma pop

/* 80C5ADA4-80C5AEFC 000A84 0158+00 1/0 0/0 0/0 .text            Draw__13daLv3Water2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv3Water2_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3Water2/d_a_obj_lv3Water2/Draw__13daLv3Water2_cFv.s"
}
#pragma pop

/* 80C5AEFC-80C5AF3C 000BDC 0040+00 1/0 0/0 0/0 .text            Delete__13daLv3Water2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv3Water2_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3Water2/d_a_obj_lv3Water2/Delete__13daLv3Water2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C5B394-80C5B398 000030 0004+00 0/1 0/0 0/0 .rodata          @3983 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3983 = -1.0f;
COMPILER_STRIP_GATE(0x80C5B394, &lit_3983);
#pragma pop

/* 80C5AF3C-80C5B0C0 000C1C 0184+00 2/1 0/0 0/0 .text            eventStart__13daLv3Water2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv3Water2_c::eventStart() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3Water2/d_a_obj_lv3Water2/eventStart__13daLv3Water2_cFv.s"
}
#pragma pop

/* 80C5B0C0-80C5B0EC 000DA0 002C+00 1/0 0/0 0/0 .text            daLv3Water2_Draw__FP13daLv3Water2_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daLv3Water2_Draw(daLv3Water2_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3Water2/d_a_obj_lv3Water2/daLv3Water2_Draw__FP13daLv3Water2_c.s"
}
#pragma pop

/* 80C5B0EC-80C5B10C 000DCC 0020+00 1/0 0/0 0/0 .text daLv3Water2_Execute__FP13daLv3Water2_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daLv3Water2_Execute(daLv3Water2_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3Water2/d_a_obj_lv3Water2/daLv3Water2_Execute__FP13daLv3Water2_c.s"
}
#pragma pop

/* 80C5B10C-80C5B12C 000DEC 0020+00 1/0 0/0 0/0 .text daLv3Water2_Delete__FP13daLv3Water2_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daLv3Water2_Delete(daLv3Water2_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3Water2/d_a_obj_lv3Water2/daLv3Water2_Delete__FP13daLv3Water2_c.s"
}
#pragma pop

/* 80C5B12C-80C5B14C 000E0C 0020+00 1/0 0/0 0/0 .text            daLv3Water2_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daLv3Water2_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3Water2/d_a_obj_lv3Water2/daLv3Water2_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C5B14C-80C5B1A8 000E2C 005C+00 2/1 0/0 0/0 .text            __dt__17daLv3Water2_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daLv3Water2_HIO_c::~daLv3Water2_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3Water2/d_a_obj_lv3Water2/__dt__17daLv3Water2_HIO_cFv.s"
}
#pragma pop

/* 80C5B1A8-80C5B228 000E88 0080+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_lv3Water2_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_lv3Water2_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3Water2/d_a_obj_lv3Water2/__sinit_d_a_obj_lv3Water2_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80C5B1A8, __sinit_d_a_obj_lv3Water2_cpp);
#pragma pop

/* 80C5B228-80C5B230 000F08 0008+00 1/0 0/0 0/0 .text            @1448@eventStart__13daLv3Water2_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80C5B228() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3Water2/d_a_obj_lv3Water2/func_80C5B228.s"
}
#pragma pop

/* 80C5B230-80C5B238 000F10 0008+00 1/0 0/0 0/0 .text            @1448@__dt__13daLv3Water2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80C5B230() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3Water2/d_a_obj_lv3Water2/func_80C5B230.s"
}
#pragma pop

/* 80C5B238-80C5B280 000F18 0048+00 1/0 0/0 0/0 .text            __dt__17dEvLib_callback_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dEvLib_callback_c::~dEvLib_callback_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3Water2/d_a_obj_lv3Water2/__dt__17dEvLib_callback_cFv.s"
}
#pragma pop

/* 80C5B280-80C5B288 000F60 0008+00 1/0 0/0 0/0 .text            eventStart__17dEvLib_callback_cFv
 */
bool dEvLib_callback_c::eventStart() {
    return true;
}

/* 80C5B288-80C5B290 000F68 0008+00 2/0 0/0 0/0 .text            eventRun__17dEvLib_callback_cFv */
bool dEvLib_callback_c::eventRun() {
    return true;
}

/* 80C5B290-80C5B298 000F70 0008+00 2/0 0/0 0/0 .text            eventEnd__17dEvLib_callback_cFv */
bool dEvLib_callback_c::eventEnd() {
    return true;
}

/* 80C5B298-80C5B350 000F78 00B8+00 2/1 0/0 0/0 .text            __dt__13daLv3Water2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daLv3Water2_c::~daLv3Water2_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3Water2/d_a_obj_lv3Water2/__dt__13daLv3Water2_cFv.s"
}
#pragma pop

/* 80C5B398-80C5B398 000034 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
