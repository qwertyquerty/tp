//
// Generated By: dol2asm
// Translation Unit: OSError
//

#include "dolphin/os/OSError.h"
#include "dol2asm.h"
#include "dolphin/base/PPCArch.h"
#include "dolphin/dsp/dsp.h"
#include "dolphin/dvd/dvdlow.h"
#include "dolphin/os/OS.h"

OSThread* __OSCurrentThread : (OS_BASE_CACHED | 0x00E4);
OSThreadQueue __OSActiveThreadQueue : (OS_BASE_CACHED | 0x00DC);
volatile OSContext* __OSFPUContext : (OS_BASE_CACHED | 0x00D8);

//
// External References:
//

extern volatile u32 __OSLastInterruptSrr0;
extern volatile s16 __OSLastInterrupt;
extern volatile OSTime __OSLastInterruptTime;

//
// Declarations:
//

/* ############################################################################################## */
/* 8044BAD0-8044BB20 0787F0 0044+0C 2/2 2/2 0/0 .bss             __OSErrorTable */
extern OSErrorHandlerEx __OSErrorTable[17];
OSErrorHandlerEx __OSErrorTable[17];

/* 804509A0-804509A4 000420 0004+00 1/1 2/2 0/0 .sdata           __OSFpscrEnableBits */
#define FPSCR_ENABLE (FPSCR_VE | FPSCR_OE | FPSCR_UE | FPSCR_ZE | FPSCR_XE)
SECTION_SDATA extern u32 __OSFpscrEnableBits = FPSCR_ENABLE;

/* 8033C580-8033C798 336EC0 0218+00 0/0 4/4 0/0 .text            OSSetErrorHandler */
OSErrorHandler OSSetErrorHandler(OSError error, OSErrorHandler handler) {
    OSErrorHandlerEx oldHandler;
    BOOL enabled;

    enabled = OSDisableInterrupts();
    oldHandler = __OSErrorTable[error];
    __OSErrorTable[error] = (OSErrorHandlerEx) handler;

    if (error == EXCEPTION_FLOATING_POINT_EXCEPTION) {
        u32 msr;
        u32 fpscr;
        OSThread* thread;

        msr = PPCMfmsr();
        PPCMtmsr(msr | MSR_FP);
        fpscr = PPCMffpscr();
        if (handler) {
            for (thread = __OSActiveThreadQueue.head; thread;
                 thread = thread->active_threads_link.next)
            {
                thread->context.srr1 |= MSR_FE0 | MSR_FE1;
                if ((thread->context.state & OS_CONTEXT_STATE_FPSAVED) == 0) {
                    int i;
                    thread->context.state |= OS_CONTEXT_STATE_FPSAVED;
                    for (i = 0; i < 32; ++i) {
                        *(u64*)&thread->context.fpr[i] = (u64)0xffffffffffffffffLL;
                        *(u64*)&thread->context.ps[i] = (u64)0xffffffffffffffffLL;
                    }
                    thread->context.fpscr = FPSCR_NI;
                }
                thread->context.fpscr |= __OSFpscrEnableBits & FPSCR_ENABLE;
                thread->context.fpscr &=
                    ~(FPSCR_VXVC | FPSCR_VXIMZ | FPSCR_VXZDZ | FPSCR_VXIDI | FPSCR_VXISI |
                      FPSCR_VXSNAN | FPSCR_VXSOFT | FPSCR_VXSQRT | FPSCR_VXCVI | FPSCR_XX |
                      FPSCR_ZX | FPSCR_UX | FPSCR_OX | FPSCR_FX | FPSCR_FI);
            }
            fpscr |= __OSFpscrEnableBits & FPSCR_ENABLE;
            msr |= MSR_FE0 | MSR_FE1;
        } else {
            for (thread = __OSActiveThreadQueue.head; thread;
                 thread = thread->active_threads_link.next)
            {
                thread->context.srr1 &= ~(MSR_FE0 | MSR_FE1);
                thread->context.fpscr &= ~FPSCR_ENABLE;
                thread->context.fpscr &=
                    ~(FPSCR_VXVC | FPSCR_VXIMZ | FPSCR_VXZDZ | FPSCR_VXIDI | FPSCR_VXISI |
                      FPSCR_VXSNAN | FPSCR_VXSOFT | FPSCR_VXSQRT | FPSCR_VXCVI | FPSCR_XX |
                      FPSCR_ZX | FPSCR_UX | FPSCR_OX | FPSCR_FX | FPSCR_FI);
            }
            fpscr &= ~FPSCR_ENABLE;
            msr &= ~(MSR_FE0 | MSR_FE1);
        }

        fpscr &= ~(FPSCR_VXVC | FPSCR_VXIMZ | FPSCR_VXZDZ | FPSCR_VXIDI | FPSCR_VXISI |
                   FPSCR_VXSNAN | FPSCR_VXSOFT | FPSCR_VXSQRT | FPSCR_VXCVI | FPSCR_XX | FPSCR_ZX |
                   FPSCR_UX | FPSCR_OX | FPSCR_FX | FPSCR_FI);

        PPCMtfpscr(fpscr);
        PPCMtmsr(msr);
    }

    OSRestoreInterrupts(enabled);
    return oldHandler;
}

