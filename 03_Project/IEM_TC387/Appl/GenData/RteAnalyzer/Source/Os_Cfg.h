/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Os_Cfg.h
 *        Config:  IEM_TC387.dpa
 *   ECU-Project:  IEM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1900078
 *
 *   Description:  Os definitions
 *********************************************************************************************************************/

#ifndef _OS_CFG_H_
# define _OS_CFG_H_

/* Os definitions */

/* Tasks */
# define Task_Appl_10ms (0U)
# define Task_Bsw_10ms (1U)
# define Task_Com_5ms (2U)
# define Task_EcuM_Core1 (3U)
# define Task_EcuM_Core3 (4U)

/* Alarms */

/* Events */

/* Spinlocks */

/* Resources */

/* ScheduleTables */
# define MainScheduleTable_Task_Appl_10ms  (0U)
# define MainScheduleTable_Task_Bsw_10ms  (1U)
# define MainScheduleTable_Task_Com_5ms  (2U)
# define MainScheduleTable_Task_EcuM_Core1  (3U)
# define MainScheduleTable_Task_EcuM_Core3  (4U)

/* Cores */
# define OS_CORE_ID_0 (0U)
# define OS_CORE_ID_1 (1U)
# define OS_CORE_ID_2 (2U)
# define OS_CORE_ID_3 (3U)
# include "usrostyp.h"

/* Trusted Functions */


#endif /* _OS_CFG_H_ */
