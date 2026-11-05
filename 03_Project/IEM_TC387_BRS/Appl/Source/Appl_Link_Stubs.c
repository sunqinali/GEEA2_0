/**********************************************************************************************************************
 * Minimal link stubs for IEM_TC387_BRS Tasking bring-up
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "Dcm.h"
#include "Os.h"
#include "Can.h"
#include "Appl_CanTrcv_Smoke.h"
#include "Appl_CanStack_Status.h"
#include "Appl_NvM_Buffers.h"
#include "SchM_Fls_17_Dmu.h"
#include "SchM_Fee.h"
/* Dcm_Set/GetProgConditions live in Appl_BswM_ProgRequest.c */

/* Heartbeat: Task_Appl_100ms runs on Core2 (alarm autostart). Do NOT call BSW APIs here. */
volatile uint16 Appl_Core2_Tick100ms = 0u;
/* Bring-up: Cat2 CanIsr_3 pending (SRC SRR/IOV, RXF0 full) but not draining — poll CanInterrupt. */
volatile uint16 Appl_Can_IrqPollCnt = 0u;
volatile uint16 Appl_Can_IrqPollHit = 0u;

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

  /* FLS_USE_INTERRUPTS=OFF: drive Fls+Fee every Spi step (Rte Fee only on Bsw steps 0/2). */
  Fls_17_Dmu_MainFunction();
  Fee_MainFunction();
  /* Light NvM state machine every Spi tick. No Fls burst. */
  Appl_NvM_Background();

  /* Drain M_CAN RX FIFO from task if Cat2 ISR is not servicing (SRC@0xF00385BC SRR stuck). */
  {
    uint32 ir = *(volatile uint32 *)0xF0208E50uL;
    uint32 rxf0s = *(volatile uint32 *)0xF0208EA4uL;
    Appl_Can_IrqPollCnt++;
    if (((ir & 0x1uL) != 0uL) || ((rxf0s & 0x7FuL) != 0uL))
    {
      CanInterrupt();
      Appl_Can_IrqPollHit++;
    }
  }

  s_div10++;
  if (s_div10 >= 10u) /* ~100 ms */
  {
    s_div10 = 0u;
    Appl_CanTrcv_Smoke_DeferredTick();
    Appl_CanStack_Status_Sample();
    /* No cross-core ActivateTask (E_OS_SYS_FUNCTION_UNAVAILABLE / no XSignal).
     * FRT shim → Core2 Appl alarms never fire; count 100ms here as bring-up heartbeat.
     * Core2 alive proof remains Appl_Os_SlavePhase[2]==9. */
    Appl_Core2_Tick100ms++;
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

/* Core2 Appl 100ms — unused while SystemTimer_Core2 is RAM-shimmed. */
TASK(Task_Appl_100ms)
{
  (void)TerminateTask();
}
