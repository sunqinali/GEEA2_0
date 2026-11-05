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
 *              File: Os_Callout_Stubs.c
 *   Generation Time: 2026-10-30 22:32:05
 *           Project: IEM_TC387_BRS - Version 1
 *          Delivery: CBD2000642_D01
 *      Tool Version: DaVinci Configurator  5.22.45 SP3
 *
 *
 *********************************************************************************************************************/

#define OS_CALLOUT_STUBS_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

#include "Os.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK OS_Callout_Stubs_Include>
 *********************************************************************************************************************/
#include "EcuM.h"

/* Bring-up diagnostics — watch these in UDE when ErrorHook spins */
volatile uint8 Appl_Os_ErrorHookCnt = 0u;
volatile StatusType Appl_Os_ErrorStatus = (StatusType)0u;
volatile OSServiceIdType Appl_Os_ErrorService = (OSServiceIdType)0u;
volatile Os_StatusType Appl_Os_ErrorDetailed = (Os_StatusType)0u;
volatile uint8 Appl_Os_ErrorCoreId = 0xFFu;
volatile uint8 Appl_Os_StartOsEntered = 0u;
volatile uint8 Appl_Os_StartCoreMask = 0u;
volatile StatusType Appl_Os_StartCoreStatus[4] = {0xFFu, 0xFFu, 0xFFu, 0xFFu};
/* DriverInitOne phase: see EcuM_Callout_Stubs breadcrumbs */
volatile uint8 Appl_Os_InitPhase = 0u;
volatile uint8 Appl_Os_GetDetErr = 0u;
/* Per-core slave bring-up: 1=past BIV 2=PreMain 3=main 4=Os_Init done 5=EcuM_StartOS 6=StartOS call */
volatile uint8 Appl_Os_SlavePhase[4] = {0u, 0u, 0u, 0u};
/* Bitmask of cores that reached StartOS() call (bit0=Core0 … bit3=Core3) */
volatile uint8 Appl_Os_StartOsMask = 0u;
/* Latched SCU_RSTSTAT @ StageZero. TC3xx: SMU≈bit3, SW=bit4, PORST=bit16 (sticky). */
volatile uint32 Appl_Os_RstStat = 0u;
/* BswM EcuMMode port after Trusted notify (expect ECUM_STATE_RUN=0x30). */
volatile uint8 Appl_BswM_EcuMMode = 0u;
volatile uint8 Appl_BswM_Initialized = 0u;
volatile uint8 Appl_BswM_PreInitOk = 0u;
volatile uint8 Appl_BswM_KickDone = 0u;
volatile uint8 Appl_BswM_InitFallback = 0u;
volatile uint8 Appl_BswM_DetApi = 0u;
volatile uint8 Appl_BswM_DetErr = 0u;
/* STM2_CLC / TIM0 probed on Core0 only (Core2 MMIO may bus-stall). */
volatile uint32 Appl_Os_Stm2ClcBefore = 0xFFFFFFFFuL;
volatile uint32 Appl_Os_Stm2Tim0Probe = 0uL;
/* RAM stand-in for SystemTimer_Core2 FRT regs — real STM2 FrtInit stalls Core2 StartOS. */
volatile uint32 Appl_Os_FrtShim_TIM0 = 0uL;
volatile uint32 Appl_Os_FrtShim_CMP0 = 0uL;
volatile uint32 Appl_Os_FrtShim_CMCON = 0uL;
volatile uint32 Appl_Os_FrtShim_ICR = 0uL;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  StartupHook()
 *********************************************************************************************************************/
#if OS_CFG_STARTUPHOOK_SYSTEM == STD_ON
# define OS_START_SEC_STARTUPHOOK_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(void, OS_STARTUPHOOK_CODE) StartupHook(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK OS_Callout_Stubs_StartupHook>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

}

# define OS_STOP_SEC_STARTUPHOOK_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
#endif /* OS_CFG_STARTUPHOOK_SYSTEM */


/**********************************************************************************************************************
 *  ShutdownHook()
 *********************************************************************************************************************/