/* ############################################################################################## */
/* 803CF918-803CF930 02CA38 0016+02 1/1 0/0 0/0 .data            @13 */
#pragma push
#pragma force_active on
 SECTION_DATA static char lit_13[] = " in \"%s\" on line %d.\n";
 #pragma pop

// /* 803CF930-803CF958 02CA50 0026+02 0/0 0/0 0/0 .data            @14 */
#pragma push
#pragma force_active on
SECTION_DATA static char lit_14[] = "\nAddress:      Back Chain    LR Save\n";
#pragma pop

// /* 803CF958-803CF974 02CA78 001C+00 0/0 0/0 0/0 .data            @15 */
#pragma push
#pragma force_active on
SECTION_DATA static char lit_15[] = "0x%08x:   0x%08x    0x%08x\n";
#pragma pop

/* 803CF974-803CF994 02CA94 001D+03 0/1 0/0 0/0 .data            @74 */
#pragma push
#pragma force_active on
SECTION_DATA static char lit_74[] = "Non-recoverable Exception %d";
#pragma pop

/* 803CF994-803CF9AC 02CAB4 0017+01 0/1 0/0 0/0 .data            @75 */
#pragma push
#pragma force_active on
SECTION_DATA static char lit_75[] = "Unhandled Exception %d";
#pragma pop

/* 803CF9AC-803CF9E0 02CACC 0031+03 0/1 0/0 0/0 .data            @77 */
#pragma push
#pragma force_active on
SECTION_DATA static char lit_77[] = "\nDSISR = 0x%08x                   DAR  = 0x%08x\n";
#pragma pop

/* 803CF9E0-803CF9F0 02CB00 0010+00 0/1 0/0 0/0 .data            @78 */
#pragma push
#pragma force_active on
SECTION_DATA static char lit_78[] = "TB = 0x%016llx\n";
#pragma pop

/* 803CF9F0-803CFA50 02CB10 0060+00 0/1 0/0 0/0 .data            @79 */
#pragma push
#pragma force_active on
SECTION_DATA static char lit_79[] = "\nInstruction at 0x%x (read from SRR0) attempted to access "
                                    "invalid address 0x%x (read from DAR)\n";
#pragma pop

/* 803CFA50-803CFA9C 02CB70 004C+00 0/0 0/0 0/0 .data            @80 */
#pragma push
#pragma force_active on
SECTION_DATA static char lit_80[] =
    "\nAttempted to fetch instruction from invalid address 0x%x (read from SRR0)\n";
#pragma pop

/* 803CFA9C-803CFB00 02CBBC 0062+02 0/0 0/0 0/0 .data            @81 */
#pragma push
#pragma force_active on
SECTION_DATA static char lit_81[] = "\nInstruction at 0x%x (read from SRR0) attempted to access "
                                    "unaligned address 0x%x (read from DAR)\n";
