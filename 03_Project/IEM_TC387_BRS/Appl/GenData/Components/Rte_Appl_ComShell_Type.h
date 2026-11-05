/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *             File:  Rte_Appl_ComShell_Type.h
 *           Config:  IEM_TC387_BRS.dpa
 *      ECU-Project:  IEM_TC387_BRS
 *
 *        Generator:  MICROSAR RTE Generator Version 4.23.0
 *                    RTE Core Version 1.23.0
 *          License:  CBD2000642
 *
 *      Description:  Application types header file for SW-C <Appl_ComShell>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_APPL_COMSHELL_TYPE_H
# define RTE_APPL_COMSHELL_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  define IsgSpdWSgnTyp_2_LowerLimit (-16384)
#  define IsgSpdWSgnTyp_2_UpperLimit (16383)

#  define Ampr1_1_LowerLimit (0U)
#  define Ampr1_1_UpperLimit (16380U)

#  define CooltFlow2_2_LowerLimit (0U)
#  define CooltFlow2_2_UpperLimit (511U)

#  define CooltFlowForDtElec1_2_LowerLimit (0U)
#  define CooltFlowForDtElec1_2_UpperLimit (1023U)

#  define CooltTHiResl_2_LowerLimit (0U)
#  define CooltTHiResl_2_UpperLimit (1800U)

#  define HvTq1_2_LowerLimit (0U)
#  define HvTq1_2_UpperLimit (4095U)

#  define HvU1_2_LowerLimit (0U)
#  define HvU1_2_UpperLimit (2044U)

#  define N1_2_LowerLimit (0U)
#  define N1_2_UpperLimit (32767U)

#  define Perc7_2_LowerLimit (0U)
#  define Perc7_2_UpperLimit (2000U)

#  define PrpsnPwrLimMax_2_LowerLimit (0U)
#  define PrpsnPwrLimMax_2_UpperLimit (1022U)

#  define PrpsnPwrLimMin_2_LowerLimit (0U)
#  define PrpsnPwrLimMin_2_UpperLimit (1022U)

#  define UInt16_2_LowerLimit (0U)
#  define UInt16_2_UpperLimit (65535U)

#  define CarTiGlb_2_LowerLimit (0U)
#  define CarTiGlb_2_UpperLimit (4294967294U)

#  define Len31_2_LowerLimit (0U)
#  define Len31_2_UpperLimit (2000000U)

#  define FltIndcn_1_LowerLimit (0U)
#  define FltIndcn_1_UpperLimit (4U)

#  define FltLvl_1_LowerLimit (0U)
#  define FltLvl_1_UpperLimit (2U)

#  define FrntHeatModEnad_1_LowerLimit (0U)
#  define FrntHeatModEnad_1_UpperLimit (3U)

#  define GearLvrIndcn2_2_LowerLimit (0U)
#  define GearLvrIndcn2_2_UpperLimit (7U)

#  define HvCoolg1_2_LowerLimit (0U)
#  define HvCoolg1_2_UpperLimit (4U)

#  define HvT1_3_LowerLimit (0U)
#  define HvT1_3_UpperLimit (255U)

#  define ImobSts_2_LowerLimit (0U)
#  define ImobSts_2_UpperLimit (3U)

#  define IsgHeatPwr_1_LowerLimit (0U)
#  define IsgHeatPwr_1_UpperLimit (255U)

#  define OnBdChrgrHndlSts1_2_LowerLimit (0U)
#  define OnBdChrgrHndlSts1_2_UpperLimit (13U)

#  define OnBdChrgrHndlSts_2_LowerLimit (0U)
#  define OnBdChrgrHndlSts_2_UpperLimit (5U)

#  define OnOff1_2_LowerLimit (0U)
#  define OnOff1_2_UpperLimit (1U)

#  define PLockParkRequest_1_LowerLimit (0U)
#  define PLockParkRequest_1_UpperLimit (3U)

#  define ParkSts_1_LowerLimit (0U)
#  define ParkSts_1_UpperLimit (8U)

#  define T3_2_LowerLimit (0U)
#  define T3_2_UpperLimit (250U)

#  define UInt4_2_LowerLimit (0U)
#  define UInt4_2_UpperLimit (15U)

#  define WhlMotSysActvDampgModCodSts_2_LowerLimit (0U)
#  define WhlMotSysActvDampgModCodSts_2_UpperLimit (3U)

