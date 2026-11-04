/**********************************************************************************************************************
 * Appl_CarConfig_Bringup.c
 *********************************************************************************************************************/
#include "Appl_CarConfig_Bringup.h"
#include "Appl_Dem_Platform.h"
#include "Com.h"
#include "Com_Cfg.h"

volatile uint8 Appl_CarConfig_State = APPL_CARCFG_STATE_BULK;
volatile uint8 Appl_CarConfig_LastBlkId = 0u;
volatile uint8 Appl_CarConfig_LastExtBlkId = 0u;
volatile uint16 Appl_CarConfig_RxCnt = 0u;
volatile uint16 Appl_CarConfig_ExtRxCnt = 0u;
volatile uint8 Appl_CarConfig_PassedOnce = 0u;
volatile Std_ReturnType Appl_CarConfig_BlkRet = E_NOT_OK;
volatile Std_ReturnType Appl_CarConfig_ExtRet = E_NOT_OK;

static void Appl_CarConfig_AcceptBlock(uint8 blkId, uint8 isExt)
{
  if (isExt != 0u)
  {
    if (blkId != Appl_CarConfig_LastExtBlkId)
    {
      Appl_CarConfig_ExtRxCnt++;
    }
    Appl_CarConfig_LastExtBlkId = blkId;
  }
  else
  {
    if (blkId != Appl_CarConfig_LastBlkId)
    {
      Appl_CarConfig_RxCnt++;
    }
    else if (Appl_CarConfig_RxCnt == 0u)
    {
      Appl_CarConfig_RxCnt = 1u;
    }
    Appl_CarConfig_LastBlkId = blkId;
  }

  /* No CCP number DB yet: any non-zero BlockID → Valid + Dem PASSED once (CDD inhibit-after-pass). */
  if (Appl_CarConfig_PassedOnce == 0u)
  {
    Appl_Dem_ReportCarConfigErr(0u);
    Appl_CarConfig_PassedOnce = 1u;
  }
  if (Appl_CarConfig_State != APPL_CARCFG_STATE_ERROR)
  {
    Appl_CarConfig_State = APPL_CARCFG_STATE_VALID;
  }
}

void Appl_CarConfig_Bringup_OnSample(void)
{
  uint8 blkId = 0u;

  Appl_CarConfig_BlkRet = Com_ReceiveSignal(
      ComConf_ComGroupSignal_isVehCfgPrmBlkIDBytePosn1_16ee2fa8_Rx, &blkId);
  if ((Appl_CarConfig_BlkRet == E_OK) && (blkId != 0u))
  {
    Appl_CarConfig_AcceptBlock(blkId, 0u);
  }

  blkId = 0u;
  Appl_CarConfig_ExtRet = Com_ReceiveSignal(
      ComConf_ComGroupSignal_isVehCfgPrmExtBlkIDBytePosn1_6585aabf_Rx, &blkId);
  if ((Appl_CarConfig_ExtRet == E_OK) && (blkId != 0u))
  {
    Appl_CarConfig_AcceptBlock(blkId, 1u);
  }
}

void Appl_CarConfig_InjectError(void)
{
  Appl_CarConfig_State = APPL_CARCFG_STATE_ERROR;
  Appl_Dem_ReportCarConfigErr(1u);
}
