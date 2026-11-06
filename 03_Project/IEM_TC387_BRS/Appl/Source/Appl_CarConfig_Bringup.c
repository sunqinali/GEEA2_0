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

volatile uint8 Appl_CarConfig_LastBytes[APPL_CARCFG_CCP_BYTES];
volatile uint8 Appl_CarConfig_LastExtBytes[APPL_CARCFG_CCP_BYTES];
volatile uint16 Appl_CarConfig_LastCcpNum[APPL_CARCFG_CCP_BYTES];
volatile uint16 Appl_CarConfig_LastExtCcpNum[APPL_CARCFG_CCP_BYTES];
volatile uint16 Appl_CarConfig_ValidateOkCnt = 0u;
volatile uint16 Appl_CarConfig_ValidateFailCnt = 0u;

/*
 * Bring-up demo whitelist (BlkID=1 → CCP#1..7). Replace with official Car Config DB.
 * Smoke good payload uses 0x10..0x70; 0xFF trips E103 for CCP#1.
 */
const Appl_CarConfig_CcpEntryType Appl_CarConfig_CcpTable[] =
{
  { 1u, 0x00u, 0x7Fu },
  { 2u, 0x00u, 0x7Fu },
  { 3u, 0x00u, 0x7Fu },
  { 4u, 0x00u, 0x7Fu },
  { 5u, 0x00u, 0x7Fu },
  { 6u, 0x00u, 0x7Fu },
  { 7u, 0x00u, 0x7Fu }
};
const uint16 Appl_CarConfig_CcpTableLen =
    (uint16)(sizeof(Appl_CarConfig_CcpTable) / sizeof(Appl_CarConfig_CcpTable[0]));

static Appl_CarConfig_FaultEntryType Appl_CarConfig_Faults[APPL_CARCFG_E103_MAX_FAULTS];

static const Com_SignalIdType Appl_CarConfig_PrmByteSig[APPL_CARCFG_CCP_BYTES] =
{
  ComConf_ComGroupSignal_isVehCfgPrmCCPBytePosn2_c9255841_Rx,
  ComConf_ComGroupSignal_isVehCfgPrmCCPBytePosn3_be2268d7_Rx,
  ComConf_ComGroupSignal_isVehCfgPrmCCPBytePosn4_2046fd74_Rx,
  ComConf_ComGroupSignal_isVehCfgPrmCCPBytePosn5_5741cde2_Rx,
  ComConf_ComGroupSignal_isVehCfgPrmCCPBytePosn6_ce489c58_Rx,
  ComConf_ComGroupSignal_isVehCfgPrmCCPBytePosn7_b94facce_Rx,
  ComConf_ComGroupSignal_isVehCfgPrmCCPBytePosn8_29f0b15f_Rx
};

static const Com_SignalIdType Appl_CarConfig_ExtByteSig[APPL_CARCFG_CCP_BYTES] =
{
  ComConf_ComGroupSignal_isVehCfgPrmExtCCPBytePosn2_e7ede43f_Rx,
  ComConf_ComGroupSignal_isVehCfgPrmExtCCPBytePosn3_90ead4a9_Rx,
  ComConf_ComGroupSignal_isVehCfgPrmExtCCPBytePosn4_0e8e410a_Rx,
  ComConf_ComGroupSignal_isVehCfgPrmExtCCPBytePosn5_7989719c_Rx,
  ComConf_ComGroupSignal_isVehCfgPrmExtCCPBytePosn6_e0802026_Rx,
  ComConf_ComGroupSignal_isVehCfgPrmExtCCPBytePosn7_978710b0_Rx,
  ComConf_ComGroupSignal_isVehCfgPrmExtCCPBytePosn8_07380d21_Rx
};

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

static uint16 Appl_CarConfig_CcpNumberFromBlk(uint8 blkId, uint8 byteIndex)
{
  /* DBC: (BlockID-1)*7 + 1..7  for Posn2..Posn8 */
  if ((blkId == 0u) || (byteIndex >= APPL_CARCFG_CCP_BYTES))
  {
    return 0u;
  }
  return (uint16)(((uint16)(blkId - 1u) * 7u) + (uint16)(byteIndex + 1u));
}

static const Appl_CarConfig_CcpEntryType *Appl_CarConfig_FindCcp(uint16 ccpNumber)
{
  uint16 i;

  if (ccpNumber == 0u)
  {
    return NULL_PTR;
  }
  for (i = 0u; i < Appl_CarConfig_CcpTableLen; i++)
  {
    if (Appl_CarConfig_CcpTable[i].ccpNumber == ccpNumber)
    {
      return &Appl_CarConfig_CcpTable[i];
    }
  }
  return NULL_PTR;
}

static void Appl_CarConfig_ValidateBytes(uint8 blkId, const uint8 *bytes, uint8 isExt)
{
  uint8 i;
  uint16 ccpNum;
  const Appl_CarConfig_CcpEntryType *ent;

  for (i = 0u; i < APPL_CARCFG_CCP_BYTES; i++)
  {
    ccpNum = Appl_CarConfig_CcpNumberFromBlk(blkId, i);
    if (isExt != 0u)
    {
      Appl_CarConfig_LastExtBytes[i] = bytes[i];
      Appl_CarConfig_LastExtCcpNum[i] = ccpNum;
    }
    else
    {
      Appl_CarConfig_LastBytes[i] = bytes[i];
      Appl_CarConfig_LastCcpNum[i] = ccpNum;
    }

    ent = Appl_CarConfig_FindCcp(ccpNum);
    if (ent == NULL_PTR)
    {
      continue; /* not subscribed / no DB entry yet */
    }
    if ((bytes[i] < ent->minVal) || (bytes[i] > ent->maxVal))
    {
      Appl_CarConfig_ValidateFailCnt++;
      Appl_CarConfig_RecordFault(ccpNum, bytes[i]);
    }
    else
    {
      Appl_CarConfig_ValidateOkCnt++;
    }
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
  uint8 bytes[APPL_CARCFG_CCP_BYTES];
  uint8 i;

  /* Group signals: shadow → app via ReceiveSignalGroup then ReceiveSignal. */
  if (Com_ReceiveSignalGroup(ComConf_ComSignalGroup_igVehCfgPrm_eee11443_Rx) == E_OK)
  {
    Appl_CarConfig_BlkRet = Com_ReceiveSignal(
        ComConf_ComGroupSignal_isVehCfgPrmBlkIDBytePosn1_16ee2fa8_Rx, &blkId);
    if ((Appl_CarConfig_BlkRet == E_OK) && (blkId != 0u))
    {
      for (i = 0u; i < APPL_CARCFG_CCP_BYTES; i++)
      {
        bytes[i] = 0u;
        (void)Com_ReceiveSignal(Appl_CarConfig_PrmByteSig[i], &bytes[i]);
      }
      Appl_CarConfig_ValidateBytes(blkId, bytes, 0u);
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
      for (i = 0u; i < APPL_CARCFG_CCP_BYTES; i++)
      {
        bytes[i] = 0u;
        (void)Com_ReceiveSignal(Appl_CarConfig_ExtByteSig[i], &bytes[i]);
      }
      /* Ext BlkID numbering TBD in official DB; still shadow + number for watches */
      Appl_CarConfig_ValidateBytes(blkId, bytes, 1u);
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
