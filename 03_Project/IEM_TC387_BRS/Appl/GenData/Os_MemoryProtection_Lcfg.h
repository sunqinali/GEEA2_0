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
 *              File: Os_MemoryProtection_Lcfg.h
 *   Generation Time: 2026-11-05 20:21:52
 *           Project: IEM_TC387_BRS - Version 1
 *          Delivery: CBD2000642_D01
 *      Tool Version: DaVinci Configurator  5.22.45 SP3
 *
 *
 *********************************************************************************************************************/


                                                                                                                        /* PRQA S 0388  EOF */ /* MD_MSR_Dir1.1 */

#ifndef OS_MEMORYPROTECTION_LCFG_H
# define OS_MEMORYPROTECTION_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_MemoryProtection_Types.h"

/* Os kernel module dependencies */

/* Os hal dependencies */


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA PROTOTYPES
 *********************************************************************************************************************/

# define OS_START_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Memory protection configuration data */
extern CONST(Os_MpCoreConfigType, OS_CONST) OsCfg_Mp_OsCore0;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_OsApplication;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_SystemApplication_OsCore0;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_3;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CounterIsr_SystemTimer;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_Init_Task;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_Init_Task_Trusted;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_IdleTask_Core0;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Task_Bsw_10ms;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Task_Com_5ms;

# define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_CORE1_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Memory protection configuration data */
extern CONST(Os_MpCoreConfigType, OS_CONST) OsCfg_Mp_OsCore1;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_OsApplication_Core1;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_SystemApplication_OsCore1;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_Init_Task_Core1;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_Init_Task_Core1_Trusted;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_IdleTask_Core1;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Task_EcuM_Core1;

# define OS_STOP_SEC_CORE1_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_CORE2_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Memory protection configuration data */
extern CONST(Os_MpCoreConfigType, OS_CONST) OsCfg_Mp_OsCore2;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_OsApplication_Core2;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_SystemApplication_OsCore2;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Isr_SystemTimer_Core2;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_Init_Task_Core2;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_Init_Task_Core2_Trusted;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_IdleTask_Core2;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Task_Appl_100ms;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Task_Appl_10ms;

# define OS_STOP_SEC_CORE2_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_CORE3_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Memory protection configuration data */
extern CONST(Os_MpCoreConfigType, OS_CONST) OsCfg_Mp_OsCore3;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_OsApplication_Core3;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_SystemApplication_OsCore3;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_Init_Task_Core3;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_Init_Task_Core3_Trusted;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_IdleTask_Core3;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Task_EcuM_Core3;

# define OS_STOP_SEC_CORE3_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Memory protection configuration data */
extern CONST(Os_MpSystemConfigType, OS_CONST) OsCfg_Mp_SystemMpu;

# define OS_STOP_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif /* OS_MEMORYPROTECTION_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_MemoryProtection_Lcfg.h
 *********************************************************************************************************************/
