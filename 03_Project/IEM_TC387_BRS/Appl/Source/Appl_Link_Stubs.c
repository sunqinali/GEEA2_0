/**********************************************************************************************************************
 * Minimal link stubs for IEM_TC387_BRS Tasking bring-up
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "Dcm.h"
#include "Os.h"
#include "Appl_CanTrcv_Smoke.h"
#include "Appl_CanStack_Status.h"
/* Dcm_Set/GetProgConditions live in Appl_BswM_ProgRequest.c */

/* Heartbeat: Task_Appl_100ms runs on Core2 (alarm autostart). Do NOT call BSW APIs here. */
volatile uint16 Appl_Core2_Tick100ms = 0u;

/* CAN Driver expects UsedCore selector; map all CAN IRQs to core 0 for bring-up. */
uint8 Can_GetkCanUsedCore(void)
{
  return 0u;
}

/* SPI MainFunction not built when MCAL is sync-only; RTE still schedules it from Task_Bsw_10ms (Core0).
 * Use as Core0 10 ms tick for smoke / CanStack sampling (same core as ComM/CanSM/CanIf). */
void Spi_MainFunction_Handling(void)
{
  static uint8 s_div10 = 0u;

  s_div10++;
  if (s_div10 >= 10u) /* ~100 ms */
  {
    s_div10 = 0u;
    Appl_CanTrcv_Smoke_DeferredTick();
    Appl_CanStack_Status_Sample();
  }
}

/* DCM callouts */
FUNC(void, DCM_CALLOUT_CODE) Dcm_Confirmation(
  Dcm_IdContextType idContext,
  PduIdType dcmRxPduId,
  Dcm_ConfirmationStatusType status)
{
  (void)idContext;
  (void)dcmRxPduId;
  (void)status;
}

/* Core2 heartbeat only — BSW sampling moved to Spi_MainFunction_Handling (Core0). */
TASK(Task_Appl_100ms)
{
  Appl_Core2_Tick100ms++;
  (void)TerminateTask();
}
