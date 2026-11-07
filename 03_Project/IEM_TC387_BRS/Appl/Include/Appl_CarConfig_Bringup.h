/**********************************************************************************************************************
 * Appl_CarConfig_Bringup.h — VehCfgPrm 观测 + Dem COM_CarConfigErr (CDD E300-56)
 *
 * CCP 映射（DBC）：VehCfgPrmCCPBytePosn(N) → CCP# = (BlkID-1)*7 + (N-1), N=2..8
 * 白名单：Appl_CarConfig_CcpTable[]；表空则只影子字节、不报 E103
 * DID 0xE103：最多 10 条故障槽；Rte 由 Appl_Did_E103.c 提供
 * NvM：状态壳 Appl_CarConfig_NvMRam（Bulk/Valid/Error + BlkID）；全量合法 CCP 值仍待正式 DB
 *********************************************************************************************************************/
#ifndef APPL_CARCONFIG_BRINGUP_H
#define APPL_CARCONFIG_BRINGUP_H

#include "Std_Types.h"

#define APPL_CARCFG_STATE_BULK  ((uint8)0u)
#define APPL_CARCFG_STATE_VALID ((uint8)1u)
#define APPL_CARCFG_STATE_ERROR ((uint8)2u)

#define APPL_CARCFG_E103_MAX_FAULTS ((uint8)10u)
#define APPL_CARCFG_NVM_MAGIC       ((uint8)0xCCu)
#define APPL_CARCFG_CCP_BYTES       ((uint8)7u)

typedef struct
{
  uint16 ccpNumber; /* 0 = unused / end */
  uint8 minVal;
  uint8 maxVal;
} Appl_CarConfig_CcpEntryType;

typedef struct
{
  uint16 ccpNumber;
  uint8 invalidValue;
} Appl_CarConfig_FaultEntryType;

extern volatile uint8 Appl_CarConfig_State;
extern volatile uint8 Appl_CarConfig_LastBlkId;
extern volatile uint8 Appl_CarConfig_LastExtBlkId;
extern volatile uint16 Appl_CarConfig_RxCnt;
extern volatile uint16 Appl_CarConfig_ExtRxCnt;
extern volatile uint8 Appl_CarConfig_PassedOnce;
extern volatile Std_ReturnType Appl_CarConfig_BlkRet;
extern volatile Std_ReturnType Appl_CarConfig_ExtRet;
extern volatile uint8 Appl_CarConfig_FaultCount;
extern volatile uint8 Appl_CarConfig_NvMLoaded;

/* Last CCP payload bytes (Posn2..Posn8) + computed CCP# for UDE */
extern volatile uint8 Appl_CarConfig_LastBytes[APPL_CARCFG_CCP_BYTES];
extern volatile uint8 Appl_CarConfig_LastExtBytes[APPL_CARCFG_CCP_BYTES];
extern volatile uint16 Appl_CarConfig_LastCcpNum[APPL_CARCFG_CCP_BYTES];
extern volatile uint16 Appl_CarConfig_LastExtCcpNum[APPL_CARCFG_CCP_BYTES];
extern volatile uint16 Appl_CarConfig_ValidateOkCnt;
extern volatile uint16 Appl_CarConfig_ValidateFailCnt;

/* UDE: set 1 → OnSample clears faults then self-clears (no Call Function needed) */
extern volatile uint8 Appl_CarConfig_ClearFaultsReq;
/* 1 after ClearFaultsReq until next good Prm validate (blocks stale Com 0xFF re-fault) */
extern volatile uint8 Appl_CarConfig_SuppressFault;

extern const Appl_CarConfig_CcpEntryType Appl_CarConfig_CcpTable[];
extern const uint16 Appl_CarConfig_CcpTableLen;

void Appl_CarConfig_Bringup_OnSample(void);

/* ReadAll 之后：若 NvM magic 有效则恢复 State/BlkID */
void Appl_CarConfig_LoadFromNvM(void);

/* 状态变化时写 RAM 镜像并 NvM_SetRamBlockStatus（WriteAll 落盘） */
void Appl_CarConfig_MarkNvMDirty(void);

void Appl_CarConfig_InjectError(void);
void Appl_CarConfig_RecordFault(uint16 ccpNumber, uint8 invalidValue);
void Appl_CarConfig_ClearFaults(void);

uint8 Appl_CarConfig_GetFaultCount(void);
Std_ReturnType Appl_CarConfig_GetFault(uint8 slot, uint16 *ccpNumber, uint8 *invalidValue);

#endif /* APPL_CARCONFIG_BRINGUP_H */
