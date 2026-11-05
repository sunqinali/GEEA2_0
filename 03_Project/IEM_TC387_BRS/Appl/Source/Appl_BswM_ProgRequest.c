/**********************************************************************************************************************
 * ProgRequest / Dcm ProgConditions + NvM stack bring-up helpers
 *********************************************************************************************************************/
#include "Appl_BswM_ProgRequest.h"
#include "Appl_NvM_Buffers.h"
#include "Appl_CarConfig_Bringup.h"
#include "Dcm.h"
#include "Dem.h"
#include "Fls_17_Dmu.h"
#include "Fee.h"
#include "NvM.h"
#include "NvM_Cfg.h"
#include "SchM_NvM.h"
#include "SchM_Fee.h"
#include "SchM_Fls_17_Dmu.h"

uint8 Appl_ProgRequestFlag;
uint32 Appl_ProgMagic;
Dcm_ProgConditionsType Appl_ProgConditions;

/* NvM RAM mirrors (NvMRamBlockDataAddress) */
uint8 Appl_ProgRequest_NvMRam[32];
uint8 NvM_ConfigBlock_Ram[8];
uint8 Appl_CarConfig_NvMRam[16];

uint8 Appl_NvM_Inited;
uint8 Appl_NvM_ReadAllDone;
uint8 Appl_NvM_ReadAllTimedOut;
uint8 Appl_NvM_WriteAllDone;
uint8 Appl_NvM_WriteAllTimedOut;
uint8 Appl_NvM_MultiBlockResult;
uint8 Appl_NvM_FeeStatus = 0xFFu;
uint8 Appl_NvM_FeeJobResult = 0xFFu;
uint8 Appl_NvM_FlsStatus = 0xFFu;
uint8 Appl_NvM_FlsJobResult = 0xFFu;
uint8 Appl_NvM_ReadAllIssued = 0u;
uint32 Appl_NvM_BgPollCnt = 0u;
uint32 Appl_NvM_FeeIdleWaitCnt = 0u;
uint8 Appl_NvM_DemDeferred = 0u;
uint8 Appl_NvM_FeeMainJob = 0xFFu;
uint8 Appl_NvM_FeeInitGCState = 0xFFu;
uint8 Appl_NvM_FeePendReq = 0xFFu;
/* T2 helper: ~ms from first CanStack sample to Dem/Dcm ready (SampleCnt*100). */
volatile uint16 Appl_Diag_ReadySampleCnt = 0u;
volatile uint32 Appl_Diag_ReadyApproxMs = 0u;

extern volatile uint16 Appl_Can_SampleCnt;

/* Fee_StateVar lives in Fee_PBcfg.c */
extern Fee_StateDataType Fee_StateVar;

/*
 * Do NOT spin in Default_Init_Task (blocks StartupTwo) and do NOT tight-burst
 * Fls MF in Task_Bsw (async DF0 erase needs wall time; 500x burst → E_OS_LIMIT).
 * Rte already calls Fls@5ms / Fee+NvM@10ms — Background is a light state machine.
 */
#ifndef APPL_NVM_FEE_IDLE_POLL_MAX
#define APPL_NVM_FEE_IDLE_POLL_MAX (64uL) /* quick probe only; GC finishes in BG */
#endif
#ifndef APPL_NVM_READALL_POLL_MAX
#define APPL_NVM_READALL_POLL_MAX (64uL)
#endif

static void Appl_NvM_SampleDrivers(void)
{
  Appl_NvM_FeeStatus = (uint8)Fee_GetStatus();
  Appl_NvM_FeeJobResult = (uint8)Fee_GetJobResult();
  Appl_NvM_FlsStatus = (uint8)Fls_17_Dmu_GetStatus();
  Appl_NvM_FlsJobResult = (uint8)Fls_17_Dmu_GetJobResult();
  Appl_NvM_FeeMainJob = Fee_StateVar.FeeMainJob;
  Appl_NvM_FeeInitGCState = Fee_StateVar.FeeInitGCState;
  Appl_NvM_FeePendReq = Fee_StateVar.FeePendReqStatus;
}

static void Appl_NvM_PollFeeFls(void)
{
  Fls_17_Dmu_MainFunction();
  Fee_MainFunction();
  Appl_NvM_SampleDrivers();
}

static void Appl_NvM_PollMemStack(void)
{
  Fls_17_Dmu_MainFunction();
  Fee_MainFunction();
  NvM_MainFunction();
  Appl_NvM_SampleDrivers();
}

static uint8 Appl_NvM_WaitFeeIdle(void)
{
  uint32 n;
  for (n = 0u; n < APPL_NVM_FEE_IDLE_POLL_MAX; n++)
  {
    Appl_NvM_PollFeeFls();
    Appl_NvM_FeeIdleWaitCnt = n + 1u;
    if (Appl_NvM_FeeStatus == (uint8)MEMIF_IDLE)
    {
      return 1u;
    }
  }
  return 0u;
}

static uint8 Appl_NvM_WaitMultiBlock(void)
{
  NvM_RequestResultType st = NVM_REQ_PENDING;
  uint32 n;
  for (n = 0u; n < APPL_NVM_READALL_POLL_MAX; n++)
  {
    Appl_NvM_PollMemStack();
    (void)NvM_GetErrorStatus(NvMConf___MultiBlockRequest, &st);
    if (st != NVM_REQ_PENDING)
    {
      Appl_NvM_MultiBlockResult = (uint8)st;
      return 1u;
    }
  }
  Appl_NvM_MultiBlockResult = (uint8)st;
  return 0u;
}