#  define WhlMotSysHeatFdBck_1_LowerLimit (0U)
#  define WhlMotSysHeatFdBck_1_UpperLimit (3U)

#  define WhlMotSysModStsTyp1_2_LowerLimit (0U)
#  define WhlMotSysModStsTyp1_2_UpperLimit (7U)

#  define WhlMotSysModStsTyp2_2_LowerLimit (0U)
#  define WhlMotSysModStsTyp2_2_UpperLimit (8U)

#  ifndef FltIndcn_NoFlt
#   define FltIndcn_NoFlt (0U)
#  endif

#  ifndef FltLvl_NoFlt
#   define FltLvl_NoFlt (0U)
#  endif

#  ifndef FrntHeatModEnad_Heatg
#   define FrntHeatModEnad_Heatg (0U)
#  endif

#  ifndef GearLvrIndcn2_ParkIndcn
#   define GearLvrIndcn2_ParkIndcn (0U)
#  endif

#  ifndef HvCoolg1_NoRequestForMoreCoolantPower
#   define HvCoolg1_NoRequestForMoreCoolantPower (0U)
#  endif

#  ifndef ImobSts_ImobUndefd
#   define ImobSts_ImobUndefd (0U)
#  endif

#  ifndef OnBdChrgrHndlSts1_Disconnected
#   define OnBdChrgrHndlSts1_Disconnected (0U)
#  endif

#  ifndef OnBdChrgrHndlSts_Disconnected
#   define OnBdChrgrHndlSts_Disconnected (0U)
#  endif

#  ifndef OnOff1_Off
#   define OnOff1_Off (0U)
#  endif

#  ifndef PLockParkRequest_NoReq
#   define PLockParkRequest_NoReq (0U)
#  endif

#  ifndef ParkSts_Init
#   define ParkSts_Init (0U)
#  endif

#  ifndef WhlMotSysActvDampgModCodSts_NoDampg
#   define WhlMotSysActvDampgModCodSts_NoDampg (0U)
#  endif

#  ifndef WhlMotSysHeatFdBck_On
#   define WhlMotSysHeatFdBck_On (0U)
#  endif

#  ifndef WhlMotSysModStsTyp1_Inin
#   define WhlMotSysModStsTyp1_Inin (0U)
#  endif

#  ifndef WhlMotSysModStsTyp2_Inin
#   define WhlMotSysModStsTyp2_Inin (0U)
#  endif

#  ifndef FltIndcn_ComFlt
#   define FltIndcn_ComFlt (1U)
#  endif

#  ifndef FltLvl_FltLvl1
#   define FltLvl_FltLvl1 (1U)
#  endif

#  ifndef FrntHeatModEnad_PwrLoss
#   define FrntHeatModEnad_PwrLoss (1U)
#  endif

#  ifndef GearLvrIndcn2_RvsIndcn
#   define GearLvrIndcn2_RvsIndcn (1U)
#  endif

#  ifndef HvCoolg1_IncreaseLevel1ForMoreCoolantPower
#   define HvCoolg1_IncreaseLevel1ForMoreCoolantPower (1U)
#  endif

#  ifndef ImobSts_ImobImobn
#   define ImobSts_ImobImobn (1U)
#  endif

#  ifndef OnBdChrgrHndlSts1_ConnectedWithoutPower
#   define OnBdChrgrHndlSts1_ConnectedWithoutPower (1U)
#  endif

#  ifndef OnBdChrgrHndlSts_ConnectedWithoutPower
#   define OnBdChrgrHndlSts_ConnectedWithoutPower (1U)
#  endif

#  ifndef OnOff1_On
#   define OnOff1_On (1U)
#  endif

#  ifndef PLockParkRequest_ReqApply
#   define PLockParkRequest_ReqApply (1U)
#  endif

#  ifndef ParkSts_Parked
#   define ParkSts_Parked (1U)
#  endif

#  ifndef WhlMotSysActvDampgModCodSts_LoDampg
#   define WhlMotSysActvDampgModCodSts_LoDampg (1U)
#  endif

#  ifndef WhlMotSysHeatFdBck_Off
#   define WhlMotSysHeatFdBck_Off (1U)
#  endif

#  ifndef WhlMotSysModStsTyp1_Stb
#   define WhlMotSysModStsTyp1_Stb (1U)
#  endif