#pragma pop

/* 803CFB00-803CFB60 02CC20 0060+00 0/0 0/0 0/0 .data            @82 */
#pragma push
#pragma force_active on
SECTION_DATA static char lit_82[] = "\nProgram exception : Possible illegal instruction/operation "
                                    "at or around 0x%x (read from SRR0)\n";
#pragma pop

/* 803CFB60-803CFB80 02CC80 001F+01 0/0 0/0 0/0 .data            @83 */
#pragma push
#pragma force_active on
SECTION_DATA static char lit_83[] = "AI DMA Address =   0x%04x%04x\n";
#pragma pop

/* 803CFB80-803CFBA0 02CCA0 001F+01 0/0 0/0 0/0 .data            @84 */
#pragma push
#pragma force_active on
SECTION_DATA static char lit_84[] = "ARAM DMA Address = 0x%04x%04x\n";
#pragma pop

/* 803CFBA0-803CFBBC 02CCC0 001B+01 0/0 0/0 0/0 .data            @85 */
#pragma push
#pragma force_active on
SECTION_DATA static char lit_85[] = "DI DMA Address =   0x%08x\n";
#pragma pop

/* 803CFBBC-803CFBF4 02CCDC 0035+03 0/1 0/0 0/0 .data            @86 */
#pragma push
#pragma force_active on
SECTION_DATA static char lit_86[] = "\nLast interrupt (%d): SRR0 = 0x%08x  TB = 0x%016llx\n";
#pragma pop

/* 803CFBF4-803CFC38 -00001 0040+04 1/1 0/0 0/0 .data            @87 */
SECTION_DATA static void* lit_87[16 + 1 /* padding */] = {
    (void*)(((char*)__OSUnhandledException) + 0x2B4),
    (void*)(((char*)__OSUnhandledException) + 0x2B4),
    (void*)(((char*)__OSUnhandledException) + 0x20C),
    (void*)(((char*)__OSUnhandledException) + 0x224),
    (void*)(((char*)__OSUnhandledException) + 0x2B4),
    (void*)(((char*)__OSUnhandledException) + 0x238),
    (void*)(((char*)__OSUnhandledException) + 0x250),
    (void*)(((char*)__OSUnhandledException) + 0x2B4),
    (void*)(((char*)__OSUnhandledException) + 0x2B4),
    (void*)(((char*)__OSUnhandledException) + 0x2B4),
    (void*)(((char*)__OSUnhandledException) + 0x2B4),
    (void*)(((char*)__OSUnhandledException) + 0x2B4),
    (void*)(((char*)__OSUnhandledException) + 0x2B4),
    (void*)(((char*)__OSUnhandledException) + 0x2B4),
    (void*)(((char*)__OSUnhandledException) + 0x2B4),
    (void*)(((char*)__OSUnhandledException) + 0x268),
    /* padding */
    NULL,
};

/* 804509A4-804509A8 000424 0002+02 1/1 0/0 0/0 .sdata           @76 */
SECTION_SDATA static char lit_76[] = "\n";