#if OS_CFG_SHUTDOWNHOOK_SYSTEM == STD_ON
# define OS_START_SEC_SHUTDOWNHOOK_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(void, OS_SHUTDOWNHOOK_CODE) ShutdownHook(StatusType Fatalerror)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK OS_Callout_Stubs_ShutdownHook>
 *********************************************************************************************************************/
  EcuM_Shutdown();
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

}

# define OS_STOP_SEC_SHUTDOWNHOOK_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
#endif /* OS_CFG_SHUTDOWNHOOK_SYSTEM */


/**********************************************************************************************************************
 *  ErrorHook()
 *********************************************************************************************************************/
#if OS_CFG_ERRORHOOK_SYSTEM == STD_ON
# define OS_START_SEC_ERRORHOOK_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(void, OS_ERRORHOOK_CODE) ErrorHook(StatusType Error)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK OS_Callout_Stubs_ErrorHook>
 *********************************************************************************************************************/
  Os_ErrorInformationType CurrentError;
  Os_StatusType detSt;

  /* Latch first error only — do NOT spin. E_OS_NOFUNC(5) on CancelAlarm is benign. */
  if (Appl_Os_ErrorHookCnt == 0u)
  {
    Appl_Os_ErrorStatus = Error;
    Appl_Os_ErrorService = OSErrorGetServiceId();
    detSt = Os_GetDetailedError(&CurrentError);
    Appl_Os_GetDetErr = (uint8)detSt;
    if (detSt == OS_STATUS_OK)
    {
      Appl_Os_ErrorService = CurrentError.Service;
      Appl_Os_ErrorDetailed = CurrentError.DetailedError;
    }
    Appl_Os_ErrorCoreId = (uint8)GetCoreID();
  }
  if (Error != E_OS_NOFUNC)
  {
    Appl_Os_ErrorHookCnt++;
  }
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

}

# define OS_STOP_SEC_ERRORHOOK_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
#endif /* OS_CFG_ERRORHOOK_SYSTEM */


/**********************************************************************************************************************
 *  ProtectionHook()
 *********************************************************************************************************************/
#if OS_CFG_PROTECTIONHOOK_SYSTEM == STD_ON
# define OS_START_SEC_PROTECTIONHOOK_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(ProtectionReturnType, OS_PROTECTIONHOOK_CODE) ProtectionHook(StatusType Fatalerror)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK OS_Callout_Stubs_ProtectionHook>
 *********************************************************************************************************************/
  return PRO_SHUTDOWN;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

}

# define OS_STOP_SEC_PROTECTIONHOOK_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
#endif /* OS_CFG_PROTECTIONHOOK_SYSTEM */


/**********************************************************************************************************************
 *  PreTaskHook()
 *********************************************************************************************************************/
#if OS_CFG_PRETASKHOOK == STD_ON
# define OS_START_SEC_PRETASKHOOK_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(void, OS_PRETASKHOOK_CODE) PreTaskHook(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK OS_Callout_Stubs_PreTaskHook>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

}

# define OS_STOP_SEC_PRETASKHOOK_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
#endif /* OS_CFG_PRETASKHOOK */


/**********************************************************************************************************************
 *  PostTaskHook()
 *********************************************************************************************************************/
#if OS_CFG_POSTTASKHOOK == STD_ON
# define OS_START_SEC_POSTTASKHOOK_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(void, OS_POSTTASKHOOK_CODE) PostTaskHook(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK OS_Callout_Stubs_PostTaskHook>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

}

# define OS_STOP_SEC_POSTTASKHOOK_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
#endif /* OS_CFG_POSTTASKHOOK */


/**********************************************************************************************************************
 *  Os_PanicHook()
 *********************************************************************************************************************/
#if OS_CFG_PANICHOOK == STD_ON
# define OS_START_SEC_PANICHOOK_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(void, OS_PANICHOOK_CODE) Os_PanicHook(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK OS_Callout_Stubs_PanicHook>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

}

# define OS_STOP_SEC_PANICHOOK_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
#endif /* OS_CFG_PANICHOOK */



/* Unrecognized User Blocks */
#if 0
#endif


/**********************************************************************************************************************
 *  END OF FILE: Os_Callout_Stubs.c
 *********************************************************************************************************************/