#  ifndef WhlMotSysModStsTyp2_Stb
#   define WhlMotSysModStsTyp2_Stb (1U)
#  endif

#  ifndef FltIndcn_ActrFlt
#   define FltIndcn_ActrFlt (2U)
#  endif

#  ifndef FltLvl_FltLvl2
#   define FltLvl_FltLvl2 (2U)
#  endif

#  ifndef FrntHeatModEnad_Off
#   define FrntHeatModEnad_Off (2U)
#  endif

#  ifndef GearLvrIndcn2_NeutIndcn
#   define GearLvrIndcn2_NeutIndcn (2U)
#  endif

#  ifndef HvCoolg1_IncreaseLevel2ForMoreCoolantPower
#   define HvCoolg1_IncreaseLevel2ForMoreCoolantPower (2U)
#  endif

#  ifndef ImobSts_ImobMtn
#   define ImobSts_ImobMtn (2U)
#  endif

#  ifndef OnBdChrgrHndlSts1_PowerAvailableButNotActivated
#   define OnBdChrgrHndlSts1_PowerAvailableButNotActivated (2U)
#  endif

#  ifndef OnBdChrgrHndlSts_PowerAvailableButNotActivated
#   define OnBdChrgrHndlSts_PowerAvailableButNotActivated (2U)
#  endif

#  ifndef PLockParkRequest_ReqRels
#   define PLockParkRequest_ReqRels (2U)
#  endif

#  ifndef ParkSts_Parking
#   define ParkSts_Parking (2U)
#  endif

#  ifndef WhlMotSysActvDampgModCodSts_MedDampg
#   define WhlMotSysActvDampgModCodSts_MedDampg (2U)
#  endif

#  ifndef WhlMotSysHeatFdBck_Inhibt
#   define WhlMotSysHeatFdBck_Inhibt (2U)
#  endif

#  ifndef WhlMotSysModStsTyp1_TqCtrl
#   define WhlMotSysModStsTyp1_TqCtrl (2U)
#  endif

#  ifndef WhlMotSysModStsTyp2_TqCtrl
#   define WhlMotSysModStsTyp2_TqCtrl (2U)
#  endif

#  ifndef FltIndcn_SnsrFlt
#   define FltIndcn_SnsrFlt (3U)
#  endif

#  ifndef FrntHeatModEnad_Reserved
#   define FrntHeatModEnad_Reserved (3U)
#  endif

#  ifndef GearLvrIndcn2_DrvIndcn
#   define GearLvrIndcn2_DrvIndcn (3U)
#  endif

#  ifndef HvCoolg1_MaxCoolingPower
#   define HvCoolg1_MaxCoolingPower (3U)
#  endif

#  ifndef ImobSts_ImobNoMtn
#   define ImobSts_ImobNoMtn (3U)
#  endif

#  ifndef OnBdChrgrHndlSts1_ConnectedWithPower
#   define OnBdChrgrHndlSts1_ConnectedWithPower (3U)
#  endif

#  ifndef OnBdChrgrHndlSts_ConnectedWithPower
#   define OnBdChrgrHndlSts_ConnectedWithPower (3U)
#  endif

#  ifndef PLockParkRequest_Reserved
#   define PLockParkRequest_Reserved (3U)
#  endif

#  ifndef ParkSts_StuckInParked
#   define ParkSts_StuckInParked (3U)
#  endif

#  ifndef WhlMotSysActvDampgModCodSts_HiDampg
#   define WhlMotSysActvDampgModCodSts_HiDampg (3U)
#  endif

#  ifndef WhlMotSysHeatFdBck_Reserved
#   define WhlMotSysHeatFdBck_Reserved (3U)
#  endif

#  ifndef WhlMotSysModStsTyp1_SpdCtrlIdle
#   define WhlMotSysModStsTyp1_SpdCtrlIdle (3U)
#  endif

#  ifndef WhlMotSysModStsTyp2_SpdCtrlIdle
#   define WhlMotSysModStsTyp2_SpdCtrlIdle (3U)
#  endif

#  ifndef FltIndcn_RdmFlt
#   define FltIndcn_RdmFlt (4U)
#  endif

#  ifndef GearLvrIndcn2_ManModeIndcn
#   define GearLvrIndcn2_ManModeIndcn (4U)
#  endif

