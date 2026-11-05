/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Os
 *           Program: MSR_Vector_SLP4
 *          Customer: Aptiv (China) Technology Company Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397 
 *    License Scope : The usage is restricted to CBD2000642_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Os_Hal_Timer_Lcfg.c
 *   Generation Time: 2026-11-05 20:21:51
 *           Project: IEM_TC387_BRS - Version 1
 *          Delivery: CBD2000642_D01
 *      Tool Version: DaVinci Configurator  5.22.45 SP3
 *
 *
 *********************************************************************************************************************/

/* PRQA S 0777, 0779, 0828 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2, MD_MSR_Dir1.1 */

#define OS_HAL_TIMER_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Hal_Timer_Lcfg.h"
#include "Os_Hal_Timer.h"

/* Os kernel module dependencies */

/* Os hal dependencies */


/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! HAL timer configuration data: SystemTimer */
CONST(Os_Hal_TimerPitConfigType, OS_CONST) OsCfg_Hal_TimerPit_SystemTimer =
{
  /* CounterRegisterAddress            = */ OS_HAL_TIMER_GPT_BASE + OS_HAL_TIMER_GPT_T3_OFFSET,
  /* CounterConfRegisterAddress        = */ OS_HAL_TIMER_GPT_BASE + OS_HAL_TIMER_GPT_T3CON_OFFSET,
  /* CounterConfRegisterValue          = */ OS_HAL_TIMER_GPT_T3CON_COUNTING_DOWN | OS_HAL_TIMER_GPT_T3CON_T3R,  /* set the timer to counting down and start it. T3 is running at F(GPT)/8 */
  /* ReloadRegisterAddress             = */ OS_HAL_TIMER_GPT_BASE + OS_HAL_TIMER_GPT_T2_OFFSET,
  /* ReloadConfRegisterAddress         = */ OS_HAL_TIMER_GPT_BASE + OS_HAL_TIMER_GPT_T2CON_OFFSET,
  /* ReloadConfRegisterValue           = */ OS_HAL_TIMER_GPT_T2CON_USE_AS_RELOAD,
  /* ReloadValue                       = */ 12500,
  /* InterruptSRCRegisterAddress       = */ OS_HAL_INT_SRC_BASE + OS_HAL_INT_SRC_GPT_CH0_OFFSET,
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_CORE1_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#define OS_STOP_SEC_CORE1_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_CORE2_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

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

#define OS_STOP_SEC_CORE2_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_CORE3_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#define OS_STOP_SEC_CORE3_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  END OF FILE: Os_Hal_Timer_Lcfg.c
 *********************************************************************************************************************/
