/**********************************************************************************************************************
 * Appl_BswM_OnComMFull.c — BswM RULE_ComM_Full UserCallout
 *
 * EnterRun may drive ComM FULL before deferred Dcm_Init (DCM_E_UNINIT swallows notify).
 * After Dcm_Init, ComM will not re-notify — Appl_Diag_AfterDcmInit and this callout
 * both re-sync Dcm_ComM_FullComModeEntered when Dcm is ready.
 *********************************************************************************************************************/
#include "Appl_BswM_OnComMFull.h"
#include "Appl_Diag_RxProbe.h"
#include "ComM_Cfg.h"
#include "Dcm_CoreCbk.h"

volatile uint8 Appl_BswM_OnComMFullCnt = 0u;

void Appl_BswM_OnComMFull(void)
{
  Appl_BswM_OnComMFullCnt++;
  if (Appl_Diag_DcmInited == 0u)
  {
    return;
  }
  Dcm_ComM_FullComModeEntered(ComMConf_ComMChannel_PropulsionCAN_IEM_19020f5a);
  Appl_Diag_DcmComMFullNotified = 1u;
}
