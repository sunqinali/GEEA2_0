/**********************************************************************************************************************
 * Appl_CarConfig_Bringup.c
 *********************************************************************************************************************/
#include "Appl_CarConfig_Bringup.h"
#include "Appl_Dem_Platform.h"
#include "Appl_NvM_Buffers.h"
#include "Com.h"
#include "Com_Cfg.h"
#include "NvM.h"
#include "NvM_Cfg.h"

volatile uint8 Appl_CarConfig_State = APPL_CARCFG_STATE_BULK;
volatile uint8 Appl_CarConfig_LastBlkId = 0u;
volatile uint8 Appl_CarConfig_LastExtBlkId = 0u;
volatile uint16 Appl_CarConfig_RxCnt = 0u;
volatile uint16 Appl_CarConfig_ExtRxCnt = 0u;
volatile uint8 Appl_CarConfig_PassedOnce = 0u;
volatile Std_ReturnType Appl_CarConfig_BlkRet = E_NOT_OK;
volatile Std_ReturnType Appl_CarConfig_ExtRet = E_NOT_OK;
volatile uint8 Appl_CarConfig_FaultCount = 0u;
volatile uint8 Appl_CarConfig_NvMLoaded = 0u;

/* 白名单占位 — Car Config DB 到位后填写（ccpNumber != 0） */
const Appl_CarConfig_CcpEntryType Appl_CarConfig_CcpTable[] =
{
  { 0u, 0u, 0u }
};
const uint16 Appl_CarConfig_CcpTableLen = 0u;

static Appl_CarConfig_FaultEntryType Appl_CarConfig_Faults[APPL_CARCFG_E103_MAX_FAULTS];

void Appl_CarConfig_MarkNvMDirty(void)
{
  Appl_CarConfig_NvMRam[0] = APPL_CARCFG_NVM_MAGIC;
  Appl_CarConfig_NvMRam[1] = Appl_CarConfig_State;
  Appl_CarConfig_NvMRam[2] = Appl_CarConfig_LastBlkId;
  Appl_CarConfig_NvMRam[3] = Appl_CarConfig_FaultCount;
#if defined(NvMConf_NvMBlockDescriptor_NvMBlock_CarConfig)
  (void)NvM_SetRamBlockStatus(NvMConf_NvMBlockDescriptor_NvMBlock_CarConfig, TRUE);
#endif
}

void Appl_CarConfig_LoadFromNvM(void)
{
  if (Appl_CarConfig_NvMRam[0] == APPL_CARCFG_NVM_MAGIC)
  {
    Appl_CarConfig_State = Appl_CarConfig_NvMRam[1];
    Appl_CarConfig_LastBlkId = Appl_CarConfig_NvMRam[2];
    /* faultCount 仅作镜像观测；RAM 故障表仍由运行时填充 */
    Appl_CarConfig_NvMLoaded = 1u;
    if ((Appl_CarConfig_State == APPL_CARCFG_STATE_VALID) &&
        (Appl_CarConfig_LastBlkId != 0u))
    {
      Appl_CarConfig_PassedOnce = 1u;
      Appl_Dem_ReportCarConfigErr(0u);
    }
  }
  else
  {
    Appl_CarConfig_NvMLoaded = 0u;
  }
}

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

  if ((Appl_CarConfig_FaultCount == 0u) && (Appl_CarConfig_PassedOnce == 0u))
  {
    Appl_Dem_ReportCarConfigErr(0u);
    Appl_CarConfig_PassedOnce = 1u;
  }
  if ((Appl_CarConfig_FaultCount == 0u) && (Appl_CarConfig_State != APPL_CARCFG_STATE_ERROR))
  {
    Appl_CarConfig_State = APPL_CARCFG_STATE_VALID;
  }
  Appl_CarConfig_MarkNvMDirty();
}