void Appl_NvM_InitStackAndReadAll(void)
{
  Appl_NvM_Inited = 0u;
  Appl_NvM_ReadAllDone = 0u;
  Appl_NvM_ReadAllTimedOut = 0u;
  Appl_NvM_ReadAllIssued = 0u;
  Appl_NvM_FeeIdleWaitCnt = 0u;
  Appl_NvM_DemDeferred = 0u;
  Appl_NvM_MultiBlockResult = (uint8)NVM_REQ_PENDING;

  Fls_17_Dmu_Init(&Fls_17_Dmu_Config);
  Fee_Init(&Fee_Config);
  Appl_NvM_SampleDrivers();

  /* Never ReadAll here — InitGC/erase needs cyclic Fls (seconds). NvM_Init only. */
  NvM_Init();
  Appl_NvM_Inited = 1u;
  (void)Appl_NvM_WaitFeeIdle(); /* sample FeeIdleWaitCnt; ignore result */
  Appl_NvM_ReadAllTimedOut = 1u;
  Appl_NvM_DemDeferred = 1u; /* Dem/Dcm after ReadAllDone in Background */
}

void Appl_NvM_Background(void)
{
  NvM_RequestResultType st = NVM_REQ_PENDING;

  Appl_NvM_BgPollCnt++;
  Appl_NvM_SampleDrivers(); /* Rte already ran Fls/Fee/NvM this period */

  if (Appl_NvM_ReadAllDone != 0u)
  {
    if (Appl_NvM_DemDeferred != 0u)
    {
      Dem_Init(NULL_PTR);
      Dcm_Init(NULL_PTR);
      Appl_NvM_DemDeferred = 0u;
      if (Appl_Diag_ReadyApproxMs == 0u)
      {
        Appl_Diag_ReadySampleCnt = Appl_Can_SampleCnt;
        Appl_Diag_ReadyApproxMs = ((uint32)Appl_Can_SampleCnt) * 100uL;
      }
    }
    return;
  }

  if (Appl_NvM_Inited == 0u)
  {
    if (Appl_NvM_FeeStatus == (uint8)MEMIF_IDLE)
    {
      NvM_Init();
      Appl_NvM_Inited = 1u;
    }
    else
    {
      return;
    }
  }

  if ((Appl_NvM_ReadAllIssued == 0u) && (Appl_NvM_FeeStatus == (uint8)MEMIF_IDLE))
  {
    NvM_ReadAll();
    Appl_NvM_ReadAllIssued = 1u;
  }

  if (Appl_NvM_ReadAllIssued != 0u)
  {
    (void)NvM_GetErrorStatus(NvMConf___MultiBlockRequest, &st);
    Appl_NvM_MultiBlockResult = (uint8)st;
    if (st != NVM_REQ_PENDING)
    {
      Appl_NvM_ReadAllDone = 1u;
      Appl_NvM_ReadAllTimedOut = 0u;
      Appl_CarConfig_LoadFromNvM();
      if (Appl_NvM_DemDeferred != 0u)
      {
        Dem_Init(NULL_PTR);
        Dcm_Init(NULL_PTR);
        Appl_NvM_DemDeferred = 0u;
        if (Appl_Diag_ReadyApproxMs == 0u)
        {
          Appl_Diag_ReadySampleCnt = Appl_Can_SampleCnt;
          Appl_Diag_ReadyApproxMs = ((uint32)Appl_Can_SampleCnt) * 100uL;
        }
      }
    }
  }
}

void Appl_NvM_WriteAllSync(void)
{
  Appl_NvM_WriteAllDone = 0u;
  Appl_NvM_WriteAllTimedOut = 0u;
  if (Appl_NvM_Inited == 0u)
  {
    return;
  }

  (void)NvM_WriteAll();
  if (Appl_NvM_WaitMultiBlock() != 0u)
  {
    Appl_NvM_WriteAllDone = 1u;
  }
  else
  {
    Appl_NvM_WriteAllTimedOut = 1u;
  }
}

static void Appl_Prog_MarkRequest(void)
{
  Appl_ProgRequestFlag = APPL_PROG_REQUEST_SET;
  Appl_ProgMagic = APPL_PROG_MAGIC;
  Appl_ProgConditions.ReprogrammingRequest = TRUE;
}

void Appl_BswM_ProgRequest(void)
{
  Appl_Prog_MarkRequest();
}

FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_SetProgConditions(
  Dcm_ProgConditionsPtrType progConditions)
{
  if (progConditions == NULL_PTR)
  {
    return E_NOT_OK;
  }

  Appl_ProgConditions = *progConditions;
  Appl_ProgMagic = APPL_PROG_MAGIC;
  if (progConditions->ReprogrammingRequest != FALSE)
  {
    Appl_ProgRequestFlag = APPL_PROG_REQUEST_SET;
  }
  return E_OK;
}

FUNC(Dcm_EcuStartModeType, DCM_CALLOUT_CODE) Dcm_GetProgConditions(
  Dcm_ProgConditionsPtrType progConditions)
{
  if (progConditions == NULL_PTR)
  {
    return DCM_COLD_START;
  }

  if ((Appl_ProgMagic == APPL_PROG_MAGIC) &&
      ((Appl_ProgRequestFlag == APPL_PROG_REQUEST_SET) ||
       (Appl_ProgConditions.ApplUpdated != FALSE) ||
       (Appl_ProgConditions.ReprogrammingRequest != FALSE)))
  {
    *progConditions = Appl_ProgConditions;
    return DCM_WARM_START;
  }

  progConditions->TesterSourceAddr = 0u;
  progConditions->ProtocolId = 0u;
  progConditions->Sid = 0u;
  progConditions->SubFuncId = 0u;
  progConditions->ReprogrammingRequest = FALSE;
  progConditions->ApplUpdated = FALSE;
  progConditions->ResponseRequired = FALSE;
  return DCM_COLD_START;
}
