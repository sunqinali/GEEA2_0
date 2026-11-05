# AfterGenerate: keep SystemTimer_Core2 FRT data regs on RAM shim (STM2 MMIO stalls Core2 StartOS).
from pathlib import Path

LCFG = Path(__file__).resolve().parent.parent / "Appl" / "GenData" / "Os_Hal_Timer_Lcfg.c"
MARKER = "Appl_Os_FrtShim_TIM0"
SHIM_BLOCK = r'''
/* Bring-up: Core2 StartOS hangs in Os_Hal_TimerFrtInit on real STM2 MMIO (SlavePhase[2]=6).
 * Point FRT data regs at RAM shim; keep real SRC so init still programs the interrupt line.
 * Soft-tick Task_Appl_100ms from Core0 until a working HW counter is restored. */
extern volatile uint32 Appl_Os_FrtShim_TIM0;
extern volatile uint32 Appl_Os_FrtShim_CMP0;
extern volatile uint32 Appl_Os_FrtShim_CMCON;
extern volatile uint32 Appl_Os_FrtShim_ICR;

/*! HAL timer configuration data: SystemTimer_Core2 */
CONST(Os_Hal_TimerFrtConfigType, OS_CONST) OsCfg_Hal_TimerFrt_SystemTimer_Core2 =

{
  /* CounterRegisterAddress            = */ (uint32)&Appl_Os_FrtShim_TIM0, /* PRQA S 0306 */ /* MD_Os_Hal_Rule11.4_0306 */
  /* CompareRegisterAddress            = */ (uint32)&Appl_Os_FrtShim_CMP0, /* PRQA S 0306 */ /* MD_Os_Hal_Rule11.4_0306 */
  /* CMCONRegisterAddress              = */ (uint32)&Appl_Os_FrtShim_CMCON, /* PRQA S 0306 */ /* MD_Os_Hal_Rule11.4_0306 */
  /* CMCONMask                         = */ OS_HAL_TIMER_STM_CMCON_USE_CMP0_MASK,
  /* CMCONValue                        = */ OS_HAL_TIMER_STM_CMCON_USE_CMP0_VALUE,
  /* InterruptSRCRegisterAddress       = */ OS_HAL_INT_SRC_BASE + OS_HAL_INT_SRC_STM2_CH0_OFFSET,
  /* ICRRegisterAddress                = */ (uint32)&Appl_Os_FrtShim_ICR, /* PRQA S 0306 */ /* MD_Os_Hal_Rule11.4_0306 */
  /* ICRMask                           = */ OS_HAL_TIMER_STM_ICR_USE_CMP0_MASK,
  /* ICRValue                          = */ OS_HAL_TIMER_STM_ICR_USE_CMP0_VALUE,
  /* ReloadValue                       = */ 0
}
;
'''

def main() -> None:
    text = LCFG.read_text(encoding="utf-8", errors="replace")
    if MARKER in text:
        print("FRT shim already present")
        return
    start = text.find("/*! HAL timer configuration data: SystemTimer_Core2 */")
    if start < 0:
        raise SystemExit("SystemTimer_Core2 block not found")
    end = text.find("#define OS_STOP_SEC_CORE2_CONST_UNSPECIFIED", start)
    if end < 0:
        raise SystemExit("CORE2 stop section not found")
    LCFG.write_text(text[:start] + SHIM_BLOCK.lstrip() + "\n" + text[end:], encoding="utf-8")
    print("patched", LCFG)

if __name__ == "__main__":
    main()
