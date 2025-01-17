//
// Generated By: dol2asm
// Translation Unit: JKRCompArchive
//

#include "JSystem/JKernel/JKRCompArchive.h"
#include "JSystem/JKernel/JKRAram.h"
#include "JSystem/JKernel/JKRDvdAramRipper.h"
#include "JSystem/JKernel/JKRDvdArchive.h"
#include "JSystem/JKernel/JKRDvdFile.h"
#include "JSystem/JKernel/JKRMemArchive.h"
#include "JSystem/JUtility/JUTException.h"
#include "MSL_C/math.h"
#include "MSL_C/string.h"
#include "dol2asm.h"
#include "dolphin/os/OSCache.h"

//
// Forward References:
//

extern "C" void __ct__14JKRCompArchiveFlQ210JKRArchive15EMountDirection();
extern "C" void __dt__14JKRCompArchiveFv();
extern "C" void open__14JKRCompArchiveFl();
extern "C" void fetchResource__14JKRCompArchiveFPQ210JKRArchive12SDIFileEntryPUl();
extern "C" void fetchResource__14JKRCompArchiveFPvUlPQ210JKRArchive12SDIFileEntryPUl();
extern "C" void removeResourceAll__14JKRCompArchiveFv();
extern "C" void removeResource__14JKRCompArchiveFPv();
extern "C" void getExpandedResSize__14JKRCompArchiveCFPCv();
extern "C" extern char const* const JKRCompArchive__stringBase0;

//
// External References:
//

extern "C" void alloc__7JKRHeapFUliP7JKRHeap();
extern "C" void alloc__7JKRHeapFUli();
extern "C" void free__7JKRHeapFPvP7JKRHeap();
extern "C" void free__7JKRHeapFPv();
extern "C" void copyMemory__7JKRHeapFPvPvUl();
extern "C" void* __nw__FUlP7JKRHeapi();
extern "C" void __dl__FPv();
extern "C" void mainRamToAram__7JKRAramFPUcUlUl15JKRExpandSwitchUlP7JKRHeapiPUl();
extern "C" void aramToMainRam__7JKRAramFUlPUcUl15JKRExpandSwitchUlP7JKRHeapiPUl();
extern "C" void alloc__11JKRAramHeapFUlQ211JKRAramHeap10EAllocMode();
extern "C" void unmount__13JKRFileLoaderFv();
extern "C" void becomeCurrent__10JKRArchiveFPCc();
extern "C" void getResource__10JKRArchiveFPCc();
extern "C" void getResource__10JKRArchiveFUlPCc();
extern "C" void readResource__10JKRArchiveFPvUlUlPCc();
extern "C" void readResource__10JKRArchiveFPvUlPCc();
extern "C" void detachResource__10JKRArchiveFPv();
extern "C" void getResSize__10JKRArchiveCFPCv();
extern "C" void countFile__10JKRArchiveCFPCc();
extern "C" void getFirstFile__10JKRArchiveCFPCc();
extern "C" void __ct__10JKRArchiveFlQ210JKRArchive10EMountMode();
extern "C" void __dt__10JKRArchiveFv();
extern "C" void findPtrResource__10JKRArchiveCFPCv();
extern "C" void setExpandSize__10JKRArchiveFPQ210JKRArchive12SDIFileEntryUl();
extern "C" void getExpandSize__10JKRArchiveCFPQ210JKRArchive12SDIFileEntry();
extern "C" void fetchResource_subroutine__13JKRMemArchiveFPUcUlPUcUli();
extern "C" void fetchResource_subroutine__14JKRAramArchiveFUlUlPUcUli();
extern "C" void fetchResource_subroutine__14JKRAramArchiveFUlUlP7JKRHeapiPPUc();
extern "C" void fetchResource_subroutine__13JKRDvdArchiveFlUlUlPUcUlii();
extern "C" void fetchResource_subroutine__13JKRDvdArchiveFlUlUlP7JKRHeapiiPPUc();
extern "C" void __ct__10JKRDvdFileFl();
extern "C" void
loadToMainRAM__12JKRDvdRipperFlPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl();
extern "C" void loadToAram__16JKRDvdAramRipperFlUl15JKRExpandSwitchUlUlPUl();
extern "C" void orderSync__9JKRDecompFPUcPUcUlUl();
extern "C" void prepend__10JSUPtrListFP10JSUPtrLink();
extern "C" void remove__10JSUPtrListFP10JSUPtrLink();
extern "C" void panic_f__12JUTExceptionFPCciPCce();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" u8 sVolumeList__13JKRFileLoader[12];
extern "C" u8 sSystemHeap__7JKRHeap[4];
extern "C" u8 sAramObject__7JKRAram[4];

//
// Declarations:
//

/* 802D87D4-802D887C 2D3114 00A8+00 0/0 1/1 0/0 .text
 * __ct__14JKRCompArchiveFlQ210JKRArchive15EMountDirection      */
