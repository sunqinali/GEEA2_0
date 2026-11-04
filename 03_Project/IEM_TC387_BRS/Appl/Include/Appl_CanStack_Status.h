/**********************************************************************************************************************
 * Appl_CanStack_Status.h — ComM / CanSM / CanIf / Trcv / CanNm + bring-up aggregate
 *********************************************************************************************************************/
#ifndef APPL_CANSTACK_STATUS_H
#define APPL_CANSTACK_STATUS_H

#include "Std_Types.h"

/* Healthy FULL path:
 *   Appl_Can_ComMMode / CanSMMode == 2 (FULL)
 *   Appl_Can_CtrlMode             == 2 (STARTED)
 *   Appl_Can_TrcvMode             == 0 (NORMAL)
 *   Appl_Can_CanSMState & 0x10    != 0
 *   Appl_Can_NmMode               == 3 (NM_MODE_NETWORK)
 *   Appl_Can_NmState              == 4 or 5 (NORMAL_OPERATION / REPEAT_MESSAGE)
 *   Appl_Can_StackOk / NmOk / BringupOk == 1
 */
extern volatile uint8 Appl_Can_ComMMode;
extern volatile uint8 Appl_Can_CanSMMode;
extern volatile uint8 Appl_Can_CtrlMode;
extern volatile uint8 Appl_Can_TrcvMode;
extern volatile uint8 Appl_Can_CanSMState;
extern volatile uint8 Appl_Can_BusOffCnt;
extern volatile uint8 Appl_Can_ReqComMode;
extern volatile uint8 Appl_Can_NmState;
extern volatile uint8 Appl_Can_NmMode;
extern volatile uint8 Appl_Can_PduMode;          /* CanIf_PduGetModeType */
extern volatile Std_ReturnType Appl_Can_ComMRet;
extern volatile Std_ReturnType Appl_Can_CanSMRet;
extern volatile Std_ReturnType Appl_Can_CtrlRet;
extern volatile Std_ReturnType Appl_Can_TrcvRet;
extern volatile Std_ReturnType Appl_Can_NmRet;
extern volatile Std_ReturnType Appl_Can_PduModeRet;
extern volatile uint8 Appl_Can_StackOk;
extern volatile uint8 Appl_Can_NmOk;
extern volatile uint8 Appl_Bringup_Ok;       /* StackOk && SmokeOk && SampleCnt>0 */
extern volatile uint8 Appl_Bringup_FailFlags;/* bit0 Stack bit1 Smoke bit2 Sample bit3 Nm bit4 ComIpdu */
extern volatile uint16 Appl_Can_SampleCnt;

void Appl_CanStack_Status_Sample(void);

#endif /* APPL_CANSTACK_STATUS_H */
