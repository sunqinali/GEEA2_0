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
 *              File: Os_Hal_MemoryProtection_Lcfg.c
 *   Generation Time: 2026-11-05 20:21:51
 *           Project: IEM_TC387_BRS - Version 1
 *          Delivery: CBD2000642_D01
 *      Tool Version: DaVinci Configurator  5.22.45 SP3
 *
 *
 *********************************************************************************************************************/

/* PRQA S 0777, 0779, 0828 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2, MD_MSR_Dir1.1 */

#define OS_HAL_MEMORYPROTECTION_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Hal_MemoryProtection_Cfg.h"
#include "Os_Hal_MemoryProtection_Lcfg.h"
#include "Os_Hal_MemoryProtection.h"

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

/*! HAL memory protection configuration data: OsCore0 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore0_DataRegions[4];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore0_DataRegions[4] =
{
  {
    /* MPU region: Stack region */
    /* .StartAddress  = */ (uint32)0x0uL,  /* PRQA S 0306 */ /* MD_Os_Hal_Rule11.4_0306 */
    /* .EndAddress    = */ (uint32)0x0uL  /* PRQA S 0306 */ /* MD_Os_Hal_Rule11.4_0306 */
  },
  {
    /* MPU region: READ_ALL_Core0 */
    /* .StartAddress  = */ (uint32)0x00000000uL,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)0xFFFFFFF8uL  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
  {
    /* MPU region: TRUSTED_WRITE_SPR_Core0 */
    /* .StartAddress  = */ (uint32)&_OS_CORE0_STACKS_END,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)0x7FFFFFF8uL  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
  {
    /* MPU region: TRUSTED_WRITE_ALL_Core0 */
    /* .StartAddress  = */ (uint32)0x80000000uL,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)0xFFFFFFF8uL  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
};
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore0_CodeRegions[1];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore0_CodeRegions[1] =
{
  {
    /* MPU region: EXC_ALL_Core0 */
    /* .StartAddress  = */ (uint32)0x00000000uL,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)0xFFFFFFF8uL  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
};
CONST(Os_Hal_MpCoreConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore0 =
{
  /* .MpuDataRegionStartSlot           = */ 0,
  /* .MpuDataRegionCount               = */ 4,
  /* .MpuDataRegions                   = */ OsCfg_Hal_Mp_OsCore0_DataRegions,
  {
  /* Read access bit mask */
  /* MpuDataRegionReadEnablePS0        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionReadEnablePS1        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionReadEnablePS2        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionReadEnablePS3        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionReadEnablePS4        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionReadEnablePS5        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  },
  {
  /* Write access bit mask */
  /* MpuDataRegionWriteEnablePS0       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionWriteEnablePS1       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionWriteEnablePS2       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionWriteEnablePS3       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionWriteEnablePS4       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionWriteEnablePS5       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  },
  
  /* .MpuCodeRegionStartSlot           = */ 0,
  /* .MpuCodeRegionCount               = */ 1,
  /* .MpuCodeRegions                   = */ OsCfg_Hal_Mp_OsCore0_CodeRegions,
  {
  /* Execution right bit mask */
  /* MpuCodeRegionExecutionEnablePS0   = */ 0uL | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS1   = */ 0uL | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS2   = */ 0uL | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS3   = */ 0uL | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS4   = */ 0uL | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS5   = */ 0uL | OS_HAL_COREMPU_ENABLE_REGION0,
  }
};

/*! HAL memory protection configuration data: OsApplication */
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_OsApplication =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: SystemApplication_OsCore0 */
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_SystemApplication_OsCore0 =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: CanIsr_3 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_3 =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: CounterIsr_SystemTimer */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CounterIsr_SystemTimer =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Default_Init_Task */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_Init_Task =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Default_Init_Task_Trusted */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_Init_Task_Trusted =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: IdleTask_Core0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_IdleTask_Core0 =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_Bsw_10ms */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_Bsw_10ms =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_Com_5ms */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_Com_5ms =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_CORE1_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! HAL memory protection configuration data: OsCore1 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore1_DataRegions[4];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore1_DataRegions[4] =
{
  {
    /* MPU region: Stack region */
    /* .StartAddress  = */ (uint32)0x0uL,  /* PRQA S 0306 */ /* MD_Os_Hal_Rule11.4_0306 */
    /* .EndAddress    = */ (uint32)0x0uL  /* PRQA S 0306 */ /* MD_Os_Hal_Rule11.4_0306 */
  },
  {
    /* MPU region: READ_ALL_Core1 */
    /* .StartAddress  = */ (uint32)0x00000000uL,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)0xFFFFFFF8uL  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
  {
    /* MPU region: TRUSTED_WRITE_SPR_Core1 */
    /* .StartAddress  = */ (uint32)&_OS_CORE1_STACKS_END,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)0x7FFFFFF8uL  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
  {
    /* MPU region: TRUSTED_WRITE_ALL_Core1 */
    /* .StartAddress  = */ (uint32)0x80000000uL,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)0xFFFFFFF8uL  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
};
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore1_CodeRegions[1];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore1_CodeRegions[1] =
{
  {
    /* MPU region: EXC_ALL_Core1 */
    /* .StartAddress  = */ (uint32)0x00000000uL,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)0xFFFFFFF8uL  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
};
CONST(Os_Hal_MpCoreConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore1 =
{
  /* .MpuDataRegionStartSlot           = */ 0,
  /* .MpuDataRegionCount               = */ 4,
  /* .MpuDataRegions                   = */ OsCfg_Hal_Mp_OsCore1_DataRegions,
  {
  /* Read access bit mask */
  /* MpuDataRegionReadEnablePS0        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionReadEnablePS1        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionReadEnablePS2        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionReadEnablePS3        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionReadEnablePS4        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionReadEnablePS5        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  },
  {
  /* Write access bit mask */
  /* MpuDataRegionWriteEnablePS0       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionWriteEnablePS1       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionWriteEnablePS2       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionWriteEnablePS3       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionWriteEnablePS4       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionWriteEnablePS5       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  },
  
  /* .MpuCodeRegionStartSlot           = */ 0,
  /* .MpuCodeRegionCount               = */ 1,
  /* .MpuCodeRegions                   = */ OsCfg_Hal_Mp_OsCore1_CodeRegions,
  {
  /* Execution right bit mask */
  /* MpuCodeRegionExecutionEnablePS0   = */ 0uL | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS1   = */ 0uL | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS2   = */ 0uL | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS3   = */ 0uL | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS4   = */ 0uL | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS5   = */ 0uL | OS_HAL_COREMPU_ENABLE_REGION0,
  }
};

/*! HAL memory protection configuration data: OsApplication_Core1 */
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_OsApplication_Core1 =
{
  /* .ProtectionSet                   = */ 5,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: SystemApplication_OsCore1 */
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_SystemApplication_OsCore1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Default_Init_Task_Core1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_Init_Task_Core1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Default_Init_Task_Core1_Trusted */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_Init_Task_Core1_Trusted =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: IdleTask_Core1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_IdleTask_Core1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_EcuM_Core1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_EcuM_Core1 =
{
  /* .ProtectionSet                   = */ 5,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

#define OS_STOP_SEC_CORE1_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_CORE2_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! HAL memory protection configuration data: OsCore2 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore2_DataRegions[4];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore2_DataRegions[4] =
{
  {
    /* MPU region: Stack region */
    /* .StartAddress  = */ (uint32)0x0uL,  /* PRQA S 0306 */ /* MD_Os_Hal_Rule11.4_0306 */
    /* .EndAddress    = */ (uint32)0x0uL  /* PRQA S 0306 */ /* MD_Os_Hal_Rule11.4_0306 */
  },
  {
    /* MPU region: READ_ALL_Core2 */
    /* .StartAddress  = */ (uint32)0x00000000uL,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)0xFFFFFFF8uL  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
  {
    /* MPU region: TRUSTED_WRITE_SPR_Core2 */
    /* .StartAddress  = */ (uint32)&_OS_CORE2_STACKS_END,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)0x7FFFFFF8uL  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
  {
    /* MPU region: TRUSTED_WRITE_ALL_Core2 */
    /* .StartAddress  = */ (uint32)0x80000000uL,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)0xFFFFFFF8uL  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
};
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore2_CodeRegions[1];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore2_CodeRegions[1] =
{
  {
    /* MPU region: EXC_ALL_Core2 */
    /* .StartAddress  = */ (uint32)0x00000000uL,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)0xFFFFFFF8uL  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
};
CONST(Os_Hal_MpCoreConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore2 =
{
  /* .MpuDataRegionStartSlot           = */ 0,
  /* .MpuDataRegionCount               = */ 4,
  /* .MpuDataRegions                   = */ OsCfg_Hal_Mp_OsCore2_DataRegions,
  {
  /* Read access bit mask */
  /* MpuDataRegionReadEnablePS0        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionReadEnablePS1        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionReadEnablePS2        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionReadEnablePS3        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionReadEnablePS4        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionReadEnablePS5        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  },
  {
  /* Write access bit mask */
  /* MpuDataRegionWriteEnablePS0       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionWriteEnablePS1       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionWriteEnablePS2       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionWriteEnablePS3       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionWriteEnablePS4       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionWriteEnablePS5       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  },
  
  /* .MpuCodeRegionStartSlot           = */ 0,
  /* .MpuCodeRegionCount               = */ 1,
  /* .MpuCodeRegions                   = */ OsCfg_Hal_Mp_OsCore2_CodeRegions,
  {
  /* Execution right bit mask */
  /* MpuCodeRegionExecutionEnablePS0   = */ 0uL | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS1   = */ 0uL | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS2   = */ 0uL | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS3   = */ 0uL | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS4   = */ 0uL | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS5   = */ 0uL | OS_HAL_COREMPU_ENABLE_REGION0,
  }
};

/*! HAL memory protection configuration data: OsApplication_Core2 */
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_OsApplication_Core2 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: SystemApplication_OsCore2 */
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_SystemApplication_OsCore2 =
{
  /* .ProtectionSet                   = */ 2,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Isr_SystemTimer_Core2 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Isr_SystemTimer_Core2 =
{
  /* .ProtectionSet                   = */ 2,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Default_Init_Task_Core2 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_Init_Task_Core2 =
{
  /* .ProtectionSet                   = */ 2,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Default_Init_Task_Core2_Trusted */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_Init_Task_Core2_Trusted =
{
  /* .ProtectionSet                   = */ 2,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: IdleTask_Core2 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_IdleTask_Core2 =
{
  /* .ProtectionSet                   = */ 2,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_Appl_100ms */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_Appl_100ms =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_Appl_10ms */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_Appl_10ms =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

#define OS_STOP_SEC_CORE2_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_CORE3_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! HAL memory protection configuration data: OsCore3 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore3_DataRegions[4];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore3_DataRegions[4] =
{
  {
    /* MPU region: Stack region */
    /* .StartAddress  = */ (uint32)0x0uL,  /* PRQA S 0306 */ /* MD_Os_Hal_Rule11.4_0306 */
    /* .EndAddress    = */ (uint32)0x0uL  /* PRQA S 0306 */ /* MD_Os_Hal_Rule11.4_0306 */
  },
  {
    /* MPU region: READ_ALL_Core3 */
    /* .StartAddress  = */ (uint32)0x00000000uL,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)0xFFFFFFF8uL  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
  {
    /* MPU region: TRUSTED_WRITE_SPR_Core3 */
    /* .StartAddress  = */ (uint32)&_OS_CORE3_STACKS_END,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)0x7FFFFFF8uL  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
  {
    /* MPU region: TRUSTED_WRITE_ALL_Core3 */
    /* .StartAddress  = */ (uint32)0x80000000uL,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)0xFFFFFFF8uL  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
};
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore3_CodeRegions[1];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore3_CodeRegions[1] =
{
  {
    /* MPU region: EXC_ALL_Core3 */
    /* .StartAddress  = */ (uint32)0x00000000uL,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)0xFFFFFFF8uL  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
};
CONST(Os_Hal_MpCoreConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore3 =
{
  /* .MpuDataRegionStartSlot           = */ 0,
  /* .MpuDataRegionCount               = */ 4,
  /* .MpuDataRegions                   = */ OsCfg_Hal_Mp_OsCore3_DataRegions,
  {
  /* Read access bit mask */
  /* MpuDataRegionReadEnablePS0        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionReadEnablePS1        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionReadEnablePS2        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionReadEnablePS3        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionReadEnablePS4        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionReadEnablePS5        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  },
  {
  /* Write access bit mask */
  /* MpuDataRegionWriteEnablePS0       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionWriteEnablePS1       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionWriteEnablePS2       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionWriteEnablePS3       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionWriteEnablePS4       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  /* MpuDataRegionWriteEnablePS5       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3,
  },
  
  /* .MpuCodeRegionStartSlot           = */ 0,
  /* .MpuCodeRegionCount               = */ 1,
  /* .MpuCodeRegions                   = */ OsCfg_Hal_Mp_OsCore3_CodeRegions,
  {
  /* Execution right bit mask */
  /* MpuCodeRegionExecutionEnablePS0   = */ 0uL | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS1   = */ 0uL | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS2   = */ 0uL | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS3   = */ 0uL | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS4   = */ 0uL | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS5   = */ 0uL | OS_HAL_COREMPU_ENABLE_REGION0,
  }
};

/*! HAL memory protection configuration data: OsApplication_Core3 */
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_OsApplication_Core3 =
{
  /* .ProtectionSet                   = */ 5,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: SystemApplication_OsCore3 */
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_SystemApplication_OsCore3 =
{
  /* .ProtectionSet                   = */ 3,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Default_Init_Task_Core3 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_Init_Task_Core3 =
{
  /* .ProtectionSet                   = */ 3,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Default_Init_Task_Core3_Trusted */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_Init_Task_Core3_Trusted =
{
  /* .ProtectionSet                   = */ 3,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: IdleTask_Core3 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_IdleTask_Core3 =
{
  /* .ProtectionSet                   = */ 3,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_EcuM_Core3 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_EcuM_Core3 =
{
  /* .ProtectionSet                   = */ 5,
  
  /* .MpuDataRegionStartSlot          = */ 4,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

#define OS_STOP_SEC_CORE3_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! HAL memory protection configuration data: SystemMpu */
CONST(Os_Hal_MpSystemConfigType, OS_CONST) OsCfg_Hal_Mp_SystemMpu =
{
  /* .SysMpuId  = */ 0
};

/*! HAL memory protection configuration data: EmptyThread */

CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_EmptyThread =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 0,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL
};

#define OS_STOP_SEC_CONST_UNSPECIFIED
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
 *  END OF FILE: Os_Hal_MemoryProtection_Lcfg.c
 *********************************************************************************************************************/