#  ifndef HvCoolg1_NotDefined
#   define HvCoolg1_NotDefined (4U)
#  endif

#  ifndef OnBdChrgrHndlSts1_DischargeConnectwithoutpowerincar
#   define OnBdChrgrHndlSts1_DischargeConnectwithoutpowerincar (4U)
#  endif

#  ifndef OnBdChrgrHndlSts_Init
#   define OnBdChrgrHndlSts_Init (4U)
#  endif

#  ifndef ParkSts_StuckInUnparked
#   define ParkSts_StuckInUnparked (4U)
#  endif

#  ifndef WhlMotSysModStsTyp1_CluOper
#   define WhlMotSysModStsTyp1_CluOper (4U)
#  endif

#  ifndef WhlMotSysModStsTyp2_CluOper
#   define WhlMotSysModStsTyp2_CluOper (4U)
#  endif

#  ifndef GearLvrIndcn2_Resd1
#   define GearLvrIndcn2_Resd1 (5U)
#  endif

#  ifndef OnBdChrgrHndlSts1_DischargeConnectwithoutpoweroutcar
#   define OnBdChrgrHndlSts1_DischargeConnectwithoutpoweroutcar (5U)
#  endif

#  ifndef OnBdChrgrHndlSts_Fault
#   define OnBdChrgrHndlSts_Fault (5U)
#  endif

#  ifndef ParkSts_Unparking
#   define ParkSts_Unparking (5U)
#  endif

#  ifndef WhlMotSysModStsTyp1_PreChrg
#   define WhlMotSysModStsTyp1_PreChrg (5U)
#  endif

#  ifndef WhlMotSysModStsTyp2_PreChrg
#   define WhlMotSysModStsTyp2_PreChrg (5U)
#  endif

#  ifndef GearLvrIndcn2_Resd2
#   define GearLvrIndcn2_Resd2 (6U)
#  endif

#  ifndef OnBdChrgrHndlSts1_DischargeConnectwithpowerincar
#   define OnBdChrgrHndlSts1_DischargeConnectwithpowerincar (6U)
#  endif

#  ifndef ParkSts_Unparked
#   define ParkSts_Unparked (6U)
#  endif

#  ifndef WhlMotSysModStsTyp1_PwrDwn
#   define WhlMotSysModStsTyp1_PwrDwn (6U)
#  endif

#  ifndef WhlMotSysModStsTyp2_PwrDwn
#   define WhlMotSysModStsTyp2_PwrDwn (6U)
#  endif

#  ifndef GearLvrIndcn2_Undefd
#   define GearLvrIndcn2_Undefd (7U)
#  endif

#  ifndef OnBdChrgrHndlSts1_DischargeConnectwithpoweroutcar
#   define OnBdChrgrHndlSts1_DischargeConnectwithpoweroutcar (7U)
#  endif

#  ifndef ParkSts_Unknown
#   define ParkSts_Unknown (7U)
#  endif

#  ifndef WhlMotSysModStsTyp1_Flt
#   define WhlMotSysModStsTyp1_Flt (7U)
#  endif

#  ifndef WhlMotSysModStsTyp2_Flt
#   define WhlMotSysModStsTyp2_Flt (7U)
#  endif

#  ifndef OnBdChrgrHndlSts1_Init
#   define OnBdChrgrHndlSts1_Init (8U)
#  endif

#  ifndef ParkSts_Off
#   define ParkSts_Off (8U)
#  endif

#  ifndef WhlMotSysModStsTyp2_TcsCtrl
#   define WhlMotSysModStsTyp2_TcsCtrl (8U)
#  endif

#  ifndef OnBdChrgrHndlSts1_Fault
#   define OnBdChrgrHndlSts1_Fault (9U)
#  endif

#  ifndef OnBdChrgrHndlSts1_NotCompleteConnnected
#   define OnBdChrgrHndlSts1_NotCompleteConnnected (10U)
#  endif

#  ifndef OnBdChrgrHndlSts1_Reserved0
#   define OnBdChrgrHndlSts1_Reserved0 (11U)
#  endif

#  ifndef OnBdChrgrHndlSts1_Reserved1
#   define OnBdChrgrHndlSts1_Reserved1 (12U)
#  endif

#  ifndef OnBdChrgrHndlSts1_Reserved2
#   define OnBdChrgrHndlSts1_Reserved2 (13U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_APPL_COMSHELL_TYPE_H */
