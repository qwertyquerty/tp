//
// Generated By: dol2asm
// Translation Unit: c_bg_s_shdw_draw
//

#include "SSystem/SComponent/c_bg_s_shdw_draw.h"
#include "SSystem/SComponent/c_m3d_g_aab.h"
#include "SSystem/SComponent/c_m3d_g_pla.h"
#include "SSystem/SComponent/c_xyz.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Declarations:
//

/* 80267F88-80267FD0 2628C8 0048+00 0/0 1/1 0/0 .text            __ct__13cBgS_ShdwDrawFv */
cBgS_ShdwDraw::cBgS_ShdwDraw() {}

/* 80267FD0-80268048 262910 0078+00 1/0 2/2 0/0 .text            __dt__13cBgS_ShdwDrawFv */
cBgS_ShdwDraw::~cBgS_ShdwDraw() {}

/* 80268048-8026806C 262988 0024+00 0/0 1/1 0/0 .text            Set__13cBgS_ShdwDrawFR4cXyzR4cXyz
 */
void cBgS_ShdwDraw::Set(cXyz& param_0, cXyz& param_1) {
    mM3dGAab.Set(&param_0, &param_1);
}

/* 8026806C-80268074 -00001 0008+00 0/0 0/0 0/0 .text
 * SetCallback__13cBgS_ShdwDrawFPFP13cBgS_ShdwDrawP10cBgD_Vtx_tiiiP8cM3dGPla_i */
void cBgS_ShdwDraw::SetCallback(cBgS_ShdwDraw_Callback pCallback) {
    mCallbackFun = pCallback;
}
