#ifndef APPL_BSW_INIT_AFTER_OS_H
#define APPL_BSW_INIT_AFTER_OS_H

#include "Std_Types.h"

/** Run Can→Dcm stack init that must not run before StartOS (MCMCAN / OS counter). */
void Appl_Bsw_InitAfterOs(void);

/** After EcuM_StartupTwo: ensure BswM init, notify ECUM_STATE_RUN, run MainFunction → AL_EnterRun.
 *  kickPhase: 1 = Default_Init_Task, 2 = Trusted (after IRQ enable). */
void Appl_BswM_NotifyRunAndEnter(uint8 kickPhase);

/** EcuM Flex has ECUM_SUPPORT_RTE=OFF — call Rte_Start on each core after SchM_Init. */
void Appl_Rte_StartThisCore(void);

#endif
