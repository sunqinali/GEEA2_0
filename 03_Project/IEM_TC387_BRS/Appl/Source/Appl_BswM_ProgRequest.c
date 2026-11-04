/**********************************************************************************************************************
 * ProgRequest / Dcm ProgConditions + NvM stack bring-up helpers
 *********************************************************************************************************************/
#include "Appl_BswM_ProgRequest.h"
#include "Appl_NvM_Buffers.h"
#include "Dcm.h"
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

uint8 Appl_NvM_Inited;
uint8 Appl_NvM_ReadAllDone;
uint8 Appl_NvM_ReadAllTimedOut;
uint8 Appl_NvM_WriteAllDone;
uint8 Appl_NvM_WriteAllTimedOut;
uint8 Appl_NvM_MultiBlockResult;

/* Poll budget: enough for Fee GC + ReadAll on target; no-board must not hang forever. */
#ifndef APPL_NVM_POLL_MAX
#define APPL_NVM_POLL_MAX (200000u)
#endif

static void Appl_NvM_PollMemStack(void)
{
  NvM_MainFunction();
  Fee_MainFunction();
  Fls_17_Dmu_MainFunction();
}

static uint8 Appl_NvM_WaitFeeIdle(void)
{
  uint32 n;
  for (n = 0u; n < APPL_NVM_POLL_MAX; n++)
  {
    if (Fee_GetStatus() == MEMIF_IDLE)
    {
      return 1u;
    }
    Appl_NvM_PollMemStack();
  }
  return 0u;
}

static uint8 Appl_NvM_WaitMultiBlock(void)
{
  NvM_RequestResultType st = NVM_REQ_PENDING;
  uint32 n;
  for (n = 0u; n < APPL_NVM_POLL_MAX; n++)
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
  Appl_NvM_MultiBlockResult = (uint8)NVM_REQ_PENDING;

  Fls_17_Dmu_Init(&Fls_17_Dmu_Config);
  Fee_Init(&Fee_Config);
  if (Appl_NvM_WaitFeeIdle() == 0u)
  {
    Appl_NvM_ReadAllTimedOut = 1u;
    return;
  }

  NvM_Init();
  Appl_NvM_Inited = 1u;

  (void)NvM_ReadAll();
  if (Appl_NvM_WaitMultiBlock() != 0u)
  {
    Appl_NvM_ReadAllDone = 1u;
  }
  else
  {
    Appl_NvM_ReadAllTimedOut = 1u;
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
