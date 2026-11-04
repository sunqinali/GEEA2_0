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
 *            Module: Dem
 *           Program: MSR_Vector_SLP4
 *          Customer: Aptiv (China) Technology Company Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Aurix 2G/TC397 B-Step
 *    License Scope : The usage is restricted to CBD1900078_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Dem_Lcfg.c
 *   Generation Time: 2026-10-30 12:31:05
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



/* configuration, interrupt handling implementations differ from the
 * source identification define used here. The naming
 * schemes for those files can be taken from this list:
 *
 * Dem.c:         DEM_SOURCE
 * Dem_Lcfg.c:    DEM_LCFG_SOURCE
 * Dem_PBcfg.c:   DEM_PBCFG_SOURCE */
#define DEM_LCFG_SOURCE


/**********************************************************************************************************************
  MISRA JUSTIFICATIONS
**********************************************************************************************************************/

/* PRQA S 0810 EOF */ /* MD_MSR_1.1_810 */                                      /* #include "..." causes nesting to exceed 8 levels - program is non-conforming. -- caused by #include'd files. */
/* PRQA S 0828 EOF */ /* MD_MSR_1.1_828 */                                      /* Maximum '#if...' nesting exceeds 8 levels - program is non-conforming -- caused by #include'd files. */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */                                      /* Number of macro definitions exceeds 1024 - program is non-conforming -- caused by #include'd files. */
/* PRQA S 0779 EOF */ /* MD_DEM_5.1 */                                          /* Identifier does not differ in 32 significant characters -- caused by Autosar algorithm for unique symbolic names. */
/* PRQA S 0612 EOF */ /* MD_DEM_1.1_612 */                                      /* The size of an object exceeds 32767 bytes - program is non-conforming -- caused by large user configration. */


/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/

#include "Dem.h"
#include "Os.h"
#if (DEM_CFG_USE_NVM == STD_ON)
# include "NvM.h"                                                               /* get: symbolic names for NvM block IDs */
#endif
#if (DEM_CFG_SUPPORT_J1939 == STD_ON)
# include "J1939Nm.h"                                                           /* get: symbolic names for J1939Nm node IDs */
#endif
#if (DEM_CFG_USE_RTE == STD_ON)
/* DEM used with RTE */
# include "Rte_DemMaster_0.h"
#endif
#include "Dem_AdditionalIncludeCfg.h"                                           /* additional, configuration defined files */

/**********************************************************************************************************************
  LOCAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/



/**********************************************************************************************************************
  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA
**********************************************************************************************************************/



/**********************************************************************************************************************
  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  Dem_Cfg_CycleIdTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_CycleIdTable
  \details
  Element         Description
  UsedForAging    DemOperationCycle is target of any DemEventParameter/DemEventClass/DemAgingCycleRef
  OpCycleType     DemOperationCycleType of the DemOperationCycle: [DEM_CFG_OPCYC_IGNITION, DEM_CFG_OPCYC_OBD_DCY, DEM_CFG_OPCYC_OTHER, DEM_CFG_OPCYC_POWER, DEM_CFG_OPCYC_TIME, DEM_CFG_OPCYC_WARMUP, DEM_CFG_OPCYC_IGNITION_HYBRID, DEM_CFG_OPCYC_AGING]
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_CycleIdTableType, DEM_CONST) Dem_Cfg_CycleIdTable[2] = {
    /* Index    UsedForAging  OpCycleType                   Comment */
  { /*     0 */        FALSE, DEM_CFG_OPCYC_IGNITION },  /* [DemConf_DemOperationCycle_IgnitionCycle] */
  { /*     1 */         TRUE, DEM_CFG_OPCYC_POWER    }   /* [DemConf_DemOperationCycle_PowerCycle] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataCollectionTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataCollectionTable
  \details
  Element                                Description
  IdNumber                           
  CollectionSize                     
  DataElementTableCol2ElmtIndEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd
  DataElementTableCol2ElmtIndStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd
  MaskedBits                             contains bitcoded the boolean data of Dem_Cfg_DataElementTableCol2ElmtIndUsedOfDataCollectionTable, Dem_Cfg_UpdateOfDataCollectionTable
  StorageKind                        
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DataCollectionTableType, DEM_CONST) Dem_Cfg_DataCollectionTable[73] = {
    /* Index    IdNumber  CollectionSize  DataElementTableCol2ElmtIndEndIdx                                  DataElementTableCol2ElmtIndStartIdx                                  MaskedBits  StorageKind                       Referable Keys */
  { /*     0 */  0x0000u,             0u, DEM_CFG_NO_DATAELEMENTTABLECOL2ELMTINDENDIDXOFDATACOLLECTIONTABLE, DEM_CFG_NO_DATAELEMENTTABLECOL2ELMTINDSTARTIDXOFDATACOLLECTIONTABLE,      0x00u, DEM_CFG_EREC_TYPE_GLOBAL   },  /* [#NoDataCollectionConfigured] */
  { /*     1 */  0x0030u,             1u,                                                                1u,                                                                  0u,      0x03u, DEM_CFG_EREC_TYPE_USER     },  /* [#EdrDTCStatusindicator30, Ext:ExtendedDataClass_5ecd55b9] */
  { /*     2 */  0x0020u,             4u,                                                                2u,                                                                  1u,      0x03u, DEM_CFG_EREC_TYPE_USER     },  /* [#EdrDTCTimeStamp20, Ext:ExtendedDataClass_5ecd55b9] */
  { /*     3 */  0x0021u,             4u,                                                                3u,                                                                  2u,      0x03u, DEM_CFG_EREC_TYPE_USER     },  /* [#EdrDTCTimeStamp21, Ext:ExtendedDataClass_5ecd55b9] */
  { /*     4 */  0x0010u,             1u,                                                                4u,                                                                  3u,      0x03u, DEM_CFG_EREC_TYPE_GLOBAL   },  /* [#EdrDTCfaultdetectioncounter, Ext:ExtendedDataClass_5ecd55b9] */
  { /*     5 */  0x0011u,             1u,                                                                5u,                                                                  4u,      0x03u, DEM_CFG_EREC_TYPE_GLOBAL   },  /* [#EdrMaxDTCDetCntThisCycle, Ext:ExtendedDataClass_5ecd55b9] */
  { /*     6 */  0x0012u,             1u,                                                                6u,                                                                  5u,      0x03u, DEM_CFG_EREC_TYPE_INTERNAL },  /* [#EdrMaxDTCSinClear, Ext:ExtendedDataClass_5ecd55b9] */
  { /*     7 */  0x0001u,             1u,                                                                7u,                                                                  6u,      0x03u, DEM_CFG_EREC_TYPE_INTERNAL },  /* [#EdrOperCycCnt1, Ext:ExtendedDataClass_5ecd55b9] */
  { /*     8 */  0x0002u,             1u,                                                                8u,                                                                  7u,      0x03u, DEM_CFG_EREC_TYPE_INTERNAL },  /* [#EdrOperCycCnt2, Ext:ExtendedDataClass_5ecd55b9] */
  { /*     9 */  0x0003u,             1u,                                                                9u,                                                                  8u,      0x03u, DEM_CFG_EREC_TYPE_INTERNAL },  /* [#EdrOperCycCnt3, Ext:ExtendedDataClass_5ecd55b9] */
  { /*    10 */  0x0004u,             1u,                                                               10u,                                                                  9u,      0x03u, DEM_CFG_EREC_TYPE_INTERNAL },  /* [#EdrOperCycCnt4, Ext:ExtendedDataClass_5ecd55b9] */
  { /*    11 */  0x0005u,             1u,                                                               11u,                                                                 10u,      0x03u, DEM_CFG_EREC_TYPE_INTERNAL },  /* [#EdrOperCycCnt5, Ext:ExtendedDataClass_5ecd55b9] */
  { /*    12 */  0x0006u,             1u,                                                               12u,                                                                 11u,      0x03u, DEM_CFG_EREC_TYPE_INTERNAL },  /* [#EdrOperCycCnt6, Ext:ExtendedDataClass_5ecd55b9] */
  { /*    13 */  0xEED2u,             2u,                                                               13u,                                                                 12u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_0xEEC7_1, Ffm:FreezeFrameClass_5b6f811c] */
  { /*    14 */  0xD003u,             2u,                                                               14u,                                                                 13u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_D003_Vehicle_Speed, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450, Ffm:FreezeFrameClass_dc4c3f47] */
  { /*    15 */  0xDD00u,             4u,                                                               15u,                                                                 14u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_DD00_Global_Real_Time, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450, Ffm:FreezeFrameClass_dc4c3f47] */
  { /*    16 */  0xDD01u,             3u,                                                               16u,                                                                 15u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_DD01_Total_Distance, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450, Ffm:FreezeFrameClass_dc4c3f47] */
  { /*    17 */  0xDD02u,             1u,                                                               17u,                                                                 16u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_DD02_Vehicle_Battery_Voltage, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450] */
  { /*    18 */  0xDD0Au,             1u,                                                               18u,                                                                 17u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_DD0A_Usage_Mode, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450, Ffm:FreezeFrameClass_dc4c3f47] */
  { /*    19 */  0xDD0Cu,             1u,                                                               19u,                                                                 18u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_DD0C_Electric_Power_Level, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450, Ffm:FreezeFrameClass_dc4c3f47] */
  { /*    20 */  0xE300u,             2u,                                                               20u,                                                                 19u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E300_HVDC_Voltage, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450] */
  { /*    21 */  0xE301u,             2u,                                                               21u,                                                                 20u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E301_HVDC_Current, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450] */
  { /*    22 */  0xE303u,             2u,                                                               22u,                                                                 21u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E303_Motor_Speed, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450, Ffm:FreezeFrameClass_dc4c3f47] */
  { /*    23 */  0xE304u,             2u,                                                               23u,                                                                 22u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E304_Actual_Torque, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450, Ffm:FreezeFrameClass_dc4c3f47] */
  { /*    24 */  0xE305u,             1u,                                                               24u,                                                                 23u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E305_Inverter_IGBT_Junction_Temp, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450] */
  { /*    25 */  0xE306u,             1u,                                                               25u,                                                                 24u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E306_Motor_Temperature, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450] */
  { /*    26 */  0xE307u,             1u,                                                               26u,                                                                 25u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E307_System_Mode, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450, Ffm:FreezeFrameClass_dc4c3f47] */
  { /*    27 */  0xE308u,             2u,                                                               27u,                                                                 26u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E308_ECM_Torque_Request, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450, Ffm:FreezeFrameClass_dc4c3f47] */
  { /*    28 */  0xE309u,             1u,                                                               28u,                                                                 27u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E309_ECM_Mode_Request, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450, Ffm:FreezeFrameClass_dc4c3f47] */
  { /*    29 */  0xE310u,             1u,                                                               29u,                                                                 28u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E310_IEM_MGM_Derating_Status, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450, Ffm:FreezeFrameClass_dc4c3f47] */
  { /*    30 */  0xE311u,             1u,                                                               30u,                                                                 29u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E311_Crash_Status, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450] */
  { /*    31 */  0xE312u,             2u,                                                               31u,                                                                 30u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E312_Wheel_Speed, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450, Ffm:FreezeFrameClass_dc4c3f47] */
  { /*    32 */  0xE313u,             1u,                                                               32u,                                                                 31u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E313_Active_discharge_status, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450] */
  { /*    33 */  0xE314u,             2u,                                                               33u,                                                                 32u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E314_Available_Torque_maximum, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450, Ffm:FreezeFrameClass_dc4c3f47] */
  { /*    34 */  0xE315u,             2u,                                                               34u,                                                                 33u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E315_Available_Torque_minimum, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450, Ffm:FreezeFrameClass_dc4c3f47] */
  { /*    35 */  0xE319u,             1u,                                                               35u,                                                                 34u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E319_Torque_Direction, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450] */
  { /*    36 */  0xE320u,             1u,                                                               36u,                                                                 35u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E320_System_Mode_Mismatch, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450] */
  { /*    37 */  0xE324u,             1u,                                                               37u,                                                                 36u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E324_Motor_Derating_reason_of_IEM_MGM, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450] */
  { /*    38 */  0xE333u,             8u,                                                               45u,                                                                 37u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E333_2002_State, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450, Ffm:FreezeFrameClass_dc4c3f47] */
  { /*    39 */  0xE335u,             2u,                                                               46u,                                                                 45u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E335_d_axis_current_setpoint, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450, Ffm:FreezeFrameClass_dc4c3f47] */
  { /*    40 */  0xE336u,             2u,                                                               47u,                                                                 46u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E336_d_axis_current_feedback, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450, Ffm:FreezeFrameClass_dc4c3f47] */
  { /*    41 */  0xE337u,             2u,                                                               48u,                                                                 47u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E337_q_axis_current_setpoint, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450, Ffm:FreezeFrameClass_dc4c3f47] */
  { /*    42 */  0xE338u,             2u,                                                               49u,                                                                 48u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E338_q_axis_current_feedback, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450, Ffm:FreezeFrameClass_dc4c3f47] */
  { /*    43 */  0xE339u,             2u,                                                               50u,                                                                 49u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E339_d_axis_voltage, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450] */
  { /*    44 */  0xE341u,             2u,                                                               51u,                                                                 50u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E341_q_axis_voltage, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450] */
  { /*    45 */  0xE346u,             1u,                                                               52u,                                                                 51u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E346_ECM_Torque_Allowed_Status, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450, Ffm:FreezeFrameClass_dc4c3f47] */
  { /*    46 */  0xE347u,             1u,                                                               53u,                                                                 52u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E347_IGBT_Max_Temperature, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450] */
  { /*    47 */  0xE348u,             1u,                                                               54u,                                                                 53u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E348_Phase_U_PWM_duty, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450] */
  { /*    48 */  0xE349u,             1u,                                                               55u,                                                                 54u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E349_Phase_V_PWM_duty, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450] */
  { /*    49 */  0xE350u,             1u,                                                               56u,                                                                 55u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E350_Phase_W_PWM_duty, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450] */
    /* Index    IdNumber  CollectionSize  DataElementTableCol2ElmtIndEndIdx                                  DataElementTableCol2ElmtIndStartIdx                                  MaskedBits  StorageKind                       Referable Keys */
  { /*    50 */  0xE353u,             2u,                                                               57u,                                                                 56u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E353_Flux_weakening_correction_factor, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450] */
  { /*    51 */  0xE357u,             1u,                                                               58u,                                                                 57u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E357_Resolve_compensated_angle, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450] */
  { /*    52 */  0xE358u,             2u,                                                               59u,                                                                 58u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E358_Resolve_angle, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450] */
  { /*    53 */  0xE363u,             1u,                                                               60u,                                                                 59u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E363_Modulation_index, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450] */
  { /*    54 */  0xE364u,             1u,                                                               61u,                                                                 60u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_E364_AURIX_Fault_Indication, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450] */
  { /*    55 */  0xEE9Au,             1u,                                                               62u,                                                                 61u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_EE9A_Inverter_Coolant_Temperature, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450, Ffm:FreezeFrameClass_dc4c3f47] */
  { /*    56 */  0xEE9Cu,             2u,                                                               63u,                                                                 62u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_EE9C_Transient_Phase_Current_A, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450] */
  { /*    57 */  0xEE9Du,             2u,                                                               64u,                                                                 63u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_EE9D_Transient_Phase_Current_B, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450] */
  { /*    58 */  0xEE9Eu,             2u,                                                               65u,                                                                 64u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_EE9E_Transient_Phase_Current_C, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450] */
  { /*    59 */  0xEE9Fu,             1u,                                                               66u,                                                                 65u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_EE9F_Gate_Status, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450] */
  { /*    60 */  0xEEB2u,             2u,                                                               67u,                                                                 66u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_EEB2_Three_Phase_Motor_Current_RMS_Current, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450, Ffm:FreezeFrameClass_dc4c3f47] */
  { /*    61 */  0xEEB5u,             2u,                                                               68u,                                                                 67u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_EEB5_IEM_MGM_current_torque, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_79980272, Ffm:FreezeFrameClass_c3111450] */
  { /*    62 */  0xEEB6u,             2u,                                                               69u,                                                                 68u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_EEB6_ECM_Power_Limitation_maximum, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_c3111450] */
  { /*    63 */  0xEEB7u,             2u,                                                               70u,                                                                 69u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_EEB7_ECM_Power_Limitation_minimum, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_c3111450] */
  { /*    64 */  0xEEB8u,             2u,                                                               71u,                                                                 70u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_EEB8_HV_voltage_received_from_BECM, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_c3111450, Ffm:FreezeFrameClass_dc4c3f47] */
  { /*    65 */  0xEEBEu,             1u,                                                               72u,                                                                 71u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_EEBE_Offset_angle_status, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_c3111450] */
  { /*    66 */  0xEEBFu,             1u,                                                               73u,                                                                 72u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_EEBF_HV_Main_Relay_Status, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_c3111450, Ffm:FreezeFrameClass_dc4c3f47] */
  { /*    67 */  0xEEC3u,             1u,                                                               74u,                                                                 73u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_EEC3_ECU_power_supply_Voltage, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_c3111450, Ffm:FreezeFrameClass_dc4c3f47] */
  { /*    68 */  0xEEC4u,             1u,                                                               75u,                                                                 74u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_EEC4_Charging_Power_Sustain_Relay_CPSR_Voltage, Ffm:FreezeFrameClass_5b6f811c, Ffm:FreezeFrameClass_c3111450, Ffm:FreezeFrameClass_dc4c3f47] */
  { /*    69 */  0xEED1u,             4u,                                                               79u,                                                                 75u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_EED1_Safty_monitor_Fault_Indication, Ffm:FreezeFrameClass_5b6f811c] */
  { /*    70 */  0xEED3u,             2u,                                                               80u,                                                                 79u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_EED3_Safety_speed, Ffm:FreezeFrameClass_5b6f811c] */
  { /*    71 */  0xEED4u,             1u,                                                               81u,                                                                 80u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_EED4_Safty_Function_Mode, Ffm:FreezeFrameClass_5b6f811c] */
  { /*    72 */  0xEED5u,             1u,                                                               82u,                                                                 81u,      0x02u, DEM_CFG_EREC_TYPE_USER     }   /* [#DidDID_EED5_Safety_Torque_QF_factor, Ffm:FreezeFrameClass_5b6f811c] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataCollectionTableEdr2CollInd
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataCollectionTableEdr2CollInd
  \brief  the indexes of the 1:1 sorted relation pointing to Dem_Cfg_DataCollectionTable
*/ 
#define DEM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DataCollectionTableEdr2CollIndType, DEM_CONST) Dem_Cfg_DataCollectionTableEdr2CollInd[12] = {
  /* Index     DataCollectionTableEdr2CollInd      Referable Keys */
  /*     0 */                              7u,  /* [Ext:ExtendedDataClass_5ecd55b9] */
  /*     1 */                              8u,  /* [Ext:ExtendedDataClass_5ecd55b9] */
  /*     2 */                              9u,  /* [Ext:ExtendedDataClass_5ecd55b9] */
  /*     3 */                             10u,  /* [Ext:ExtendedDataClass_5ecd55b9] */
  /*     4 */                             11u,  /* [Ext:ExtendedDataClass_5ecd55b9] */
  /*     5 */                             12u,  /* [Ext:ExtendedDataClass_5ecd55b9] */
  /*     6 */                              4u,  /* [Ext:ExtendedDataClass_5ecd55b9] */
  /*     7 */                              5u,  /* [Ext:ExtendedDataClass_5ecd55b9] */
  /*     8 */                              6u,  /* [Ext:ExtendedDataClass_5ecd55b9] */
  /*     9 */                              2u,  /* [Ext:ExtendedDataClass_5ecd55b9] */
  /*    10 */                              3u,  /* [Ext:ExtendedDataClass_5ecd55b9] */
  /*    11 */                              1u   /* [Ext:ExtendedDataClass_5ecd55b9] */
};
#define DEM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataCollectionTableFfm2CollInd
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataCollectionTableFfm2CollInd
  \brief  the indexes of the 1:1 sorted relation pointing to Dem_Cfg_DataCollectionTable