JKRCompArchive::JKRCompArchive(s32 entryNum, JKRArchive::EMountDirection eMountDirection)
    : JKRArchive(entryNum, MOUNT_COMP) {
    mMountDirection = eMountDirection;

    if (!open(entryNum)) {
        return;
    }

    mVolumeType = 'RARC';
    mVolumeName = &mStringTable[mNodes->name_offset];
    sVolumeList.prepend(&mFileLoaderLink);
    mIsMounted = true;
}

/* 802D887C-802D89BC 2D31BC 0140+00 1/0 0/0 0/0 .text            __dt__14JKRCompArchiveFv */
JKRCompArchive::~JKRCompArchive() {
    if (mArcInfoBlock != NULL) {
        SDIFileEntry* file = mFiles;
        for (int i = 0; i < mArcInfoBlock->num_file_entries; i++) {
            if (!((file->type_flags_and_name_offset >> 0x18) & 0x10) && file->data != NULL) {
                JKRFreeToHeap(mHeap, file->data);
            }

            file++;
        }

        JKRFreeToHeap(mHeap, mArcInfoBlock);
        mArcInfoBlock = NULL;
    }

    if (field_0x68 != NULL) {
        delete field_0x68;
    }

    if (mExpandedSize != NULL) {
        i_JKRFree(mExpandedSize);
        mExpandedSize = NULL;
    }

    if (field_0x70 != NULL) {
        delete field_0x70;
    }

    sVolumeList.remove(&mFileLoaderLink);
    mIsMounted = false;
}

/* 802D89BC-802D8F40 2D32FC 0584+00 1/1 0/0 0/0 .text            open__14JKRCompArchiveFl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool JKRCompArchive::open(s32 param_0) {
    nofralloc
#include "asm/JSystem/JKernel/JKRCompArchive/open__14JKRCompArchiveFl.s"
}
#pragma pop

/* 802D8F40-802D90C0 2D3880 0180+00 1/0 0/0 0/0 .text
 * fetchResource__14JKRCompArchiveFPQ210JKRArchive12SDIFileEntryPUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void* JKRCompArchive::fetchResource(JKRArchive::SDIFileEntry* param_0, u32* param_1) {
    nofralloc
#include "asm/JSystem/JKernel/JKRCompArchive/fetchResource__14JKRCompArchiveFPQ210JKRArchive12SDIFileEntryPUl.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039D220-8039D220 029880 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039D220 = "JKRCompArchive.cpp";
SECTION_DEAD static char const* const stringBase_8039D233 = "%s";
SECTION_DEAD static char const* const stringBase_8039D236 = "illegal archive.";
#pragma pop

/* 802D90C0-802D9260 2D3A00 01A0+00 1/0 0/0 0/0 .text
 * fetchResource__14JKRCompArchiveFPvUlPQ210JKRArchive12SDIFileEntryPUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void* JKRCompArchive::fetchResource(void* param_0, u32 param_1,
                                        JKRArchive::SDIFileEntry* param_2, u32* param_3) {
    nofralloc
#include "asm/JSystem/JKernel/JKRCompArchive/fetchResource__14JKRCompArchiveFPvUlPQ210JKRArchive12SDIFileEntryPUl.s"
}
#pragma pop

/* 802D9260-802D92F4 2D3BA0 0094+00 1/0 0/0 0/0 .text removeResourceAll__14JKRCompArchiveFv */
void JKRCompArchive::removeResourceAll() {
    if (mArcInfoBlock != NULL && mMountMode != MOUNT_MEM) {
        SDIFileEntry* fileEntry = mFiles;
        for (int i = 0; i < mArcInfoBlock->num_file_entries; i++) {
            int tmp = fileEntry->type_flags_and_name_offset >> 0x18;

            if (fileEntry->data != NULL) {
                if (!(tmp & 0x10)) {
                    JKRFreeToHeap(mHeap, fileEntry->data);
                }

                fileEntry->data = NULL;
            }
        }
    }
}

/* 802D92F4-802D9360 2D3C34 006C+00 1/0 0/0 0/0 .text            removeResource__14JKRCompArchiveFPv
 */
bool JKRCompArchive::removeResource(void* resource) {
    SDIFileEntry* fileEntry = findPtrResource(resource);
    if (!fileEntry)
        return false;

    if (!((fileEntry->type_flags_and_name_offset >> 0x18) & 0x10)) {
        JKRFreeToHeap(mHeap, resource);
    }

    fileEntry->data = NULL;
    return true;
}

/* ############################################################################################## */
/* 8039D220-8039D220 029880 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039D247 = "illegal resource.";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_8039D259 = "\0\0\0\0\0\0";
#pragma pop

/* 802D9360-802D9518 2D3CA0 01B8+00 1/0 0/0 0/0 .text getExpandedResSize__14JKRCompArchiveCFPCv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm u32 JKRCompArchive::getExpandedResSize(void const* param_0) const {
    nofralloc
#include "asm/JSystem/JKernel/JKRCompArchive/getExpandedResSize__14JKRCompArchiveCFPCv.s"
}
#pragma pop

/* 8039D220-8039D220 029880 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
