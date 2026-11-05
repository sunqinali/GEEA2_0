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
 *              File: Os_Scheduler_Cfg.h
 *   Generation Time: 2026-11-05 17:03:57
 *           Project: IEM_TC387_BRS - Version 1
 *          Delivery: CBD2000642_D01
 *      Tool Version: DaVinci Configurator  5.22.45 SP3
 *
 *
 *********************************************************************************************************************/

#ifndef OS_SCHEDULER_CFG_H
# define OS_SCHEDULER_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/*! Defines whether round robin scheduling is enabled (STD_ON) or not (STD_OFF). */
# define OS_CFG_SCHEDULE_ROUND_ROB_ENABLED       (STD_OFF)

/*! Defines the number of all task queues. */
# define OS_CFG_NUM_TASKQUEUES                   (8u)

/* Number of task queue activation slots: OsCore0 */
# define OS_CFG_NUM_TASKQUEUE0_OSCORE0_SLOTS     (2u)
# define OS_CFG_NUM_TASKQUEUE1_OSCORE0_SLOTS     (2u)
# define OS_CFG_NUM_TASKQUEUE2_OSCORE0_SLOTS     (6u)
# define OS_CFG_NUM_TASKQUEUE3_OSCORE0_SLOTS     (7u)
# define OS_CFG_NUM_TASKQUEUE4_OSCORE0_SLOTS     (1u)
# define OS_CFG_NUM_TASKQUEUE5_OSCORE0_SLOTS     (1u)
# define OS_CFG_NUM_TASKQUEUE6_OSCORE0_SLOTS     (1u)
# define OS_CFG_NUM_TASKQUEUE7_OSCORE0_SLOTS     (2u)

/* Number of task queue activation slots: OsCore1 */
# define OS_CFG_NUM_TASKQUEUE0_OSCORE1_SLOTS     (2u)
# define OS_CFG_NUM_TASKQUEUE1_OSCORE1_SLOTS     (2u)
# define OS_CFG_NUM_TASKQUEUE2_OSCORE1_SLOTS     (1u)
# define OS_CFG_NUM_TASKQUEUE3_OSCORE1_SLOTS     (1u)
# define OS_CFG_NUM_TASKQUEUE4_OSCORE1_SLOTS     (1u)
# define OS_CFG_NUM_TASKQUEUE5_OSCORE1_SLOTS     (1u)
# define OS_CFG_NUM_TASKQUEUE6_OSCORE1_SLOTS     (2u)
# define OS_CFG_NUM_TASKQUEUE7_OSCORE1_SLOTS     (2u)

/* Number of task queue activation slots: OsCore2 */
# define OS_CFG_NUM_TASKQUEUE0_OSCORE2_SLOTS     (2u)
# define OS_CFG_NUM_TASKQUEUE1_OSCORE2_SLOTS     (2u)
# define OS_CFG_NUM_TASKQUEUE2_OSCORE2_SLOTS     (1u)
# define OS_CFG_NUM_TASKQUEUE3_OSCORE2_SLOTS     (1u)
# define OS_CFG_NUM_TASKQUEUE4_OSCORE2_SLOTS     (2u)
# define OS_CFG_NUM_TASKQUEUE5_OSCORE2_SLOTS     (2u)
# define OS_CFG_NUM_TASKQUEUE6_OSCORE2_SLOTS     (1u)
# define OS_CFG_NUM_TASKQUEUE7_OSCORE2_SLOTS     (2u)

/* Number of task queue activation slots: OsCore3 */
# define OS_CFG_NUM_TASKQUEUE0_OSCORE3_SLOTS     (2u)
# define OS_CFG_NUM_TASKQUEUE1_OSCORE3_SLOTS     (2u)
# define OS_CFG_NUM_TASKQUEUE2_OSCORE3_SLOTS     (1u)
# define OS_CFG_NUM_TASKQUEUE3_OSCORE3_SLOTS     (1u)
# define OS_CFG_NUM_TASKQUEUE4_OSCORE3_SLOTS     (1u)
# define OS_CFG_NUM_TASKQUEUE5_OSCORE3_SLOTS     (1u)
# define OS_CFG_NUM_TASKQUEUE6_OSCORE3_SLOTS     (2u)
# define OS_CFG_NUM_TASKQUEUE7_OSCORE3_SLOTS     (2u)


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


#endif /* OS_SCHEDULER_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Scheduler_Cfg.h
 *********************************************************************************************************************/
