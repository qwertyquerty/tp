//
// Generated By: dol2asm
// Translation Unit: d_a_tag_firewall
//

#include "rel/d/a/tag/d_a_tag_firewall/d_a_tag_firewall.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daTag_FWall_c {
    /* 80D58940 */ void execute();
    /* 80D59078 */ bool _delete();
    /* 80D590A8 */ void create();
};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
    /* 80D5901C */ ~cXyz();
    /* 80D594B0 */ cXyz();
};

struct dVibration_c {
    /* 8006FA24 */ void StartShock(int, int, cXyz);
};

struct dPa_levelEcallBack {};

struct dKy_tevstr_c {};

struct csXyz {};

struct _GXColor {};

struct dPa_control_c {
    struct level_c {
        /* 8004B918 */ void getEmitter(u32);
    };

    /* 8004D4CC */ void set(u32, u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*,
                            cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*,
                            _GXColor const*, cXyz const*, f32);
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcSph {};

struct dCcD_Sph {
    /* 80084A34 */ void Set(dCcD_SrcSph const&);
    /* 80D592D0 */ ~dCcD_Sph();
    /* 80D5939C */ dCcD_Sph();
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
};

struct dCamera_c {
    /* 80181E64 */ void Eye();
};

struct cM3dGSph {
    /* 8026F648 */ void SetC(cXyz const&);
    /* 8026F708 */ void SetR(f32);
    /* 80D59420 */ ~cM3dGSph();
};

struct cM3dGAab {
    /* 80D59468 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

struct Tag_FWall_n {
    static u8 cc_sph_src[64];
    static u8 game_over_eff_name[8];
};

//
// Forward References:
//

extern "C" static bool daTag_FWall_Draw__FP13daTag_FWall_c();
extern "C" void execute__13daTag_FWall_cFv();
extern "C" void __dt__4cXyzFv();
extern "C" static void daTag_FWall_Execute__FP13daTag_FWall_c();
extern "C" bool _delete__13daTag_FWall_cFv();
extern "C" static void daTag_FWall_IsDelete__FP13daTag_FWall_c();
extern "C" static bool daTag_FWall_Delete__FP13daTag_FWall_c();
extern "C" void create__13daTag_FWall_cFv();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __ct__4cXyzFv();
extern "C" static void daTag_FWall_Create__FP13daTag_FWall_c();
extern "C" u8 cc_sph_src__11Tag_FWall_n[64];
extern "C" u8 game_over_eff_name__11Tag_FWall_n[8];

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_fastCreate__FsUlPC4cXyziPC5csXyzPC4cXyzScPFPv_iPv();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void dCam_getBody__Fv();
extern "C" void Eye__9dCamera_cFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_chaseUC__FPUcUcUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSVECSquareMag();
extern "C" void __construct_array();
extern "C" void _savegpr_16();
extern "C" void _restgpr_16();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u32 __float_nan;
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* 80D58938-80D58940 000078 0008+00 1/0 0/0 0/0 .text            daTag_FWall_Draw__FP13daTag_FWall_c
 */
static bool daTag_FWall_Draw(daTag_FWall_c* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80D594DC-80D594E0 000000 0004+00 1/1 0/0 0/0 .rodata          @3983 */
SECTION_RODATA static u8 const lit_3983[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80D594DC, &lit_3983);

/* 80D594E0-80D594E4 000004 0004+00 0/1 0/0 0/0 .rodata          @3984 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3984 = 1.0f;
COMPILER_STRIP_GATE(0x80D594E0, &lit_3984);
#pragma pop

/* 80D594E4-80D594E8 000008 0004+00 0/1 0/0 0/0 .rodata          @3985 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3985 = -1.0f;
COMPILER_STRIP_GATE(0x80D594E4, &lit_3985);
#pragma pop

/* 80D594E8-80D594EC 00000C 0004+00 0/1 0/0 0/0 .rodata          @3986 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3986 = 90.0f;
COMPILER_STRIP_GATE(0x80D594E8, &lit_3986);
#pragma pop

/* 80D594EC-80D594F4 000010 0008+00 0/1 0/0 0/0 .rodata          @3987 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3987[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D594EC, &lit_3987);
#pragma pop

/* 80D594F4-80D594FC 000018 0008+00 0/1 0/0 0/0 .rodata          @3988 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3988[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D594F4, &lit_3988);
#pragma pop

/* 80D594FC-80D59504 000020 0008+00 0/1 0/0 0/0 .rodata          @3989 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3989[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D594FC, &lit_3989);
#pragma pop

/* 80D59504-80D59508 000028 0004+00 0/1 0/0 0/0 .rodata          @3990 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3990 = 250.0f;
COMPILER_STRIP_GATE(0x80D59504, &lit_3990);
#pragma pop

/* 80D59508-80D5950C 00002C 0004+00 0/1 0/0 0/0 .rodata          @3991 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3991 = 1000.0f;
COMPILER_STRIP_GATE(0x80D59508, &lit_3991);
#pragma pop

/* 80D5950C-80D5954C 000000 0040+00 1/1 0/0 0/0 .data            cc_sph_src__11Tag_FWall_n */
SECTION_DATA u8 Tag_FWall_n::cc_sph_src[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};

/* 80D5954C-80D59554 000040 0008+00 1/1 0/0 0/0 .data            game_over_eff_name__11Tag_FWall_n
 */
SECTION_DATA u8 Tag_FWall_n::game_over_eff_name[8] = {
    0x84, 0xCC, 0x84, 0xCD, 0x84, 0xCE, 0x84, 0xCF,
};

/* 80D595C0-80D595C4 000000 0004+00 1/1 0/0 0/0 .bss             fire_leader */
static u8 fire_leader[4];

/* 80D595C4-80D595C8 000004 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_80D595C4[4];

/* 80D58940-80D5901C 000080 06DC+00 1/1 0/0 0/0 .text            execute__13daTag_FWall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_FWall_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_firewall/d_a_tag_firewall/execute__13daTag_FWall_cFv.s"
}
#pragma pop

/* 80D5901C-80D59058 00075C 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_firewall/d_a_tag_firewall/__dt__4cXyzFv.s"
}
#pragma pop

/* 80D59058-80D59078 000798 0020+00 1/0 0/0 0/0 .text daTag_FWall_Execute__FP13daTag_FWall_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_FWall_Execute(daTag_FWall_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_firewall/d_a_tag_firewall/daTag_FWall_Execute__FP13daTag_FWall_c.s"
}
#pragma pop

/* 80D59078-80D59080 0007B8 0008+00 1/1 0/0 0/0 .text            _delete__13daTag_FWall_cFv */
bool daTag_FWall_c::_delete() {
    return true;
}

/* 80D59080-80D590A0 0007C0 0020+00 1/0 0/0 0/0 .text daTag_FWall_IsDelete__FP13daTag_FWall_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_FWall_IsDelete(daTag_FWall_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_firewall/d_a_tag_firewall/daTag_FWall_IsDelete__FP13daTag_FWall_c.s"
}
#pragma pop

/* 80D590A0-80D590A8 0007E0 0008+00 1/0 0/0 0/0 .text daTag_FWall_Delete__FP13daTag_FWall_c */
static bool daTag_FWall_Delete(daTag_FWall_c* param_0) {
    return true;
}

/* 80D590A8-80D592D0 0007E8 0228+00 1/1 0/0 0/0 .text            create__13daTag_FWall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_FWall_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_firewall/d_a_tag_firewall/create__13daTag_FWall_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D59554-80D59574 -00001 0020+00 1/0 0/0 0/0 .data            l_daTag_FWall_Method */
SECTION_DATA static void* l_daTag_FWall_Method[8] = {
    (void*)daTag_FWall_Create__FP13daTag_FWall_c,
    (void*)daTag_FWall_Delete__FP13daTag_FWall_c,
    (void*)daTag_FWall_Execute__FP13daTag_FWall_c,
    (void*)daTag_FWall_IsDelete__FP13daTag_FWall_c,
    (void*)daTag_FWall_Draw__FP13daTag_FWall_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D59574-80D595A4 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Tag_FWall */
SECTION_DATA extern void* g_profile_Tag_FWall[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01F70000, (void*)&g_fpcLf_Method,
    (void*)0x00002068, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00C50000, (void*)&l_daTag_FWall_Method,
    (void*)0x00060100, (void*)NULL,
};

/* 80D595A4-80D595B0 000098 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80D595B0-80D595BC 0000A4 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80D592D0-80D5939C 000A10 00CC+00 1/1 0/0 0/0 .text            __dt__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Sph::~dCcD_Sph() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_firewall/d_a_tag_firewall/__dt__8dCcD_SphFv.s"
}
#pragma pop

/* 80D5939C-80D59420 000ADC 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Sph::dCcD_Sph() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_firewall/d_a_tag_firewall/__ct__8dCcD_SphFv.s"
}
#pragma pop

/* 80D59420-80D59468 000B60 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_firewall/d_a_tag_firewall/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80D59468-80D594B0 000BA8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_firewall/d_a_tag_firewall/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80D594B0-80D594B4 000BF0 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
cXyz::cXyz() {
    /* empty function */
}

/* 80D594B4-80D594D4 000BF4 0020+00 1/0 0/0 0/0 .text daTag_FWall_Create__FP13daTag_FWall_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_FWall_Create(daTag_FWall_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_firewall/d_a_tag_firewall/daTag_FWall_Create__FP13daTag_FWall_c.s"
}
#pragma pop