/* 8033C798-8033CA80 3370D8 02E8+00 1/0 2/2 0/0 .text            __OSUnhandledException */
#ifdef NONMATCHING
void __OSUnhandledException(__OSException exception, OSContext* context, u32 dsisr, u32 dar) {
    OSTime now;

    now = OSGetTime();

    if (!(context->srr1 & MSR_RI)) {
        OSReport("Non-recoverable Exception %d", exception);
    } else {
        if (exception == EXCEPTION_PROGRAM && (context->srr1 & (0x80000000 >> 11)) &&
            __OSErrorTable[EXCEPTION_FLOATING_POINT_EXCEPTION] != 0) {
            u32 fpscr;
            u32 msr;

            exception = EXCEPTION_FLOATING_POINT_EXCEPTION;

            msr = PPCMfmsr();
            PPCMtmsr(msr | MSR_FP);

            if (__OSFPUContext) {
                OSSaveFPUContext((OSContext*)__OSFPUContext);
            }

            fpscr = PPCMffpscr();
            fpscr &= ~(FPSCR_VXVC | FPSCR_VXIMZ | FPSCR_VXZDZ | FPSCR_VXIDI | FPSCR_VXISI |
                       FPSCR_VXSNAN | FPSCR_VXSOFT | FPSCR_VXSQRT | FPSCR_VXCVI | FPSCR_XX |
                       FPSCR_ZX | FPSCR_UX | FPSCR_OX | FPSCR_FX | FPSCR_FI);
            PPCMtfpscr(fpscr);

            PPCMtmsr(msr);

            if (__OSFPUContext == context) {
                OSDisableScheduler();
                __OSErrorTable[exception](exception, context, dsisr, dar);
                context->srr1 &= ~MSR_FP;
                __OSFPUContext = NULL;

                context->fpscr &=
                    ~(FPSCR_VXVC | FPSCR_VXIMZ | FPSCR_VXZDZ | FPSCR_VXIDI | FPSCR_VXISI |
                      FPSCR_VXSNAN | FPSCR_VXSOFT | FPSCR_VXSQRT | FPSCR_VXCVI | FPSCR_XX |
                      FPSCR_ZX | FPSCR_UX | FPSCR_OX | FPSCR_FX | FPSCR_FI);
                OSEnableScheduler();
                __OSReschedule();
            } else {
                context->srr1 &= ~MSR_FP;
                __OSFPUContext = NULL;
            }

            OSLoadContext(context);
        }

        if (__OSErrorTable[exception]) {
            OSDisableScheduler();
            __OSErrorTable[exception](exception, context, dsisr, dar);
            OSEnableScheduler();
            __OSReschedule();
            OSLoadContext(context);
        }

        if (exception == OS_ERROR_DECREMENTER) {
            OSLoadContext(context);
        }

        OSReport("Unhandled Exception %d", exception);
    }

    OSReport("\n");
    OSDumpContext(context);
    OSReport("\nDSISR = 0x%08x                   DAR  = 0x%08x\n", dsisr, dar);
    OSReport("TB = 0x%016llx\n", now);

    switch (exception) {
    case EXCEPTION_DSI:
        OSReport("\nInstruction at 0x%x (read from SRR0) attempted to access "
                 "invalid address 0x%x (read from DAR)\n",
                 context->srr0, dar);
        break;
    case EXCEPTION_ISI:
        OSReport("\nAttempted to fetch instruction from invalid address 0x%x "
                 "(read from SRR0)\n",
                 context->srr0);
        break;
    case EXCEPTION_ALIGNMENT:
        OSReport("\nInstruction at 0x%x (read from SRR0) attempted to access "
                 "unaligned address 0x%x (read from DAR)\n",
                 context->srr0, dar);
        break;
    case EXCEPTION_PROGRAM:
        OSReport("\nProgram exception : Possible illegal instruction/operation "
                 "at or around 0x%x (read from SRR0)\n",
                 context->srr0, dar);
        break;
    case EXCEPTION_MEMORY_PROTECTION:
        OSReport("\n");
        OSReport("AI DMA Address =   0x%04x%04x\n", __DSPRegs[0x00000018],
                 __DSPRegs[0x00000018 + 1]);
        OSReport("ARAM DMA Address = 0x%04x%04x\n", __DSPRegs[0x00000010],
                 __DSPRegs[0x00000010 + 1]);
        OSReport("DI DMA Address =   0x%08x\n", __DIRegs[0x00000005]);
        break;
    }

    OSReport("\nLast interrupt (%d): SRR0 = 0x%08x  TB = 0x%016llx\n", __OSLastInterrupt,
             __OSLastInterruptSrr0, __OSLastInterruptTime);

    PPCHalt();
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __OSUnhandledException(__OSException exception, OSContext* context, u32 dsisr, u32 dar) {
    nofralloc
#include "asm/dolphin/os/OSError/__OSUnhandledException.s"
}
#pragma pop
#endif
