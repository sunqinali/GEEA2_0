/**********************************************************************************************************************
 * Appl_CanTrcv_Smoke.c — TJA1145 board bring-up (QSPI3 CHANNEL8).
 *
 * Watch after download:
 *   Appl_CanTrcv_SmokeOk == 1  → SPI GetOpMode OK
 *   Appl_CanTrcv_LastOpMode    → 0=NORMAL 1=STANDBY 2=SLEEP
 *   Appl_CanTrcv_SpiSeqL/M/N   → Spi_SeqResultType (0=OK)
 * Manual: Appl_CanTrcv_Smoke_SetNormal / _SetStandby / _SetSleep
 *********************************************************************************************************************/
#include "Appl_CanTrcv_Smoke.h"
#include "CanIf.h"
#include "CanIf_Cfg.h"
#include "CanTrcv_30_Tja1145.h"
#include "Spi.h"
#include "Spi_Cfg.h"

volatile uint8 Appl_CanTrcv_LastOpMode = 0xFFu;
volatile Std_ReturnType Appl_CanTrcv_LastRet = E_NOT_OK;
volatile Std_ReturnType Appl_CanTrcv_SetRet = E_NOT_OK;
volatile uint8 Appl_CanTrcv_SpiSeqL = 0xFFu;
volatile uint8 Appl_CanTrcv_SpiSeqM = 0xFFu;
volatile uint8 Appl_CanTrcv_SpiSeqN = 0xFFu;
volatile uint8 Appl_CanTrcv_SmokePhase = 0u;
volatile uint8 Appl_CanTrcv_SmokeOk = 0u;

static uint8 Appl_CanTrcv_DeferredCnt = 0u;
static uint8 Appl_CanTrcv_DeferredDone = 0u;

static void Appl_CanTrcv_Smoke_CaptureSpi(void)
{
  Appl_CanTrcv_SpiSeqL = (uint8)Spi_GetSequenceResult(SpiConf_SpiSequence_SpiSequence_TJA1145_L);
  Appl_CanTrcv_SpiSeqM = (uint8)Spi_GetSequenceResult(SpiConf_SpiSequence_SpiSequence_TJA1145_M);
  Appl_CanTrcv_SpiSeqN = (uint8)Spi_GetSequenceResult(SpiConf_SpiSequence_SpiSequence_TJA1145_N);
}

void Appl_CanTrcv_Smoke_GetMode(void)
{
  CanTrcv_TrcvModeType mode = CANTRCV_TRCVMODE_SLEEP;
  Appl_CanTrcv_LastRet = CanTrcv_30_Tja1145_GetOpMode(0u, &mode);
  Appl_CanTrcv_LastOpMode = (uint8)mode;
  Appl_CanTrcv_Smoke_CaptureSpi();
  Appl_CanTrcv_SmokeOk = (Appl_CanTrcv_LastRet == E_OK) ? 1u : 0u;
}

void Appl_CanTrcv_Smoke_SetNormal(void)
{
  Appl_CanTrcv_SmokePhase = 3u;
  Appl_CanTrcv_SetRet = CanIf_SetTrcvMode(
      CanIfConf_CanIfTrcvCfg_CanIfTrcvCfg_Tja1145, CANTRCV_TRCVMODE_NORMAL);
  Appl_CanTrcv_Smoke_GetMode();
}

void Appl_CanTrcv_Smoke_SetStandby(void)
{
  Appl_CanTrcv_SmokePhase = 3u;
  Appl_CanTrcv_SetRet = CanIf_SetTrcvMode(
      CanIfConf_CanIfTrcvCfg_CanIfTrcvCfg_Tja1145, CANTRCV_TRCVMODE_STANDBY);
  Appl_CanTrcv_Smoke_GetMode();
}

void Appl_CanTrcv_Smoke_SetSleep(void)
{
  Appl_CanTrcv_SmokePhase = 3u;
  Appl_CanTrcv_SetRet = CanIf_SetTrcvMode(
      CanIfConf_CanIfTrcvCfg_CanIfTrcvCfg_Tja1145, CANTRCV_TRCVMODE_SLEEP);
  Appl_CanTrcv_Smoke_GetMode();
}

void Appl_CanTrcv_Smoke_AfterInit(void)
{
  Appl_CanTrcv_SmokePhase = 1u;
  Appl_CanTrcv_Smoke_GetMode();
}

void Appl_CanTrcv_Smoke_DeferredTick(void)
{
  if (Appl_CanTrcv_DeferredDone != 0u)
  {
    return;
  }
  if (Appl_CanTrcv_DeferredCnt < 10u) /* ~1s if called from 100ms task */
  {
    Appl_CanTrcv_DeferredCnt++;
    return;
  }
  Appl_CanTrcv_DeferredDone = 1u;
  Appl_CanTrcv_SmokePhase = 2u;
  /* Read mode after CanSM/ComM FULL path has had time to run. */
  Appl_CanTrcv_Smoke_GetMode();
  /* Keep SetRet in the map (debugger watch) even if no manual Set* yet. */
  if (Appl_CanTrcv_SetRet == E_OK)
  {
    /* no-op: touch only */
  }
}
