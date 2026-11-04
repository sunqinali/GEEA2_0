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
 *  Ordered Derivat.: Aurix 2G/TC397 B-Step
 *    License Scope : The usage is restricted to CBD1900078_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Os_MemoryProtection_Lcfg.c
 *   Generation Time: 2026-10-30 12:15:13
 *           Project: IEM_TC387 - Version 1
 *          Delivery: CBD1900078_D01
 *      Tool Version: DaVinci Configurator (beta) 5.18.42 SP2
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! This version of DaVinci Configurator Pro and/or the related Basic Software Package is BETA software.               !
 ! BETA Software is basically operable, but not sufficiently tested, verified and/or qualified for use in series      !
 ! production and/or in vehicles operating on public or non-public roads.                                             !
 ! In particular, without limitation, BETA Software may cause unpredictable ECU behavior, may not provide all         !
 ! functions necessary for use in series production and/or may not comply with quality requirements which are         !
 ! necessary according to the state of the art. BETA Software must not be used in series production.                  !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/

/* PRQA S 0777, 0779, 0828 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2, MD_MSR_Dir1.1 */

#define OS_MEMORYROTECTION_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_MemoryProtection_Lcfg.h"
#include "Os_MemoryProtection.h"

/* Os kernel module dependencies */

/* Os hal dependencies */
#include "Os_Hal_MemoryProtection_Lcfg.h"


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

/*! Memory protection configuration data: OsCore0 */
CONST(Os_MpCoreConfigType, OS_CONST) OsCfg_Mp_OsCore0 =
{
  /* .HwConfig = */ &OsCfg_Hal_Mp_OsCore0
};

/*! Memory protection configuration data: OsApplication */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_OsApplication =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_EmptyThread
};

/*! Memory protection configuration data: SystemApplication_OsCore0 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_SystemApplication_OsCore0 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_SystemApplication_OsCore0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_EmptyThread
};

/*! Memory protection configuration data: CounterIsr_SystemTimer */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CounterIsr_SystemTimer =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_SystemApplication_OsCore0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CounterIsr_SystemTimer
};

/*! Memory protection configuration data: IdleTask_Core0 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_IdleTask_Core0 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_SystemApplication_OsCore0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_IdleTask_Core0
};

/*! Memory protection configuration data: Task_Bsw_10ms */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Task_Bsw_10ms =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Task_Bsw_10ms
};

/*! Memory protection configuration data: Task_Com_5ms */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Task_Com_5ms =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Task_Com_5ms
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_CORE1_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Memory protection configuration data: OsCore1 */
CONST(Os_MpCoreConfigType, OS_CONST) OsCfg_Mp_OsCore1 =
{
  /* .HwConfig = */ &OsCfg_Hal_Mp_OsCore1
};

/*! Memory protection configuration data: OsApplication_Core1 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_OsApplication_Core1 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Core1,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_EmptyThread
};

/*! Memory protection configuration data: SystemApplication_OsCore1 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_SystemApplication_OsCore1 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_SystemApplication_OsCore1,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_EmptyThread
};

/*! Memory protection configuration data: IdleTask_Core1 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_IdleTask_Core1 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_SystemApplication_OsCore1,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_IdleTask_Core1
};

/*! Memory protection configuration data: Task_EcuM_Core1 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Task_EcuM_Core1 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Core1,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Task_EcuM_Core1
};

#define OS_STOP_SEC_CORE1_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_CORE2_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Memory protection configuration data: OsCore2 */
CONST(Os_MpCoreConfigType, OS_CONST) OsCfg_Mp_OsCore2 =
{
  /* .HwConfig = */ &OsCfg_Hal_Mp_OsCore2
};

/*! Memory protection configuration data: OsApplication_Core2 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_OsApplication_Core2 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Core2,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_EmptyThread
};

/*! Memory protection configuration data: SystemApplication_OsCore2 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_SystemApplication_OsCore2 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_SystemApplication_OsCore2,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_EmptyThread
};

/*! Memory protection configuration data: Isr_SystemTimer_Core2 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Isr_SystemTimer_Core2 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_SystemApplication_OsCore2,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Isr_SystemTimer_Core2
};

/*! Memory protection configuration data: IdleTask_Core2 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_IdleTask_Core2 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_SystemApplication_OsCore2,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_IdleTask_Core2
};

/*! Memory protection configuration data: Task_Appl_100ms */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Task_Appl_100ms =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Core2,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Task_Appl_100ms
};

/*! Memory protection configuration data: Task_Appl_10ms */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Task_Appl_10ms =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Core2,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Task_Appl_10ms
};

#define OS_STOP_SEC_CORE2_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_CORE3_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Memory protection configuration data: OsCore3 */
CONST(Os_MpCoreConfigType, OS_CONST) OsCfg_Mp_OsCore3 =
{
  /* .HwConfig = */ &OsCfg_Hal_Mp_OsCore3
};

/*! Memory protection configuration data: OsApplication_Core3 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_OsApplication_Core3 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Core3,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_EmptyThread
};

/*! Memory protection configuration data: SystemApplication_OsCore3 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_SystemApplication_OsCore3 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_SystemApplication_OsCore3,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_EmptyThread
};

/*! Memory protection configuration data: IdleTask_Core3 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_IdleTask_Core3 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_SystemApplication_OsCore3,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_IdleTask_Core3
};

/*! Memory protection configuration data: Task_EcuM_Core3 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Task_EcuM_Core3 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Core3,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Task_EcuM_Core3
};

#define OS_STOP_SEC_CORE3_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Memory protection configuration data: SystemMpu */
CONST(Os_MpSystemConfigType, OS_CONST) OsCfg_Mp_SystemMpu =
{
  /* .HwConfig = */ &OsCfg_Hal_Mp_SystemMpu
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
 *  END OF FILE: Os_MemoryProtection_Lcfg.c
 *********************************************************************************************************************/