void Appl_CarConfig_Bringup_OnSample(void)
{
  uint8 blkId = 0u;

  /* Group signals: shadow → app via ReceiveSignalGroup then ReceiveSignal. */
  if (Com_ReceiveSignalGroup(ComConf_ComSignalGroup_igVehCfgPrm_eee11443_Rx) == E_OK)
  {
    Appl_CarConfig_BlkRet = Com_ReceiveSignal(
        ComConf_ComGroupSignal_isVehCfgPrmBlkIDBytePosn1_16ee2fa8_Rx, &blkId);
    if ((Appl_CarConfig_BlkRet == E_OK) && (blkId != 0u))
    {
      Appl_CarConfig_AcceptBlock(blkId, 0u);
    }
  }
  else
  {
    Appl_CarConfig_BlkRet = E_NOT_OK;
  }

  blkId = 0u;
  if (Com_ReceiveSignalGroup(ComConf_ComSignalGroup_igVehCfgPrmExt_b2e1e62e_Rx) == E_OK)
  {
    Appl_CarConfig_ExtRet = Com_ReceiveSignal(
        ComConf_ComGroupSignal_isVehCfgPrmExtBlkIDBytePosn1_6585aabf_Rx, &blkId);
    if ((Appl_CarConfig_ExtRet == E_OK) && (blkId != 0u))
    {
      Appl_CarConfig_AcceptBlock(blkId, 1u);
    }
  }
  else
  {
    Appl_CarConfig_ExtRet = E_NOT_OK;
  }
}

void Appl_CarConfig_InjectError(void)
{
  Appl_CarConfig_State = APPL_CARCFG_STATE_ERROR;
  Appl_Dem_ReportCarConfigErr(1u);
  Appl_CarConfig_MarkNvMDirty();
}

void Appl_CarConfig_RecordFault(uint16 ccpNumber, uint8 invalidValue)
{
  uint8 i;

  if (ccpNumber == 0u)
  {
    return;
  }

  for (i = 0u; i < Appl_CarConfig_FaultCount; i++)
  {
    if (Appl_CarConfig_Faults[i].ccpNumber == ccpNumber)
    {
      Appl_CarConfig_Faults[i].invalidValue = invalidValue;
      Appl_CarConfig_State = APPL_CARCFG_STATE_ERROR;
      Appl_Dem_ReportCarConfigErr(1u);
      Appl_CarConfig_MarkNvMDirty();
      return;
    }
  }

  if (Appl_CarConfig_FaultCount < APPL_CARCFG_E103_MAX_FAULTS)
  {
    Appl_CarConfig_Faults[Appl_CarConfig_FaultCount].ccpNumber = ccpNumber;
    Appl_CarConfig_Faults[Appl_CarConfig_FaultCount].invalidValue = invalidValue;
    Appl_CarConfig_FaultCount++;
  }

  Appl_CarConfig_State = APPL_CARCFG_STATE_ERROR;
  Appl_Dem_ReportCarConfigErr(1u);
  Appl_CarConfig_MarkNvMDirty();
}

void Appl_CarConfig_ClearFaults(void)
{
  uint8 i;

  for (i = 0u; i < APPL_CARCFG_E103_MAX_FAULTS; i++)
  {
    Appl_CarConfig_Faults[i].ccpNumber = 0u;
    Appl_CarConfig_Faults[i].invalidValue = 0u;
  }
  Appl_CarConfig_FaultCount = 0u;

  if (Appl_CarConfig_LastBlkId != 0u)
  {
    Appl_CarConfig_State = APPL_CARCFG_STATE_VALID;
    Appl_Dem_ReportCarConfigErr(0u);
    Appl_CarConfig_PassedOnce = 1u;
  }
  else
  {
    Appl_CarConfig_State = APPL_CARCFG_STATE_BULK;
  }
  Appl_CarConfig_MarkNvMDirty();
}

uint8 Appl_CarConfig_GetFaultCount(void)
{
  return Appl_CarConfig_FaultCount;
}

Std_ReturnType Appl_CarConfig_GetFault(uint8 slot, uint16 *ccpNumber, uint8 *invalidValue)
{
  if ((ccpNumber == NULL_PTR) || (invalidValue == NULL_PTR))
  {
    return E_NOT_OK;
  }
  if (slot >= Appl_CarConfig_FaultCount)
  {
    *ccpNumber = 0u;
    *invalidValue = 0u;
    return E_OK;
  }
  *ccpNumber = Appl_CarConfig_Faults[slot].ccpNumber;
  *invalidValue = Appl_CarConfig_Faults[slot].invalidValue;
  return E_OK;
}