*/ 
#define DEM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DataCollectionTableFfm2CollIndType, DEM_CONST) Dem_Cfg_DataCollectionTableFfm2CollInd[189] = {
  /* Index     DataCollectionTableFfm2CollInd      Referable Keys */
  /*     0 */                             14u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*     1 */                             15u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*     2 */                             16u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*     3 */                             17u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*     4 */                             18u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*     5 */                             19u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*     6 */                             20u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*     7 */                             21u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*     8 */                             22u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*     9 */                             23u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    10 */                             24u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    11 */                             25u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    12 */                             26u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    13 */                             27u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    14 */                             28u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    15 */                             29u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    16 */                             30u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    17 */                             31u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    18 */                             32u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    19 */                             33u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    20 */                             34u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    21 */                             35u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    22 */                             36u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    23 */                             37u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    24 */                             38u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    25 */                             39u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    26 */                             40u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    27 */                             41u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    28 */                             42u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    29 */                             43u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    30 */                             44u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    31 */                             45u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    32 */                             46u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    33 */                             47u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    34 */                             48u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    35 */                             49u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    36 */                             50u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    37 */                             51u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    38 */                             52u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    39 */                             53u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    40 */                             54u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    41 */                             55u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    42 */                             56u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    43 */                             57u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    44 */                             58u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    45 */                             59u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    46 */                             60u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    47 */                             61u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    48 */                             62u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    49 */                             63u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /* Index     DataCollectionTableFfm2CollInd      Referable Keys */
  /*    50 */                             64u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    51 */                             65u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    52 */                             66u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    53 */                             67u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    54 */                             68u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    55 */                             69u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    56 */                             13u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    57 */                             70u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    58 */                             71u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    59 */                             72u,  /* [Ffm:FreezeFrameClass_5b6f811c] */
  /*    60 */                             14u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    61 */                             15u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    62 */                             16u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    63 */                             17u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    64 */                             18u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    65 */                             19u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    66 */                             20u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    67 */                             21u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    68 */                             22u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    69 */                             23u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    70 */                             24u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    71 */                             25u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    72 */                             26u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    73 */                             27u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    74 */                             28u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    75 */                             29u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    76 */                             30u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    77 */                             31u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    78 */                             32u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    79 */                             33u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    80 */                             34u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    81 */                             35u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    82 */                             36u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    83 */                             37u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    84 */                             38u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    85 */                             39u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    86 */                             40u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    87 */                             41u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    88 */                             42u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    89 */                             43u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    90 */                             44u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    91 */                             45u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    92 */                             46u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    93 */                             47u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    94 */                             48u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    95 */                             49u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    96 */                             50u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    97 */                             51u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    98 */                             52u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*    99 */                             53u,  /* [Ffm:FreezeFrameClass_79980272] */
  /* Index     DataCollectionTableFfm2CollInd      Referable Keys */
  /*   100 */                             54u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*   101 */                             55u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*   102 */                             56u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*   103 */                             57u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*   104 */                             58u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*   105 */                             59u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*   106 */                             60u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*   107 */                             61u,  /* [Ffm:FreezeFrameClass_79980272] */
  /*   108 */                             14u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   109 */                             15u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   110 */                             16u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   111 */                             17u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   112 */                             18u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   113 */                             19u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   114 */                             20u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   115 */                             21u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   116 */                             22u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   117 */                             23u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   118 */                             24u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   119 */                             25u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   120 */                             26u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   121 */                             27u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   122 */                             28u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   123 */                             29u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   124 */                             30u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   125 */                             31u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   126 */                             32u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   127 */                             33u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   128 */                             34u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   129 */                             35u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   130 */                             36u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   131 */                             37u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   132 */                             38u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   133 */                             39u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   134 */                             40u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   135 */                             41u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   136 */                             42u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   137 */                             43u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   138 */                             44u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   139 */                             45u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   140 */                             46u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   141 */                             47u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   142 */                             48u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   143 */                             49u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   144 */                             50u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   145 */                             51u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   146 */                             52u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   147 */                             53u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   148 */                             54u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   149 */                             55u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /* Index     DataCollectionTableFfm2CollInd      Referable Keys */
  /*   150 */                             56u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   151 */                             57u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   152 */                             58u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   153 */                             59u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   154 */                             60u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   155 */                             61u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   156 */                             62u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   157 */                             63u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   158 */                             64u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   159 */                             65u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   160 */                             66u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   161 */                             67u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   162 */                             68u,  /* [Ffm:FreezeFrameClass_c3111450] */
  /*   163 */                             14u,  /* [Ffm:FreezeFrameClass_dc4c3f47] */
  /*   164 */                             15u,  /* [Ffm:FreezeFrameClass_dc4c3f47] */
  /*   165 */                             16u,  /* [Ffm:FreezeFrameClass_dc4c3f47] */
  /*   166 */                             18u,  /* [Ffm:FreezeFrameClass_dc4c3f47] */
  /*   167 */                             19u,  /* [Ffm:FreezeFrameClass_dc4c3f47] */
  /*   168 */                             22u,  /* [Ffm:FreezeFrameClass_dc4c3f47] */
  /*   169 */                             23u,  /* [Ffm:FreezeFrameClass_dc4c3f47] */
  /*   170 */                             26u,  /* [Ffm:FreezeFrameClass_dc4c3f47] */
  /*   171 */                             27u,  /* [Ffm:FreezeFrameClass_dc4c3f47] */
  /*   172 */                             28u,  /* [Ffm:FreezeFrameClass_dc4c3f47] */
  /*   173 */                             29u,  /* [Ffm:FreezeFrameClass_dc4c3f47] */
  /*   174 */                             31u,  /* [Ffm:FreezeFrameClass_dc4c3f47] */
  /*   175 */                             33u,  /* [Ffm:FreezeFrameClass_dc4c3f47] */
  /*   176 */                             34u,  /* [Ffm:FreezeFrameClass_dc4c3f47] */
  /*   177 */                             38u,  /* [Ffm:FreezeFrameClass_dc4c3f47] */
  /*   178 */                             39u,  /* [Ffm:FreezeFrameClass_dc4c3f47] */
  /*   179 */                             40u,  /* [Ffm:FreezeFrameClass_dc4c3f47] */
  /*   180 */                             41u,  /* [Ffm:FreezeFrameClass_dc4c3f47] */
  /*   181 */                             42u,  /* [Ffm:FreezeFrameClass_dc4c3f47] */
  /*   182 */                             45u,  /* [Ffm:FreezeFrameClass_dc4c3f47] */
  /*   183 */                             55u,  /* [Ffm:FreezeFrameClass_dc4c3f47] */
  /*   184 */                             60u,  /* [Ffm:FreezeFrameClass_dc4c3f47] */
  /*   185 */                             64u,  /* [Ffm:FreezeFrameClass_dc4c3f47] */
  /*   186 */                             66u,  /* [Ffm:FreezeFrameClass_dc4c3f47] */
  /*   187 */                             67u,  /* [Ffm:FreezeFrameClass_dc4c3f47] */
  /*   188 */                             68u   /* [Ffm:FreezeFrameClass_dc4c3f47] */
};
#define DEM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataElementTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataElementTable
  \details
  Element         Description
  ElementKind     DataElement kind, returned by Dem_Cfg_DataCallbackType()
  ElementSize     Size of data element in Byte.
  ReadDataFunc    C-function for getting the data. Its signature depends on ElementKind: With value(s) DEM_CFG_DATA_FROM_CBK_WITH_EVENTID use: Std_ReturnType (*)(uint8* Buffer, uint16 EventId); - and use: Std_ReturnType (*)(uint8* Buffer); with the other values DEM_CFG_DATA_FROM_CBK, DEM_CFG_DATA_FROM_SR_PORT_BOOLEAN, DEM_CFG_DATA_FROM_SR_PORT_SINT16, DEM_CFG_DATA_FROM_SR_PORT_SINT16_INTEL, DEM_CFG_DATA_FROM_SR_PORT_SINT32, DEM_CFG_DATA_FROM_SR_PORT_SINT32_INTEL, DEM_CFG_DATA_FROM_SR_PORT_SINT8, DEM_CFG_DATA_FROM_SR_PORT_SINT8_N, DEM_CFG_DATA_FROM_SR_PORT_UINT16, DEM_CFG_DATA_FROM_SR_PORT_UINT16_INTEL, DEM_CFG_DATA_FROM_SR_PORT_UINT32, DEM_CFG_DATA_FROM_SR_PORT_UINT32_INTEL, DEM_CFG_DATA_FROM_SR_PORT_UINT8, DEM_CFG_DATA_FROM_SR_PORT_UINT8_N.
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DataElementTableType, DEM_CONST) Dem_Cfg_DataElementTable[83] = {
    /* Index    ElementKind                                     ElementSize  ReadDataFunc                                                                                                                                                 Referable Keys */
  { /*     0 */ DEM_CFG_DATAELEMENT_INVALID                   ,          0u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR                                                                                  },  /* [#NoDataElementConfigured] */
  { /*     1 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DTCStatusindicator30_DTCStatusindicator30_ReadData                    },  /* [#DTCStatusindicator30_DTCStatusindicator30, EdrDTCStatusindicator30] */
  { /*     2 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe310_DID_E310_IEMMGM_Derating_Status_ReadData                   },  /* [#DID_0xe310_DID_E310_IEMMGM_Derating_Status, DidDID_E310_IEM_MGM_Derating_Status] */
  { /*     3 */ DEM_CFG_DATA_FROM_CBK                         ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe301_DID_E301_HVDC_Current__ReadData                            },  /* [#DID_0xe301_DID_E301_HVDC_Current_, DidDID_E301_HVDC_Current] */
  { /*     4 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe305_DID_E305_Inverter_IGBT_Junction_Temp_ReadData              },  /* [#DID_0xe305_DID_E305_Inverter_IGBT_Junction_Temp, DidDID_E305_Inverter_IGBT_Junction_Temp] */
  { /*     5 */ DEM_CFG_DATA_FROM_CBK                         ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe339_DID_E339_d_axis_voltage_ReadData                           },  /* [#DID_0xe339_DID_E339_d_axis_voltage, DidDID_E339_d_axis_voltage] */
  { /*     6 */ DEM_CFG_DATA_FROM_MAX_FDC_SINCE_LAST_CLEAR    ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR                                                                                  },  /* [#MaxDTCSinClear_MaxDTCSinClear, EdrMaxDTCSinClear] */
  { /*     7 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe307_DID_E307_System_Mode_ReadData                              },  /* [#DID_0xe307_DID_E307_System_Mode, DidDID_E307_System_Mode] */
  { /*     8 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe357_DID_E357_Resolve_compensated_angle_ReadData                },  /* [#DID_0xe357_DID_E357_Resolve_compensated_angle, DidDID_E357_Resolve_compensated_angle] */
  { /*     9 */ DEM_CFG_DATA_FROM_CBK                         ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe308_DID_E308_ECM_Torque_Request_ReadData                       },  /* [#DID_0xe308_DID_E308_ECM_Torque_Request, DidDID_E308_ECM_Torque_Request] */
  { /*    10 */ DEM_CFG_DATA_FROM_CBK                         ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe335_DID_E335_d_axis_current_setpoint_ReadData                  },  /* [#DID_0xe335_DID_E335_d_axis_current_setpoint, DidDID_E335_d_axis_current_setpoint] */
  { /*    11 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe319_DID_E319_Torque_Direction_ReadData                         },  /* [#DID_0xe319_DID_E319_Torque_Direction, DidDID_E319_Torque_Direction] */
  { /*    12 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe309_DID_E309_ECM_Mode_Request_ReadData                         },  /* [#DID_0xe309_DID_E309_ECM_Mode_Request, DidDID_E309_ECM_Mode_Request] */
  { /*    13 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xdd0a_DID_DD0A_Usage_Mode_ReadData                               },  /* [#DID_0xdd0a_DID_DD0A_Usage_Mode, DidDID_DD0A_Usage_Mode] */
  { /*    14 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xeec3_DID_EEC3_ECU_power_supply_Voltage_ReadData                 },  /* [#DID_0xeec3_DID_EEC3_ECU_power_supply_Voltage, DidDID_EEC3_ECU_power_supply_Voltage] */
  { /*    15 */ DEM_CFG_DATA_FROM_CBK                         ,          4u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xdd00_DID_DD00_Global_Real_Time_ReadData                         },  /* [#DID_0xdd00_DID_DD00_Global_Real_Time, DidDID_DD00_Global_Real_Time] */
  { /*    16 */ DEM_CFG_DATA_FROM_CBK                         ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xee9e_DID_EE9E_Transient_Phase_Current_C_ReadData                },  /* [#DID_0xee9e_DID_EE9E_Transient_Phase_Current_C, DidDID_EE9E_Transient_Phase_Current_C] */
  { /*    17 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe333_2002_Hu_ReadData                                           },  /* [#DID_0xe333_2002_Hu, DidDID_E333_2002_State] */
  { /*    18 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe333_2002_Hw_ReadData                                           },  /* [#DID_0xe333_2002_Hw, DidDID_E333_2002_State] */
  { /*    19 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe333_2002_Hv_ReadData                                           },  /* [#DID_0xe333_2002_Hv, DidDID_E333_2002_State] */
  { /*    20 */ DEM_CFG_DATA_FROM_CBK                         ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe314_DID_E314_Available_Torque_maximum_ReadData                 },  /* [#DID_0xe314_DID_E314_Available_Torque_maximum, DidDID_E314_Available_Torque_maximum] */
  { /*    21 */ DEM_CFG_DATA_FROM_OCCCTR                      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR                                                                                  },  /* [#OperCycCnt5_OperCycCnt5, EdrOperCycCnt5] */
  { /*    22 */ DEM_CFG_DATA_FROM_OCCCTR                      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR                                                                                  },  /* [#OperCycCnt1_OperCycCnt1, EdrOperCycCnt1] */
  { /*    23 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xeed4_DID_EED4_Safty_Function_Mode_ReadData                      },  /* [#DID_0xeed4_DID_EED4_Safty_Function_Mode, DidDID_EED4_Safty_Function_Mode] */
  { /*    24 */ DEM_CFG_DATA_FROM_OCCCTR                      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR                                                                                  },  /* [#OperCycCnt3_OperCycCnt3, EdrOperCycCnt3] */
  { /*    25 */ DEM_CFG_DATA_FROM_CBK                         ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xd003_DID_D003_Vehicle_Speed_ReadData                            },  /* [#DID_0xd003_DID_D003_Vehicle_Speed, DidDID_D003_Vehicle_Speed] */
  { /*    26 */ DEM_CFG_DATA_FROM_CBK                         ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe303_DID_E303_Motor_Speed__ReadData                             },  /* [#DID_0xe303_DID_E303_Motor_Speed_, DidDID_E303_Motor_Speed] */
  { /*    27 */ DEM_CFG_DATA_FROM_CBK                         ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe353_DID_E353_Flux_weakening_correction_factor_ReadData         },  /* [#DID_0xe353_DID_E353_Flux_weakening_correction_factor, DidDID_E353_Flux_weakening_correction_factor] */
  { /*    28 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe306_DID_E306_Motor_Temperature_ReadData                        },  /* [#DID_0xe306_DID_E306_Motor_Temperature, DidDID_E306_Motor_Temperature] */
  { /*    29 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe363_DID_E363_Modulation_index_ReadData                         },  /* [#DID_0xe363_DID_E363_Modulation_index, DidDID_E363_Modulation_index] */
  { /*    30 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe349_DID_E349_Phase_V_PWM_duty_ReadData                         },  /* [#DID_0xe349_DID_E349_Phase_V_PWM_duty, DidDID_E349_Phase_V_PWM_duty] */
  { /*    31 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xdd02_DID_DD02_Vehicle_Battery_Voltage_ReadData                  },  /* [#DID_0xdd02_DID_DD02_Vehicle_Battery_Voltage, DidDID_DD02_Vehicle_Battery_Voltage] */
  { /*    32 */ DEM_CFG_DATA_FROM_CBK                         ,          4u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DTCTimeStamp21_DTCTimeStamp21_ReadData                                },  /* [#DTCTimeStamp21_DTCTimeStamp21, EdrDTCTimeStamp21] */
  { /*    33 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe347_DID_E347_IGBT_Max_Temperature_ReadData                     },  /* [#DID_0xe347_DID_E347_IGBT_Max_Temperature, DidDID_E347_IGBT_Max_Temperature] */
  { /*    34 */ DEM_CFG_DATA_FROM_CBK                         ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xeeb5_DID_EEB5_IEMMGM_current_torque_ReadData                    },  /* [#DID_0xeeb5_DID_EEB5_IEMMGM_current_torque, DidDID_EEB5_IEM_MGM_current_torque] */
  { /*    35 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xeebe_DID_EEBE_Offset_angle_status_ReadData                      },  /* [#DID_0xeebe_DID_EEBE_Offset_angle_status, DidDID_EEBE_Offset_angle_status] */
  { /*    36 */ DEM_CFG_DATA_FROM_CBK                         ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe338_DID_E338_q_axis_current_feedback_ReadData                  },  /* [#DID_0xe338_DID_E338_q_axis_current_feedback, DidDID_E338_q_axis_current_feedback] */
  { /*    37 */ DEM_CFG_DATA_FROM_CBK                         ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xee9d_DID_EE9D_Transient_Phase_Current_B_ReadData                },  /* [#DID_0xee9d_DID_EE9D_Transient_Phase_Current_B, DidDID_EE9D_Transient_Phase_Current_B] */
  { /*    38 */ DEM_CFG_DATA_FROM_CBK                         ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe336_DID_E336_d_axis_current_feedback_ReadData                  },  /* [#DID_0xe336_DID_E336_d_axis_current_feedback, DidDID_E336_d_axis_current_feedback] */
  { /*    39 */ DEM_CFG_DATA_FROM_CURRENT_FDC                 ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR                                                                                  },  /* [#DTCfaultdetectioncounter_DTCFltDetCnt, EdrDTCfaultdetectioncounter] */
  { /*    40 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe348_DID_E348_Phase_U_PWM_duty_ReadData                         },  /* [#DID_0xe348_DID_E348_Phase_U_PWM_duty, DidDID_E348_Phase_U_PWM_duty] */
  { /*    41 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe350_DID_E350_Phase_W_PWM_duty_ReadData                         },  /* [#DID_0xe350_DID_E350_Phase_W_PWM_duty, DidDID_E350_Phase_W_PWM_duty] */
  { /*    42 */ DEM_CFG_DATA_FROM_CBK                         ,          4u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DTCTimeStamp20_DTCTimeStamp20_ReadData                                },  /* [#DTCTimeStamp20_DTCTimeStamp20, EdrDTCTimeStamp20] */
  { /*    43 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe333_2002_H_Ser_ReadData                                        },  /* [#DID_0xe333_2002_H_Ser, DidDID_E333_2002_State] */
  { /*    44 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xeec4_DID_EEC4_Charging_Power_Sustain_RelayCPSR_Voltage_ReadData },  /* [#DID_0xeec4_DID_EEC4_Charging_Power_Sustain_RelayCPSR_Voltage, DidDID_EEC4_Charging_Power_Sustain_Relay_CPSR_Voltage] */
  { /*    45 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe346_DID_E346_ECM_Torque_Allowed_Status_ReadData                },  /* [#DID_0xe346_DID_E346_ECM_Torque_Allowed_Status, DidDID_E346_ECM_Torque_Allowed_Status] */
  { /*    46 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe313_DID_E313_Active_discharge_status_ReadData                  },  /* [#DID_0xe313_DID_E313_Active_discharge_status, DidDID_E313_Active_discharge_status] */
  { /*    47 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe311_DID_E311_Crash_Status_ReadData                             },  /* [#DID_0xe311_DID_E311_Crash_Status, DidDID_E311_Crash_Status] */
  { /*    48 */ DEM_CFG_DATA_FROM_CBK                         ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe300_DID_E300_HVDC_Voltage_ReadData                             },  /* [#DID_0xe300_DID_E300_HVDC_Voltage, DidDID_E300_HVDC_Voltage] */
  { /*    49 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe324_DID_E324_Motor_Derating_reason_of_IEMMGM_ReadData          },  /* [#DID_0xe324_DID_E324_Motor_Derating_reason_of_IEMMGM, DidDID_E324_Motor_Derating_reason_of_IEM_MGM] */
    /* Index    ElementKind                                     ElementSize  ReadDataFunc                                                                                                                                                 Referable Keys */
  { /*    50 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xee9f_DID_EE9F_Gate_Status_ReadData                              },  /* [#DID_0xee9f_DID_EE9F_Gate_Status, DidDID_EE9F_Gate_Status] */
  { /*    51 */ DEM_CFG_DATA_FROM_CBK                         ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe304_DID_E304_Actual_Torque_ReadData                            },  /* [#DID_0xe304_DID_E304_Actual_Torque, DidDID_E304_Actual_Torque] */
  { /*    52 */ DEM_CFG_DATA_FROM_OCCCTR                      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR                                                                                  },  /* [#OperCycCnt6_OperCycCnt6, EdrOperCycCnt6] */
  { /*    53 */ DEM_CFG_DATA_FROM_CBK                         ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe315_DID_E315_Available_Torque_minimum_ReadData                 },  /* [#DID_0xe315_DID_E315_Available_Torque_minimum, DidDID_E315_Available_Torque_minimum] */
  { /*    54 */ DEM_CFG_DATA_FROM_CBK                         ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xeeb8_DID_EEB8_HV_voltage_received_from_BECM_ReadData            },  /* [#DID_0xeeb8_DID_EEB8_HV_voltage_received_from_BECM, DidDID_EEB8_HV_voltage_received_from_BECM] */
  { /*    55 */ DEM_CFG_DATA_FROM_OCCCTR                      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR                                                                                  },  /* [#OperCycCnt4_OperCycCnt4, EdrOperCycCnt4] */
  { /*    56 */ DEM_CFG_DATA_FROM_OCCCTR                      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR                                                                                  },  /* [#OperCycCnt2_OperCycCnt2, EdrOperCycCnt2] */
  { /*    57 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xeed5_EED5_Safety_Torque_Quality_factor_ReadData                 },  /* [#DID_0xeed5_EED5_Safety_Torque_Quality_factor, DidDID_EED5_Safety_Torque_QF_factor] */
  { /*    58 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe320_DID_E320_System_Mode_Mismatch_ReadData                     },  /* [#DID_0xe320_DID_E320_System_Mode_Mismatch, DidDID_E320_System_Mode_Mismatch] */
  { /*    59 */ DEM_CFG_DATA_FROM_CBK                         ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xeeb7_DID_EEB7_ECM_Power_Limitation_minimum_ReadData             },  /* [#DID_0xeeb7_DID_EEB7_ECM_Power_Limitation_minimum, DidDID_EEB7_ECM_Power_Limitation_minimum] */
  { /*    60 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe364_DID_E364_AURIX_Fault_Indication_ReadData                   },  /* [#DID_0xe364_DID_E364_AURIX_Fault_Indication, DidDID_E364_AURIX_Fault_Indication] */
  { /*    61 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xeed1_EED1_1_ReadData                                            },  /* [#DID_0xeed1_EED1_1, DidDID_EED1_Safty_monitor_Fault_Indication] */
  { /*    62 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xeed1_EED1_0_ReadData                                            },  /* [#DID_0xeed1_EED1_0, DidDID_EED1_Safty_monitor_Fault_Indication] */
  { /*    63 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xeed1_EED1_3_ReadData                                            },  /* [#DID_0xeed1_EED1_3, DidDID_EED1_Safty_monitor_Fault_Indication] */
  { /*    64 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xeed1_EED1_2_ReadData                                            },  /* [#DID_0xeed1_EED1_2, DidDID_EED1_Safty_monitor_Fault_Indication] */
  { /*    65 */ DEM_CFG_DATA_FROM_MAX_FDC_DURING_CURRENT_CYCLE,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR                                                                                  },  /* [#MaxDTCDetCntThisCycle_MaxDTCDetCntThisCycle, EdrMaxDTCDetCntThisCycle] */
  { /*    66 */ DEM_CFG_DATA_FROM_CBK                         ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe312_DID_E312_Wheel_Speed_ReadData                              },  /* [#DID_0xe312_DID_E312_Wheel_Speed, DidDID_E312_Wheel_Speed] */
  { /*    67 */ DEM_CFG_DATA_FROM_CBK                         ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe341_DID_E341_q_axis_voltage_ReadData                           },  /* [#DID_0xe341_DID_E341_q_axis_voltage, DidDID_E341_q_axis_voltage] */
  { /*    68 */ DEM_CFG_DATA_FROM_CBK                         ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xeed3_DID_EED3_Safety_speed_ReadData                             },  /* [#DID_0xeed3_DID_EED3_Safety_speed, DidDID_EED3_Safety_speed] */
  { /*    69 */ DEM_CFG_DATA_FROM_CBK                         ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xee9c_DID_EE9C_Transient_Phase_Current_A_ReadData                },  /* [#DID_0xee9c_DID_EE9C_Transient_Phase_Current_A, DidDID_EE9C_Transient_Phase_Current_A] */
  { /*    70 */ DEM_CFG_DATA_FROM_CBK                         ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xeed2_DID_EED2_SaftyTorque_ReadData                              },  /* [#DID_0xeed2_DID_EED2_SaftyTorque, DidDID_0xEEC7_1] */
  { /*    71 */ DEM_CFG_DATA_FROM_CBK                         ,          3u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xdd01_DID_DD01_Total_Distance_ReadData                           },  /* [#DID_0xdd01_DID_DD01_Total_Distance, DidDID_DD01_Total_Distance] */
  { /*    72 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xeebf_DID_EEBF_HV_Main_Relay_Status_ReadData                     },  /* [#DID_0xeebf_DID_EEBF_HV_Main_Relay_Status, DidDID_EEBF_HV_Main_Relay_Status] */
  { /*    73 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe333_2002_L_Ser_ReadData                                        },  /* [#DID_0xe333_2002_L_Ser, DidDID_E333_2002_State] */
  { /*    74 */ DEM_CFG_DATA_FROM_CBK                         ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xeeb2_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_ReadData    },  /* [#DID_0xeeb2_DID_EEB2_Three_Phase_Motor_Current_RMS_Current, DidDID_EEB2_Three_Phase_Motor_Current_RMS_Current] */
  { /*    75 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe333_2002_Lw_ReadData                                           },  /* [#DID_0xe333_2002_Lw, DidDID_E333_2002_State] */
  { /*    76 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe333_2002_Lv_ReadData                                           },  /* [#DID_0xe333_2002_Lv, DidDID_E333_2002_State] */
  { /*    77 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xee9a_DID_EE9A_Inverter_Coolant_Temperature_ReadData             },  /* [#DID_0xee9a_DID_EE9A_Inverter_Coolant_Temperature, DidDID_EE9A_Inverter_Coolant_Temperature] */
  { /*    78 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xdd0c_DID_DD0C_Electric_Power_Level_ReadData                     },  /* [#DID_0xdd0c_DID_DD0C_Electric_Power_Level, DidDID_DD0C_Electric_Power_Level] */
  { /*    79 */ DEM_CFG_DATA_FROM_CBK                         ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe337_DID_E337_q_axis_current_setpoint_ReadData                  },  /* [#DID_0xe337_DID_E337_q_axis_current_setpoint, DidDID_E337_q_axis_current_setpoint] */
  { /*    80 */ DEM_CFG_DATA_FROM_CBK                         ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xeeb6_DID_EEB6_ECM_Power_Limitation_maximum_ReadData             },  /* [#DID_0xeeb6_DID_EEB6_ECM_Power_Limitation_maximum, DidDID_EEB6_ECM_Power_Limitation_maximum] */
  { /*    81 */ DEM_CFG_DATA_FROM_CBK                         ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe358_DID_E358_Resolve_angle_ReadData                            },  /* [#DID_0xe358_DID_E358_Resolve_angle, DidDID_E358_Resolve_angle] */
  { /*    82 */ DEM_CFG_DATA_FROM_CBK                         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xe333_2002_Lu_ReadData                                           }   /* [#DID_0xe333_2002_Lu, DidDID_E333_2002_State] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataElementTableCol2ElmtInd
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataElementTableCol2ElmtInd
  \brief  the indexes of the 1:1 sorted relation pointing to Dem_Cfg_DataElementTable
*/ 
#define DEM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DataElementTableCol2ElmtIndType, DEM_CONST) Dem_Cfg_DataElementTableCol2ElmtInd[82] = {
  /* Index     DataElementTableCol2ElmtInd      Referable Keys */
  /*     0 */                           1u,  /* [EdrDTCStatusindicator30] */
  /*     1 */                          42u,  /* [EdrDTCTimeStamp20] */
  /*     2 */                          32u,  /* [EdrDTCTimeStamp21] */
  /*     3 */                          39u,  /* [EdrDTCfaultdetectioncounter] */
  /*     4 */                          65u,  /* [EdrMaxDTCDetCntThisCycle] */
  /*     5 */                           6u,  /* [EdrMaxDTCSinClear] */
  /*     6 */                          22u,  /* [EdrOperCycCnt1] */
  /*     7 */                          56u,  /* [EdrOperCycCnt2] */
  /*     8 */                          24u,  /* [EdrOperCycCnt3] */
  /*     9 */                          55u,  /* [EdrOperCycCnt4] */
  /*    10 */                          21u,  /* [EdrOperCycCnt5] */
  /*    11 */                          52u,  /* [EdrOperCycCnt6] */
  /*    12 */                          70u,  /* [DidDID_0xEEC7_1] */
  /*    13 */                          25u,  /* [DidDID_D003_Vehicle_Speed] */
  /*    14 */                          15u,  /* [DidDID_DD00_Global_Real_Time] */
  /*    15 */                          71u,  /* [DidDID_DD01_Total_Distance] */
  /*    16 */                          31u,  /* [DidDID_DD02_Vehicle_Battery_Voltage] */
  /*    17 */                          13u,  /* [DidDID_DD0A_Usage_Mode] */
  /*    18 */                          78u,  /* [DidDID_DD0C_Electric_Power_Level] */
  /*    19 */                          48u,  /* [DidDID_E300_HVDC_Voltage] */
  /*    20 */                           3u,  /* [DidDID_E301_HVDC_Current] */
  /*    21 */                          26u,  /* [DidDID_E303_Motor_Speed] */
  /*    22 */                          51u,  /* [DidDID_E304_Actual_Torque] */
  /*    23 */                           4u,  /* [DidDID_E305_Inverter_IGBT_Junction_Temp] */
  /*    24 */                          28u,  /* [DidDID_E306_Motor_Temperature] */
  /*    25 */                           7u,  /* [DidDID_E307_System_Mode] */
  /*    26 */                           9u,  /* [DidDID_E308_ECM_Torque_Request] */
  /*    27 */                          12u,  /* [DidDID_E309_ECM_Mode_Request] */
  /*    28 */                           2u,  /* [DidDID_E310_IEM_MGM_Derating_Status] */
  /*    29 */                          47u,  /* [DidDID_E311_Crash_Status] */
  /*    30 */                          66u,  /* [DidDID_E312_Wheel_Speed] */
  /*    31 */                          46u,  /* [DidDID_E313_Active_discharge_status] */
  /*    32 */                          20u,  /* [DidDID_E314_Available_Torque_maximum] */
  /*    33 */                          53u,  /* [DidDID_E315_Available_Torque_minimum] */
  /*    34 */                          11u,  /* [DidDID_E319_Torque_Direction] */
  /*    35 */                          58u,  /* [DidDID_E320_System_Mode_Mismatch] */
  /*    36 */                          49u,  /* [DidDID_E324_Motor_Derating_reason_of_IEM_MGM] */
  /*    37 */                          17u,  /* [DidDID_E333_2002_State] */
  /*    38 */                          19u,  /* [DidDID_E333_2002_State] */
  /*    39 */                          18u,  /* [DidDID_E333_2002_State] */
  /*    40 */                          82u,  /* [DidDID_E333_2002_State] */
  /*    41 */                          76u,  /* [DidDID_E333_2002_State] */
  /*    42 */                          75u,  /* [DidDID_E333_2002_State] */
  /*    43 */                          43u,  /* [DidDID_E333_2002_State] */
  /*    44 */                          73u,  /* [DidDID_E333_2002_State] */
  /*    45 */                          10u,  /* [DidDID_E335_d_axis_current_setpoint] */
  /*    46 */                          38u,  /* [DidDID_E336_d_axis_current_feedback] */
  /*    47 */                          79u,  /* [DidDID_E337_q_axis_current_setpoint] */
  /*    48 */                          36u,  /* [DidDID_E338_q_axis_current_feedback] */
  /*    49 */                           5u,  /* [DidDID_E339_d_axis_voltage] */
  /* Index     DataElementTableCol2ElmtInd      Referable Keys */
  /*    50 */                          67u,  /* [DidDID_E341_q_axis_voltage] */
  /*    51 */                          45u,  /* [DidDID_E346_ECM_Torque_Allowed_Status] */
  /*    52 */                          33u,  /* [DidDID_E347_IGBT_Max_Temperature] */
  /*    53 */                          40u,  /* [DidDID_E348_Phase_U_PWM_duty] */
  /*    54 */                          30u,  /* [DidDID_E349_Phase_V_PWM_duty] */
  /*    55 */                          41u,  /* [DidDID_E350_Phase_W_PWM_duty] */
  /*    56 */                          27u,  /* [DidDID_E353_Flux_weakening_correction_factor] */
  /*    57 */                           8u,  /* [DidDID_E357_Resolve_compensated_angle] */
  /*    58 */                          81u,  /* [DidDID_E358_Resolve_angle] */
  /*    59 */                          29u,  /* [DidDID_E363_Modulation_index] */
  /*    60 */                          60u,  /* [DidDID_E364_AURIX_Fault_Indication] */
  /*    61 */                          77u,  /* [DidDID_EE9A_Inverter_Coolant_Temperature] */
  /*    62 */                          69u,  /* [DidDID_EE9C_Transient_Phase_Current_A] */
  /*    63 */                          37u,  /* [DidDID_EE9D_Transient_Phase_Current_B] */
  /*    64 */                          16u,  /* [DidDID_EE9E_Transient_Phase_Current_C] */
  /*    65 */                          50u,  /* [DidDID_EE9F_Gate_Status] */
  /*    66 */                          74u,  /* [DidDID_EEB2_Three_Phase_Motor_Current_RMS_Current] */
  /*    67 */                          34u,  /* [DidDID_EEB5_IEM_MGM_current_torque] */
  /*    68 */                          80u,  /* [DidDID_EEB6_ECM_Power_Limitation_maximum] */
  /*    69 */                          59u,  /* [DidDID_EEB7_ECM_Power_Limitation_minimum] */
  /*    70 */                          54u,  /* [DidDID_EEB8_HV_voltage_received_from_BECM] */
  /*    71 */                          35u,  /* [DidDID_EEBE_Offset_angle_status] */
  /*    72 */                          72u,  /* [DidDID_EEBF_HV_Main_Relay_Status] */
  /*    73 */                          14u,  /* [DidDID_EEC3_ECU_power_supply_Voltage] */
  /*    74 */                          44u,  /* [DidDID_EEC4_Charging_Power_Sustain_Relay_CPSR_Voltage] */
  /*    75 */                          62u,  /* [DidDID_EED1_Safty_monitor_Fault_Indication] */
  /*    76 */                          61u,  /* [DidDID_EED1_Safty_monitor_Fault_Indication] */
  /*    77 */                          64u,  /* [DidDID_EED1_Safty_monitor_Fault_Indication] */
  /*    78 */                          63u,  /* [DidDID_EED1_Safty_monitor_Fault_Indication] */
  /*    79 */                          68u,  /* [DidDID_EED3_Safety_speed] */
  /*    80 */                          23u,  /* [DidDID_EED4_Safty_Function_Mode] */
  /*    81 */                          57u   /* [DidDID_EED5_Safety_Torque_QF_factor] */
};
#define DEM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DebounceTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DebounceTable
  \details
  Element                   Description
  IncrementStepSize         DemDebounceCounterIncrementStepSize of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  PassedThreshold           DemDebounceCounterPassedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  EventDebounceAlgorithm    Used DemEventParameter/DemEventClass/DemDebounceAlgorithmClass
  MaskedBits                contains bitcoded the boolean data of Dem_Cfg_DebounceContinuousOfDebounceTable, Dem_Cfg_EventDebounceBehaviorOfDebounceTable, Dem_Cfg_JumpDownOfDebounceTable, Dem_Cfg_JumpUpOfDebounceTable, Dem_Cfg_StorageOfDebounceTable
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DebounceTableType, DEM_CONST) Dem_Cfg_DebounceTable[2] = {
    /* Index    IncrementStepSize  PassedThreshold  EventDebounceAlgorithm                                                      MaskedBits        Referable Keys */
  { /*     0 */               127,            -128, DEM_CFG_DEM_CFG_DEBOUNCETYPE_COUNTER_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE,      0x06u },  /* [AURIX_EEPROM_FLT, AURIX_HW_FLT, AURIX_RST_MPL, AURIX_RST_SNG, AURIX_WATHDOG_FLT, COM_Busoff, COM_CarConfigErr, COM_NotConfig, CRASH_DTC, CU_TEMP1_RNG_HI, CU_TEMP1_RNG_LO, CU_TEMP2_RNG_HI, CU_TEMP2_RNG_LO, CU_TEMP_GRDT, CU_TEMP_HWP, CU_TEMP_HW_FLT, CU_TEMP_HW_FLT_001, DiagC_ClutchService, EXT_UC_SPI_FLT, Eg_HallVolWrong, FS_MONITIOR_ASC_FLT, FS_MONITIOR_ASC_FW_FLT, GA_BLDC_FLT, GA_BLDC_POS_FLT, Ga_FindEngleAngleFailed, Ga_GADisengageFailure, Ga_GAEngageFailure, Ga_MoveOverThd, Ga_TmSpdSyncFailed, Ga_ZeroFindDistanFailure, INV_ACTV_DCHA_HW, INV_CONTROL_LIMIT, INV_COOLT_INLET_TEMP_HWP, INV_CU_TEMP1_RNG_NOK, INV_CU_TEMP2_RNG_NOK, INV_EM_OVRSPD_HWP, INV_EM_STATOR_TEMP2_ELE_FLT, INV_EM_STATOR_TEMP2_GRDT, INV_EM_STATOR_TEMP2_RNG_HI, INV_EM_STATOR_TEMP2_RNG_LO, INV_EM_STATOR_TEMP2_RNG_NOK, INV_EM_STATOR_TEMP2_RNG_SWT, INV_EM_STATOR_TEMP_ELE_FLT, INV_EM_STATOR_TEMP_GRDT, INV_EM_STATOR_TEMP_HWP, INV_EM_STATOR_TEMP_RNG_HI, INV_EM_STATOR_TEMP_RNG_LO, INV_EM_STATOR_TEMP_RNG_NOK, INV_EM_STATOR_TEMP_RNG_SWT, INV_GATE_DRVR_BOT_HWP, INV_GATE_DRVR_TOP_HWP, INV_IAC_OC_HWP, INV_IAC_OC_SWP, INV_IAC_PHA_LOSS_MPL, INV_IAC_PLAUS_SUM, INV_IAC_U_AMP, INV_IAC_U_ELEC_HI, INV_IAC_U_ELEC_HWP, INV_IAC_U_ELEC_LO, INV_IAC_U_OFFS, INV_IAC_U_RNG_HI, INV_IAC_U_RNG_LO, INV_IAC_V_AMP, INV_IAC_V_ELEC_HI, INV_IAC_V_ELEC_HWP, INV_IAC_V_ELEC_HWP_001, INV_IAC_V_ELEC_LO, INV_IAC_V_OFFS, INV_IAC_V_RNG_HI, INV_IAC_V_RNG_LO, INV_IAC_W_AMP, INV_IAC_W_ELEC_HI, INV_IAC_W_ELEC_LO, INV_IAC_W_OFFS, INV_IAC_W_RNG_HI, INV_IAC_W_RNG_LO, INV_IGBT_TEMP_HWP, INV_IGBT_TEMP_U_GRDT, INV_IGBT_TEMP_U_PLAUS, INV_IGBT_TEMP_U_RNG_HI, INV_IGBT_TEMP_U_RNG_LO, INV_IGBT_TEMP_V_GRDT, INV_IGBT_TEMP_V_PLAUS, INV_IGBT_TEMP_V_RNG_HI, INV_IGBT_TEMP_V_RNG_LO, INV_IGBT_TEMP_W_GRDT, INV_IGBT_TEMP_W_PLAUS, INV_IGBT_TEMP_W_RNG_HI, INV_IGBT_TEMP_W_RNG_LO, INV_IMMO_AUTHFAIL, INV_IMMO_NOKEY, INV_INTERLOCK_FLT, INV_QUIESCENT_FLT, INV_RSLVR_COS_AMP, INV_RSLVR_COS_ELEC_FLT, INV_RSLVR_COS_ELEC_HI, INV_RSLVR_COS_ELEC_LO, INV_RSLVR_COS_ELEC_OPEN, INV_RSLVR_COS_RNG_HI, INV_RSLVR_COS_RNG_LO, INV_RSLVR_COS_RNG_NOK, INV_RSLVR_EXCT_ELEC_FLT, INV_RSLVR_EXCT_ELEC_HI, INV_RSLVR_EXCT_ELEC_LO, INV_RSLVR_EXCT_ELEC_OPEN, INV_RSLVR_EXCT_FREQ_RNG_NOK, INV_RSLVR_EXCT_OC_HWP, INV_RSLVR_EXCT_OC_HWP_001, INV_RSLVR_EXCT_OC_HWP_002, INV_RSLVR_EXCT_PLAUS, INV_RSLVR_EXCT_RNG_HI, INV_RSLVR_EXCT_RNG_LO, INV_RSLVR_EXCT_RNG_NOK, INV_RSLVR_HW_FLT, INV_RSLVR_OFFS_DFT, INV_RSLVR_OFFS_OUT_RANG, INV_RSLVR_SIN_AMP, INV_RSLVR_SIN_COS_PLAUS, INV_RSLVR_SIN_COS_PLAUS_AMP, INV_RSLVR_SIN_ELEC_FLT, INV_RSLVR_SIN_ELEC_HI, INV_RSLVR_SIN_ELEC_LO, INV_RSLVR_SIN_ELEC_OPEN, INV_RSLVR_SIN_RNG_HI, INV_RSLVR_SIN_RNG_LO, INV_RSLVR_SIN_RNG_NOK, INV_SHUT_OFF_PAH_START_UP, INV_TEMP_DCHA_HW, INV_UHVDC_1_ELEC_HI, INV_UHVDC_1_RNG_HI, INV_UHVDC_2_RNG_HI, INV_UHVDC_OV_HWP, INV_UHVDC_OV_SWP, INV_UHVDC_PLAUS, INV_UHVDC_UV_HWP, MON_TQ_PLAUS_PWR_MDL, PA_ACTION_FLT, PA_ELE_FLT, PA_OpenCirc, PA_OpenCirc_FLT, PLOCK_Current_RNG_OUT, PS_5V_Fault, PS_BLDC_OV_FLT, PS_BLDC_UV_FLT, PS_DRVB_Fault, PS_ECUSUPPLY_HIGH, PS_ECUSUPPLY_LOW, PS_KL15_RNG_HI, PS_KL30_BACKUP_FLT, PS_KL30_PLAUS, PS_KL30_RNG_HI, PS_KL30_RNG_LO, PS_P12_RES_FLT, PS_P15_U_FLT, PS_P15_V_FLT, PS_P15_W_FLT, PS_P5_UC_FLT, PS_WhlSnsr_FLT, PS_WhlSnsr_Vltg_FLT, PSnsr_ELE_FLT, PSnsr_GRADT_Flt, PSnsr_RNG_NOK, VCC_OverVoltage, VCC_UnderVoltage, VCEvBecmPropFr01Tioutd, VCEvBecmPropFr02Tioutd, VCEvEcmPropFr02MgmFr00Tioutd, VCEvEcmPropFr02Tioutd, VCEvEcmPropFr04Tioutd, VCEvEcmPropFr05Tioutd, VCEvEcmPropFr08Tioutd, VCEvEcmPropFr11Tioutd, VCEvEcmPropFr24MgmFr01Tioutd, VCEvEcmPropFr25Tioutd, VCEvEcmPropXevFr06Tioutd, VCEvSrsPropFr02Tioutd, VCEvVddmPropFr05Tioutd, VCEvVddmPropFr08Tioutd, VCEvVddmPropFr08Tioutd_001, VCEvVddmPropFr15Tioutd, VCEvVddmPropFr17Tioutd, VCEvVddmPropFr18Tioutd, VCEvVddmPropFr19Tioutd, VcEvChkSum, VcEvChkSumCrashStsSafe, VcEvChkSumHvSysRlySts, VcEvChkSumWhlMotSysTqAllwd, VcEvCntr, VcEvCntrCrashStsSafe, VcEvCntrHvSysRlySts, VcEvCntrWhlMotSysTqAllwd, VcEvEMPerfPlaus, VcEvMonESpd, VcEvMonErrMode, VcEvMonIPH, VcEvMonISAR, VcEvMonMode, VcEvMonMode_001, VcEvMonTrqAct, VcEvMonTrqActPlaus, VcEvMonTrqCmp, VcEvNodeMisBECM, VcEvNodeMisECM, VcEvNodeMisVDDM, VcEvPropCANGlbTiOutd, VcEvTsttrPlaus] */
  { /*     1 */                 0,               0, DEM_CFG_DEM_CFG_DEBOUNCETYPE_INVALID_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE,      0x00u }   /* [#EVENT_INVALID] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DtcTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DtcTable
  \details
  Element           Description
  UdsDtc        
  DtcSeverity   
  FunctionalUnit
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DtcTableType, DEM_CONST) Dem_Cfg_DtcTable[207] = {
    /* Index    UdsDtc        DtcSeverity  FunctionalUnit        Referable Keys */
  { /*     0 */ 0x00FFFFFFuL,          0u,           255u },  /* [#NoUdsDtcConfigured, #NoObdDtcConfigured, #NoJ1939DtcConfigured] */
  { /*     1 */ 0x00964900uL,        128u,             0u },  /* [DTCClass_AURIX_EEPROM_FLT] */
  { /*     2 */ 0x00964C00uL,        128u,             0u },  /* [DTCClass_AURIX_HW_FLT] */
  { /*     3 */ 0x00505596uL,        128u,             0u },  /* [DTCClass_AURIX_RST_MPL] */
  { /*     4 */ 0x00505594uL,         32u,             0u },  /* [DTCClass_AURIX_RST_SNG] */
  { /*     5 */ 0x00160800uL,        128u,             0u },  /* [DTCClass_AURIX_WATHDOG_FLT] */
  { /*     6 */ 0x00DC4588uL,        128u,             0u },  /* [DTCClass_COM_Busoff] */
  { /*     7 */ 0x00E30056uL,        128u,             0u },  /* [DTCClass_COM_CarConfigErr] */
  { /*     8 */ 0x00E30055uL,        128u,             0u },  /* [DTCClass_COM_NotConfig] */
  { /*     9 */ 0x00965200uL,        128u,             0u },  /* [DTCClass_CRASH_DTC] */
  { /*    10 */ 0x00101C11uL,         32u,             0u },  /* [DTCClass_CU_TEMP1_RNG_HI] */
  { /*    11 */ 0x00101C12uL,         32u,             0u },  /* [DTCClass_CU_TEMP1_RNG_LO] */
  { /*    12 */ 0x000AF211uL,         32u,             0u },  /* [DTCClass_CU_TEMP2_RNG_HI] */
  { /*    13 */ 0x000AF212uL,         32u,             0u },  /* [DTCClass_CU_TEMP2_RNG_LO] */
  { /*    14 */ 0x00101C27uL,         32u,             0u },  /* [DTCClass_CU_TEMP_GRDT] */
  { /*    15 */ 0x00101D00uL,         32u,             0u },  /* [DTCClass_CU_TEMP_HWP] */
  { /*    16 */ 0x00101C96uL,         32u,             0u },  /* [DTCClass_CU_TEMP_HW_FLT] */
  { /*    17 */ 0x00101C98uL,        128u,             0u },  /* [DTCClass_CU_TEMP_HW_FLT_001] */
  { /*    18 */ 0x00081092uL,        128u,             0u },  /* [DTCClass_DiagC_ClutchService] */
  { /*    19 */ 0x00964B00uL,        128u,             0u },  /* [DTCClass_EXT_UC_SPI_FLT] */
  { /*    20 */ 0x0096B492uL,        128u,             0u },  /* [DTCClass_Eg_HallVolWrong] */
  { /*    21 */ 0x000C1904uL,        128u,             0u },  /* [DTCClass_FS_MONITIOR_ASC_FLT] */
  { /*    22 */ 0x000C1906uL,        128u,             0u },  /* [DTCClass_FS_MONITIOR_ASC_FW_FLT] */
  { /*    23 */ 0x0028C893uL,        128u,             0u },  /* [DTCClass_GA_BLDC_FLT] */
  { /*    24 */ 0x0028CC01uL,        128u,             0u },  /* [DTCClass_GA_BLDC_POS_FLT] */
  { /*    25 */ 0x0028C878uL,        128u,             0u },  /* [DTCClass_Ga_FindEngleAngleFailed] */
  { /*    26 */ 0x00285992uL,        128u,             0u },  /* [DTCClass_Ga_GADisengageFailure] */
  { /*    27 */ 0x00285792uL,        128u,             0u },  /* [DTCClass_Ga_GAEngageFailure] */
  { /*    28 */ 0x00081094uL,        128u,             0u },  /* [DTCClass_Ga_MoveOverThd] */
  { /*    29 */ 0x00181E92uL,        128u,             0u },  /* [DTCClass_Ga_TmSpdSyncFailed] */
  { /*    30 */ 0x00081099uL,        128u,             0u },  /* [DTCClass_Ga_ZeroFindDistanFailure] */
  { /*    31 */ 0x00103063uL,        128u,             0u },  /* [DTCClass_INV_ACTV_DCHA_HW] */
  { /*    32 */ 0x000A9094uL,        128u,             0u },  /* [DTCClass_INV_CONTROL_LIMIT] */
  { /*    33 */ 0x000A934BuL,         32u,             0u },  /* [DTCClass_INV_COOLT_INLET_TEMP_HWP] */
  { /*    34 */ 0x00101C1CuL,        128u,             0u },  /* [DTCClass_INV_CU_TEMP1_RNG_NOK] */
  { /*    35 */ 0x000AF21CuL,         32u,             0u },  /* [DTCClass_INV_CU_TEMP2_RNG_NOK] */
  { /*    36 */ 0x00102000uL,         32u,             0u },  /* [DTCClass_INV_EM_OVRSPD_HWP] */
  { /*    37 */ 0x000A3001uL,         32u,             0u },  /* [DTCClass_INV_EM_STATOR_TEMP2_ELE_FLT] */
  { /*    38 */ 0x000A3027uL,         32u,             0u },  /* [DTCClass_INV_EM_STATOR_TEMP2_GRDT] */
  { /*    39 */ 0x000A3011uL,         32u,             0u },  /* [DTCClass_INV_EM_STATOR_TEMP2_RNG_HI] */
  { /*    40 */ 0x000A3012uL,         32u,             0u },  /* [DTCClass_INV_EM_STATOR_TEMP2_RNG_LO] */
  { /*    41 */ 0x000A301CuL,         32u,             0u },  /* [DTCClass_INV_EM_STATOR_TEMP2_RNG_NOK] */
  { /*    42 */ 0x000A302AuL,         32u,             0u },  /* [DTCClass_INV_EM_STATOR_TEMP2_RNG_SWT] */
  { /*    43 */ 0x000A2A01uL,         32u,             0u },  /* [DTCClass_INV_EM_STATOR_TEMP_ELE_FLT] */
  { /*    44 */ 0x000A2A27uL,         32u,             0u },  /* [DTCClass_INV_EM_STATOR_TEMP_GRDT] */
  { /*    45 */ 0x00101B00uL,         32u,             0u },  /* [DTCClass_INV_EM_STATOR_TEMP_HWP] */
  { /*    46 */ 0x000A2A11uL,         32u,             0u },  /* [DTCClass_INV_EM_STATOR_TEMP_RNG_HI] */
  { /*    47 */ 0x000A2A12uL,         32u,             0u },  /* [DTCClass_INV_EM_STATOR_TEMP_RNG_LO] */
  { /*    48 */ 0x000A2A1CuL,         32u,             0u },  /* [DTCClass_INV_EM_STATOR_TEMP_RNG_NOK] */
  { /*    49 */ 0x000A2A2AuL,         32u,             0u },  /* [DTCClass_INV_EM_STATOR_TEMP_RNG_SWT] */
    /* Index    UdsDtc        DtcSeverity  FunctionalUnit        Referable Keys */
  { /*    50 */ 0x00104E49uL,         32u,             0u },  /* [DTCClass_INV_GATE_DRVR_BOT_HWP] */
  { /*    51 */ 0x00104D49uL,         32u,             0u },  /* [DTCClass_INV_GATE_DRVR_TOP_HWP] */
  { /*    52 */ 0x00101119uL,        128u,             0u },  /* [DTCClass_INV_IAC_OC_HWP] */
  { /*    53 */ 0x0010111DuL,        128u,             0u },  /* [DTCClass_INV_IAC_OC_SWP] */
  { /*    54 */ 0x000C0513uL,        128u,             0u },  /* [DTCClass_INV_IAC_PHA_LOSS_MPL] */
  { /*    55 */ 0x00103E19uL,        128u,             0u },  /* [DTCClass_INV_IAC_PLAUS_SUM] */
  { /*    56 */ 0x000A5D22uL,        128u,             0u },  /* [DTCClass_INV_IAC_U_AMP] */
  { /*    57 */ 0x000BE512uL,        128u,             0u },  /* [DTCClass_INV_IAC_U_ELEC_HI] */
  { /*    58 */ 0x000BE501uL,        128u,             0u },  /* [DTCClass_INV_IAC_U_ELEC_HWP] */
  { /*    59 */ 0x000BE513uL,        128u,             0u },  /* [DTCClass_INV_IAC_U_ELEC_LO] */
  { /*    60 */ 0x00103F17uL,        128u,             0u },  /* [DTCClass_INV_IAC_U_OFFS] */
  { /*    61 */ 0x000BE519uL,        128u,             0u },  /* [DTCClass_INV_IAC_U_RNG_HI] */
  { /*    62 */ 0x000BE518uL,        128u,             0u },  /* [DTCClass_INV_IAC_U_RNG_LO] */
  { /*    63 */ 0x000A6022uL,        128u,             0u },  /* [DTCClass_INV_IAC_V_AMP] */
  { /*    64 */ 0x000BE912uL,        128u,             0u },  /* [DTCClass_INV_IAC_V_ELEC_HI] */
  { /*    65 */ 0x000BE901uL,        128u,             0u },  /* [DTCClass_INV_IAC_V_ELEC_HWP] */
  { /*    66 */ 0x000BED01uL,        128u,             0u },  /* [DTCClass_INV_IAC_V_ELEC_HWP_001] */
  { /*    67 */ 0x000BE913uL,        128u,             0u },  /* [DTCClass_INV_IAC_V_ELEC_LO] */
  { /*    68 */ 0x00104017uL,        128u,             0u },  /* [DTCClass_INV_IAC_V_OFFS] */
  { /*    69 */ 0x000BE919uL,        128u,             0u },  /* [DTCClass_INV_IAC_V_RNG_HI] */
  { /*    70 */ 0x000BE918uL,        128u,             0u },  /* [DTCClass_INV_IAC_V_RNG_LO] */
  { /*    71 */ 0x000A6322uL,        128u,             0u },  /* [DTCClass_INV_IAC_W_AMP] */
  { /*    72 */ 0x000BED12uL,        128u,             0u },  /* [DTCClass_INV_IAC_W_ELEC_HI] */
  { /*    73 */ 0x000BED13uL,        128u,             0u },  /* [DTCClass_INV_IAC_W_ELEC_LO] */
  { /*    74 */ 0x00104117uL,        128u,             0u },  /* [DTCClass_INV_IAC_W_OFFS] */
  { /*    75 */ 0x000BED19uL,        128u,             0u },  /* [DTCClass_INV_IAC_W_RNG_HI] */
  { /*    76 */ 0x000BED18uL,        128u,             0u },  /* [DTCClass_INV_IAC_W_RNG_LO] */
  { /*    77 */ 0x00101F00uL,         32u,             0u },  /* [DTCClass_INV_IGBT_TEMP_HWP] */
  { /*    78 */ 0x00104627uL,        128u,             0u },  /* [DTCClass_INV_IGBT_TEMP_U_GRDT] */
  { /*    79 */ 0x00104662uL,        128u,             0u },  /* [DTCClass_INV_IGBT_TEMP_U_PLAUS] */
  { /*    80 */ 0x00104611uL,        128u,             0u },  /* [DTCClass_INV_IGBT_TEMP_U_RNG_HI] */
  { /*    81 */ 0x00104612uL,        128u,             0u },  /* [DTCClass_INV_IGBT_TEMP_U_RNG_LO] */
  { /*    82 */ 0x00104727uL,        128u,             0u },  /* [DTCClass_INV_IGBT_TEMP_V_GRDT] */
  { /*    83 */ 0x00104762uL,        128u,             0u },  /* [DTCClass_INV_IGBT_TEMP_V_PLAUS] */
  { /*    84 */ 0x00104711uL,        128u,             0u },  /* [DTCClass_INV_IGBT_TEMP_V_RNG_HI] */
  { /*    85 */ 0x00104712uL,        128u,             0u },  /* [DTCClass_INV_IGBT_TEMP_V_RNG_LO] */
  { /*    86 */ 0x00104827uL,        128u,             0u },  /* [DTCClass_INV_IGBT_TEMP_W_GRDT] */
  { /*    87 */ 0x00104862uL,         32u,             0u },  /* [DTCClass_INV_IGBT_TEMP_W_PLAUS] */
  { /*    88 */ 0x00104811uL,        128u,             0u },  /* [DTCClass_INV_IGBT_TEMP_W_RNG_HI] */
  { /*    89 */ 0x00104812uL,        128u,             0u },  /* [DTCClass_INV_IGBT_TEMP_W_RNG_LO] */
  { /*    90 */ 0x00161A86uL,         32u,             0u },  /* [DTCClass_INV_IMMO_AUTHFAIL] */
  { /*    91 */ 0x00D0B151uL,         32u,             0u },  /* [DTCClass_INV_IMMO_NOKEY] */
  { /*    92 */ 0x00969294uL,         32u,             0u },  /* [DTCClass_INV_INTERLOCK_FLT] */
  { /*    93 */ 0x00D02268uL,         32u,             0u },  /* [DTCClass_INV_QUIESCENT_FLT] */
  { /*    94 */ 0x000CDA22uL,        128u,             0u },  /* [DTCClass_INV_RSLVR_COS_AMP] */
  { /*    95 */ 0x000CDA01uL,        128u,             0u },  /* [DTCClass_INV_RSLVR_COS_ELEC_FLT] */
  { /*    96 */ 0x000CDA12uL,        128u,             0u },  /* [DTCClass_INV_RSLVR_COS_ELEC_HI] */
  { /*    97 */ 0x000CDA11uL,        128u,             0u },  /* [DTCClass_INV_RSLVR_COS_ELEC_LO] */
  { /*    98 */ 0x000CDA13uL,        128u,             0u },  /* [DTCClass_INV_RSLVR_COS_ELEC_OPEN] */
  { /*    99 */ 0x000CDA17uL,        128u,             0u },  /* [DTCClass_INV_RSLVR_COS_RNG_HI] */
    /* Index    UdsDtc        DtcSeverity  FunctionalUnit        Referable Keys */
  { /*   100 */ 0x000CDA16uL,        128u,             0u },  /* [DTCClass_INV_RSLVR_COS_RNG_LO] */
  { /*   101 */ 0x000CDA1CuL,        128u,             0u },  /* [DTCClass_INV_RSLVR_COS_RNG_NOK] */
  { /*   102 */ 0x000C5001uL,        128u,             0u },  /* [DTCClass_INV_RSLVR_EXCT_ELEC_FLT] */
  { /*   103 */ 0x000C5012uL,        128u,             0u },  /* [DTCClass_INV_RSLVR_EXCT_ELEC_HI] */
  { /*   104 */ 0x000C5011uL,        128u,             0u },  /* [DTCClass_INV_RSLVR_EXCT_ELEC_LO] */
  { /*   105 */ 0x000C5013uL,        128u,             0u },  /* [DTCClass_INV_RSLVR_EXCT_ELEC_OPEN] */
  { /*   106 */ 0x000C5038uL,        128u,             0u },  /* [DTCClass_INV_RSLVR_EXCT_FREQ_RNG_NOK] */
  { /*   107 */ 0x000C0B2AuL,         32u,             0u },  /* [DTCClass_INV_RSLVR_EXCT_OC_HWP] */
  { /*   108 */ 0x00101F4BuL,         32u,             0u },  /* [DTCClass_INV_RSLVR_EXCT_OC_HWP_001] */
  { /*   109 */ 0x00102219uL,         32u,             0u },  /* [DTCClass_INV_RSLVR_EXCT_OC_HWP_002] */
  { /*   110 */ 0x000C5062uL,        128u,             0u },  /* [DTCClass_INV_RSLVR_EXCT_PLAUS] */
  { /*   111 */ 0x000C5017uL,        128u,             0u },  /* [DTCClass_INV_RSLVR_EXCT_RNG_HI] */
  { /*   112 */ 0x000C5016uL,        128u,             0u },  /* [DTCClass_INV_RSLVR_EXCT_RNG_LO] */
  { /*   113 */ 0x000C501CuL,        128u,             0u },  /* [DTCClass_INV_RSLVR_EXCT_RNG_NOK] */
  { /*   114 */ 0x00102104uL,         32u,             0u },  /* [DTCClass_INV_RSLVR_HW_FLT] */
  { /*   115 */ 0x00300756uL,        128u,             0u },  /* [DTCClass_INV_RSLVR_OFFS_DFT] */
  { /*   116 */ 0x00300785uL,         32u,             0u },  /* [DTCClass_INV_RSLVR_OFFS_OUT_RANG] */
  { /*   117 */ 0x000C5A22uL,        128u,             0u },  /* [DTCClass_INV_RSLVR_SIN_AMP] */
  { /*   118 */ 0x00102161uL,        128u,             0u },  /* [DTCClass_INV_RSLVR_SIN_COS_PLAUS] */
  { /*   119 */ 0x00102162uL,         32u,             0u },  /* [DTCClass_INV_RSLVR_SIN_COS_PLAUS_AMP] */
  { /*   120 */ 0x000C5A01uL,        128u,             0u },  /* [DTCClass_INV_RSLVR_SIN_ELEC_FLT] */
  { /*   121 */ 0x000C5A12uL,        128u,             0u },  /* [DTCClass_INV_RSLVR_SIN_ELEC_HI] */
  { /*   122 */ 0x000C5A11uL,        128u,             0u },  /* [DTCClass_INV_RSLVR_SIN_ELEC_LO] */
  { /*   123 */ 0x000C5A13uL,        128u,             0u },  /* [DTCClass_INV_RSLVR_SIN_ELEC_OPEN] */
  { /*   124 */ 0x000C5A17uL,        128u,             0u },  /* [DTCClass_INV_RSLVR_SIN_RNG_HI] */
  { /*   125 */ 0x000C5A16uL,        128u,             0u },  /* [DTCClass_INV_RSLVR_SIN_RNG_LO] */
  { /*   126 */ 0x000C5A1CuL,        128u,             0u },  /* [DTCClass_INV_RSLVR_SIN_RNG_NOK] */
  { /*   127 */ 0x00A01592uL,        128u,             0u },  /* [DTCClass_INV_SHUT_OFF_PAH_START_UP] */
  { /*   128 */ 0x0010304BuL,         32u,             0u },  /* [DTCClass_INV_TEMP_DCHA_HW] */
  { /*   129 */ 0x000D2D12uL,        128u,             0u },  /* [DTCClass_INV_UHVDC_1_ELEC_HI] */
  { /*   130 */ 0x000D2D17uL,        128u,             0u },  /* [DTCClass_INV_UHVDC_1_RNG_HI] */
  { /*   131 */ 0x000DA317uL,        128u,             0u },  /* [DTCClass_INV_UHVDC_2_RNG_HI] */
  { /*   132 */ 0x00101417uL,        128u,             0u },  /* [DTCClass_INV_UHVDC_OV_HWP] */
  { /*   133 */ 0x000C7900uL,        128u,             0u },  /* [DTCClass_INV_UHVDC_OV_SWP] */
  { /*   134 */ 0x00101462uL,        128u,             0u },  /* [DTCClass_INV_UHVDC_PLAUS] */
  { /*   135 */ 0x00101416uL,        128u,             0u },  /* [DTCClass_INV_UHVDC_UV_HWP] */
  { /*   136 */ 0x000C1962uL,        128u,             0u },  /* [DTCClass_MON_TQ_PLAUS_PWR_MDL] */
  { /*   137 */ 0x00509E71uL,        128u,             0u },  /* [DTCClass_PA_ACTION_FLT] */
  { /*   138 */ 0x00509914uL,        128u,             0u },  /* [DTCClass_PA_ELE_FLT] */
  { /*   139 */ 0x00509913uL,        128u,             0u },  /* [DTCClass_PA_OpenCirc] */
  { /*   140 */ 0x00509915uL,        128u,             0u },  /* [DTCClass_PA_OpenCirc_FLT] */
  { /*   141 */ 0x0050B819uL,        128u,             0u },  /* [DTCClass_PLOCK_Current_RNG_OUT] */
  { /*   142 */ 0x00964E00uL,        128u,             0u },  /* [DTCClass_PS_5V_Fault] */
  { /*   143 */ 0x00102717uL,        128u,             0u },  /* [DTCClass_PS_BLDC_OV_FLT] */
  { /*   144 */ 0x00102716uL,        128u,             0u },  /* [DTCClass_PS_BLDC_UV_FLT] */
  { /*   145 */ 0x00102D1CuL,        128u,             0u },  /* [DTCClass_PS_DRVB_Fault] */
  { /*   146 */ 0x00EE0368uL,        128u,             0u },  /* [DTCClass_PS_ECUSUPPLY_HIGH] */
  { /*   147 */ 0x00EE0468uL,         32u,             0u },  /* [DTCClass_PS_ECUSUPPLY_LOW] */
  { /*   148 */ 0x00A016A3uL,         32u,             0u },  /* [DTCClass_PS_KL15_RNG_HI] */
  { /*   149 */ 0x000A1B62uL,         32u,             0u },  /* [DTCClass_PS_KL30_BACKUP_FLT] */
    /* Index    UdsDtc        DtcSeverity  FunctionalUnit        Referable Keys */
  { /*   150 */ 0x00F00362uL,         32u,             0u },  /* [DTCClass_PS_KL30_PLAUS] */
  { /*   151 */ 0x000A1BA3uL,        128u,             0u },  /* [DTCClass_PS_KL30_RNG_HI] */
  { /*   152 */ 0x000A1BA2uL,        128u,             0u },  /* [DTCClass_PS_KL30_RNG_LO] */
  { /*   153 */ 0x0050951CuL,        128u,             0u },  /* [DTCClass_PS_P5_UC_FLT] */
  { /*   154 */ 0x0012401CuL,         32u,             0u },  /* [DTCClass_PS_P12_RES_FLT] */
  { /*   155 */ 0x0006B01CuL,         32u,             0u },  /* [DTCClass_PS_P15_U_FLT] */
  { /*   156 */ 0x0006B31CuL,         32u,             0u },  /* [DTCClass_PS_P15_V_FLT] */
  { /*   157 */ 0x0006E61CuL,         32u,             0u },  /* [DTCClass_PS_P15_W_FLT] */
  { /*   158 */ 0x00072001uL,        128u,             0u },  /* [DTCClass_PS_WhlSnsr_FLT] */
  { /*   159 */ 0x005A901CuL,        128u,             0u },  /* [DTCClass_PS_WhlSnsr_Vltg_FLT] */
  { /*   160 */ 0x0050AC01uL,        128u,             0u },  /* [DTCClass_PSnsr_ELE_FLT] */
  { /*   161 */ 0x0050AC27uL,        128u,             0u },  /* [DTCClass_PSnsr_GRADT_Flt] */
  { /*   162 */ 0x0050AC1CuL,        128u,             0u },  /* [DTCClass_PSnsr_RNG_NOK] */
  { /*   163 */ 0x0050B817uL,        128u,             0u },  /* [DTCClass_VCC_OverVoltage] */
  { /*   164 */ 0x0050B818uL,        128u,             0u },  /* [DTCClass_VCC_UnderVoltage] */
  { /*   165 */ 0x00EF0600uL,        128u,             0u },  /* [DTCClass_VCEvBecmPropFr01Tioutd] */
  { /*   166 */ 0x00EF0100uL,        128u,             0u },  /* [DTCClass_VCEvBecmPropFr02Tioutd] */
  { /*   167 */ 0x00EF1500uL,        128u,             0u },  /* [DTCClass_VCEvEcmPropFr02MgmFr00Tioutd] */
  { /*   168 */ 0x00EF1900uL,         32u,             0u },  /* [DTCClass_VCEvEcmPropFr02Tioutd] */
  { /*   169 */ 0x00EF0700uL,        128u,             0u },  /* [DTCClass_VCEvEcmPropFr04Tioutd] */
  { /*   170 */ 0x00EF0200uL,        128u,             0u },  /* [DTCClass_VCEvEcmPropFr05Tioutd] */
  { /*   171 */ 0x00EF0400uL,        128u,             0u },  /* [DTCClass_VCEvEcmPropFr08Tioutd] */
  { /*   172 */ 0x00EF0500uL,        128u,             0u },  /* [DTCClass_VCEvEcmPropFr11Tioutd] */
  { /*   173 */ 0x00EF1200uL,        128u,             0u },  /* [DTCClass_VCEvEcmPropFr24MgmFr01Tioutd] */
  { /*   174 */ 0x00EF1300uL,         32u,             0u },  /* [DTCClass_VCEvEcmPropFr25Tioutd] */
  { /*   175 */ 0x00EF0300uL,        128u,             0u },  /* [DTCClass_VCEvEcmPropXevFr06Tioutd] */
  { /*   176 */ 0x00C15100uL,         32u,             0u },  /* [DTCClass_VCEvSrsPropFr02Tioutd] */
  { /*   177 */ 0x00EF0800uL,        128u,             0u },  /* [DTCClass_VCEvVddmPropFr05Tioutd] */
  { /*   178 */ 0x00EF1400uL,        128u,             0u },  /* [DTCClass_VCEvVddmPropFr08Tioutd] */
  { /*   179 */ 0x00EF1800uL,         32u,             0u },  /* [DTCClass_VCEvVddmPropFr08Tioutd_001] */
  { /*   180 */ 0x00EF1700uL,         32u,             0u },  /* [DTCClass_VCEvVddmPropFr15Tioutd] */
  { /*   181 */ 0x00EF0900uL,        128u,             0u },  /* [DTCClass_VCEvVddmPropFr17Tioutd] */
  { /*   182 */ 0x00EF1000uL,        128u,             0u },  /* [DTCClass_VCEvVddmPropFr18Tioutd] */
  { /*   183 */ 0x00EF1100uL,        128u,             0u },  /* [DTCClass_VCEvVddmPropFr19Tioutd] */
  { /*   184 */ 0x00D45783uL,         32u,             0u },  /* [DTCClass_VcEvChkSum] */
  { /*   185 */ 0x00EF2283uL,        128u,             0u },  /* [DTCClass_VcEvChkSumCrashStsSafe] */
  { /*   186 */ 0x00EF2383uL,        128u,             0u },  /* [DTCClass_VcEvChkSumHvSysRlySts] */
  { /*   187 */ 0x00EF2183uL,        128u,             0u },  /* [DTCClass_VcEvChkSumWhlMotSysTqAllwd] */
  { /*   188 */ 0x00D45782uL,         32u,             0u },  /* [DTCClass_VcEvCntr] */
  { /*   189 */ 0x00EF2282uL,        128u,             0u },  /* [DTCClass_VcEvCntrCrashStsSafe] */
  { /*   190 */ 0x00EF2382uL,         32u,             0u },  /* [DTCClass_VcEvCntrHvSysRlySts] */
  { /*   191 */ 0x00EF2182uL,         32u,             0u },  /* [DTCClass_VcEvCntrWhlMotSysTqAllwd] */
  { /*   192 */ 0x000A9092uL,        128u,             0u },  /* [DTCClass_VcEvEMPerfPlaus] */
  { /*   193 */ 0x00103A62uL,         32u,             0u },  /* [DTCClass_VcEvMonESpd] */
  { /*   194 */ 0x000C1994uL,        128u,             0u },  /* [DTCClass_VcEvMonErrMode] */
  { /*   195 */ 0x000BE664uL,        128u,             0u },  /* [DTCClass_VcEvMonIPH] */
  { /*   196 */ 0x00964600uL,        128u,             0u },  /* [DTCClass_VcEvMonISAR] */
  { /*   197 */ 0x001A0894uL,        128u,             0u },  /* [DTCClass_VcEvMonMode] */
  { /*   198 */ 0x001A0895uL,        128u,             0u },  /* [DTCClass_VcEvMonMode_001] */
  { /*   199 */ 0x000C1964uL,        128u,             0u },  /* [DTCClass_VcEvMonTrqAct] */
    /* Index    UdsDtc        DtcSeverity  FunctionalUnit        Referable Keys */
  { /*   200 */ 0x000C1900uL,        128u,             0u },  /* [DTCClass_VcEvMonTrqActPlaus] */
  { /*   201 */ 0x000C1961uL,        128u,             0u },  /* [DTCClass_VcEvMonTrqCmp] */
  { /*   202 */ 0x00C11100uL,        128u,             0u },  /* [DTCClass_VcEvNodeMisBECM] */
  { /*   203 */ 0x00C10000uL,        128u,             0u },  /* [DTCClass_VcEvNodeMisECM] */
  { /*   204 */ 0x00C12A00uL,        128u,             0u },  /* [DTCClass_VcEvNodeMisVDDM] */
  { /*   205 */ 0x00D00887uL,        128u,             0u },  /* [DTCClass_VcEvPropCANGlbTiOutd] */
  { /*   206 */ 0x00E00064uL,         32u,             0u }   /* [DTCClass_VcEvTsttrPlaus] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EnableConditionGroupTableInd
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EnableConditionGroupTableInd
  \brief  the indexes of the 1:1 sorted relation pointing to Dem_Cfg_EnableConditionGroupTable
*/ 
#define DEM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_EnableConditionGroupTableIndType, DEM_CONST) Dem_Cfg_EnableConditionGroupTableInd[457] = {
  /* Index     EnableConditionGroupTableInd      Referable Keys */
  /*     0 */                            0u,  /* [__Internal_ControlDtcSetting] */
  /*     1 */                           30u,  /* [__Internal_ControlDtcSetting] */
  /*     2 */                           32u,  /* [__Internal_ControlDtcSetting] */
  /*     3 */                           33u,  /* [__Internal_ControlDtcSetting] */
  /*     4 */                           27u,  /* [__Internal_ControlDtcSetting] */
  /*     5 */                           34u,  /* [__Internal_ControlDtcSetting] */
  /*     6 */                           14u,  /* [__Internal_ControlDtcSetting] */
  /*     7 */                            9u,  /* [__Internal_ControlDtcSetting] */
  /*     8 */                           26u,  /* [__Internal_ControlDtcSetting] */
  /*     9 */                           28u,  /* [__Internal_ControlDtcSetting] */
  /*    10 */                            4u,  /* [__Internal_ControlDtcSetting] */
  /*    11 */                           12u,  /* [__Internal_ControlDtcSetting] */
  /*    12 */                            7u,  /* [__Internal_ControlDtcSetting] */
  /*    13 */                           19u,  /* [__Internal_ControlDtcSetting] */
  /*    14 */                           11u,  /* [__Internal_ControlDtcSetting] */
  /*    15 */                           16u,  /* [__Internal_ControlDtcSetting] */
  /*    16 */                           10u,  /* [__Internal_ControlDtcSetting] */
  /*    17 */                           29u,  /* [__Internal_ControlDtcSetting] */
  /*    18 */                            5u,  /* [__Internal_ControlDtcSetting] */
  /*    19 */                           15u,  /* [__Internal_ControlDtcSetting] */
  /*    20 */                            6u,  /* [__Internal_ControlDtcSetting] */
  /*    21 */                           17u,  /* [__Internal_ControlDtcSetting] */
  /*    22 */                           24u,  /* [__Internal_ControlDtcSetting] */
  /*    23 */                           13u,  /* [__Internal_ControlDtcSetting] */
  /*    24 */                            8u,  /* [__Internal_ControlDtcSetting] */
  /*    25 */                           25u,  /* [__Internal_ControlDtcSetting] */
  /*    26 */                           18u,  /* [__Internal_ControlDtcSetting] */
  /*    27 */                            3u,  /* [__Internal_ControlDtcSetting] */
  /*    28 */                            2u,  /* [__Internal_ControlDtcSetting] */
  /*    29 */                           31u,  /* [__Internal_ControlDtcSetting] */
  /*    30 */                           20u,  /* [__Internal_ControlDtcSetting] */
  /*    31 */                           23u,  /* [__Internal_ControlDtcSetting] */
  /*    32 */                           22u,  /* [__Internal_ControlDtcSetting] */
  /*    33 */                           21u,  /* [__Internal_ControlDtcSetting] */
  /*    34 */                            1u,  /* [__Internal_ControlDtcSetting] */
  /*    35 */                           12u,  /* [A] */
  /*    36 */                            4u,  /* [AND] */
  /*    37 */                           22u,  /* [AND] */
  /*    38 */                            5u,  /* [ASC] */
  /*    39 */                           12u,  /* [All_001] */
  /*    40 */                           26u,  /* [Bulk] */
  /*    41 */                           19u,  /* [BusOff] */
  /*    42 */                           19u,  /* [CAN] */
  /*    43 */                           32u,  /* [CU] */
  /*    44 */                           23u,  /* [CU] */
  /*    45 */                           16u,  /* [CU_temp] */
  /*    46 */                           26u,  /* [Car_001] */
  /*    47 */                           26u,  /* [Configuration] */
  /*    48 */                           12u,  /* [Crash] */
  /*    49 */                           12u,  /* [DTC] */
  /* Index     EnableConditionGroupTableInd      Referable Keys */
  /*    50 */                           22u,  /* [Driving] */
  /*    51 */                           28u,  /* [E] */
  /*    52 */                           26u,  /* [ECU] */
  /*    53 */                           12u,  /* [ECU] */
  /*    54 */                            8u,  /* [ECU] */
  /*    55 */                           12u,  /* [ElPowerLevel] */
  /*    56 */                           26u,  /* [Enabled] */
  /*    57 */                            8u,  /* [Every] */
  /*    58 */                           12u,  /* [Factory] */
  /*    59 */                           30u,  /* [HVAC] */
  /*    60 */                           11u,  /* [IGBT] */
  /*    61 */                            5u,  /* [IGBT] */
  /*    62 */                           24u,  /* [INV_EM_STATOR_TEMP_RNG_HI] */
  /*    63 */                           24u,  /* [INV_EM_STATOR_TEMP_RNG_LO] */
  /*    64 */                           31u,  /* [INV_IAC_U_ELEC_HI] */
  /*    65 */                           31u,  /* [INV_IAC_U_ELEC_LO] */
  /*    66 */                           31u,  /* [INV_IAC_V_ELEC_HI] */
  /*    67 */                           31u,  /* [INV_IAC_V_ELEC_LO] */
  /*    68 */                           31u,  /* [INV_IAC_W_ELEC_HI] */
  /*    69 */                           31u,  /* [INV_IAC_W_ELEC_LO] */
  /*    70 */                           30u,  /* [Inverter] */
  /*    71 */                           32u,  /* [Inverter] */
  /*    72 */                           14u,  /* [Inverter] */
  /*    73 */                            9u,  /* [Inverter] */
  /*    74 */                           28u,  /* [Inverter] */
  /*    75 */                            4u,  /* [Inverter] */
  /*    76 */                            7u,  /* [Inverter] */
  /*    77 */                           11u,  /* [Inverter] */
  /*    78 */                           16u,  /* [Inverter] */
  /*    79 */                           10u,  /* [Inverter] */
  /*    80 */                           29u,  /* [Inverter] */
  /*    81 */                            5u,  /* [Inverter] */
  /*    82 */                           15u,  /* [Inverter] */
  /*    83 */                            6u,  /* [Inverter] */
  /*    84 */                           17u,  /* [Inverter] */
  /*    85 */                           24u,  /* [Inverter] */
  /*    86 */                           25u,  /* [Inverter] */
  /*    87 */                           18u,  /* [Inverter] */
  /*    88 */                           31u,  /* [Inverter] */
  /*    89 */                           20u,  /* [Inverter] */
  /*    90 */                           23u,  /* [Inverter] */
  /*    91 */                           21u,  /* [Inverter] */
  /*    92 */                            1u,  /* [Inverter] */
  /*    93 */                           30u,  /* [KL15] */
  /*    94 */                           32u,  /* [KL15] */
  /*    95 */                           33u,  /* [KL15] */
  /*    96 */                           27u,  /* [KL15] */
  /*    97 */                           34u,  /* [KL15] */
  /*    98 */                           14u,  /* [KL15] */
  /*    99 */                            9u,  /* [KL15] */
  /* Index     EnableConditionGroupTableInd      Referable Keys */
  /*   100 */                           28u,  /* [KL15] */
  /*   101 */                            4u,  /* [KL15] */
  /*   102 */                           19u,  /* [KL15] */
  /*   103 */                           16u,  /* [KL15] */
  /*   104 */                           10u,  /* [KL15] */
  /*   105 */                           29u,  /* [KL15] */
  /*   106 */                           15u,  /* [KL15] */
  /*   107 */                            6u,  /* [KL15] */
  /*   108 */                           17u,  /* [KL15] */
  /*   109 */                           24u,  /* [KL15] */
  /*   110 */                           25u,  /* [KL15] */
  /*   111 */                           18u,  /* [KL15] */
  /*   112 */                            3u,  /* [KL15] */
  /*   113 */                            2u,  /* [KL15] */
  /*   114 */                           20u,  /* [KL15] */
  /*   115 */                           23u,  /* [KL15] */
  /*   116 */                           19u,  /* [KL30] */
  /*   117 */                            2u,  /* [KL30] */
  /*   118 */                           30u,  /* [LV] */
  /*   119 */                           32u,  /* [LV] */
  /*   120 */                           14u,  /* [LV] */
  /*   121 */                            9u,  /* [LV] */
  /*   122 */                           28u,  /* [LV] */
  /*   123 */                            4u,  /* [LV] */
  /*   124 */                            7u,  /* [LV] */
  /*   125 */                           11u,  /* [LV] */
  /*   126 */                           16u,  /* [LV] */
  /*   127 */                           10u,  /* [LV] */
  /*   128 */                           29u,  /* [LV] */
  /*   129 */                            5u,  /* [LV] */
  /*   130 */                           15u,  /* [LV] */
  /*   131 */                            6u,  /* [LV] */
  /*   132 */                           17u,  /* [LV] */
  /*   133 */                           24u,  /* [LV] */
  /*   134 */                           25u,  /* [LV] */
  /*   135 */                           18u,  /* [LV] */
  /*   136 */                           31u,  /* [LV] */
  /*   137 */                           20u,  /* [LV] */
  /*   138 */                           23u,  /* [LV] */
  /*   139 */                           21u,  /* [LV] */
  /*   140 */                            1u,  /* [LV] */
  /*   141 */                           30u,  /* [NO_002] */
  /*   142 */                            5u,  /* [Nm] */
  /*   143 */                           32u,  /* [No] */
  /*   144 */                           14u,  /* [No] */
  /*   145 */                           28u,  /* [No] */
  /*   146 */                           11u,  /* [No] */
  /*   147 */                           16u,  /* [No] */
  /*   148 */                           10u,  /* [No] */
  /*   149 */                            5u,  /* [No] */
  /* Index     EnableConditionGroupTableInd      Referable Keys */
  /*   150 */                           24u,  /* [No] */
  /*   151 */                           25u,  /* [No] */
  /*   152 */                           31u,  /* [No] */
  /*   153 */                            5u,  /* [Not] */
  /*   154 */                           14u,  /* [P5] */
  /*   155 */                            9u,  /* [P5] */
  /*   156 */                           29u,  /* [P5] */
  /*   157 */                           17u,  /* [P5] */
  /*   158 */                           25u,  /* [P5] */
  /*   159 */                           14u,  /* [P15] */
  /*   160 */                            6u,  /* [P15] */
  /*   161 */                           21u,  /* [PS] */
  /*   162 */                           19u,  /* [Prop] */
  /*   163 */                            5u,  /* [Request] */
  /*   164 */                           13u,  /* [Request] */
  /*   165 */                           34u,  /* [SPI] */
  /*   166 */                           30u,  /* [SpdAct] */
  /*   167 */                            4u,  /* [SpdAct] */
  /*   168 */                           26u,  /* [Test_001] */
  /*   169 */                           12u,  /* [The_001] */
  /*   170 */                           12u,  /* [Transport] */
  /*   171 */                           22u,  /* [Ubat] */
  /*   172 */                           22u,  /* [UsageMode] */
  /*   173 */                           19u,  /* [V] */
  /*   174 */                            2u,  /* [V] */
  /*   175 */                           22u,  /* [V] */
  /*   176 */                           21u,  /* [V] */
  /*   177 */                           19u,  /* [Voltage9] */
  /*   178 */                            2u,  /* [Voltage9] */
  /*   179 */                           12u,  /* [When] */
  /*   180 */                           26u,  /* [a_001] */
  /*   181 */                           12u,  /* [a_001] */
  /*   182 */                            8u,  /* [a_001] */
  /*   183 */                           30u,  /* [abs] */
  /*   184 */                            4u,  /* [abs] */
  /*   185 */                           12u,  /* [according] */
  /*   186 */                           30u,  /* [active] */
  /*   187 */                           32u,  /* [active] */
  /*   188 */                           33u,  /* [active] */
  /*   189 */                           27u,  /* [active] */
  /*   190 */                           34u,  /* [active] */
  /*   191 */                           14u,  /* [active] */
  /*   192 */                            9u,  /* [active] */
  /*   193 */                           28u,  /* [active] */
  /*   194 */                            4u,  /* [active] */
  /*   195 */                           12u,  /* [active] */
  /*   196 */                           19u,  /* [active] */
  /*   197 */                           16u,  /* [active] */
  /*   198 */                           10u,  /* [active] */
  /*   199 */                           29u,  /* [active] */
  /* Index     EnableConditionGroupTableInd      Referable Keys */
  /*   200 */                           15u,  /* [active] */
  /*   201 */                            6u,  /* [active] */
  /*   202 */                           17u,  /* [active] */
  /*   203 */                           24u,  /* [active] */
  /*   204 */                           13u,  /* [active] */
  /*   205 */                           25u,  /* [active] */
  /*   206 */                           18u,  /* [active] */
  /*   207 */                            3u,  /* [active] */
  /*   208 */                            2u,  /* [active] */
  /*   209 */                           20u,  /* [active] */
  /*   210 */                           23u,  /* [active] */
  /*   211 */                           12u,  /* [all] */
  /*   212 */                           12u,  /* [and_001] */
  /*   213 */                           12u,  /* [another] */
  /*   214 */                            4u,  /* [any] */
  /*   215 */                           12u,  /* [any] */
  /*   216 */                           12u,  /* [as] */
  /*   217 */                           12u,  /* [at] */
  /*   218 */                           12u,  /* [availability] */
  /*   219 */                           12u,  /* [be] */
  /*   220 */                           12u,  /* [below] */
  /*   221 */                           26u,  /* [block] */
  /*   222 */                           12u,  /* [bus] */
  /*   223 */                           12u,  /* [by] */
  /*   224 */                           12u,  /* [car] */
  /*   225 */                           12u,  /* [change] */
  /*   226 */                            8u,  /* [configuration_001] */
  /*   227 */                           12u,  /* [consumption] */
  /*   228 */                           11u,  /* [control] */
  /*   229 */                            5u,  /* [control] */
  /*   230 */                           15u,  /* [control] */
  /*   231 */                            1u,  /* [control] */
  /*   232 */                           12u,  /* [criteria] */
  /*   233 */                           30u,  /* [current] */
  /*   234 */                           14u,  /* [current] */
  /*   235 */                           11u,  /* [current] */
  /*   236 */                            5u,  /* [current] */
  /*   237 */                           25u,  /* [current] */
  /*   238 */                           13u,  /* [discharge] */
  /*   239 */                           30u,  /* [done] */
  /*   240 */                           32u,  /* [done] */
  /*   241 */                           14u,  /* [done] */
  /*   242 */                            9u,  /* [done] */
  /*   243 */                           28u,  /* [done] */
  /*   244 */                            4u,  /* [done] */
  /*   245 */                            7u,  /* [done] */
  /*   246 */                           11u,  /* [done] */
  /*   247 */                           16u,  /* [done] */
  /*   248 */                           10u,  /* [done] */
  /*   249 */                           29u,  /* [done] */
  /* Index     EnableConditionGroupTableInd      Referable Keys */
  /*   250 */                            5u,  /* [done] */
  /*   251 */                           15u,  /* [done] */
  /*   252 */                            6u,  /* [done] */
  /*   253 */                           17u,  /* [done] */
  /*   254 */                           24u,  /* [done] */
  /*   255 */                           25u,  /* [done] */
  /*   256 */                           18u,  /* [done] */
  /*   257 */                           31u,  /* [done] */
  /*   258 */                           20u,  /* [done] */
  /*   259 */                           23u,  /* [done] */
  /*   260 */                           21u,  /* [done] */
  /*   261 */                            1u,  /* [done] */
  /*   262 */                           12u,  /* [during] */
  /*   263 */                           26u,  /* [each] */
  /*   264 */                           12u,  /* [electrical] */
  /*   265 */                           12u,  /* [enters] */
  /*   266 */                            4u,  /* [error] */
  /*   267 */                           11u,  /* [error] */
  /*   268 */                            5u,  /* [error] */
  /*   269 */                           18u,  /* [error] */
  /*   270 */                           12u,  /* [exceptions] */
  /*   271 */                           12u,  /* [exit] */
  /*   272 */                           30u,  /* [fault] */
  /*   273 */                           32u,  /* [fault] */
  /*   274 */                           16u,  /* [fault] */
  /*   275 */                           10u,  /* [fault] */
  /*   276 */                            6u,  /* [fault] */
  /*   277 */                           17u,  /* [fault] */
  /*   278 */                           21u,  /* [fault] */
  /*   279 */                           23u,  /* [faulte] */
  /*   280 */                           34u,  /* [faults] */
  /*   281 */                           14u,  /* [faults] */
  /*   282 */                           28u,  /* [faults] */
  /*   283 */                           11u,  /* [faults] */
  /*   284 */                            5u,  /* [faults] */
  /*   285 */                           25u,  /* [faults] */
  /*   286 */                           12u,  /* [for] */
  /*   287 */                           13u,  /* [for] */
  /*   288 */                            8u,  /* [for] */
  /*   289 */                           12u,  /* [from] */
  /*   290 */                           12u,  /* [fulfilled] */
  /*   291 */                           12u,  /* [generic] */
  /*   292 */                            8u,  /* [global] */
  /*   293 */                           32u,  /* [high] */
  /*   294 */                           26u,  /* [in] */
  /*   295 */                            4u,  /* [in] */
  /*   296 */                           12u,  /* [in] */
  /*   297 */                           11u,  /* [in] */
  /*   298 */                            5u,  /* [in] */
  /*   299 */                           15u,  /* [in] */
  /* Index     EnableConditionGroupTableInd      Referable Keys */
  /*   300 */                            3u,  /* [in] */
  /*   301 */                            1u,  /* [in] */
  /*   302 */                           12u,  /* [indicated] */
  /*   303 */                           26u,  /* [inhibited] */
  /*   304 */                           12u,  /* [inhibited] */
  /*   305 */                           12u,  /* [inhibition] */
  /*   306 */                           27u,  /* [init] */
  /*   307 */                           30u,  /* [initliazation] */
  /*   308 */                           32u,  /* [initliazation] */
  /*   309 */                           14u,  /* [initliazation] */
  /*   310 */                            9u,  /* [initliazation] */
  /*   311 */                           28u,  /* [initliazation] */
  /*   312 */                            4u,  /* [initliazation] */
  /*   313 */                            7u,  /* [initliazation] */
  /*   314 */                           11u,  /* [initliazation] */
  /*   315 */                           16u,  /* [initliazation] */
  /*   316 */                           10u,  /* [initliazation] */
  /*   317 */                           29u,  /* [initliazation] */
  /*   318 */                            5u,  /* [initliazation] */
  /*   319 */                           15u,  /* [initliazation] */
  /*   320 */                            6u,  /* [initliazation] */
  /*   321 */                           17u,  /* [initliazation] */
  /*   322 */                           24u,  /* [initliazation] */
  /*   323 */                           25u,  /* [initliazation] */
  /*   324 */                           18u,  /* [initliazation] */
  /*   325 */                           31u,  /* [initliazation] */
  /*   326 */                           20u,  /* [initliazation] */
  /*   327 */                           23u,  /* [initliazation] */
  /*   328 */                           21u,  /* [initliazation] */
  /*   329 */                            1u,  /* [initliazation] */
  /*   330 */                           30u,  /* [is] */
  /*   331 */                           32u,  /* [is] */
  /*   332 */                           14u,  /* [is] */
  /*   333 */                            9u,  /* [is] */
  /*   334 */                           26u,  /* [is] */
  /*   335 */                           28u,  /* [is] */
  /*   336 */                            4u,  /* [is] */
  /*   337 */                           12u,  /* [is] */
  /*   338 */                            7u,  /* [is] */
  /*   339 */                           11u,  /* [is] */
  /*   340 */                           16u,  /* [is] */
  /*   341 */                           10u,  /* [is] */
  /*   342 */                           29u,  /* [is] */
  /*   343 */                            5u,  /* [is] */
  /*   344 */                           15u,  /* [is] */
  /*   345 */                            6u,  /* [is] */
  /*   346 */                           17u,  /* [is] */
  /*   347 */                           24u,  /* [is] */
  /*   348 */                           13u,  /* [is] */
  /*   349 */                            8u,  /* [is] */
  /* Index     EnableConditionGroupTableInd      Referable Keys */
  /*   350 */                           25u,  /* [is] */
  /*   351 */                           18u,  /* [is] */
  /*   352 */                           31u,  /* [is] */
  /*   353 */                           20u,  /* [is] */
  /*   354 */                           23u,  /* [is] */
  /*   355 */                           21u,  /* [is] */
  /*   356 */                            1u,  /* [is] */
  /*   357 */                           12u,  /* [limited] */
  /*   358 */                           32u,  /* [low] */
  /*   359 */                           12u,  /* [mode] */
  /*   360 */                           11u,  /* [mode] */
  /*   361 */                            5u,  /* [mode] */
  /*   362 */                           15u,  /* [mode] */
  /*   363 */                            3u,  /* [mode] */
  /*   364 */                            1u,  /* [mode] */
  /*   365 */                           12u,  /* [modes] */
  /*   366 */                           28u,  /* [motor] */
  /*   367 */                           34u,  /* [no_001] */
  /*   368 */                            4u,  /* [no_001] */
  /*   369 */                           19u,  /* [no_001] */
  /*   370 */                           11u,  /* [no_001] */
  /*   371 */                            5u,  /* [no_001] */
  /*   372 */                            6u,  /* [no_001] */
  /*   373 */                           17u,  /* [no_001] */
  /*   374 */                           18u,  /* [no_001] */
  /*   375 */                           23u,  /* [no_001] */
  /*   376 */                           21u,  /* [no_001] */
  /*   377 */                           14u,  /* [normally] */
  /*   378 */                            9u,  /* [normally] */
  /*   379 */                           25u,  /* [normally] */
  /*   380 */                           29u,  /* [normallye] */
  /*   381 */                            5u,  /* [not_001] */
  /*   382 */                           12u,  /* [notational] */
  /*   383 */                           12u,  /* [of] */
  /*   384 */                            8u,  /* [of] */
  /*   385 */                           12u,  /* [off] */
  /*   386 */                            4u,  /* [offset] */
  /*   387 */                           26u,  /* [once] */
  /*   388 */                           12u,  /* [one] */
  /*   389 */                           12u,  /* [operation] */
  /*   390 */                            3u,  /* [operation] */
  /*   391 */                           12u,  /* [or] */
  /*   392 */                            8u,  /* [parameter] */
  /*   393 */                           26u,  /* [passed] */
  /*   394 */                            8u,  /* [passed] */
  /*   395 */                            4u,  /* [phase] */
  /*   396 */                           12u,  /* [power] */
  /*   397 */                           32u,  /* [range] */
  /*   398 */                           26u,  /* [received] */
  /*   399 */                            8u,  /* [received] */
  /* Index     EnableConditionGroupTableInd      Referable Keys */
  /*   400 */                           12u,  /* [requested] */
  /*   401 */                           11u,  /* [resolver] */
  /*   402 */                           10u,  /* [resolver] */
  /*   403 */                            5u,  /* [resolver] */
  /*   404 */                           18u,  /* [resolver] */
  /*   405 */                           30u,  /* [rpm] */
  /*   406 */                            4u,  /* [rpm] */
  /*   407 */                           12u,  /* [run] */
  /*   408 */                           26u,  /* [runs] */
  /*   409 */                           12u,  /* [s] */
  /*   410 */                           12u,  /* [seconds] */
  /*   411 */                           30u,  /* [sensor] */
  /*   412 */                           14u,  /* [sensor] */
  /*   413 */                           28u,  /* [sensor] */
  /*   414 */                           11u,  /* [sensor] */
  /*   415 */                            5u,  /* [sensor] */
  /*   416 */                           25u,  /* [sensor] */
  /*   417 */                           23u,  /* [sensor] */
  /*   418 */                           12u,  /* [set] */
  /*   419 */                           12u,  /* [shall] */
  /*   420 */                           12u,  /* [signal] */
  /*   421 */                           12u,  /* [start] */
  /*   422 */                           26u,  /* [state] */
  /*   423 */                           12u,  /* [state] */
  /*   424 */                           11u,  /* [system] */
  /*   425 */                            5u,  /* [system] */
  /*   426 */                           15u,  /* [system] */
  /*   427 */                            1u,  /* [system] */
  /*   428 */                           32u,  /* [temp] */
  /*   429 */                           23u,  /* [temp] */
  /*   430 */                           27u,  /* [test] */
  /*   431 */                           12u,  /* [test] */
  /*   432 */                            8u,  /* [test] */
  /*   433 */                           12u,  /* [tests] */
  /*   434 */                           12u,  /* [that] */
  /*   435 */                           12u,  /* [the] */
  /*   436 */                            8u,  /* [the] */
  /*   437 */                           26u,  /* [time] */
  /*   438 */                           12u,  /* [time] */
  /*   439 */                            8u,  /* [time] */
  /*   440 */                           12u,  /* [to] */
  /*   441 */                           11u,  /* [torque] */
  /*   442 */                            5u,  /* [torque] */
  /*   443 */                           15u,  /* [torque] */
  /*   444 */                            1u,  /* [torque] */
  /*   445 */                            5u,  /* [toruqe] */
  /*   446 */                           12u,  /* [transition] */
  /*   447 */                            8u,  /* [until] */
  /*   448 */                            8u,  /* [used] */
  /*   449 */                           12u,  /* [vehicle] */
  /* Index     EnableConditionGroupTableInd      Referable Keys */
  /*   450 */                           12u,  /* [when_001] */
  /*   451 */                           26u,  /* [while] */
  /*   452 */                           12u,  /* [with] */
  /*   453 */                           14u,  /* [work] */
  /*   454 */                            9u,  /* [work] */
  /*   455 */                           29u,  /* [work] */
  /*   456 */                           25u   /* [work] */
};
#define DEM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EnableConditionTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EnableConditionTable
  \brief  Map each EnableCondition(Id) to the referring EnableConditionGroups - this is reverse direction of the AUTOSAR configuration model.
  \details
  Element                                 Description
  EnableConditionGroupTableIndEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_EnableConditionGroupTableInd
  EnableConditionGroupTableIndStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_EnableConditionGroupTableInd
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_EnableConditionTableType, DEM_CONST) Dem_Cfg_EnableConditionTable[156] = {
    /* Index    EnableConditionGroupTableIndEndIdx  EnableConditionGroupTableIndStartIdx */
  { /*     0 */                                35u,                                   0u },
  { /*     1 */                                36u,                                  35u },
  { /*     2 */                                38u,                                  36u },
  { /*     3 */                                39u,                                  38u },
  { /*     4 */                                40u,                                  39u },
  { /*     5 */                                41u,                                  40u },
  { /*     6 */                                42u,                                  41u },
  { /*     7 */                                43u,                                  42u },
  { /*     8 */                                45u,                                  43u },
  { /*     9 */                                46u,                                  45u },
  { /*    10 */                                47u,                                  46u },
  { /*    11 */                                48u,                                  47u },
  { /*    12 */                                49u,                                  48u },
  { /*    13 */                                50u,                                  49u },
  { /*    14 */                                51u,                                  50u },
  { /*    15 */                                52u,                                  51u },
  { /*    16 */                                55u,                                  52u },
  { /*    17 */                                56u,                                  55u },
  { /*    18 */                                57u,                                  56u },
  { /*    19 */                                58u,                                  57u },
  { /*    20 */                                59u,                                  58u },
  { /*    21 */                                60u,                                  59u },
  { /*    22 */                                62u,                                  60u },
  { /*    23 */                                63u,                                  62u },
  { /*    24 */                                64u,                                  63u },
  { /*    25 */                                65u,                                  64u },
  { /*    26 */                                66u,                                  65u },
  { /*    27 */                                67u,                                  66u },
  { /*    28 */                                68u,                                  67u },
  { /*    29 */                                69u,                                  68u },
  { /*    30 */                                70u,                                  69u },
  { /*    31 */                                93u,                                  70u },
  { /*    32 */                               116u,                                  93u },
  { /*    33 */                               118u,                                 116u },
  { /*    34 */                               141u,                                 118u },
  { /*    35 */                               142u,                                 141u },
  { /*    36 */                               143u,                                 142u },
  { /*    37 */                               153u,                                 143u },
  { /*    38 */                               154u,                                 153u },
  { /*    39 */                               159u,                                 154u },
  { /*    40 */                               161u,                                 159u },
  { /*    41 */                               162u,                                 161u },
  { /*    42 */                               163u,                                 162u },
  { /*    43 */                               165u,                                 163u },
  { /*    44 */                               166u,                                 165u },
  { /*    45 */                               168u,                                 166u },
  { /*    46 */                               169u,                                 168u },
  { /*    47 */                               170u,                                 169u },
  { /*    48 */                               171u,                                 170u },
  { /*    49 */                               172u,                                 171u },
    /* Index    EnableConditionGroupTableIndEndIdx  EnableConditionGroupTableIndStartIdx */
  { /*    50 */                               173u,                                 172u },
  { /*    51 */                               177u,                                 173u },
  { /*    52 */                               179u,                                 177u },
  { /*    53 */                               180u,                                 179u },
  { /*    54 */                               183u,                                 180u },
  { /*    55 */                               185u,                                 183u },
  { /*    56 */                               186u,                                 185u },
  { /*    57 */                               211u,                                 186u },
  { /*    58 */                               212u,                                 211u },
  { /*    59 */                               213u,                                 212u },
  { /*    60 */                               214u,                                 213u },
  { /*    61 */                               216u,                                 214u },
  { /*    62 */                               217u,                                 216u },
  { /*    63 */                               218u,                                 217u },
  { /*    64 */                               219u,                                 218u },
  { /*    65 */                               220u,                                 219u },
  { /*    66 */                               221u,                                 220u },
  { /*    67 */                               222u,                                 221u },
  { /*    68 */                               223u,                                 222u },
  { /*    69 */                               224u,                                 223u },
  { /*    70 */                               225u,                                 224u },
  { /*    71 */                               226u,                                 225u },
  { /*    72 */                               227u,                                 226u },
  { /*    73 */                               228u,                                 227u },
  { /*    74 */                               232u,                                 228u },
  { /*    75 */                               233u,                                 232u },
  { /*    76 */                               238u,                                 233u },
  { /*    77 */                               239u,                                 238u },
  { /*    78 */                               262u,                                 239u },
  { /*    79 */                               263u,                                 262u },
  { /*    80 */                               264u,                                 263u },
  { /*    81 */                               265u,                                 264u },
  { /*    82 */                               266u,                                 265u },
  { /*    83 */                               270u,                                 266u },
  { /*    84 */                               271u,                                 270u },
  { /*    85 */                               272u,                                 271u },
  { /*    86 */                               279u,                                 272u },
  { /*    87 */                               280u,                                 279u },
  { /*    88 */                               286u,                                 280u },
  { /*    89 */                               289u,                                 286u },
  { /*    90 */                               290u,                                 289u },
  { /*    91 */                               291u,                                 290u },
  { /*    92 */                               292u,                                 291u },
  { /*    93 */                               293u,                                 292u },
  { /*    94 */                               294u,                                 293u },
  { /*    95 */                               302u,                                 294u },
  { /*    96 */                               303u,                                 302u },
  { /*    97 */                               305u,                                 303u },
  { /*    98 */                               306u,                                 305u },
  { /*    99 */                               307u,                                 306u },
    /* Index    EnableConditionGroupTableIndEndIdx  EnableConditionGroupTableIndStartIdx */
  { /*   100 */                               330u,                                 307u },
  { /*   101 */                               357u,                                 330u },
  { /*   102 */                               358u,                                 357u },
  { /*   103 */                               359u,                                 358u },
  { /*   104 */                               365u,                                 359u },
  { /*   105 */                               366u,                                 365u },
  { /*   106 */                               367u,                                 366u },
  { /*   107 */                               377u,                                 367u },
  { /*   108 */                               380u,                                 377u },
  { /*   109 */                               381u,                                 380u },
  { /*   110 */                               382u,                                 381u },
  { /*   111 */                               383u,                                 382u },
  { /*   112 */                               385u,                                 383u },
  { /*   113 */                               386u,                                 385u },
  { /*   114 */                               387u,                                 386u },
  { /*   115 */                               388u,                                 387u },
  { /*   116 */                               389u,                                 388u },
  { /*   117 */                               391u,                                 389u },
  { /*   118 */                               392u,                                 391u },
  { /*   119 */                               393u,                                 392u },
  { /*   120 */                               395u,                                 393u },
  { /*   121 */                               396u,                                 395u },
  { /*   122 */                               397u,                                 396u },
  { /*   123 */                               398u,                                 397u },
  { /*   124 */                               400u,                                 398u },
  { /*   125 */                               401u,                                 400u },
  { /*   126 */                               405u,                                 401u },
  { /*   127 */                               407u,                                 405u },
  { /*   128 */                               408u,                                 407u },
  { /*   129 */                               409u,                                 408u },
  { /*   130 */                               410u,                                 409u },
  { /*   131 */                               411u,                                 410u },
  { /*   132 */                               418u,                                 411u },
  { /*   133 */                               419u,                                 418u },
  { /*   134 */                               420u,                                 419u },
  { /*   135 */                               421u,                                 420u },
  { /*   136 */                               422u,                                 421u },
  { /*   137 */                               424u,                                 422u },
  { /*   138 */                               428u,                                 424u },
  { /*   139 */                               430u,                                 428u },
  { /*   140 */                               433u,                                 430u },
  { /*   141 */                               434u,                                 433u },
  { /*   142 */                               435u,                                 434u },
  { /*   143 */                               437u,                                 435u },
  { /*   144 */                               440u,                                 437u },
  { /*   145 */                               441u,                                 440u },
  { /*   146 */                               445u,                                 441u },
  { /*   147 */                               446u,                                 445u },
  { /*   148 */                               447u,                                 446u },
  { /*   149 */                               448u,                                 447u },
    /* Index    EnableConditionGroupTableIndEndIdx  EnableConditionGroupTableIndStartIdx */
  { /*   150 */                               449u,                                 448u },
  { /*   151 */                               450u,                                 449u },
  { /*   152 */                               451u,                                 450u },
  { /*   153 */                               452u,                                 451u },
  { /*   154 */                               453u,                                 452u },
  { /*   155 */                               457u,                                 453u }
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventTable
  \details
  Element                         Description
  AgingCycleCounterThreshold      DemAgingCycleCounterThreshold of the DemEventParameter/DemEventClass, if AgingAllowedOfEventTable==FALSE we use '255' here, too.
  DtcTableIdx                     the index of the 1:1 relation pointing to Dem_Cfg_DtcTable
  EnableConditionGroupTableIdx    the index of the 1:1 relation pointing to Dem_Cfg_EnableConditionGroupTable
  EventPriority                   DemEventParameter/DemEventClass/DemEventPriority, values [1..255] for the configuration range [1..255].
  FreezeFrameTableStdFFIdx        the index of the 1:1 relation pointing to Dem_Cfg_FreezeFrameTable
  HealingTarget                   DemIndicatorHealingCycleCounterThreshold of the DemEventParameter/DemEventClass/DemIndicatorAttribute (for each event all attribute's value must be identical). Events without DemIndicatorAttribute have: 0.
  InitMonitorForEventIdx          the index of the 0:1 relation pointing to Dem_Cfg_InitMonitorForEvent
  MaskedBits                      contains bitcoded the boolean data of Dem_Cfg_AgingAllowedOfEventTable, Dem_Cfg_EventLatchTFOfEventTable, Dem_Cfg_FreezeFrameNumTableUsedOfEventTable, Dem_Cfg_InitMonitorForEventUsedOfEventTable, Dem_Cfg_NormalIndicatorTableUsedOfEventTable
  NormalIndicatorTableEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_NormalIndicatorTable
  NormalIndicatorTableStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_NormalIndicatorTable
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_EventTableType, DEM_CONST) Dem_Cfg_EventTable[207] = {
    /* Index    AgingCycleCounterThreshold  DtcTableIdx  EnableConditionGroupTableIdx  EventPriority  FreezeFrameTableStdFFIdx  HealingTarget  InitMonitorForEventIdx  MaskedBits  NormalIndicatorTableEndIdx                         NormalIndicatorTableStartIdx                               Referable Keys */
  { /*     0 */                        40u,          1u,                          27u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [#EVENT_INVALID, Satellite#0] */
  { /*     1 */                        40u,          1u,                          27u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [AURIX_EEPROM_FLT, Satellite#0] */
  { /*     2 */                        40u,          2u,                          33u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [AURIX_HW_FLT, Satellite#0] */
  { /*     3 */                        40u,          3u,                           3u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [AURIX_RST_MPL, Satellite#0] */
  { /*     4 */                        40u,          4u,                          22u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [AURIX_RST_SNG, Satellite#0] */
  { /*     5 */                        40u,          5u,                           0u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [AURIX_WATHDOG_FLT, Satellite#0] */
  { /*     6 */                         1u,          6u,                          12u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [COM_Busoff, Satellite#0] */
  { /*     7 */                         1u,          7u,                           8u,            2u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [COM_CarConfigErr, Satellite#0] */
  { /*     8 */                         1u,          8u,                          26u,            2u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [COM_NotConfig, Satellite#0] */
  { /*     9 */                        40u,          9u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [CRASH_DTC, Satellite#0] */
  { /*    10 */                        40u,         10u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [CU_TEMP1_RNG_HI, Satellite#0] */
  { /*    11 */                        40u,         11u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [CU_TEMP1_RNG_LO, Satellite#0] */
  { /*    12 */                        40u,         12u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [CU_TEMP2_RNG_HI, Satellite#0] */
  { /*    13 */                        40u,         13u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [CU_TEMP2_RNG_LO, Satellite#0] */
  { /*    14 */                        40u,         14u,                          32u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [CU_TEMP_GRDT, Satellite#0] */
  { /*    15 */                        40u,         15u,                          23u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [CU_TEMP_HWP, Satellite#0] */
  { /*    16 */                        40u,         16u,                          16u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [CU_TEMP_HW_FLT, Satellite#0] */
  { /*    17 */                        40u,         17u,                           0u,            2u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [CU_TEMP_HW_FLT_001, Satellite#0] */
  { /*    18 */                        40u,         18u,                           2u,            1u,                       4u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [DiagC_ClutchService, Satellite#0] */
  { /*    19 */                        40u,         19u,                          17u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [EXT_UC_SPI_FLT, Satellite#0] */
  { /*    20 */                        40u,         20u,                           2u,            1u,                       4u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [Eg_HallVolWrong, Satellite#0] */
  { /*    21 */                        40u,         21u,                           0u,            1u,                       1u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [FS_MONITIOR_ASC_FLT, Satellite#0] */
  { /*    22 */                        40u,         22u,                           0u,            1u,                       1u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [FS_MONITIOR_ASC_FW_FLT, Satellite#0] */
  { /*    23 */                        40u,         23u,                           2u,            1u,                       4u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [GA_BLDC_FLT, Satellite#0] */
  { /*    24 */                        40u,         24u,                           2u,            1u,                       4u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [GA_BLDC_POS_FLT, Satellite#0] */
  { /*    25 */                        40u,         25u,                           2u,            1u,                       4u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [Ga_FindEngleAngleFailed, Satellite#0] */
  { /*    26 */                        40u,         26u,                           2u,            1u,                       4u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [Ga_GADisengageFailure, Satellite#0] */
  { /*    27 */                        40u,         27u,                           2u,            1u,                       4u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [Ga_GAEngageFailure, Satellite#0] */
  { /*    28 */                        40u,         28u,                           2u,            1u,                       4u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [Ga_MoveOverThd, Satellite#0] */
  { /*    29 */                        40u,         29u,                           2u,            1u,                       4u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [Ga_TmSpdSyncFailed, Satellite#0] */
  { /*    30 */                        40u,         30u,                           2u,            1u,                       4u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [Ga_ZeroFindDistanFailure, Satellite#0] */
  { /*    31 */                        40u,         31u,                          13u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_ACTV_DCHA_HW, Satellite#0] */
  { /*    32 */                        40u,         32u,                           2u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_CONTROL_LIMIT, Satellite#0] */
  { /*    33 */                        40u,         33u,                          20u,            2u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_COOLT_INLET_TEMP_HWP, Satellite#0] */
  { /*    34 */                        40u,         34u,                           0u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_CU_TEMP1_RNG_NOK, Satellite#0] */
  { /*    35 */                        40u,         35u,                           0u,            2u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_CU_TEMP2_RNG_NOK, Satellite#0] */
  { /*    36 */                        40u,         36u,                          22u,            2u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_EM_OVRSPD_HWP, Satellite#0] */
  { /*    37 */                        40u,         37u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_EM_STATOR_TEMP2_ELE_FLT, Satellite#0] */
  { /*    38 */                        40u,         38u,                          24u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_EM_STATOR_TEMP2_GRDT, Satellite#0] */
  { /*    39 */                        40u,         39u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_EM_STATOR_TEMP2_RNG_HI, Satellite#0] */
  { /*    40 */                        40u,         40u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_EM_STATOR_TEMP2_RNG_LO, Satellite#0] */
  { /*    41 */                        40u,         41u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_EM_STATOR_TEMP2_RNG_NOK, Satellite#0] */
  { /*    42 */                        40u,         42u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_EM_STATOR_TEMP2_RNG_SWT, Satellite#0] */
  { /*    43 */                        40u,         43u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_EM_STATOR_TEMP_ELE_FLT, Satellite#0] */
  { /*    44 */                        40u,         44u,                          24u,            2u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_EM_STATOR_TEMP_GRDT, Satellite#0] */
  { /*    45 */                        40u,         45u,                          28u,            2u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_EM_STATOR_TEMP_HWP, Satellite#0] */
  { /*    46 */                        40u,         46u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_EM_STATOR_TEMP_RNG_HI, Satellite#0] */
  { /*    47 */                        40u,         47u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_EM_STATOR_TEMP_RNG_LO, Satellite#0] */
  { /*    48 */                        40u,         48u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_EM_STATOR_TEMP_RNG_NOK, Satellite#0] */
  { /*    49 */                        40u,         49u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_EM_STATOR_TEMP_RNG_SWT, Satellite#0] */
    /* Index    AgingCycleCounterThreshold  DtcTableIdx  EnableConditionGroupTableIdx  EventPriority  FreezeFrameTableStdFFIdx  HealingTarget  InitMonitorForEventIdx  MaskedBits  NormalIndicatorTableEndIdx                         NormalIndicatorTableStartIdx                               Referable Keys */
  { /*    50 */                        40u,         50u,                          22u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_GATE_DRVR_BOT_HWP, Satellite#0] */
  { /*    51 */                        40u,         51u,                          22u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_GATE_DRVR_TOP_HWP, Satellite#0] */
  { /*    52 */                        40u,         52u,                          14u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IAC_OC_HWP, Satellite#0] */
  { /*    53 */                         1u,         53u,                           2u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IAC_OC_SWP, Satellite#0] */
  { /*    54 */                        40u,         54u,                          15u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IAC_PHA_LOSS_MPL, Satellite#0] */
  { /*    55 */                        40u,         55u,                          25u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IAC_PLAUS_SUM, Satellite#0] */
  { /*    56 */                        40u,         56u,                           4u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IAC_U_AMP, Satellite#0] */
  { /*    57 */                        40u,         57u,                           9u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IAC_U_ELEC_HI, Satellite#0] */
  { /*    58 */                        40u,         58u,                           0u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IAC_U_ELEC_HWP, Satellite#0] */
  { /*    59 */                        40u,         59u,                          29u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IAC_U_ELEC_LO, Satellite#0] */
  { /*    60 */                        40u,         60u,                          30u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IAC_U_OFFS, Satellite#0] */
  { /*    61 */                        40u,         61u,                           9u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IAC_U_RNG_HI, Satellite#0] */
  { /*    62 */                        40u,         62u,                           9u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IAC_U_RNG_LO, Satellite#0] */
  { /*    63 */                        40u,         63u,                           4u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IAC_V_AMP, Satellite#0] */
  { /*    64 */                        40u,         64u,                           9u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IAC_V_ELEC_HI, Satellite#0] */
  { /*    65 */                        40u,         65u,                           0u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IAC_V_ELEC_HWP, Satellite#0] */
  { /*    66 */                        40u,         66u,                           0u,            1u,                       2u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IAC_V_ELEC_HWP_001, Satellite#0] */
  { /*    67 */                        40u,         67u,                           9u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IAC_V_ELEC_LO, Satellite#0] */
  { /*    68 */                        40u,         68u,                          30u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IAC_V_OFFS, Satellite#0] */
  { /*    69 */                        40u,         69u,                           9u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IAC_V_RNG_HI, Satellite#0] */
  { /*    70 */                        40u,         70u,                           9u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IAC_V_RNG_LO, Satellite#0] */
  { /*    71 */                        40u,         71u,                           4u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IAC_W_AMP, Satellite#0] */
  { /*    72 */                        40u,         72u,                           9u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IAC_W_ELEC_HI, Satellite#0] */
  { /*    73 */                        40u,         73u,                           9u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IAC_W_ELEC_LO, Satellite#0] */
  { /*    74 */                        40u,         74u,                          30u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IAC_W_OFFS, Satellite#0] */
  { /*    75 */                        40u,         75u,                           9u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IAC_W_RNG_HI, Satellite#0] */
  { /*    76 */                        40u,         76u,                           9u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IAC_W_RNG_LO, Satellite#0] */
  { /*    77 */                        40u,         77u,                          14u,            2u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IGBT_TEMP_HWP, Satellite#0] */
  { /*    78 */                        40u,         78u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IGBT_TEMP_U_GRDT, Satellite#0] */
  { /*    79 */                        40u,         79u,                          20u,            2u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IGBT_TEMP_U_PLAUS, Satellite#0] */
  { /*    80 */                        40u,         80u,                          20u,            2u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IGBT_TEMP_U_RNG_HI, Satellite#0] */
  { /*    81 */                        40u,         81u,                          20u,            2u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IGBT_TEMP_U_RNG_LO, Satellite#0] */
  { /*    82 */                        40u,         82u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IGBT_TEMP_V_GRDT, Satellite#0] */
  { /*    83 */                        40u,         83u,                          20u,            2u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IGBT_TEMP_V_PLAUS, Satellite#0] */
  { /*    84 */                        40u,         84u,                          20u,            2u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IGBT_TEMP_V_RNG_HI, Satellite#0] */
  { /*    85 */                        40u,         85u,                          20u,            2u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IGBT_TEMP_V_RNG_LO, Satellite#0] */
  { /*    86 */                        40u,         86u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IGBT_TEMP_W_GRDT, Satellite#0] */
  { /*    87 */                        40u,         87u,                          22u,            2u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IGBT_TEMP_W_PLAUS, Satellite#0] */
  { /*    88 */                        40u,         88u,                          20u,            2u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IGBT_TEMP_W_RNG_HI, Satellite#0] */
  { /*    89 */                        40u,         89u,                          20u,            2u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IGBT_TEMP_W_RNG_LO, Satellite#0] */
  { /*    90 */                        40u,         90u,                          33u,            2u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IMMO_AUTHFAIL, Satellite#0] */
  { /*    91 */                        40u,         91u,                          33u,            2u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_IMMO_NOKEY, Satellite#0] */
  { /*    92 */                        40u,         92u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_INTERLOCK_FLT, Satellite#0] */
  { /*    93 */                        40u,         93u,                          33u,            2u,                       3u,            0u,                     0u,      0x16u, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [INV_QUIESCENT_FLT, Satellite#0] */
  { /*    94 */                        40u,         94u,                           6u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_COS_AMP, Satellite#0] */
  { /*    95 */                        40u,         95u,                           0u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_COS_ELEC_FLT, Satellite#0] */
  { /*    96 */                        40u,         96u,                           6u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_COS_ELEC_HI, Satellite#0] */
  { /*    97 */                        40u,         97u,                           6u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_COS_ELEC_LO, Satellite#0] */
  { /*    98 */                        40u,         98u,                           6u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_COS_ELEC_OPEN, Satellite#0] */
  { /*    99 */                        40u,         99u,                           6u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_COS_RNG_HI, Satellite#0] */
    /* Index    AgingCycleCounterThreshold  DtcTableIdx  EnableConditionGroupTableIdx  EventPriority  FreezeFrameTableStdFFIdx  HealingTarget  InitMonitorForEventIdx  MaskedBits  NormalIndicatorTableEndIdx                         NormalIndicatorTableStartIdx                               Referable Keys */
  { /*   100 */                        40u,        100u,                           6u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_COS_RNG_LO, Satellite#0] */
  { /*   101 */                        40u,        101u,                           0u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_COS_RNG_NOK, Satellite#0] */
  { /*   102 */                        40u,        102u,                           0u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_EXCT_ELEC_FLT, Satellite#0] */
  { /*   103 */                        40u,        103u,                           6u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_EXCT_ELEC_HI, Satellite#0] */
  { /*   104 */                        40u,        104u,                           6u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_EXCT_ELEC_LO, Satellite#0] */
  { /*   105 */                        40u,        105u,                           6u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_EXCT_ELEC_OPEN, Satellite#0] */
  { /*   106 */                        40u,        106u,                           0u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_EXCT_FREQ_RNG_NOK, Satellite#0] */
  { /*   107 */                        40u,        107u,                          22u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_EXCT_OC_HWP, Satellite#0] */
  { /*   108 */                        40u,        108u,                          22u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_EXCT_OC_HWP_001, Satellite#0] */
  { /*   109 */                        40u,        109u,                          22u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_EXCT_OC_HWP_002, Satellite#0] */
  { /*   110 */                        40u,        110u,                           6u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_EXCT_PLAUS, Satellite#0] */
  { /*   111 */                        40u,        111u,                           6u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_EXCT_RNG_HI, Satellite#0] */
  { /*   112 */                        40u,        112u,                           6u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_EXCT_RNG_LO, Satellite#0] */
  { /*   113 */                        40u,        113u,                           0u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_EXCT_RNG_NOK, Satellite#0] */
  { /*   114 */                        40u,        114u,                          22u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_HW_FLT, Satellite#0] */
  { /*   115 */                        40u,        115u,                          10u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_OFFS_DFT, Satellite#0] */
  { /*   116 */                        40u,        116u,                          22u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_OFFS_OUT_RANG, Satellite#0] */
  { /*   117 */                        40u,        117u,                           6u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_SIN_AMP, Satellite#0] */
  { /*   118 */                        40u,        118u,                           6u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_SIN_COS_PLAUS, Satellite#0] */
  { /*   119 */                        40u,        119u,                          22u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_SIN_COS_PLAUS_AMP, Satellite#0] */
  { /*   120 */                        40u,        120u,                           0u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_SIN_ELEC_FLT, Satellite#0] */
  { /*   121 */                        40u,        121u,                           6u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_SIN_ELEC_HI, Satellite#0] */
  { /*   122 */                        40u,        122u,                           6u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_SIN_ELEC_LO, Satellite#0] */
  { /*   123 */                        40u,        123u,                           6u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_SIN_ELEC_OPEN, Satellite#0] */
  { /*   124 */                        40u,        124u,                           6u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_SIN_RNG_HI, Satellite#0] */
  { /*   125 */                        40u,        125u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_SIN_RNG_LO, Satellite#0] */
  { /*   126 */                        40u,        126u,                           0u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_RSLVR_SIN_RNG_NOK, Satellite#0] */
  { /*   127 */                        40u,        127u,                           6u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_SHUT_OFF_PAH_START_UP, Satellite#0] */
  { /*   128 */                        40u,        128u,                          21u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_TEMP_DCHA_HW, Satellite#0] */
  { /*   129 */                        40u,        129u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_UHVDC_1_ELEC_HI, Satellite#0] */
  { /*   130 */                        40u,        130u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_UHVDC_1_RNG_HI, Satellite#0] */
  { /*   131 */                        40u,        131u,                          34u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_UHVDC_2_RNG_HI, Satellite#0] */
  { /*   132 */                        40u,        132u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_UHVDC_OV_HWP, Satellite#0] */
  { /*   133 */                        40u,        133u,                           2u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_UHVDC_OV_SWP, Satellite#0] */
  { /*   134 */                        40u,        134u,                          34u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_UHVDC_PLAUS, Satellite#0] */
  { /*   135 */                        40u,        135u,                           0u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [INV_UHVDC_UV_HWP, Satellite#0] */
  { /*   136 */                        40u,        136u,                          15u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [MON_TQ_PLAUS_PWR_MDL, Satellite#0] */
  { /*   137 */                        40u,        137u,                           0u,            1u,                       3u,            0u,                     0u,      0x16u, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [PA_ACTION_FLT, Satellite#0] */
  { /*   138 */                        40u,        138u,                           0u,            1u,                       3u,            0u,                     0u,      0x16u, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [PA_ELE_FLT, Satellite#0] */
  { /*   139 */                        40u,        139u,                           0u,            1u,                       3u,            0u,                     0u,      0x16u, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [PA_OpenCirc, Satellite#0] */
  { /*   140 */                        40u,        140u,                           0u,            1u,                       3u,            0u,                     0u,      0x16u, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [PA_OpenCirc_FLT, Satellite#0] */
  { /*   141 */                        40u,        141u,                           0u,            1u,                       3u,            0u,                     0u,      0x16u, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [PLOCK_Current_RNG_OUT, Satellite#0] */
  { /*   142 */                        40u,        142u,                          20u,            1u,                       3u,            3u,                     1u,      0x17u,                                                1u,                                                  0u },  /* [PS_5V_Fault, Satellite#0] */
  { /*   143 */                        40u,        143u,                           2u,            1u,                       4u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [PS_BLDC_OV_FLT, Satellite#0] */
  { /*   144 */                        40u,        144u,                           2u,            1u,                       4u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [PS_BLDC_UV_FLT, Satellite#0] */
  { /*   145 */                        40u,        145u,                           0u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [PS_DRVB_Fault, Satellite#0] */
  { /*   146 */                        40u,        146u,                           7u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [PS_ECUSUPPLY_HIGH, Satellite#0] */
  { /*   147 */                        40u,        147u,                           7u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [PS_ECUSUPPLY_LOW, Satellite#0] */
  { /*   148 */                        40u,        148u,                          22u,            2u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [PS_KL15_RNG_HI, Satellite#0] */
  { /*   149 */                        40u,        149u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [PS_KL30_BACKUP_FLT, Satellite#0] */
    /* Index    AgingCycleCounterThreshold  DtcTableIdx  EnableConditionGroupTableIdx  EventPriority  FreezeFrameTableStdFFIdx  HealingTarget  InitMonitorForEventIdx  MaskedBits  NormalIndicatorTableEndIdx                         NormalIndicatorTableStartIdx                               Referable Keys */
  { /*   150 */                       255u,        150u,                          22u,            2u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [PS_KL30_PLAUS, Satellite#0] */
  { /*   151 */                        40u,        151u,                          20u,            2u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [PS_KL30_RNG_HI, Satellite#0] */
  { /*   152 */                        40u,        152u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [PS_KL30_RNG_LO, Satellite#0] */
  { /*   153 */                        40u,        153u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [PS_P5_UC_FLT, Satellite#0] */
  { /*   154 */                        40u,        154u,                          22u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [PS_P12_RES_FLT, Satellite#0] */
  { /*   155 */                        40u,        155u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [PS_P15_U_FLT, Satellite#0] */
  { /*   156 */                        40u,        156u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [PS_P15_V_FLT, Satellite#0] */
  { /*   157 */                        40u,        157u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [PS_P15_W_FLT, Satellite#0] */
  { /*   158 */                        40u,        158u,                           2u,            1u,                       4u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [PS_WhlSnsr_FLT, Satellite#0] */
  { /*   159 */                        40u,        159u,                           2u,            1u,                       4u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [PS_WhlSnsr_Vltg_FLT, Satellite#0] */
  { /*   160 */                        40u,        160u,                           0u,            1u,                       3u,            0u,                     0u,      0x16u, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [PSnsr_ELE_FLT, Satellite#0] */
  { /*   161 */                        40u,        161u,                           0u,            1u,                       3u,            0u,                     0u,      0x16u, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [PSnsr_GRADT_Flt, Satellite#0] */
  { /*   162 */                        40u,        162u,                           0u,            1u,                       3u,            0u,                     0u,      0x16u, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [PSnsr_RNG_NOK, Satellite#0] */
  { /*   163 */                        40u,        163u,                           0u,            1u,                       3u,            0u,                     0u,      0x16u, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [VCC_OverVoltage, Satellite#0] */
  { /*   164 */                        40u,        164u,                           0u,            1u,                       3u,            0u,                     0u,      0x16u, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [VCC_UnderVoltage, Satellite#0] */
  { /*   165 */                        40u,        165u,                          19u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VCEvBecmPropFr01Tioutd, Satellite#0] */
  { /*   166 */                        40u,        166u,                          19u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VCEvBecmPropFr02Tioutd, Satellite#0] */
  { /*   167 */                        40u,        167u,                           0u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VCEvEcmPropFr02MgmFr00Tioutd, Satellite#0] */
  { /*   168 */                        40u,        168u,                          19u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VCEvEcmPropFr02Tioutd, Satellite#0] */
  { /*   169 */                        40u,        169u,                           0u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VCEvEcmPropFr04Tioutd, Satellite#0] */
  { /*   170 */                        40u,        170u,                          19u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VCEvEcmPropFr05Tioutd, Satellite#0] */
  { /*   171 */                        40u,        171u,                          19u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VCEvEcmPropFr08Tioutd, Satellite#0] */
  { /*   172 */                        40u,        172u,                          19u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VCEvEcmPropFr11Tioutd, Satellite#0] */
  { /*   173 */                        40u,        173u,                           0u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VCEvEcmPropFr24MgmFr01Tioutd, Satellite#0] */
  { /*   174 */                        40u,        174u,                          19u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VCEvEcmPropFr25Tioutd, Satellite#0] */
  { /*   175 */                        40u,        175u,                          19u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VCEvEcmPropXevFr06Tioutd, Satellite#0] */
  { /*   176 */                        40u,        176u,                          19u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VCEvSrsPropFr02Tioutd, Satellite#0] */
  { /*   177 */                        40u,        177u,                          19u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VCEvVddmPropFr05Tioutd, Satellite#0] */
  { /*   178 */                        40u,        178u,                           0u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VCEvVddmPropFr08Tioutd, Satellite#0] */
  { /*   179 */                        40u,        179u,                          19u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VCEvVddmPropFr08Tioutd_001, Satellite#0] */
  { /*   180 */                        40u,        180u,                          19u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VCEvVddmPropFr15Tioutd, Satellite#0] */
  { /*   181 */                        40u,        181u,                          19u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VCEvVddmPropFr17Tioutd, Satellite#0] */
  { /*   182 */                        40u,        182u,                          19u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VCEvVddmPropFr18Tioutd, Satellite#0] */
  { /*   183 */                        40u,        183u,                          19u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VCEvVddmPropFr19Tioutd, Satellite#0] */
  { /*   184 */                        40u,        184u,                           2u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VcEvChkSum, Satellite#0] */
  { /*   185 */                        40u,        185u,                           2u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VcEvChkSumCrashStsSafe, Satellite#0] */
  { /*   186 */                        40u,        186u,                           2u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VcEvChkSumHvSysRlySts, Satellite#0] */
  { /*   187 */                        40u,        187u,                           2u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VcEvChkSumWhlMotSysTqAllwd, Satellite#0] */
  { /*   188 */                        40u,        188u,                           2u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VcEvCntr, Satellite#0] */
  { /*   189 */                        40u,        189u,                           2u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VcEvCntrCrashStsSafe, Satellite#0] */
  { /*   190 */                        40u,        190u,                           2u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VcEvCntrHvSysRlySts, Satellite#0] */
  { /*   191 */                        40u,        191u,                           2u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VcEvCntrWhlMotSysTqAllwd, Satellite#0] */
  { /*   192 */                        40u,        192u,                          15u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VcEvEMPerfPlaus, Satellite#0] */
  { /*   193 */                        40u,        193u,                          18u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VcEvMonESpd, Satellite#0] */
  { /*   194 */                        40u,        194u,                           5u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VcEvMonErrMode, Satellite#0] */
  { /*   195 */                        40u,        195u,                          31u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VcEvMonIPH, Satellite#0] */
  { /*   196 */                        40u,        196u,                           0u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VcEvMonISAR, Satellite#0] */
  { /*   197 */                        40u,        197u,                           7u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VcEvMonMode, Satellite#0] */
  { /*   198 */                        40u,        198u,                          20u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VcEvMonMode_001, Satellite#0] */
  { /*   199 */                        40u,        199u,                           1u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VcEvMonTrqAct, Satellite#0] */
    /* Index    AgingCycleCounterThreshold  DtcTableIdx  EnableConditionGroupTableIdx  EventPriority  FreezeFrameTableStdFFIdx  HealingTarget  InitMonitorForEventIdx  MaskedBits  NormalIndicatorTableEndIdx                         NormalIndicatorTableStartIdx                               Referable Keys */
  { /*   200 */                        40u,        200u,                          11u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VcEvMonTrqActPlaus, Satellite#0] */
  { /*   201 */                        40u,        201u,                          11u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VcEvMonTrqCmp, Satellite#0] */
  { /*   202 */                        40u,        202u,                          19u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VcEvNodeMisBECM, Satellite#0] */
  { /*   203 */                        40u,        203u,                          19u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VcEvNodeMisECM, Satellite#0] */
  { /*   204 */                        40u,        204u,                          19u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VcEvNodeMisVDDM, Satellite#0] */
  { /*   205 */                        40u,        205u,                           2u,            1u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u },  /* [VcEvPropCANGlbTiOutd, Satellite#0] */
  { /*   206 */                        40u,        206u,                          20u,            2u,                       3u,            3u,                     0u,      0x17u,                                                1u,                                                  0u }   /* [VcEvTsttrPlaus, Satellite#0] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ExtendedDataTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_ExtendedDataTable
  \details
  Element                                   Description
  DataCollectionTableEdr2CollIndEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableEdr2CollInd
  DataCollectionTableEdr2CollIndStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableEdr2CollInd
  MaxRecordSize                         
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_ExtendedDataTableType, DEM_CONST) Dem_Cfg_ExtendedDataTable[2] = {
    /* Index    DataCollectionTableEdr2CollIndEndIdx                                DataCollectionTableEdr2CollIndStartIdx                                MaxRecordSize        Referable Keys */
  { /*     0 */ DEM_CFG_NO_DATACOLLECTIONTABLEEDR2COLLINDENDIDXOFEXTENDEDDATATABLE, DEM_CFG_NO_DATACOLLECTIONTABLEEDR2COLLINDSTARTIDXOFEXTENDEDDATATABLE,            0u },  /* [#NoExtendedDataRecordConfigured] */
  { /*     1 */                                                                12u,                                                                   0u,            4u }   /* [#ExtendedDataClass_5ecd55b9, #EVENT_INVALID, AURIX_EEPROM_FLT, AURIX_HW_FLT, AURIX_RST_MPL, AURIX_RST_SNG, AURIX_WATHDOG_FLT, COM_Busoff, COM_CarConfigErr, COM_NotConfig, CRASH_DTC, CU_TEMP1_RNG_HI, CU_TEMP1_RNG_LO, CU_TEMP2_RNG_HI, CU_TEMP2_RNG_LO, CU_TEMP_GRDT, CU_TEMP_HWP, CU_TEMP_HW_FLT, CU_TEMP_HW_FLT_001, DiagC_ClutchService, EXT_UC_SPI_FLT, Eg_HallVolWrong, FS_MONITIOR_ASC_FLT, FS_MONITIOR_ASC_FW_FLT, GA_BLDC_FLT, GA_BLDC_POS_FLT, Ga_FindEngleAngleFailed, Ga_GADisengageFailure, Ga_GAEngageFailure, Ga_MoveOverThd, Ga_TmSpdSyncFailed, Ga_ZeroFindDistanFailure, INV_ACTV_DCHA_HW, INV_CONTROL_LIMIT, INV_COOLT_INLET_TEMP_HWP, INV_CU_TEMP1_RNG_NOK, INV_CU_TEMP2_RNG_NOK, INV_EM_OVRSPD_HWP, INV_EM_STATOR_TEMP2_ELE_FLT, INV_EM_STATOR_TEMP2_GRDT, INV_EM_STATOR_TEMP2_RNG_HI, INV_EM_STATOR_TEMP2_RNG_LO, INV_EM_STATOR_TEMP2_RNG_NOK, INV_EM_STATOR_TEMP2_RNG_SWT, INV_EM_STATOR_TEMP_ELE_FLT, INV_EM_STATOR_TEMP_GRDT, INV_EM_STATOR_TEMP_HWP, INV_EM_STATOR_TEMP_RNG_HI, INV_EM_STATOR_TEMP_RNG_LO, INV_EM_STATOR_TEMP_RNG_NOK, INV_EM_STATOR_TEMP_RNG_SWT, INV_GATE_DRVR_BOT_HWP, INV_GATE_DRVR_TOP_HWP, INV_IAC_OC_HWP, INV_IAC_OC_SWP, INV_IAC_PHA_LOSS_MPL, INV_IAC_PLAUS_SUM, INV_IAC_U_AMP, INV_IAC_U_ELEC_HI, INV_IAC_U_ELEC_HWP, INV_IAC_U_ELEC_LO, INV_IAC_U_OFFS, INV_IAC_U_RNG_HI, INV_IAC_U_RNG_LO, INV_IAC_V_AMP, INV_IAC_V_ELEC_HI, INV_IAC_V_ELEC_HWP, INV_IAC_V_ELEC_HWP_001, INV_IAC_V_ELEC_LO, INV_IAC_V_OFFS, INV_IAC_V_RNG_HI, INV_IAC_V_RNG_LO, INV_IAC_W_AMP, INV_IAC_W_ELEC_HI, INV_IAC_W_ELEC_LO, INV_IAC_W_OFFS, INV_IAC_W_RNG_HI, INV_IAC_W_RNG_LO, INV_IGBT_TEMP_HWP, INV_IGBT_TEMP_U_GRDT, INV_IGBT_TEMP_U_PLAUS, INV_IGBT_TEMP_U_RNG_HI, INV_IGBT_TEMP_U_RNG_LO, INV_IGBT_TEMP_V_GRDT, INV_IGBT_TEMP_V_PLAUS, INV_IGBT_TEMP_V_RNG_HI, INV_IGBT_TEMP_V_RNG_LO, INV_IGBT_TEMP_W_GRDT, INV_IGBT_TEMP_W_PLAUS, INV_IGBT_TEMP_W_RNG_HI, INV_IGBT_TEMP_W_RNG_LO, INV_IMMO_AUTHFAIL, INV_IMMO_NOKEY, INV_INTERLOCK_FLT, INV_QUIESCENT_FLT, INV_RSLVR_COS_AMP, INV_RSLVR_COS_ELEC_FLT, INV_RSLVR_COS_ELEC_HI, INV_RSLVR_COS_ELEC_LO, INV_RSLVR_COS_ELEC_OPEN, INV_RSLVR_COS_RNG_HI, INV_RSLVR_COS_RNG_LO, INV_RSLVR_COS_RNG_NOK, INV_RSLVR_EXCT_ELEC_FLT, INV_RSLVR_EXCT_ELEC_HI, INV_RSLVR_EXCT_ELEC_LO, INV_RSLVR_EXCT_ELEC_OPEN, INV_RSLVR_EXCT_FREQ_RNG_NOK, INV_RSLVR_EXCT_OC_HWP, INV_RSLVR_EXCT_OC_HWP_001, INV_RSLVR_EXCT_OC_HWP_002, INV_RSLVR_EXCT_PLAUS, INV_RSLVR_EXCT_RNG_HI, INV_RSLVR_EXCT_RNG_LO, INV_RSLVR_EXCT_RNG_NOK, INV_RSLVR_HW_FLT, INV_RSLVR_OFFS_DFT, INV_RSLVR_OFFS_OUT_RANG, INV_RSLVR_SIN_AMP, INV_RSLVR_SIN_COS_PLAUS, INV_RSLVR_SIN_COS_PLAUS_AMP, INV_RSLVR_SIN_ELEC_FLT, INV_RSLVR_SIN_ELEC_HI, INV_RSLVR_SIN_ELEC_LO, INV_RSLVR_SIN_ELEC_OPEN, INV_RSLVR_SIN_RNG_HI, INV_RSLVR_SIN_RNG_LO, INV_RSLVR_SIN_RNG_NOK, INV_SHUT_OFF_PAH_START_UP, INV_TEMP_DCHA_HW, INV_UHVDC_1_ELEC_HI, INV_UHVDC_1_RNG_HI, INV_UHVDC_2_RNG_HI, INV_UHVDC_OV_HWP, INV_UHVDC_OV_SWP, INV_UHVDC_PLAUS, INV_UHVDC_UV_HWP, MON_TQ_PLAUS_PWR_MDL, PA_ACTION_FLT, PA_ELE_FLT, PA_OpenCirc, PA_OpenCirc_FLT, PLOCK_Current_RNG_OUT, PS_5V_Fault, PS_BLDC_OV_FLT, PS_BLDC_UV_FLT, PS_DRVB_Fault, PS_ECUSUPPLY_HIGH, PS_ECUSUPPLY_LOW, PS_KL15_RNG_HI, PS_KL30_BACKUP_FLT, PS_KL30_PLAUS, PS_KL30_RNG_HI, PS_KL30_RNG_LO, PS_P5_UC_FLT, PS_P12_RES_FLT, PS_P15_U_FLT, PS_P15_V_FLT, PS_P15_W_FLT, PS_WhlSnsr_FLT, PS_WhlSnsr_Vltg_FLT, PSnsr_ELE_FLT, PSnsr_GRADT_Flt, PSnsr_RNG_NOK, VCC_OverVoltage, VCC_UnderVoltage, VCEvBecmPropFr01Tioutd, VCEvBecmPropFr02Tioutd, VCEvEcmPropFr02MgmFr00Tioutd, VCEvEcmPropFr02Tioutd, VCEvEcmPropFr04Tioutd, VCEvEcmPropFr05Tioutd, VCEvEcmPropFr08Tioutd, VCEvEcmPropFr11Tioutd, VCEvEcmPropFr24MgmFr01Tioutd, VCEvEcmPropFr25Tioutd, VCEvEcmPropXevFr06Tioutd, VCEvSrsPropFr02Tioutd, VCEvVddmPropFr05Tioutd, VCEvVddmPropFr08Tioutd, VCEvVddmPropFr08Tioutd_001, VCEvVddmPropFr15Tioutd, VCEvVddmPropFr17Tioutd, VCEvVddmPropFr18Tioutd, VCEvVddmPropFr19Tioutd, VcEvChkSum, VcEvChkSumCrashStsSafe, VcEvChkSumHvSysRlySts, VcEvChkSumWhlMotSysTqAllwd, VcEvCntr, VcEvCntrCrashStsSafe, VcEvCntrHvSysRlySts, VcEvCntrWhlMotSysTqAllwd, VcEvEMPerfPlaus, VcEvMonESpd, VcEvMonErrMode, VcEvMonIPH, VcEvMonISAR, VcEvMonMode, VcEvMonMode_001, VcEvMonTrqAct, VcEvMonTrqActPlaus, VcEvMonTrqCmp, VcEvNodeMisBECM, VcEvNodeMisECM, VcEvNodeMisVDDM, VcEvPropCANGlbTiOutd, VcEvTsttrPlaus] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FreezeFrameNumTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FreezeFrameNumTable
  \details
  Element     Description
  FFUpdate
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_FreezeFrameNumTableType, DEM_CONST) Dem_Cfg_FreezeFrameNumTable[2] = {
    /* Index    FFUpdate        Referable Keys */
  { /*     0 */    FALSE },  /* [calcFFRecNumClass_02, #EVENT_INVALID, AURIX_EEPROM_FLT, AURIX_HW_FLT, AURIX_RST_MPL, AURIX_RST_SNG, AURIX_WATHDOG_FLT, COM_Busoff, COM_CarConfigErr, COM_NotConfig, CRASH_DTC, CU_TEMP1_RNG_HI, CU_TEMP1_RNG_LO, CU_TEMP2_RNG_HI, CU_TEMP2_RNG_LO, CU_TEMP_GRDT, CU_TEMP_HWP, CU_TEMP_HW_FLT, CU_TEMP_HW_FLT_001, DiagC_ClutchService, EXT_UC_SPI_FLT, Eg_HallVolWrong, FS_MONITIOR_ASC_FLT, FS_MONITIOR_ASC_FW_FLT, GA_BLDC_FLT, GA_BLDC_POS_FLT, Ga_FindEngleAngleFailed, Ga_GADisengageFailure, Ga_GAEngageFailure, Ga_MoveOverThd, Ga_TmSpdSyncFailed, Ga_ZeroFindDistanFailure, INV_ACTV_DCHA_HW, INV_CONTROL_LIMIT, INV_COOLT_INLET_TEMP_HWP, INV_CU_TEMP1_RNG_NOK, INV_CU_TEMP2_RNG_NOK, INV_EM_OVRSPD_HWP, INV_EM_STATOR_TEMP2_ELE_FLT, INV_EM_STATOR_TEMP2_GRDT, INV_EM_STATOR_TEMP2_RNG_HI, INV_EM_STATOR_TEMP2_RNG_LO, INV_EM_STATOR_TEMP2_RNG_NOK, INV_EM_STATOR_TEMP2_RNG_SWT, INV_EM_STATOR_TEMP_ELE_FLT, INV_EM_STATOR_TEMP_GRDT, INV_EM_STATOR_TEMP_HWP, INV_EM_STATOR_TEMP_RNG_HI, INV_EM_STATOR_TEMP_RNG_LO, INV_EM_STATOR_TEMP_RNG_NOK, INV_EM_STATOR_TEMP_RNG_SWT, INV_GATE_DRVR_BOT_HWP, INV_GATE_DRVR_TOP_HWP, INV_IAC_OC_HWP, INV_IAC_OC_SWP, INV_IAC_PHA_LOSS_MPL, INV_IAC_PLAUS_SUM, INV_IAC_U_AMP, INV_IAC_U_ELEC_HI, INV_IAC_U_ELEC_HWP, INV_IAC_U_ELEC_LO, INV_IAC_U_OFFS, INV_IAC_U_RNG_HI, INV_IAC_U_RNG_LO, INV_IAC_V_AMP, INV_IAC_V_ELEC_HI, INV_IAC_V_ELEC_HWP, INV_IAC_V_ELEC_HWP_001, INV_IAC_V_ELEC_LO, INV_IAC_V_OFFS, INV_IAC_V_RNG_HI, INV_IAC_V_RNG_LO, INV_IAC_W_AMP, INV_IAC_W_ELEC_HI, INV_IAC_W_ELEC_LO, INV_IAC_W_OFFS, INV_IAC_W_RNG_HI, INV_IAC_W_RNG_LO, INV_IGBT_TEMP_HWP, INV_IGBT_TEMP_U_GRDT, INV_IGBT_TEMP_U_PLAUS, INV_IGBT_TEMP_U_RNG_HI, INV_IGBT_TEMP_U_RNG_LO, INV_IGBT_TEMP_V_GRDT, INV_IGBT_TEMP_V_PLAUS, INV_IGBT_TEMP_V_RNG_HI, INV_IGBT_TEMP_V_RNG_LO, INV_IGBT_TEMP_W_GRDT, INV_IGBT_TEMP_W_PLAUS, INV_IGBT_TEMP_W_RNG_HI, INV_IGBT_TEMP_W_RNG_LO, INV_IMMO_AUTHFAIL, INV_IMMO_NOKEY, INV_INTERLOCK_FLT, INV_QUIESCENT_FLT, INV_RSLVR_COS_AMP, INV_RSLVR_COS_ELEC_FLT, INV_RSLVR_COS_ELEC_HI, INV_RSLVR_COS_ELEC_LO, INV_RSLVR_COS_ELEC_OPEN, INV_RSLVR_COS_RNG_HI, INV_RSLVR_COS_RNG_LO, INV_RSLVR_COS_RNG_NOK, INV_RSLVR_EXCT_ELEC_FLT, INV_RSLVR_EXCT_ELEC_HI, INV_RSLVR_EXCT_ELEC_LO, INV_RSLVR_EXCT_ELEC_OPEN, INV_RSLVR_EXCT_FREQ_RNG_NOK, INV_RSLVR_EXCT_OC_HWP, INV_RSLVR_EXCT_OC_HWP_001, INV_RSLVR_EXCT_OC_HWP_002, INV_RSLVR_EXCT_PLAUS, INV_RSLVR_EXCT_RNG_HI, INV_RSLVR_EXCT_RNG_LO, INV_RSLVR_EXCT_RNG_NOK, INV_RSLVR_HW_FLT, INV_RSLVR_OFFS_DFT, INV_RSLVR_OFFS_OUT_RANG, INV_RSLVR_SIN_AMP, INV_RSLVR_SIN_COS_PLAUS, INV_RSLVR_SIN_COS_PLAUS_AMP, INV_RSLVR_SIN_ELEC_FLT, INV_RSLVR_SIN_ELEC_HI, INV_RSLVR_SIN_ELEC_LO, INV_RSLVR_SIN_ELEC_OPEN, INV_RSLVR_SIN_RNG_HI, INV_RSLVR_SIN_RNG_LO, INV_RSLVR_SIN_RNG_NOK, INV_SHUT_OFF_PAH_START_UP, INV_TEMP_DCHA_HW, INV_UHVDC_1_ELEC_HI, INV_UHVDC_1_RNG_HI, INV_UHVDC_2_RNG_HI, INV_UHVDC_OV_HWP, INV_UHVDC_OV_SWP, INV_UHVDC_PLAUS, INV_UHVDC_UV_HWP, MON_TQ_PLAUS_PWR_MDL, PA_ACTION_FLT, PA_ELE_FLT, PA_OpenCirc, PA_OpenCirc_FLT, PLOCK_Current_RNG_OUT, PS_5V_Fault, PS_BLDC_OV_FLT, PS_BLDC_UV_FLT, PS_DRVB_Fault, PS_ECUSUPPLY_HIGH, PS_ECUSUPPLY_LOW, PS_KL15_RNG_HI, PS_KL30_BACKUP_FLT, PS_KL30_PLAUS, PS_KL30_RNG_HI, PS_KL30_RNG_LO, PS_P5_UC_FLT, PS_P12_RES_FLT, PS_P15_U_FLT, PS_P15_V_FLT, PS_P15_W_FLT, PS_WhlSnsr_FLT, PS_WhlSnsr_Vltg_FLT, PSnsr_ELE_FLT, PSnsr_GRADT_Flt, PSnsr_RNG_NOK, VCC_OverVoltage, VCC_UnderVoltage, VCEvBecmPropFr01Tioutd, VCEvBecmPropFr02Tioutd, VCEvEcmPropFr02MgmFr00Tioutd, VCEvEcmPropFr02Tioutd, VCEvEcmPropFr04Tioutd, VCEvEcmPropFr05Tioutd, VCEvEcmPropFr08Tioutd, VCEvEcmPropFr11Tioutd, VCEvEcmPropFr24MgmFr01Tioutd, VCEvEcmPropFr25Tioutd, VCEvEcmPropXevFr06Tioutd, VCEvSrsPropFr02Tioutd, VCEvVddmPropFr05Tioutd, VCEvVddmPropFr08Tioutd, VCEvVddmPropFr08Tioutd_001, VCEvVddmPropFr15Tioutd, VCEvVddmPropFr17Tioutd, VCEvVddmPropFr18Tioutd, VCEvVddmPropFr19Tioutd, VcEvChkSum, VcEvChkSumCrashStsSafe, VcEvChkSumHvSysRlySts, VcEvChkSumWhlMotSysTqAllwd, VcEvCntr, VcEvCntrCrashStsSafe, VcEvCntrHvSysRlySts, VcEvCntrWhlMotSysTqAllwd, VcEvEMPerfPlaus, VcEvMonESpd, VcEvMonErrMode, VcEvMonIPH, VcEvMonISAR, VcEvMonMode, VcEvMonMode_001, VcEvMonTrqAct, VcEvMonTrqActPlaus, VcEvMonTrqCmp, VcEvNodeMisBECM, VcEvNodeMisECM, VcEvNodeMisVDDM, VcEvPropCANGlbTiOutd, VcEvTsttrPlaus] */
  { /*     1 */     TRUE }   /* [calcFFRecNumClass_02, #EVENT_INVALID, AURIX_EEPROM_FLT, AURIX_HW_FLT, AURIX_RST_MPL, AURIX_RST_SNG, AURIX_WATHDOG_FLT, COM_Busoff, COM_CarConfigErr, COM_NotConfig, CRASH_DTC, CU_TEMP1_RNG_HI, CU_TEMP1_RNG_LO, CU_TEMP2_RNG_HI, CU_TEMP2_RNG_LO, CU_TEMP_GRDT, CU_TEMP_HWP, CU_TEMP_HW_FLT, CU_TEMP_HW_FLT_001, DiagC_ClutchService, EXT_UC_SPI_FLT, Eg_HallVolWrong, FS_MONITIOR_ASC_FLT, FS_MONITIOR_ASC_FW_FLT, GA_BLDC_FLT, GA_BLDC_POS_FLT, Ga_FindEngleAngleFailed, Ga_GADisengageFailure, Ga_GAEngageFailure, Ga_MoveOverThd, Ga_TmSpdSyncFailed, Ga_ZeroFindDistanFailure, INV_ACTV_DCHA_HW, INV_CONTROL_LIMIT, INV_COOLT_INLET_TEMP_HWP, INV_CU_TEMP1_RNG_NOK, INV_CU_TEMP2_RNG_NOK, INV_EM_OVRSPD_HWP, INV_EM_STATOR_TEMP2_ELE_FLT, INV_EM_STATOR_TEMP2_GRDT, INV_EM_STATOR_TEMP2_RNG_HI, INV_EM_STATOR_TEMP2_RNG_LO, INV_EM_STATOR_TEMP2_RNG_NOK, INV_EM_STATOR_TEMP2_RNG_SWT, INV_EM_STATOR_TEMP_ELE_FLT, INV_EM_STATOR_TEMP_GRDT, INV_EM_STATOR_TEMP_HWP, INV_EM_STATOR_TEMP_RNG_HI, INV_EM_STATOR_TEMP_RNG_LO, INV_EM_STATOR_TEMP_RNG_NOK, INV_EM_STATOR_TEMP_RNG_SWT, INV_GATE_DRVR_BOT_HWP, INV_GATE_DRVR_TOP_HWP, INV_IAC_OC_HWP, INV_IAC_OC_SWP, INV_IAC_PHA_LOSS_MPL, INV_IAC_PLAUS_SUM, INV_IAC_U_AMP, INV_IAC_U_ELEC_HI, INV_IAC_U_ELEC_HWP, INV_IAC_U_ELEC_LO, INV_IAC_U_OFFS, INV_IAC_U_RNG_HI, INV_IAC_U_RNG_LO, INV_IAC_V_AMP, INV_IAC_V_ELEC_HI, INV_IAC_V_ELEC_HWP, INV_IAC_V_ELEC_HWP_001, INV_IAC_V_ELEC_LO, INV_IAC_V_OFFS, INV_IAC_V_RNG_HI, INV_IAC_V_RNG_LO, INV_IAC_W_AMP, INV_IAC_W_ELEC_HI, INV_IAC_W_ELEC_LO, INV_IAC_W_OFFS, INV_IAC_W_RNG_HI, INV_IAC_W_RNG_LO, INV_IGBT_TEMP_HWP, INV_IGBT_TEMP_U_GRDT, INV_IGBT_TEMP_U_PLAUS, INV_IGBT_TEMP_U_RNG_HI, INV_IGBT_TEMP_U_RNG_LO, INV_IGBT_TEMP_V_GRDT, INV_IGBT_TEMP_V_PLAUS, INV_IGBT_TEMP_V_RNG_HI, INV_IGBT_TEMP_V_RNG_LO, INV_IGBT_TEMP_W_GRDT, INV_IGBT_TEMP_W_PLAUS, INV_IGBT_TEMP_W_RNG_HI, INV_IGBT_TEMP_W_RNG_LO, INV_IMMO_AUTHFAIL, INV_IMMO_NOKEY, INV_INTERLOCK_FLT, INV_QUIESCENT_FLT, INV_RSLVR_COS_AMP, INV_RSLVR_COS_ELEC_FLT, INV_RSLVR_COS_ELEC_HI, INV_RSLVR_COS_ELEC_LO, INV_RSLVR_COS_ELEC_OPEN, INV_RSLVR_COS_RNG_HI, INV_RSLVR_COS_RNG_LO, INV_RSLVR_COS_RNG_NOK, INV_RSLVR_EXCT_ELEC_FLT, INV_RSLVR_EXCT_ELEC_HI, INV_RSLVR_EXCT_ELEC_LO, INV_RSLVR_EXCT_ELEC_OPEN, INV_RSLVR_EXCT_FREQ_RNG_NOK, INV_RSLVR_EXCT_OC_HWP, INV_RSLVR_EXCT_OC_HWP_001, INV_RSLVR_EXCT_OC_HWP_002, INV_RSLVR_EXCT_PLAUS, INV_RSLVR_EXCT_RNG_HI, INV_RSLVR_EXCT_RNG_LO, INV_RSLVR_EXCT_RNG_NOK, INV_RSLVR_HW_FLT, INV_RSLVR_OFFS_DFT, INV_RSLVR_OFFS_OUT_RANG, INV_RSLVR_SIN_AMP, INV_RSLVR_SIN_COS_PLAUS, INV_RSLVR_SIN_COS_PLAUS_AMP, INV_RSLVR_SIN_ELEC_FLT, INV_RSLVR_SIN_ELEC_HI, INV_RSLVR_SIN_ELEC_LO, INV_RSLVR_SIN_ELEC_OPEN, INV_RSLVR_SIN_RNG_HI, INV_RSLVR_SIN_RNG_LO, INV_RSLVR_SIN_RNG_NOK, INV_SHUT_OFF_PAH_START_UP, INV_TEMP_DCHA_HW, INV_UHVDC_1_ELEC_HI, INV_UHVDC_1_RNG_HI, INV_UHVDC_2_RNG_HI, INV_UHVDC_OV_HWP, INV_UHVDC_OV_SWP, INV_UHVDC_PLAUS, INV_UHVDC_UV_HWP, MON_TQ_PLAUS_PWR_MDL, PA_ACTION_FLT, PA_ELE_FLT, PA_OpenCirc, PA_OpenCirc_FLT, PLOCK_Current_RNG_OUT, PS_5V_Fault, PS_BLDC_OV_FLT, PS_BLDC_UV_FLT, PS_DRVB_Fault, PS_ECUSUPPLY_HIGH, PS_ECUSUPPLY_LOW, PS_KL15_RNG_HI, PS_KL30_BACKUP_FLT, PS_KL30_PLAUS, PS_KL30_RNG_HI, PS_KL30_RNG_LO, PS_P5_UC_FLT, PS_P12_RES_FLT, PS_P15_U_FLT, PS_P15_V_FLT, PS_P15_W_FLT, PS_WhlSnsr_FLT, PS_WhlSnsr_Vltg_FLT, PSnsr_ELE_FLT, PSnsr_GRADT_Flt, PSnsr_RNG_NOK, VCC_OverVoltage, VCC_UnderVoltage, VCEvBecmPropFr01Tioutd, VCEvBecmPropFr02Tioutd, VCEvEcmPropFr02MgmFr00Tioutd, VCEvEcmPropFr02Tioutd, VCEvEcmPropFr04Tioutd, VCEvEcmPropFr05Tioutd, VCEvEcmPropFr08Tioutd, VCEvEcmPropFr11Tioutd, VCEvEcmPropFr24MgmFr01Tioutd, VCEvEcmPropFr25Tioutd, VCEvEcmPropXevFr06Tioutd, VCEvSrsPropFr02Tioutd, VCEvVddmPropFr05Tioutd, VCEvVddmPropFr08Tioutd, VCEvVddmPropFr08Tioutd_001, VCEvVddmPropFr15Tioutd, VCEvVddmPropFr17Tioutd, VCEvVddmPropFr18Tioutd, VCEvVddmPropFr19Tioutd, VcEvChkSum, VcEvChkSumCrashStsSafe, VcEvChkSumHvSysRlySts, VcEvChkSumWhlMotSysTqAllwd, VcEvCntr, VcEvCntrCrashStsSafe, VcEvCntrHvSysRlySts, VcEvCntrWhlMotSysTqAllwd, VcEvEMPerfPlaus, VcEvMonESpd, VcEvMonErrMode, VcEvMonIPH, VcEvMonISAR, VcEvMonMode, VcEvMonMode_001, VcEvMonTrqAct, VcEvMonTrqActPlaus, VcEvMonTrqCmp, VcEvNodeMisBECM, VcEvNodeMisECM, VcEvNodeMisVDDM, VcEvPropCANGlbTiOutd, VcEvTsttrPlaus] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FreezeFrameTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FreezeFrameTable
  \details
  Element                                   Description
  DataCollectionTableFfm2CollIndEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableFfm2CollInd
  DataCollectionTableFfm2CollIndStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableFfm2CollInd
  RecordSize                                Summarized size of did data that is stored in Dem_Cfg_PrimaryEntryType.SnapshotData[][] (i.e. typically without size of dids containing internal data elements).
  RecordSizeUds                             Summarized size of did data, did numbers and snapshot header (i.e. dynamical payload size of the uds response message).
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_FreezeFrameTableType, DEM_CONST) Dem_Cfg_FreezeFrameTable[5] = {
    /* Index    DataCollectionTableFfm2CollIndEndIdx                               DataCollectionTableFfm2CollIndStartIdx                               RecordSize  RecordSizeUds        Referable Keys */
  { /*     0 */ DEM_CFG_NO_DATACOLLECTIONTABLEFFM2COLLINDENDIDXOFFREEZEFRAMETABLE, DEM_CFG_NO_DATACOLLECTIONTABLEFFM2COLLINDSTARTIDXOFFREEZEFRAMETABLE,         0u,            0u },  /* [#NoFreezeFrameConfigured] */
  { /*     1 */                                                               60u,                                                                  0u,       102u,          224u },  /* [#FreezeFrameClass_5b6f811c, FS_MONITIOR_ASC_FLT, FS_MONITIOR_ASC_FW_FLT] */
  { /*     2 */                                                              108u,                                                                 60u,        82u,          180u },  /* [#FreezeFrameClass_79980272, INV_IAC_V_ELEC_HWP_001] */
  { /*     3 */                                                              163u,                                                                108u,        92u,          204u },  /* [#FreezeFrameClass_c3111450, #EVENT_INVALID, AURIX_EEPROM_FLT, AURIX_HW_FLT, AURIX_RST_MPL, AURIX_RST_SNG, AURIX_WATHDOG_FLT, COM_Busoff, COM_CarConfigErr, COM_NotConfig, CRASH_DTC, CU_TEMP1_RNG_HI, CU_TEMP1_RNG_LO, CU_TEMP2_RNG_HI, CU_TEMP2_RNG_LO, CU_TEMP_GRDT, CU_TEMP_HWP, CU_TEMP_HW_FLT, CU_TEMP_HW_FLT_001, EXT_UC_SPI_FLT, INV_ACTV_DCHA_HW, INV_CONTROL_LIMIT, INV_COOLT_INLET_TEMP_HWP, INV_CU_TEMP1_RNG_NOK, INV_CU_TEMP2_RNG_NOK, INV_EM_OVRSPD_HWP, INV_EM_STATOR_TEMP2_ELE_FLT, INV_EM_STATOR_TEMP2_GRDT, INV_EM_STATOR_TEMP2_RNG_HI, INV_EM_STATOR_TEMP2_RNG_LO, INV_EM_STATOR_TEMP2_RNG_NOK, INV_EM_STATOR_TEMP2_RNG_SWT, INV_EM_STATOR_TEMP_ELE_FLT, INV_EM_STATOR_TEMP_GRDT, INV_EM_STATOR_TEMP_HWP, INV_EM_STATOR_TEMP_RNG_HI, INV_EM_STATOR_TEMP_RNG_LO, INV_EM_STATOR_TEMP_RNG_NOK, INV_EM_STATOR_TEMP_RNG_SWT, INV_GATE_DRVR_BOT_HWP, INV_GATE_DRVR_TOP_HWP, INV_IAC_OC_HWP, INV_IAC_OC_SWP, INV_IAC_PHA_LOSS_MPL, INV_IAC_PLAUS_SUM, INV_IAC_U_AMP, INV_IAC_U_ELEC_HI, INV_IAC_U_ELEC_HWP, INV_IAC_U_ELEC_LO, INV_IAC_U_OFFS, INV_IAC_U_RNG_HI, INV_IAC_U_RNG_LO, INV_IAC_V_AMP, INV_IAC_V_ELEC_HI, INV_IAC_V_ELEC_HWP, INV_IAC_V_ELEC_LO, INV_IAC_V_OFFS, INV_IAC_V_RNG_HI, INV_IAC_V_RNG_LO, INV_IAC_W_AMP, INV_IAC_W_ELEC_HI, INV_IAC_W_ELEC_LO, INV_IAC_W_OFFS, INV_IAC_W_RNG_HI, INV_IAC_W_RNG_LO, INV_IGBT_TEMP_HWP, INV_IGBT_TEMP_U_GRDT, INV_IGBT_TEMP_U_PLAUS, INV_IGBT_TEMP_U_RNG_HI, INV_IGBT_TEMP_U_RNG_LO, INV_IGBT_TEMP_V_GRDT, INV_IGBT_TEMP_V_PLAUS, INV_IGBT_TEMP_V_RNG_HI, INV_IGBT_TEMP_V_RNG_LO, INV_IGBT_TEMP_W_GRDT, INV_IGBT_TEMP_W_PLAUS, INV_IGBT_TEMP_W_RNG_HI, INV_IGBT_TEMP_W_RNG_LO, INV_IMMO_AUTHFAIL, INV_IMMO_NOKEY, INV_INTERLOCK_FLT, INV_QUIESCENT_FLT, INV_RSLVR_COS_AMP, INV_RSLVR_COS_ELEC_FLT, INV_RSLVR_COS_ELEC_HI, INV_RSLVR_COS_ELEC_LO, INV_RSLVR_COS_ELEC_OPEN, INV_RSLVR_COS_RNG_HI, INV_RSLVR_COS_RNG_LO, INV_RSLVR_COS_RNG_NOK, INV_RSLVR_EXCT_ELEC_FLT, INV_RSLVR_EXCT_ELEC_HI, INV_RSLVR_EXCT_ELEC_LO, INV_RSLVR_EXCT_ELEC_OPEN, INV_RSLVR_EXCT_FREQ_RNG_NOK, INV_RSLVR_EXCT_OC_HWP, INV_RSLVR_EXCT_OC_HWP_001, INV_RSLVR_EXCT_OC_HWP_002, INV_RSLVR_EXCT_PLAUS, INV_RSLVR_EXCT_RNG_HI, INV_RSLVR_EXCT_RNG_LO, INV_RSLVR_EXCT_RNG_NOK, INV_RSLVR_HW_FLT, INV_RSLVR_OFFS_DFT, INV_RSLVR_OFFS_OUT_RANG, INV_RSLVR_SIN_AMP, INV_RSLVR_SIN_COS_PLAUS, INV_RSLVR_SIN_COS_PLAUS_AMP, INV_RSLVR_SIN_ELEC_FLT, INV_RSLVR_SIN_ELEC_HI, INV_RSLVR_SIN_ELEC_LO, INV_RSLVR_SIN_ELEC_OPEN, INV_RSLVR_SIN_RNG_HI, INV_RSLVR_SIN_RNG_LO, INV_RSLVR_SIN_RNG_NOK, INV_SHUT_OFF_PAH_START_UP, INV_TEMP_DCHA_HW, INV_UHVDC_1_ELEC_HI, INV_UHVDC_1_RNG_HI, INV_UHVDC_2_RNG_HI, INV_UHVDC_OV_HWP, INV_UHVDC_OV_SWP, INV_UHVDC_PLAUS, INV_UHVDC_UV_HWP, MON_TQ_PLAUS_PWR_MDL, PA_ACTION_FLT, PA_ELE_FLT, PA_OpenCirc, PA_OpenCirc_FLT, PLOCK_Current_RNG_OUT, PS_5V_Fault, PS_DRVB_Fault, PS_ECUSUPPLY_HIGH, PS_ECUSUPPLY_LOW, PS_KL15_RNG_HI, PS_KL30_BACKUP_FLT, PS_KL30_PLAUS, PS_KL30_RNG_HI, PS_KL30_RNG_LO, PS_P5_UC_FLT, PS_P12_RES_FLT, PS_P15_U_FLT, PS_P15_V_FLT, PS_P15_W_FLT, PSnsr_ELE_FLT, PSnsr_GRADT_Flt, PSnsr_RNG_NOK, VCC_OverVoltage, VCC_UnderVoltage, VCEvBecmPropFr01Tioutd, VCEvBecmPropFr02Tioutd, VCEvEcmPropFr02MgmFr00Tioutd, VCEvEcmPropFr02Tioutd, VCEvEcmPropFr04Tioutd, VCEvEcmPropFr05Tioutd, VCEvEcmPropFr08Tioutd, VCEvEcmPropFr11Tioutd, VCEvEcmPropFr24MgmFr01Tioutd, VCEvEcmPropFr25Tioutd, VCEvEcmPropXevFr06Tioutd, VCEvSrsPropFr02Tioutd, VCEvVddmPropFr05Tioutd, VCEvVddmPropFr08Tioutd, VCEvVddmPropFr08Tioutd_001, VCEvVddmPropFr15Tioutd, VCEvVddmPropFr17Tioutd, VCEvVddmPropFr18Tioutd, VCEvVddmPropFr19Tioutd, VcEvChkSum, VcEvChkSumCrashStsSafe, VcEvChkSumHvSysRlySts, VcEvChkSumWhlMotSysTqAllwd, VcEvCntr, VcEvCntrCrashStsSafe, VcEvCntrHvSysRlySts, VcEvCntrWhlMotSysTqAllwd, VcEvEMPerfPlaus, VcEvMonESpd, VcEvMonErrMode, VcEvMonIPH, VcEvMonISAR, VcEvMonMode, VcEvMonMode_001, VcEvMonTrqAct, VcEvMonTrqActPlaus, VcEvMonTrqCmp, VcEvNodeMisBECM, VcEvNodeMisECM, VcEvNodeMisVDDM, VcEvPropCANGlbTiOutd, VcEvTsttrPlaus] */
  { /*     4 */                                                              189u,                                                                163u,        51u,          105u }   /* [#FreezeFrameClass_dc4c3f47, DiagC_ClutchService, Eg_HallVolWrong, GA_BLDC_FLT, GA_BLDC_POS_FLT, Ga_FindEngleAngleFailed, Ga_GADisengageFailure, Ga_GAEngageFailure, Ga_MoveOverThd, Ga_TmSpdSyncFailed, Ga_ZeroFindDistanFailure, PS_BLDC_OV_FLT, PS_BLDC_UV_FLT, PS_WhlSnsr_FLT, PS_WhlSnsr_Vltg_FLT] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_InitMonitorForEvent
**********************************************************************************************************************/
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_InitMonitorForEventFPtrType, DEM_CONST) Dem_Cfg_InitMonitorForEvent[2] = {
  /* Index     InitMonitorForEvent                                     Referable Keys */
  /*     0 */ NULL_PTR                                           ,  /* [#NoCallbackInitMonitorConfigured] */
  /*     1 */ Rte_Call_CBInitEvt_PS_5V_Fault_InitMonitorForEvent    /* [PS_5V_Fault] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryBlockIdToMemoryEntryId
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryBlockIdToMemoryEntryId
  \brief  The array contains these items: Admin, Status, 8 * Primary
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_MemoryEntry_HandleType, DEM_CONST) Dem_Cfg_MemoryBlockIdToMemoryEntryId[10] = {
  /* Index     MemoryBlockIdToMemoryEntryId        Comment */
  /*     0 */ DEM_MEMORYENTRY_HANDLE_INVALID ,  /* [__INVALID__CONFIG__] */
  /*     1 */ DEM_MEMORYENTRY_HANDLE_INVALID ,  /* [__INVALID__CONFIG__] */
  /*     2 */ 0u                             ,  /* [__INVALID__CONFIG__] */
  /*     3 */ 1u                             ,  /* [__INVALID__CONFIG__] */
  /*     4 */ 2u                             ,  /* [__INVALID__CONFIG__] */
  /*     5 */ 3u                             ,  /* [__INVALID__CONFIG__] */
  /*     6 */ 4u                             ,  /* [__INVALID__CONFIG__] */
  /*     7 */ 5u                             ,  /* [__INVALID__CONFIG__] */
  /*     8 */ 6u                             ,  /* [__INVALID__CONFIG__] */
  /*     9 */ 7u                                /* [__INVALID__CONFIG__] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryDataPtr
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryDataPtr
  \brief  The array contains these items: Admin, Status, 8 * Primary
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_NvDataPtrType, DEM_CONST) Dem_Cfg_MemoryDataPtr[10] = {
  /* Index     MemoryDataPtr                                                                                  Comment */
  /*     0 */ (Dem_NvDataPtrType) &Dem_Cfg_GetAdminData()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     1 */ (Dem_NvDataPtrType) &Dem_Cfg_GetStatusData()       /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     2 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_0()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     3 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_1()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     4 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_2()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     5 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_3()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     6 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_4()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     7 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_5()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     8 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_6()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     9 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_7()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */   /* [__INVALID__CONFIG__] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryDataSize
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryDataSize
  \brief  The array contains these items: Admin, Status, 8 * Primary
*/ 
#define DEM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_MemoryDataSizeType, DEM_CONST) Dem_Cfg_MemoryDataSize[10] = {
  /* Index     MemoryDataSize                                                        Comment */
  /*     0 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetAdminData())      ,  /* [__INVALID__CONFIG__] */
  /*     1 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetStatusData())     ,  /* [__INVALID__CONFIG__] */
  /*     2 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_0()) ,  /* [__INVALID__CONFIG__] */
  /*     3 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_1()) ,  /* [__INVALID__CONFIG__] */
  /*     4 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_2()) ,  /* [__INVALID__CONFIG__] */
  /*     5 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_3()) ,  /* [__INVALID__CONFIG__] */
  /*     6 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_4()) ,  /* [__INVALID__CONFIG__] */
  /*     7 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_5()) ,  /* [__INVALID__CONFIG__] */
  /*     8 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_6()) ,  /* [__INVALID__CONFIG__] */
  /*     9 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_7())    /* [__INVALID__CONFIG__] */
};
#define DEM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryEntry
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryEntry
  \brief  The array contains these items: 8 * Primary; size = DEM_CFG_GLOBAL_PRIMARY_SIZE + DEM_CFG_GLOBAL_SECONDARY_SIZE + DEM_CFG_NUMBER_OF_READOUTBUFFERS
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_SharedMemoryEntryPtrType, DEM_CONST) Dem_Cfg_MemoryEntry[8] = {
  /* Index     MemoryEntry                                                                Comment */
  /*     0 */ &Dem_Cfg_GetPrimaryEntry_0()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     1 */ &Dem_Cfg_GetPrimaryEntry_1()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     2 */ &Dem_Cfg_GetPrimaryEntry_2()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     3 */ &Dem_Cfg_GetPrimaryEntry_3()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     4 */ &Dem_Cfg_GetPrimaryEntry_4()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     5 */ &Dem_Cfg_GetPrimaryEntry_5()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     6 */ &Dem_Cfg_GetPrimaryEntry_6()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     7 */ &Dem_Cfg_GetPrimaryEntry_7()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */   /* [__INVALID__CONFIG__] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryEntryInit
**********************************************************************************************************************/
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_PrimaryEntryType, DEM_CONST) Dem_Cfg_MemoryEntryInit = { 0 };
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_TimeSeriesEntryInit
**********************************************************************************************************************/
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_TimeSeriesEntryType, DEM_CONST) Dem_Cfg_TimeSeriesEntryInit = { 0 };
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_AdminData
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_AdminDataType, DEM_NVM_DATA_NOINIT) Dem_Cfg_AdminData;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_CommitBuffer
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_CommitBufferType, DEM_VAR_NOINIT) Dem_Cfg_CommitBuffer;  /* PRQA S 0759 */ /* MD_MSR_18.4 */
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EnableConditionGroupCounter
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EnableConditionGroupCounter
  \brief  (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_ON) or there are internal EnableConditions. Table index: Condition group number. Table value: count of conditions in state 'enable'.
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_EnableConditionGroupCounterType, DEM_VAR_NOINIT) Dem_Cfg_EnableConditionGroupCounter[35];
  /* Index        Referable Keys  */
  /*     0 */  /* [##NoEnableConditionGroupConfigured, __Internal_ControlDtcSetting] */
  /*     1 */  /* [#EnableConditionGroup_02c4dcbd, __Internal_ControlDtcSetting, Inverter, LV, control, done, in, initliazation, is, mode, system, torque] */
  /*     2 */  /* [#EnableConditionGroup_06a6aa19, __Internal_ControlDtcSetting, KL15, KL30, V, Voltage9, active] */
  /*     3 */  /* [#EnableConditionGroup_0cc796ea, __Internal_ControlDtcSetting, KL15, active, in, mode, operation] */
  /*     4 */  /* [#EnableConditionGroup_0d30bf3f, __Internal_ControlDtcSetting, AND, Inverter, KL15, LV, SpdAct, abs, active, any, done, error, in, initliazation, is, no_001, offset, phase, rpm] */
  /*     5 */  /* [#EnableConditionGroup_0e207db3, __Internal_ControlDtcSetting, ASC, IGBT, Inverter, LV, Nm, No, Not, Request, control, current, done, error, faults, in, initliazation, is, mode, no_001, not_001, resolver, sensor, system, torque, toruqe] */
  /*     6 */  /* [#EnableConditionGroup_1027fc3a, __Internal_ControlDtcSetting, Inverter, KL15, LV, P15, active, done, fault, initliazation, is, no_001] */
  /*     7 */  /* [#EnableConditionGroup_14eabb2c, __Internal_ControlDtcSetting, Inverter, LV, done, initliazation, is] */
  /*     8 */  /* [#EnableConditionGroup_16bf7de5, __Internal_ControlDtcSetting, ECU, Every, a_001, configuration_001, for, global, is, of, parameter, passed, received, test, the, time, until, used] */
  /*     9 */  /* [#EnableConditionGroup_2747052a, __Internal_ControlDtcSetting, Inverter, KL15, LV, P5, active, done, initliazation, is, normally, work] */
  /*    10 */  /* [#EnableConditionGroup_30df4d87, __Internal_ControlDtcSetting, Inverter, KL15, LV, No, active, done, fault, initliazation, is, resolver] */
  /*    11 */  /* [#EnableConditionGroup_361fad53, __Internal_ControlDtcSetting, IGBT, Inverter, LV, No, control, current, done, error, faults, in, initliazation, is, mode, no_001, resolver, sensor, system, torque] */
  /*    12 */  /* [#EnableConditionGroup_377893c9, __Internal_ControlDtcSetting, A, All_001, Crash, DTC, ECU, ElPowerLevel, Factory, The_001, Transport, When, a_001, according, active, all, and_001, another, any, as, at, availability, be, below, bus, by, car, change, consumption, criteria, during, electrical, enters, exceptions, exit, for, from, fulfilled, generic, in, indicated, inhibited, inhibition, is, limited, mode, modes, notational, of, off, one, operation, or, power, requested, run, s, seconds, set, shall, signal, start, state, test, tests, that, the, time, to, transition, vehicle, when_001, with] */
  /*    13 */  /* [#EnableConditionGroup_3b30fb61, __Internal_ControlDtcSetting, Request, active, discharge, for, is] */
  /*    14 */  /* [#EnableConditionGroup_4c1ef766, __Internal_ControlDtcSetting, Inverter, KL15, LV, No, P5, P15, active, current, done, faults, initliazation, is, normally, sensor, work] */
  /*    15 */  /* [#EnableConditionGroup_500f9dc2, __Internal_ControlDtcSetting, Inverter, KL15, LV, active, control, done, in, initliazation, is, mode, system, torque] */
  /*    16 */  /* [#EnableConditionGroup_57b85250, __Internal_ControlDtcSetting, CU_temp, Inverter, KL15, LV, No, active, done, fault, initliazation, is] */
  /*    17 */  /* [#EnableConditionGroup_5ab64ab8, __Internal_ControlDtcSetting, Inverter, KL15, LV, P5, active, done, fault, initliazation, is, no_001] */
  /*    18 */  /* [#EnableConditionGroup_6698c395, __Internal_ControlDtcSetting, Inverter, KL15, LV, active, done, error, initliazation, is, no_001, resolver] */
  /*    19 */  /* [#EnableConditionGroup_6f8868bd, __Internal_ControlDtcSetting, BusOff, CAN, KL15, KL30, Prop, V, Voltage9, active, no_001] */
  /*    20 */  /* [#EnableConditionGroup_7ab46a93, __Internal_ControlDtcSetting, Inverter, KL15, LV, active, done, initliazation, is] */
  /*    21 */  /* [#EnableConditionGroup_7cfce1b1, __Internal_ControlDtcSetting, Inverter, LV, PS, V, done, fault, initliazation, is, no_001] */
  /*    22 */  /* [#EnableConditionGroup_830522f7, __Internal_ControlDtcSetting, AND, Driving, Ubat, UsageMode, V] */
  /*    23 */  /* [#EnableConditionGroup_87177a06, __Internal_ControlDtcSetting, CU, Inverter, KL15, LV, active, done, faulte, initliazation, is, no_001, sensor, temp] */
  /*    24 */  /* [#EnableConditionGroup_90577524, __Internal_ControlDtcSetting, INV_EM_STATOR_TEMP_RNG_HI, INV_EM_STATOR_TEMP_RNG_LO, Inverter, KL15, LV, No, active, done, initliazation, is] */
  /*    25 */  /* [#EnableConditionGroup_9e78dd86, __Internal_ControlDtcSetting, Inverter, KL15, LV, No, P5, active, current, done, faults, initliazation, is, normally, sensor, work] */
  /*    26 */  /* [#EnableConditionGroup_b321d2d1, __Internal_ControlDtcSetting, Bulk, Car_001, Configuration, ECU, Enabled, Test_001, a_001, block, each, in, inhibited, is, once, passed, received, runs, state, time, while] */
  /*    27 */  /* [#EnableConditionGroup_c56dc4a6, __Internal_ControlDtcSetting, KL15, active, init, test] */
  /*    28 */  /* [#EnableConditionGroup_d13c1487, __Internal_ControlDtcSetting, E, Inverter, KL15, LV, No, active, done, faults, initliazation, is, motor, sensor] */
  /*    29 */  /* [#EnableConditionGroup_d38dfb27, __Internal_ControlDtcSetting, Inverter, KL15, LV, P5, active, done, initliazation, is, normallye, work] */
  /*    30 */  /* [#EnableConditionGroup_d8c05f30, __Internal_ControlDtcSetting, HVAC, Inverter, KL15, LV, NO_002, SpdAct, abs, active, current, done, fault, initliazation, is, rpm, sensor] */
  /*    31 */  /* [#EnableConditionGroup_e2fc0f3d, __Internal_ControlDtcSetting, INV_IAC_U_ELEC_HI, INV_IAC_U_ELEC_LO, INV_IAC_V_ELEC_HI, INV_IAC_V_ELEC_LO, INV_IAC_W_ELEC_HI, INV_IAC_W_ELEC_LO, Inverter, LV, No, done, initliazation, is] */
  /*    32 */  /* [#EnableConditionGroup_f2368ecb, __Internal_ControlDtcSetting, CU, Inverter, KL15, LV, No, active, done, fault, high, initliazation, is, low, range, temp] */
  /*    33 */  /* [#EnableConditionGroup_f496e085, __Internal_ControlDtcSetting, KL15, active] */
  /*    34 */  /* [#EnableConditionGroup_fecd1d5c, __Internal_ControlDtcSetting, KL15, SPI, active, faults, no_001] */

#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EnableConditionGroupState
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EnableConditionGroupState
  \brief  (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_ON) or there are internal EnableConditions. Table index: Condition group number. Table value: count of conditions in state 'enable'.
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Dem_Cfg_EnableConditionGroupStateType, DEM_VAR_NOINIT) Dem_Cfg_EnableConditionGroupState[35];
  /* Index        Referable Keys  */
  /*     0 */  /* [##NoEnableConditionGroupConfigured, __Internal_ControlDtcSetting] */
  /*     1 */  /* [#EnableConditionGroup_02c4dcbd, __Internal_ControlDtcSetting, Inverter, LV, control, done, in, initliazation, is, mode, system, torque] */
  /*     2 */  /* [#EnableConditionGroup_06a6aa19, __Internal_ControlDtcSetting, KL15, KL30, V, Voltage9, active] */
  /*     3 */  /* [#EnableConditionGroup_0cc796ea, __Internal_ControlDtcSetting, KL15, active, in, mode, operation] */
  /*     4 */  /* [#EnableConditionGroup_0d30bf3f, __Internal_ControlDtcSetting, AND, Inverter, KL15, LV, SpdAct, abs, active, any, done, error, in, initliazation, is, no_001, offset, phase, rpm] */
  /*     5 */  /* [#EnableConditionGroup_0e207db3, __Internal_ControlDtcSetting, ASC, IGBT, Inverter, LV, Nm, No, Not, Request, control, current, done, error, faults, in, initliazation, is, mode, no_001, not_001, resolver, sensor, system, torque, toruqe] */
  /*     6 */  /* [#EnableConditionGroup_1027fc3a, __Internal_ControlDtcSetting, Inverter, KL15, LV, P15, active, done, fault, initliazation, is, no_001] */
  /*     7 */  /* [#EnableConditionGroup_14eabb2c, __Internal_ControlDtcSetting, Inverter, LV, done, initliazation, is] */
  /*     8 */  /* [#EnableConditionGroup_16bf7de5, __Internal_ControlDtcSetting, ECU, Every, a_001, configuration_001, for, global, is, of, parameter, passed, received, test, the, time, until, used] */
  /*     9 */  /* [#EnableConditionGroup_2747052a, __Internal_ControlDtcSetting, Inverter, KL15, LV, P5, active, done, initliazation, is, normally, work] */
  /*    10 */  /* [#EnableConditionGroup_30df4d87, __Internal_ControlDtcSetting, Inverter, KL15, LV, No, active, done, fault, initliazation, is, resolver] */
  /*    11 */  /* [#EnableConditionGroup_361fad53, __Internal_ControlDtcSetting, IGBT, Inverter, LV, No, control, current, done, error, faults, in, initliazation, is, mode, no_001, resolver, sensor, system, torque] */
  /*    12 */  /* [#EnableConditionGroup_377893c9, __Internal_ControlDtcSetting, A, All_001, Crash, DTC, ECU, ElPowerLevel, Factory, The_001, Transport, When, a_001, according, active, all, and_001, another, any, as, at, availability, be, below, bus, by, car, change, consumption, criteria, during, electrical, enters, exceptions, exit, for, from, fulfilled, generic, in, indicated, inhibited, inhibition, is, limited, mode, modes, notational, of, off, one, operation, or, power, requested, run, s, seconds, set, shall, signal, start, state, test, tests, that, the, time, to, transition, vehicle, when_001, with] */
  /*    13 */  /* [#EnableConditionGroup_3b30fb61, __Internal_ControlDtcSetting, Request, active, discharge, for, is] */
  /*    14 */  /* [#EnableConditionGroup_4c1ef766, __Internal_ControlDtcSetting, Inverter, KL15, LV, No, P5, P15, active, current, done, faults, initliazation, is, normally, sensor, work] */
  /*    15 */  /* [#EnableConditionGroup_500f9dc2, __Internal_ControlDtcSetting, Inverter, KL15, LV, active, control, done, in, initliazation, is, mode, system, torque] */
  /*    16 */  /* [#EnableConditionGroup_57b85250, __Internal_ControlDtcSetting, CU_temp, Inverter, KL15, LV, No, active, done, fault, initliazation, is] */
  /*    17 */  /* [#EnableConditionGroup_5ab64ab8, __Internal_ControlDtcSetting, Inverter, KL15, LV, P5, active, done, fault, initliazation, is, no_001] */
  /*    18 */  /* [#EnableConditionGroup_6698c395, __Internal_ControlDtcSetting, Inverter, KL15, LV, active, done, error, initliazation, is, no_001, resolver] */
  /*    19 */  /* [#EnableConditionGroup_6f8868bd, __Internal_ControlDtcSetting, BusOff, CAN, KL15, KL30, Prop, V, Voltage9, active, no_001] */
  /*    20 */  /* [#EnableConditionGroup_7ab46a93, __Internal_ControlDtcSetting, Inverter, KL15, LV, active, done, initliazation, is] */
  /*    21 */  /* [#EnableConditionGroup_7cfce1b1, __Internal_ControlDtcSetting, Inverter, LV, PS, V, done, fault, initliazation, is, no_001] */
  /*    22 */  /* [#EnableConditionGroup_830522f7, __Internal_ControlDtcSetting, AND, Driving, Ubat, UsageMode, V] */
  /*    23 */  /* [#EnableConditionGroup_87177a06, __Internal_ControlDtcSetting, CU, Inverter, KL15, LV, active, done, faulte, initliazation, is, no_001, sensor, temp] */
  /*    24 */  /* [#EnableConditionGroup_90577524, __Internal_ControlDtcSetting, INV_EM_STATOR_TEMP_RNG_HI, INV_EM_STATOR_TEMP_RNG_LO, Inverter, KL15, LV, No, active, done, initliazation, is] */
  /*    25 */  /* [#EnableConditionGroup_9e78dd86, __Internal_ControlDtcSetting, Inverter, KL15, LV, No, P5, active, current, done, faults, initliazation, is, normally, sensor, work] */
  /*    26 */  /* [#EnableConditionGroup_b321d2d1, __Internal_ControlDtcSetting, Bulk, Car_001, Configuration, ECU, Enabled, Test_001, a_001, block, each, in, inhibited, is, once, passed, received, runs, state, time, while] */
  /*    27 */  /* [#EnableConditionGroup_c56dc4a6, __Internal_ControlDtcSetting, KL15, active, init, test] */
  /*    28 */  /* [#EnableConditionGroup_d13c1487, __Internal_ControlDtcSetting, E, Inverter, KL15, LV, No, active, done, faults, initliazation, is, motor, sensor] */
  /*    29 */  /* [#EnableConditionGroup_d38dfb27, __Internal_ControlDtcSetting, Inverter, KL15, LV, P5, active, done, initliazation, is, normallye, work] */
  /*    30 */  /* [#EnableConditionGroup_d8c05f30, __Internal_ControlDtcSetting, HVAC, Inverter, KL15, LV, NO_002, SpdAct, abs, active, current, done, fault, initliazation, is, rpm, sensor] */
  /*    31 */  /* [#EnableConditionGroup_e2fc0f3d, __Internal_ControlDtcSetting, INV_IAC_U_ELEC_HI, INV_IAC_U_ELEC_LO, INV_IAC_V_ELEC_HI, INV_IAC_V_ELEC_LO, INV_IAC_W_ELEC_HI, INV_IAC_W_ELEC_LO, Inverter, LV, No, done, initliazation, is] */
  /*    32 */  /* [#EnableConditionGroup_f2368ecb, __Internal_ControlDtcSetting, CU, Inverter, KL15, LV, No, active, done, fault, high, initliazation, is, low, range, temp] */
  /*    33 */  /* [#EnableConditionGroup_f496e085, __Internal_ControlDtcSetting, KL15, active] */
  /*    34 */  /* [#EnableConditionGroup_fecd1d5c, __Internal_ControlDtcSetting, KL15, SPI, active, faults, no_001] */

#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EnableConditionState
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EnableConditionState
  \brief  (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_ON) or there are internal EnableConditions. Table index: Condition ID. Table value: current condition state '0' disable, '1' enable.
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_EnableConditionStateType, DEM_VAR_NOINIT) Dem_Cfg_EnableConditionState[156];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventDebounceValue
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventDebounceValue
  \brief  size = DEM_G_NUMBER_OF_EVENTS
*/ 
#define DEM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Dem_Cfg_EventDebounceValueType, DEM_VAR_NOINIT) Dem_Cfg_EventDebounceValue[207];
  /* Index        Referable Keys  */
  /*     0 */  /* [#EVENT_INVALID, Satellite#0] */
  /*     1 */  /* [AURIX_EEPROM_FLT, Satellite#0] */
  /*     2 */  /* [AURIX_HW_FLT, Satellite#0] */
  /*     3 */  /* [AURIX_RST_MPL, Satellite#0] */
  /*     4 */  /* [AURIX_RST_SNG, Satellite#0] */
  /*     5 */  /* [AURIX_WATHDOG_FLT, Satellite#0] */
  /*     6 */  /* [COM_Busoff, Satellite#0] */
  /*     7 */  /* [COM_CarConfigErr, Satellite#0] */
  /*     8 */  /* [COM_NotConfig, Satellite#0] */
  /*     9 */  /* [CRASH_DTC, Satellite#0] */
  /*    10 */  /* [CU_TEMP1_RNG_HI, Satellite#0] */
  /*    11 */  /* [CU_TEMP1_RNG_LO, Satellite#0] */
  /*    12 */  /* [CU_TEMP2_RNG_HI, Satellite#0] */
  /*    13 */  /* [CU_TEMP2_RNG_LO, Satellite#0] */
  /*    14 */  /* [CU_TEMP_GRDT, Satellite#0] */
  /*    15 */  /* [CU_TEMP_HWP, Satellite#0] */
  /*    16 */  /* [CU_TEMP_HW_FLT, Satellite#0] */
  /*    17 */  /* [CU_TEMP_HW_FLT_001, Satellite#0] */
  /*    18 */  /* [DiagC_ClutchService, Satellite#0] */
  /*    19 */  /* [EXT_UC_SPI_FLT, Satellite#0] */
  /*    20 */  /* [Eg_HallVolWrong, Satellite#0] */
  /*    21 */  /* [FS_MONITIOR_ASC_FLT, Satellite#0] */
  /*    22 */  /* [FS_MONITIOR_ASC_FW_FLT, Satellite#0] */
  /*    23 */  /* [GA_BLDC_FLT, Satellite#0] */
  /*    24 */  /* [GA_BLDC_POS_FLT, Satellite#0] */
  /*    25 */  /* [Ga_FindEngleAngleFailed, Satellite#0] */
  /*    26 */  /* [Ga_GADisengageFailure, Satellite#0] */
  /*    27 */  /* [Ga_GAEngageFailure, Satellite#0] */
  /*    28 */  /* [Ga_MoveOverThd, Satellite#0] */
  /*    29 */  /* [Ga_TmSpdSyncFailed, Satellite#0] */
  /*    30 */  /* [Ga_ZeroFindDistanFailure, Satellite#0] */
  /*    31 */  /* [INV_ACTV_DCHA_HW, Satellite#0] */
  /*    32 */  /* [INV_CONTROL_LIMIT, Satellite#0] */
  /*    33 */  /* [INV_COOLT_INLET_TEMP_HWP, Satellite#0] */
  /*    34 */  /* [INV_CU_TEMP1_RNG_NOK, Satellite#0] */
  /*    35 */  /* [INV_CU_TEMP2_RNG_NOK, Satellite#0] */
  /*    36 */  /* [INV_EM_OVRSPD_HWP, Satellite#0] */
  /*    37 */  /* [INV_EM_STATOR_TEMP2_ELE_FLT, Satellite#0] */
  /*    38 */  /* [INV_EM_STATOR_TEMP2_GRDT, Satellite#0] */
  /*    39 */  /* [INV_EM_STATOR_TEMP2_RNG_HI, Satellite#0] */
  /*    40 */  /* [INV_EM_STATOR_TEMP2_RNG_LO, Satellite#0] */
  /*    41 */  /* [INV_EM_STATOR_TEMP2_RNG_NOK, Satellite#0] */
  /*    42 */  /* [INV_EM_STATOR_TEMP2_RNG_SWT, Satellite#0] */
  /*    43 */  /* [INV_EM_STATOR_TEMP_ELE_FLT, Satellite#0] */
  /*    44 */  /* [INV_EM_STATOR_TEMP_GRDT, Satellite#0] */
  /*    45 */  /* [INV_EM_STATOR_TEMP_HWP, Satellite#0] */
  /*    46 */  /* [INV_EM_STATOR_TEMP_RNG_HI, Satellite#0] */
  /*    47 */  /* [INV_EM_STATOR_TEMP_RNG_LO, Satellite#0] */
  /*    48 */  /* [INV_EM_STATOR_TEMP_RNG_NOK, Satellite#0] */
  /*    49 */  /* [INV_EM_STATOR_TEMP_RNG_SWT, Satellite#0] */
  /* Index        Referable Keys  */
  /*    50 */  /* [INV_GATE_DRVR_BOT_HWP, Satellite#0] */
  /*    51 */  /* [INV_GATE_DRVR_TOP_HWP, Satellite#0] */
  /*    52 */  /* [INV_IAC_OC_HWP, Satellite#0] */
  /*    53 */  /* [INV_IAC_OC_SWP, Satellite#0] */
  /*    54 */  /* [INV_IAC_PHA_LOSS_MPL, Satellite#0] */
  /*    55 */  /* [INV_IAC_PLAUS_SUM, Satellite#0] */
  /*    56 */  /* [INV_IAC_U_AMP, Satellite#0] */
  /*    57 */  /* [INV_IAC_U_ELEC_HI, Satellite#0] */
  /*    58 */  /* [INV_IAC_U_ELEC_HWP, Satellite#0] */
  /*    59 */  /* [INV_IAC_U_ELEC_LO, Satellite#0] */
  /*    60 */  /* [INV_IAC_U_OFFS, Satellite#0] */
  /*    61 */  /* [INV_IAC_U_RNG_HI, Satellite#0] */
  /*    62 */  /* [INV_IAC_U_RNG_LO, Satellite#0] */
  /*    63 */  /* [INV_IAC_V_AMP, Satellite#0] */
  /*    64 */  /* [INV_IAC_V_ELEC_HI, Satellite#0] */
  /*    65 */  /* [INV_IAC_V_ELEC_HWP, Satellite#0] */
  /*    66 */  /* [INV_IAC_V_ELEC_HWP_001, Satellite#0] */
  /*    67 */  /* [INV_IAC_V_ELEC_LO, Satellite#0] */
  /*    68 */  /* [INV_IAC_V_OFFS, Satellite#0] */
  /*    69 */  /* [INV_IAC_V_RNG_HI, Satellite#0] */
  /*    70 */  /* [INV_IAC_V_RNG_LO, Satellite#0] */
  /*    71 */  /* [INV_IAC_W_AMP, Satellite#0] */
  /*    72 */  /* [INV_IAC_W_ELEC_HI, Satellite#0] */
  /*    73 */  /* [INV_IAC_W_ELEC_LO, Satellite#0] */
  /*    74 */  /* [INV_IAC_W_OFFS, Satellite#0] */
  /*    75 */  /* [INV_IAC_W_RNG_HI, Satellite#0] */
  /*    76 */  /* [INV_IAC_W_RNG_LO, Satellite#0] */
  /*    77 */  /* [INV_IGBT_TEMP_HWP, Satellite#0] */
  /*    78 */  /* [INV_IGBT_TEMP_U_GRDT, Satellite#0] */
  /*    79 */  /* [INV_IGBT_TEMP_U_PLAUS, Satellite#0] */
  /*    80 */  /* [INV_IGBT_TEMP_U_RNG_HI, Satellite#0] */
  /*    81 */  /* [INV_IGBT_TEMP_U_RNG_LO, Satellite#0] */
  /*    82 */  /* [INV_IGBT_TEMP_V_GRDT, Satellite#0] */
  /*    83 */  /* [INV_IGBT_TEMP_V_PLAUS, Satellite#0] */
  /*    84 */  /* [INV_IGBT_TEMP_V_RNG_HI, Satellite#0] */
  /*    85 */  /* [INV_IGBT_TEMP_V_RNG_LO, Satellite#0] */
  /*    86 */  /* [INV_IGBT_TEMP_W_GRDT, Satellite#0] */
  /*    87 */  /* [INV_IGBT_TEMP_W_PLAUS, Satellite#0] */
  /*    88 */  /* [INV_IGBT_TEMP_W_RNG_HI, Satellite#0] */
  /*    89 */  /* [INV_IGBT_TEMP_W_RNG_LO, Satellite#0] */
  /*    90 */  /* [INV_IMMO_AUTHFAIL, Satellite#0] */
  /*    91 */  /* [INV_IMMO_NOKEY, Satellite#0] */
  /*    92 */  /* [INV_INTERLOCK_FLT, Satellite#0] */
  /*    93 */  /* [INV_QUIESCENT_FLT, Satellite#0] */
  /*    94 */  /* [INV_RSLVR_COS_AMP, Satellite#0] */
  /*    95 */  /* [INV_RSLVR_COS_ELEC_FLT, Satellite#0] */
  /*    96 */  /* [INV_RSLVR_COS_ELEC_HI, Satellite#0] */
  /*    97 */  /* [INV_RSLVR_COS_ELEC_LO, Satellite#0] */
  /*    98 */  /* [INV_RSLVR_COS_ELEC_OPEN, Satellite#0] */
  /*    99 */  /* [INV_RSLVR_COS_RNG_HI, Satellite#0] */
  /* Index        Referable Keys  */
  /*   100 */  /* [INV_RSLVR_COS_RNG_LO, Satellite#0] */
  /*   101 */  /* [INV_RSLVR_COS_RNG_NOK, Satellite#0] */
  /*   102 */  /* [INV_RSLVR_EXCT_ELEC_FLT, Satellite#0] */
  /*   103 */  /* [INV_RSLVR_EXCT_ELEC_HI, Satellite#0] */
  /*   104 */  /* [INV_RSLVR_EXCT_ELEC_LO, Satellite#0] */
  /*   105 */  /* [INV_RSLVR_EXCT_ELEC_OPEN, Satellite#0] */
  /*   106 */  /* [INV_RSLVR_EXCT_FREQ_RNG_NOK, Satellite#0] */
  /*   107 */  /* [INV_RSLVR_EXCT_OC_HWP, Satellite#0] */
  /*   108 */  /* [INV_RSLVR_EXCT_OC_HWP_001, Satellite#0] */
  /*   109 */  /* [INV_RSLVR_EXCT_OC_HWP_002, Satellite#0] */
  /*   110 */  /* [INV_RSLVR_EXCT_PLAUS, Satellite#0] */
  /*   111 */  /* [INV_RSLVR_EXCT_RNG_HI, Satellite#0] */
  /*   112 */  /* [INV_RSLVR_EXCT_RNG_LO, Satellite#0] */
  /*   113 */  /* [INV_RSLVR_EXCT_RNG_NOK, Satellite#0] */
  /*   114 */  /* [INV_RSLVR_HW_FLT, Satellite#0] */
  /*   115 */  /* [INV_RSLVR_OFFS_DFT, Satellite#0] */
  /*   116 */  /* [INV_RSLVR_OFFS_OUT_RANG, Satellite#0] */
  /*   117 */  /* [INV_RSLVR_SIN_AMP, Satellite#0] */
  /*   118 */  /* [INV_RSLVR_SIN_COS_PLAUS, Satellite#0] */
  /*   119 */  /* [INV_RSLVR_SIN_COS_PLAUS_AMP, Satellite#0] */
  /*   120 */  /* [INV_RSLVR_SIN_ELEC_FLT, Satellite#0] */
  /*   121 */  /* [INV_RSLVR_SIN_ELEC_HI, Satellite#0] */
  /*   122 */  /* [INV_RSLVR_SIN_ELEC_LO, Satellite#0] */
  /*   123 */  /* [INV_RSLVR_SIN_ELEC_OPEN, Satellite#0] */
  /*   124 */  /* [INV_RSLVR_SIN_RNG_HI, Satellite#0] */
  /*   125 */  /* [INV_RSLVR_SIN_RNG_LO, Satellite#0] */
  /*   126 */  /* [INV_RSLVR_SIN_RNG_NOK, Satellite#0] */
  /*   127 */  /* [INV_SHUT_OFF_PAH_START_UP, Satellite#0] */
  /*   128 */  /* [INV_TEMP_DCHA_HW, Satellite#0] */
  /*   129 */  /* [INV_UHVDC_1_ELEC_HI, Satellite#0] */
  /*   130 */  /* [INV_UHVDC_1_RNG_HI, Satellite#0] */
  /*   131 */  /* [INV_UHVDC_2_RNG_HI, Satellite#0] */
  /*   132 */  /* [INV_UHVDC_OV_HWP, Satellite#0] */
  /*   133 */  /* [INV_UHVDC_OV_SWP, Satellite#0] */
  /*   134 */  /* [INV_UHVDC_PLAUS, Satellite#0] */
  /*   135 */  /* [INV_UHVDC_UV_HWP, Satellite#0] */
  /*   136 */  /* [MON_TQ_PLAUS_PWR_MDL, Satellite#0] */
  /*   137 */  /* [PA_ACTION_FLT, Satellite#0] */
  /*   138 */  /* [PA_ELE_FLT, Satellite#0] */
  /*   139 */  /* [PA_OpenCirc, Satellite#0] */
  /*   140 */  /* [PA_OpenCirc_FLT, Satellite#0] */
  /*   141 */  /* [PLOCK_Current_RNG_OUT, Satellite#0] */
  /*   142 */  /* [PS_5V_Fault, Satellite#0] */
  /*   143 */  /* [PS_BLDC_OV_FLT, Satellite#0] */
  /*   144 */  /* [PS_BLDC_UV_FLT, Satellite#0] */
  /*   145 */  /* [PS_DRVB_Fault, Satellite#0] */
  /*   146 */  /* [PS_ECUSUPPLY_HIGH, Satellite#0] */
  /*   147 */  /* [PS_ECUSUPPLY_LOW, Satellite#0] */
  /*   148 */  /* [PS_KL15_RNG_HI, Satellite#0] */
  /*   149 */  /* [PS_KL30_BACKUP_FLT, Satellite#0] */
  /* Index        Referable Keys  */
  /*   150 */  /* [PS_KL30_PLAUS, Satellite#0] */
  /*   151 */  /* [PS_KL30_RNG_HI, Satellite#0] */
  /*   152 */  /* [PS_KL30_RNG_LO, Satellite#0] */
  /*   153 */  /* [PS_P5_UC_FLT, Satellite#0] */
  /*   154 */  /* [PS_P12_RES_FLT, Satellite#0] */
  /*   155 */  /* [PS_P15_U_FLT, Satellite#0] */
  /*   156 */  /* [PS_P15_V_FLT, Satellite#0] */
  /*   157 */  /* [PS_P15_W_FLT, Satellite#0] */
  /*   158 */  /* [PS_WhlSnsr_FLT, Satellite#0] */
  /*   159 */  /* [PS_WhlSnsr_Vltg_FLT, Satellite#0] */
  /*   160 */  /* [PSnsr_ELE_FLT, Satellite#0] */
  /*   161 */  /* [PSnsr_GRADT_Flt, Satellite#0] */
  /*   162 */  /* [PSnsr_RNG_NOK, Satellite#0] */
  /*   163 */  /* [VCC_OverVoltage, Satellite#0] */
  /*   164 */  /* [VCC_UnderVoltage, Satellite#0] */
  /*   165 */  /* [VCEvBecmPropFr01Tioutd, Satellite#0] */
  /*   166 */  /* [VCEvBecmPropFr02Tioutd, Satellite#0] */
  /*   167 */  /* [VCEvEcmPropFr02MgmFr00Tioutd, Satellite#0] */
  /*   168 */  /* [VCEvEcmPropFr02Tioutd, Satellite#0] */
  /*   169 */  /* [VCEvEcmPropFr04Tioutd, Satellite#0] */
  /*   170 */  /* [VCEvEcmPropFr05Tioutd, Satellite#0] */
  /*   171 */  /* [VCEvEcmPropFr08Tioutd, Satellite#0] */
  /*   172 */  /* [VCEvEcmPropFr11Tioutd, Satellite#0] */
  /*   173 */  /* [VCEvEcmPropFr24MgmFr01Tioutd, Satellite#0] */
  /*   174 */  /* [VCEvEcmPropFr25Tioutd, Satellite#0] */
  /*   175 */  /* [VCEvEcmPropXevFr06Tioutd, Satellite#0] */
  /*   176 */  /* [VCEvSrsPropFr02Tioutd, Satellite#0] */
  /*   177 */  /* [VCEvVddmPropFr05Tioutd, Satellite#0] */
  /*   178 */  /* [VCEvVddmPropFr08Tioutd, Satellite#0] */
  /*   179 */  /* [VCEvVddmPropFr08Tioutd_001, Satellite#0] */
  /*   180 */  /* [VCEvVddmPropFr15Tioutd, Satellite#0] */
  /*   181 */  /* [VCEvVddmPropFr17Tioutd, Satellite#0] */
  /*   182 */  /* [VCEvVddmPropFr18Tioutd, Satellite#0] */
  /*   183 */  /* [VCEvVddmPropFr19Tioutd, Satellite#0] */
  /*   184 */  /* [VcEvChkSum, Satellite#0] */
  /*   185 */  /* [VcEvChkSumCrashStsSafe, Satellite#0] */
  /*   186 */  /* [VcEvChkSumHvSysRlySts, Satellite#0] */
  /*   187 */  /* [VcEvChkSumWhlMotSysTqAllwd, Satellite#0] */
  /*   188 */  /* [VcEvCntr, Satellite#0] */
  /*   189 */  /* [VcEvCntrCrashStsSafe, Satellite#0] */
  /*   190 */  /* [VcEvCntrHvSysRlySts, Satellite#0] */
  /*   191 */  /* [VcEvCntrWhlMotSysTqAllwd, Satellite#0] */
  /*   192 */  /* [VcEvEMPerfPlaus, Satellite#0] */
  /*   193 */  /* [VcEvMonESpd, Satellite#0] */
  /*   194 */  /* [VcEvMonErrMode, Satellite#0] */
  /*   195 */  /* [VcEvMonIPH, Satellite#0] */
  /*   196 */  /* [VcEvMonISAR, Satellite#0] */
  /*   197 */  /* [VcEvMonMode, Satellite#0] */
  /*   198 */  /* [VcEvMonMode_001, Satellite#0] */
  /*   199 */  /* [VcEvMonTrqAct, Satellite#0] */
  /* Index        Referable Keys  */
  /*   200 */  /* [VcEvMonTrqActPlaus, Satellite#0] */
  /*   201 */  /* [VcEvMonTrqCmp, Satellite#0] */
  /*   202 */  /* [VcEvNodeMisBECM, Satellite#0] */
  /*   203 */  /* [VcEvNodeMisECM, Satellite#0] */
  /*   204 */  /* [VcEvNodeMisVDDM, Satellite#0] */
  /*   205 */  /* [VcEvPropCANGlbTiOutd, Satellite#0] */
  /*   206 */  /* [VcEvTsttrPlaus, Satellite#0] */

#define DEM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventInternalStatus
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventInternalStatus
  \brief  size = DEM_G_NUMBER_OF_EVENTS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Dem_Event_InternalStatusType, DEM_VAR_NOINIT) Dem_Cfg_EventInternalStatus[207];
  /* Index        Referable Keys  */
  /*     0 */  /* [#EVENT_INVALID, Satellite#0] */
  /*     1 */  /* [AURIX_EEPROM_FLT, Satellite#0] */
  /*     2 */  /* [AURIX_HW_FLT, Satellite#0] */
  /*     3 */  /* [AURIX_RST_MPL, Satellite#0] */
  /*     4 */  /* [AURIX_RST_SNG, Satellite#0] */
  /*     5 */  /* [AURIX_WATHDOG_FLT, Satellite#0] */
  /*     6 */  /* [COM_Busoff, Satellite#0] */
  /*     7 */  /* [COM_CarConfigErr, Satellite#0] */
  /*     8 */  /* [COM_NotConfig, Satellite#0] */
  /*     9 */  /* [CRASH_DTC, Satellite#0] */
  /*    10 */  /* [CU_TEMP1_RNG_HI, Satellite#0] */
  /*    11 */  /* [CU_TEMP1_RNG_LO, Satellite#0] */
  /*    12 */  /* [CU_TEMP2_RNG_HI, Satellite#0] */
  /*    13 */  /* [CU_TEMP2_RNG_LO, Satellite#0] */
  /*    14 */  /* [CU_TEMP_GRDT, Satellite#0] */
  /*    15 */  /* [CU_TEMP_HWP, Satellite#0] */
  /*    16 */  /* [CU_TEMP_HW_FLT, Satellite#0] */
  /*    17 */  /* [CU_TEMP_HW_FLT_001, Satellite#0] */
  /*    18 */  /* [DiagC_ClutchService, Satellite#0] */
  /*    19 */  /* [EXT_UC_SPI_FLT, Satellite#0] */
  /*    20 */  /* [Eg_HallVolWrong, Satellite#0] */
  /*    21 */  /* [FS_MONITIOR_ASC_FLT, Satellite#0] */
  /*    22 */  /* [FS_MONITIOR_ASC_FW_FLT, Satellite#0] */
  /*    23 */  /* [GA_BLDC_FLT, Satellite#0] */
  /*    24 */  /* [GA_BLDC_POS_FLT, Satellite#0] */
  /*    25 */  /* [Ga_FindEngleAngleFailed, Satellite#0] */
  /*    26 */  /* [Ga_GADisengageFailure, Satellite#0] */
  /*    27 */  /* [Ga_GAEngageFailure, Satellite#0] */
  /*    28 */  /* [Ga_MoveOverThd, Satellite#0] */
  /*    29 */  /* [Ga_TmSpdSyncFailed, Satellite#0] */
  /*    30 */  /* [Ga_ZeroFindDistanFailure, Satellite#0] */
  /*    31 */  /* [INV_ACTV_DCHA_HW, Satellite#0] */
  /*    32 */  /* [INV_CONTROL_LIMIT, Satellite#0] */
  /*    33 */  /* [INV_COOLT_INLET_TEMP_HWP, Satellite#0] */
  /*    34 */  /* [INV_CU_TEMP1_RNG_NOK, Satellite#0] */
  /*    35 */  /* [INV_CU_TEMP2_RNG_NOK, Satellite#0] */
  /*    36 */  /* [INV_EM_OVRSPD_HWP, Satellite#0] */
  /*    37 */  /* [INV_EM_STATOR_TEMP2_ELE_FLT, Satellite#0] */
  /*    38 */  /* [INV_EM_STATOR_TEMP2_GRDT, Satellite#0] */
  /*    39 */  /* [INV_EM_STATOR_TEMP2_RNG_HI, Satellite#0] */
  /*    40 */  /* [INV_EM_STATOR_TEMP2_RNG_LO, Satellite#0] */
  /*    41 */  /* [INV_EM_STATOR_TEMP2_RNG_NOK, Satellite#0] */
  /*    42 */  /* [INV_EM_STATOR_TEMP2_RNG_SWT, Satellite#0] */
  /*    43 */  /* [INV_EM_STATOR_TEMP_ELE_FLT, Satellite#0] */
  /*    44 */  /* [INV_EM_STATOR_TEMP_GRDT, Satellite#0] */
  /*    45 */  /* [INV_EM_STATOR_TEMP_HWP, Satellite#0] */
  /*    46 */  /* [INV_EM_STATOR_TEMP_RNG_HI, Satellite#0] */
  /*    47 */  /* [INV_EM_STATOR_TEMP_RNG_LO, Satellite#0] */
  /*    48 */  /* [INV_EM_STATOR_TEMP_RNG_NOK, Satellite#0] */
  /*    49 */  /* [INV_EM_STATOR_TEMP_RNG_SWT, Satellite#0] */
  /* Index        Referable Keys  */
  /*    50 */  /* [INV_GATE_DRVR_BOT_HWP, Satellite#0] */
  /*    51 */  /* [INV_GATE_DRVR_TOP_HWP, Satellite#0] */
  /*    52 */  /* [INV_IAC_OC_HWP, Satellite#0] */
  /*    53 */  /* [INV_IAC_OC_SWP, Satellite#0] */
  /*    54 */  /* [INV_IAC_PHA_LOSS_MPL, Satellite#0] */
  /*    55 */  /* [INV_IAC_PLAUS_SUM, Satellite#0] */
  /*    56 */  /* [INV_IAC_U_AMP, Satellite#0] */
  /*    57 */  /* [INV_IAC_U_ELEC_HI, Satellite#0] */
  /*    58 */  /* [INV_IAC_U_ELEC_HWP, Satellite#0] */
  /*    59 */  /* [INV_IAC_U_ELEC_LO, Satellite#0] */
  /*    60 */  /* [INV_IAC_U_OFFS, Satellite#0] */
  /*    61 */  /* [INV_IAC_U_RNG_HI, Satellite#0] */
  /*    62 */  /* [INV_IAC_U_RNG_LO, Satellite#0] */
  /*    63 */  /* [INV_IAC_V_AMP, Satellite#0] */
  /*    64 */  /* [INV_IAC_V_ELEC_HI, Satellite#0] */
  /*    65 */  /* [INV_IAC_V_ELEC_HWP, Satellite#0] */
  /*    66 */  /* [INV_IAC_V_ELEC_HWP_001, Satellite#0] */
  /*    67 */  /* [INV_IAC_V_ELEC_LO, Satellite#0] */
  /*    68 */  /* [INV_IAC_V_OFFS, Satellite#0] */
  /*    69 */  /* [INV_IAC_V_RNG_HI, Satellite#0] */
  /*    70 */  /* [INV_IAC_V_RNG_LO, Satellite#0] */
  /*    71 */  /* [INV_IAC_W_AMP, Satellite#0] */
  /*    72 */  /* [INV_IAC_W_ELEC_HI, Satellite#0] */
  /*    73 */  /* [INV_IAC_W_ELEC_LO, Satellite#0] */
  /*    74 */  /* [INV_IAC_W_OFFS, Satellite#0] */
  /*    75 */  /* [INV_IAC_W_RNG_HI, Satellite#0] */
  /*    76 */  /* [INV_IAC_W_RNG_LO, Satellite#0] */
  /*    77 */  /* [INV_IGBT_TEMP_HWP, Satellite#0] */
  /*    78 */  /* [INV_IGBT_TEMP_U_GRDT, Satellite#0] */
  /*    79 */  /* [INV_IGBT_TEMP_U_PLAUS, Satellite#0] */
  /*    80 */  /* [INV_IGBT_TEMP_U_RNG_HI, Satellite#0] */
  /*    81 */  /* [INV_IGBT_TEMP_U_RNG_LO, Satellite#0] */
  /*    82 */  /* [INV_IGBT_TEMP_V_GRDT, Satellite#0] */
  /*    83 */  /* [INV_IGBT_TEMP_V_PLAUS, Satellite#0] */
  /*    84 */  /* [INV_IGBT_TEMP_V_RNG_HI, Satellite#0] */
  /*    85 */  /* [INV_IGBT_TEMP_V_RNG_LO, Satellite#0] */
  /*    86 */  /* [INV_IGBT_TEMP_W_GRDT, Satellite#0] */
  /*    87 */  /* [INV_IGBT_TEMP_W_PLAUS, Satellite#0] */
  /*    88 */  /* [INV_IGBT_TEMP_W_RNG_HI, Satellite#0] */
  /*    89 */  /* [INV_IGBT_TEMP_W_RNG_LO, Satellite#0] */
  /*    90 */  /* [INV_IMMO_AUTHFAIL, Satellite#0] */
  /*    91 */  /* [INV_IMMO_NOKEY, Satellite#0] */
  /*    92 */  /* [INV_INTERLOCK_FLT, Satellite#0] */
  /*    93 */  /* [INV_QUIESCENT_FLT, Satellite#0] */
  /*    94 */  /* [INV_RSLVR_COS_AMP, Satellite#0] */
  /*    95 */  /* [INV_RSLVR_COS_ELEC_FLT, Satellite#0] */
  /*    96 */  /* [INV_RSLVR_COS_ELEC_HI, Satellite#0] */
  /*    97 */  /* [INV_RSLVR_COS_ELEC_LO, Satellite#0] */
  /*    98 */  /* [INV_RSLVR_COS_ELEC_OPEN, Satellite#0] */
  /*    99 */  /* [INV_RSLVR_COS_RNG_HI, Satellite#0] */
  /* Index        Referable Keys  */
  /*   100 */  /* [INV_RSLVR_COS_RNG_LO, Satellite#0] */
  /*   101 */  /* [INV_RSLVR_COS_RNG_NOK, Satellite#0] */
  /*   102 */  /* [INV_RSLVR_EXCT_ELEC_FLT, Satellite#0] */
  /*   103 */  /* [INV_RSLVR_EXCT_ELEC_HI, Satellite#0] */
  /*   104 */  /* [INV_RSLVR_EXCT_ELEC_LO, Satellite#0] */
  /*   105 */  /* [INV_RSLVR_EXCT_ELEC_OPEN, Satellite#0] */
  /*   106 */  /* [INV_RSLVR_EXCT_FREQ_RNG_NOK, Satellite#0] */
  /*   107 */  /* [INV_RSLVR_EXCT_OC_HWP, Satellite#0] */
  /*   108 */  /* [INV_RSLVR_EXCT_OC_HWP_001, Satellite#0] */
  /*   109 */  /* [INV_RSLVR_EXCT_OC_HWP_002, Satellite#0] */
  /*   110 */  /* [INV_RSLVR_EXCT_PLAUS, Satellite#0] */
  /*   111 */  /* [INV_RSLVR_EXCT_RNG_HI, Satellite#0] */
  /*   112 */  /* [INV_RSLVR_EXCT_RNG_LO, Satellite#0] */
  /*   113 */  /* [INV_RSLVR_EXCT_RNG_NOK, Satellite#0] */
  /*   114 */  /* [INV_RSLVR_HW_FLT, Satellite#0] */
  /*   115 */  /* [INV_RSLVR_OFFS_DFT, Satellite#0] */
  /*   116 */  /* [INV_RSLVR_OFFS_OUT_RANG, Satellite#0] */
  /*   117 */  /* [INV_RSLVR_SIN_AMP, Satellite#0] */
  /*   118 */  /* [INV_RSLVR_SIN_COS_PLAUS, Satellite#0] */
  /*   119 */  /* [INV_RSLVR_SIN_COS_PLAUS_AMP, Satellite#0] */
  /*   120 */  /* [INV_RSLVR_SIN_ELEC_FLT, Satellite#0] */
  /*   121 */  /* [INV_RSLVR_SIN_ELEC_HI, Satellite#0] */
  /*   122 */  /* [INV_RSLVR_SIN_ELEC_LO, Satellite#0] */
  /*   123 */  /* [INV_RSLVR_SIN_ELEC_OPEN, Satellite#0] */
  /*   124 */  /* [INV_RSLVR_SIN_RNG_HI, Satellite#0] */
  /*   125 */  /* [INV_RSLVR_SIN_RNG_LO, Satellite#0] */
  /*   126 */  /* [INV_RSLVR_SIN_RNG_NOK, Satellite#0] */
  /*   127 */  /* [INV_SHUT_OFF_PAH_START_UP, Satellite#0] */
  /*   128 */  /* [INV_TEMP_DCHA_HW, Satellite#0] */
  /*   129 */  /* [INV_UHVDC_1_ELEC_HI, Satellite#0] */
  /*   130 */  /* [INV_UHVDC_1_RNG_HI, Satellite#0] */
  /*   131 */  /* [INV_UHVDC_2_RNG_HI, Satellite#0] */
  /*   132 */  /* [INV_UHVDC_OV_HWP, Satellite#0] */
  /*   133 */  /* [INV_UHVDC_OV_SWP, Satellite#0] */
  /*   134 */  /* [INV_UHVDC_PLAUS, Satellite#0] */
  /*   135 */  /* [INV_UHVDC_UV_HWP, Satellite#0] */
  /*   136 */  /* [MON_TQ_PLAUS_PWR_MDL, Satellite#0] */
  /*   137 */  /* [PA_ACTION_FLT, Satellite#0] */
  /*   138 */  /* [PA_ELE_FLT, Satellite#0] */
  /*   139 */  /* [PA_OpenCirc, Satellite#0] */
  /*   140 */  /* [PA_OpenCirc_FLT, Satellite#0] */
  /*   141 */  /* [PLOCK_Current_RNG_OUT, Satellite#0] */
  /*   142 */  /* [PS_5V_Fault, Satellite#0] */
  /*   143 */  /* [PS_BLDC_OV_FLT, Satellite#0] */
  /*   144 */  /* [PS_BLDC_UV_FLT, Satellite#0] */
  /*   145 */  /* [PS_DRVB_Fault, Satellite#0] */
  /*   146 */  /* [PS_ECUSUPPLY_HIGH, Satellite#0] */
  /*   147 */  /* [PS_ECUSUPPLY_LOW, Satellite#0] */
  /*   148 */  /* [PS_KL15_RNG_HI, Satellite#0] */
  /*   149 */  /* [PS_KL30_BACKUP_FLT, Satellite#0] */
  /* Index        Referable Keys  */
  /*   150 */  /* [PS_KL30_PLAUS, Satellite#0] */
  /*   151 */  /* [PS_KL30_RNG_HI, Satellite#0] */
  /*   152 */  /* [PS_KL30_RNG_LO, Satellite#0] */
  /*   153 */  /* [PS_P5_UC_FLT, Satellite#0] */
  /*   154 */  /* [PS_P12_RES_FLT, Satellite#0] */
  /*   155 */  /* [PS_P15_U_FLT, Satellite#0] */
  /*   156 */  /* [PS_P15_V_FLT, Satellite#0] */
  /*   157 */  /* [PS_P15_W_FLT, Satellite#0] */
  /*   158 */  /* [PS_WhlSnsr_FLT, Satellite#0] */
  /*   159 */  /* [PS_WhlSnsr_Vltg_FLT, Satellite#0] */
  /*   160 */  /* [PSnsr_ELE_FLT, Satellite#0] */
  /*   161 */  /* [PSnsr_GRADT_Flt, Satellite#0] */
  /*   162 */  /* [PSnsr_RNG_NOK, Satellite#0] */
  /*   163 */  /* [VCC_OverVoltage, Satellite#0] */
  /*   164 */  /* [VCC_UnderVoltage, Satellite#0] */
  /*   165 */  /* [VCEvBecmPropFr01Tioutd, Satellite#0] */
  /*   166 */  /* [VCEvBecmPropFr02Tioutd, Satellite#0] */
  /*   167 */  /* [VCEvEcmPropFr02MgmFr00Tioutd, Satellite#0] */
  /*   168 */  /* [VCEvEcmPropFr02Tioutd, Satellite#0] */
  /*   169 */  /* [VCEvEcmPropFr04Tioutd, Satellite#0] */
  /*   170 */  /* [VCEvEcmPropFr05Tioutd, Satellite#0] */
  /*   171 */  /* [VCEvEcmPropFr08Tioutd, Satellite#0] */
  /*   172 */  /* [VCEvEcmPropFr11Tioutd, Satellite#0] */
  /*   173 */  /* [VCEvEcmPropFr24MgmFr01Tioutd, Satellite#0] */
  /*   174 */  /* [VCEvEcmPropFr25Tioutd, Satellite#0] */
  /*   175 */  /* [VCEvEcmPropXevFr06Tioutd, Satellite#0] */
  /*   176 */  /* [VCEvSrsPropFr02Tioutd, Satellite#0] */
  /*   177 */  /* [VCEvVddmPropFr05Tioutd, Satellite#0] */
  /*   178 */  /* [VCEvVddmPropFr08Tioutd, Satellite#0] */
  /*   179 */  /* [VCEvVddmPropFr08Tioutd_001, Satellite#0] */
  /*   180 */  /* [VCEvVddmPropFr15Tioutd, Satellite#0] */
  /*   181 */  /* [VCEvVddmPropFr17Tioutd, Satellite#0] */
  /*   182 */  /* [VCEvVddmPropFr18Tioutd, Satellite#0] */
  /*   183 */  /* [VCEvVddmPropFr19Tioutd, Satellite#0] */
  /*   184 */  /* [VcEvChkSum, Satellite#0] */
  /*   185 */  /* [VcEvChkSumCrashStsSafe, Satellite#0] */
  /*   186 */  /* [VcEvChkSumHvSysRlySts, Satellite#0] */
  /*   187 */  /* [VcEvChkSumWhlMotSysTqAllwd, Satellite#0] */
  /*   188 */  /* [VcEvCntr, Satellite#0] */
  /*   189 */  /* [VcEvCntrCrashStsSafe, Satellite#0] */
  /*   190 */  /* [VcEvCntrHvSysRlySts, Satellite#0] */
  /*   191 */  /* [VcEvCntrWhlMotSysTqAllwd, Satellite#0] */
  /*   192 */  /* [VcEvEMPerfPlaus, Satellite#0] */
  /*   193 */  /* [VcEvMonESpd, Satellite#0] */
  /*   194 */  /* [VcEvMonErrMode, Satellite#0] */
  /*   195 */  /* [VcEvMonIPH, Satellite#0] */
  /*   196 */  /* [VcEvMonISAR, Satellite#0] */
  /*   197 */  /* [VcEvMonMode, Satellite#0] */
  /*   198 */  /* [VcEvMonMode_001, Satellite#0] */
  /*   199 */  /* [VcEvMonTrqAct, Satellite#0] */
  /* Index        Referable Keys  */
  /*   200 */  /* [VcEvMonTrqActPlaus, Satellite#0] */
  /*   201 */  /* [VcEvMonTrqCmp, Satellite#0] */
  /*   202 */  /* [VcEvNodeMisBECM, Satellite#0] */
  /*   203 */  /* [VcEvNodeMisECM, Satellite#0] */
  /*   204 */  /* [VcEvNodeMisVDDM, Satellite#0] */
  /*   205 */  /* [VcEvPropCANGlbTiOutd, Satellite#0] */
  /*   206 */  /* [VcEvTsttrPlaus, Satellite#0] */

#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FilterReportedEvents
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FilterReportedEvents
  \brief  size = ceiling( DEM_G_NUMBER_OF_EVENTS / 8 )
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_FilterReportedEventsType, DEM_VAR_NOINIT) Dem_Cfg_FilterReportedEvents[26];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_GlobalIndicatorStates
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_GlobalIndicatorStates
  \brief  size = DEM_CFG_GLOBAL_INDICATOR_COUNT, inner dimension size = DEM_G_MAX_NUMBER_J1939_NODES
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_GlobalIndicatorStatesType, DEM_VAR_NOINIT) Dem_Cfg_GlobalIndicatorStates[1];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_IndicatorBlinking
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_IndicatorBlinking
  \brief  size = DEM_CFG_GLOBAL_INDICATOR_COUNT, inner dimension size = DEM_G_MAX_NUMBER_J1939_NODES
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_IndicatorBlinkingType, DEM_VAR_NOINIT) Dem_Cfg_IndicatorBlinking[1];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_IndicatorContinuous
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_IndicatorContinuous
  \brief  size = DEM_CFG_GLOBAL_INDICATOR_COUNT, inner dimension size = DEM_G_MAX_NUMBER_J1939_NODES
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_IndicatorContinuousType, DEM_VAR_NOINIT) Dem_Cfg_IndicatorContinuous[1];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryCommitNumber
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryCommitNumber
  \brief  The array contains these items: Admin, Status, 8 * Primary
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Dem_Cfg_MemoryCommitNumberType, DEM_VAR_NOINIT) Dem_Cfg_MemoryCommitNumber[10];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryStatus
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryStatus
  \brief  The array contains these items: Admin, Status, 8 * Primary
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_MemoryStatusType, DEM_VAR_NOINIT) Dem_Cfg_MemoryStatus[10];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryChronology
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_PrimaryChronology
  \brief  size = DEM_CFG_GLOBAL_PRIMARY_SIZE
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_MemoryIndexType, DEM_VAR_NOINIT) Dem_Cfg_PrimaryChronology[8];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_0
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_0;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_1
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_1;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_2
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_2;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_3
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_3;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_4
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_4;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_5
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_5;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_6
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_6;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_7
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_7;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SatelliteInfo0
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_SatelliteInfo0
  \brief  Buffer for satellite data on OsApplication "0"
*/ 
#define DEM_START_SEC_0_VAR_ZERO_INIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_SatelliteInfoType0, DEM_VAR_ZERO_INIT) Dem_Cfg_SatelliteInfo0 = {0uL};
#define DEM_STOP_SEC_0_VAR_ZERO_INIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_StatusData
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_StatusDataType, DEM_NVM_DATA_NOINIT) Dem_Cfg_StatusData;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/



/**********************************************************************************************************************
  LOCAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/



/**********************************************************************************************************************
  END OF FILE: Dem_Lcfg.c     [Vector, VARIANT-PRE-COMPILE, 13.03.00.101592]
**********************************************************************************************************************/

