/**********************************************************************************************************************
 * Appl_Diag_RxProbe.c — Dcm bring-up helpers / watches
 *
 * Race: EnterRun → ComM FULL notifies Dcm before Dcm_Init (ignored: DCM_E_UNINIT).
 * Later Dcm_Init leaves ComState=RX_DIS; ComM will not re-notify. UDS RX then dropped.
 *********************************************************************************************************************/
#include "Appl_Diag_RxProbe.h"
#include "Appl_BswM_OnComMFull.h"

volatile uint16 Appl_Diag_CanTpRxAll = 0u;
volatile uint16 Appl_Diag_Rx737Cnt = 0u;
volatile uint16 Appl_Diag_CanTpLastPdu = 0xFFFFu;
volatile uint8 Appl_Diag_DcmInited = 0u;
volatile uint8 Appl_Diag_DcmComMFullNotified = 0u;
volatile uint16 Appl_Diag_DcmConfCnt = 0u;
volatile uint8 Appl_Diag_DcmConfStatus = 0xFFu;

void Appl_Diag_AfterDcmInit(void)
{
  Appl_Diag_DcmInited = 1u;
  /* Always re-sync: board reaches ComM FULL before deferred Dcm_Init.
   * BswM RULE_ComM_Full → Appl_BswM_OnComMFull covers later FULL transitions. */
  Appl_BswM_OnComMFull();
}
