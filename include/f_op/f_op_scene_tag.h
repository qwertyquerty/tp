#ifndef F_F_OP_SCENE_TAG_H_
#define F_F_OP_SCENE_TAG_H_

#include "SSystem/SComponent/c_list.h"
#include "dolphin/types.h"

class scene_tag_class {
    u8 _0[0x14];
};

void fopScnTg_QueueTo(scene_tag_class* pSceneTag);
void fopScnTg_ToQueue(scene_tag_class* pSceneTag);
void fopScnTg_Init(scene_tag_class* pSceneTag, void* pData);

extern node_list_class g_fopScnTg_SceneList;

#endif
