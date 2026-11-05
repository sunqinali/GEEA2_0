/**********************************************************************************************************************
 * Appl_Can_HwLoopTimer.c — Can HW loop timeout without OS GetCounterValue (pre-StartOS safe)
 *
 * Primary: STM0 TIM0 @ 100 MHz (BrsHw). Fallback: iteration budget if STM not advancing.
 *********************************************************************************************************************/
#include "Can.h"

/* TC3xx STM0 TIM0 @ 0xF0001010 (not legacy 0xF0000010) */
#define APPL_CAN_STM0_TIM0 (*(volatile uint32 *)(0xF0001010uL))
#define APPL_CAN_TIMEOUT_TICKS (10000000uL) /* 100 ms * 100 MHz — MCMCAN RINIT/RBUSY needs headroom */
/* Fast abort if STM frozen — enough for short CCCR polls, not multi-second hangs */
#define APPL_CAN_SOFT_LOOP_MAX (500000uL)

static uint32 Appl_Can_HwLoopStart[CAN_LOOP_MAX + 1u];
static uint32 Appl_Can_HwLoopIters[CAN_LOOP_MAX + 1u];
static uint8 Appl_Can_HwLoopStmOk[CAN_LOOP_MAX + 1u];

volatile uint32 Appl_Can_HwLoopTimeoutCnt = 0u; /* UDE: increments on each loop abort */

void ApplCanTimerStart(uint8 source)
{
  if (source <= CAN_LOOP_MAX)
  {
    Appl_Can_HwLoopStart[source] = APPL_CAN_STM0_TIM0;
    Appl_Can_HwLoopIters[source] = 0u;
    Appl_Can_HwLoopStmOk[source] = 0u;
  }
}

Can_ReturnType ApplCanTimerLoop(uint8 source)
{
  uint32 now;
  uint32 start;
  uint32 elapsed;

  if (source > CAN_LOOP_MAX)
  {
    return CAN_NOT_OK;
  }

  Appl_Can_HwLoopIters[source]++;
  start = Appl_Can_HwLoopStart[source];
  now = APPL_CAN_STM0_TIM0;
  elapsed = now - start;

  if (elapsed > 0u)
  {
    Appl_Can_HwLoopStmOk[source] = 1u;
  }

  if ((Appl_Can_HwLoopStmOk[source] != 0u) && (elapsed >= APPL_CAN_TIMEOUT_TICKS))
  {
    Appl_Can_HwLoopTimeoutCnt++;
    return CAN_NOT_OK;
  }

  /* STM not moving (or still 0 elapsed): force break so Can_Init cannot hang forever */
  if ((Appl_Can_HwLoopStmOk[source] == 0u) && (Appl_Can_HwLoopIters[source] >= APPL_CAN_SOFT_LOOP_MAX))
  {
    Appl_Can_HwLoopTimeoutCnt++;
    return CAN_NOT_OK;
  }

  return CAN_OK;
}

void ApplCanTimerEnd(uint8 source)
{
  (void)source;
}
