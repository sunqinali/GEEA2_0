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

#  define Tq2_2_LowerLimit (-20000)
#  define Tq2_2_UpperLimit (20000)

#  define Tq35_1_LowerLimit (-30000)
#  define Tq35_1_UpperLimit (30000)

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

#  define Spd1_2_LowerLimit (0U)
#  define Spd1_2_UpperLimit (31969U)

#  define Tq34_1_LowerLimit (0U)
#  define Tq34_1_UpperLimit (16380U)

#  define UInt16_2_LowerLimit (0U)
#  define UInt16_2_UpperLimit (65535U)

#  define CarTiGlb_2_LowerLimit (0U)
#  define CarTiGlb_2_UpperLimit (4294967294U)

#  define Len31_2_LowerLimit (0U)
#  define Len31_2_UpperLimit (2000000U)

#  define AlrmSt_2_LowerLimit (0U)
#  define AlrmSt_2_UpperLimit (2U)

#  define AvlSts2_2_LowerLimit (0U)
#  define AvlSts2_2_UpperLimit (1U)

#  define CarModSts1_2_LowerLimit (0U)
#  define CarModSts1_2_UpperLimit (5U)

#  define CrashSts2_2_LowerLimit (0U)
#  define CrashSts2_2_UpperLimit (1U)

#  define DMC_1_LowerLimit (0U)
#  define DMC_1_UpperLimit (3U)

#  define EngSt1_2_LowerLimit (0U)
#  define EngSt1_2_UpperLimit (9U)

#  define FltEgyCns1_2_LowerLimit (0U)
#  define FltEgyCns1_2_UpperLimit (1U)

#  define FltIndcn_1_LowerLimit (0U)
#  define FltIndcn_1_UpperLimit (4U)

#  define FltLvl_1_LowerLimit (0U)
#  define FltLvl_1_UpperLimit (2U)

#  define FrntHeatModEnad_1_LowerLimit (0U)
#  define FrntHeatModEnad_1_UpperLimit (3U)

#  define GearLvrIndcn2_2_LowerLimit (0U)
#  define GearLvrIndcn2_2_UpperLimit (7U)

#  define GenQf1_2_LowerLimit (0U)
#  define GenQf1_2_UpperLimit (3U)

#  define HvActvnSts_2_LowerLimit (0U)
#  define HvActvnSts_2_UpperLimit (3U)

#  define HvCoolg1_2_LowerLimit (0U)
#  define HvCoolg1_2_UpperLimit (4U)

#  define HvT1_3_LowerLimit (0U)
#  define HvT1_3_UpperLimit (255U)

#  define ImobEngMgrReqCmd_2_LowerLimit (0U)
#  define ImobEngMgrReqCmd_2_UpperLimit (3U)

#  define ImobSts_2_LowerLimit (0U)
#  define ImobSts_2_UpperLimit (3U)

#  define IsgHeatPwr_1_LowerLimit (0U)
#  define IsgHeatPwr_1_UpperLimit (255U)

#  define ModStatusRms_2_LowerLimit (0U)
#  define ModStatusRms_2_UpperLimit (15U)

#  define ModeDMC_1_LowerLimit (0U)
#  define ModeDMC_1_UpperLimit (2U)

#  define Nr5_2_LowerLimit (0U)
#  define Nr5_2_UpperLimit (7U)

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

#  define QualityFactor_2_LowerLimit (0U)
#  define QualityFactor_2_UpperLimit (3U)

#  define T3_2_LowerLimit (0U)
#  define T3_2_UpperLimit (250U)

#  define U1_2_LowerLimit (0U)
#  define U1_2_UpperLimit (250U)

#  define UInt2_2_LowerLimit (0U)
#  define UInt2_2_UpperLimit (3U)

#  define UInt4_2_LowerLimit (0U)
#  define UInt4_2_UpperLimit (15U)

#  define UInt8_2_LowerLimit (0U)
#  define UInt8_2_UpperLimit (255U)

#  define UsgModSts1_2_LowerLimit (0U)
#  define UsgModSts1_2_UpperLimit (13U)

#  define VehMtnSt2_2_LowerLimit (0U)
#  define VehMtnSt2_2_UpperLimit (7U)

#  define WhlMotSysActvDampgModCodSts_2_LowerLimit (0U)
#  define WhlMotSysActvDampgModCodSts_2_UpperLimit (3U)

#  define WhlMotSysHeatFdBck_1_LowerLimit (0U)
#  define WhlMotSysHeatFdBck_1_UpperLimit (3U)

#  define WhlMotSysModStsTyp1_2_LowerLimit (0U)
#  define WhlMotSysModStsTyp1_2_UpperLimit (7U)

#  define WhlMotSysModStsTyp2_2_LowerLimit (0U)
#  define WhlMotSysModStsTyp2_2_UpperLimit (8U)

#  ifndef AlrmSt_Disarmd
#   define AlrmSt_Disarmd (0U)
#  endif

#  ifndef AvlSts2_NotAvl
#   define AvlSts2_NotAvl (0U)
#  endif

#  ifndef CarModSts1_CarModNorm
#   define CarModSts1_CarModNorm (0U)
#  endif

#  ifndef CrashSts2_NoCrash
#   define CrashSts2_NoCrash (0U)
#  endif

#  ifndef DMC_Init
#   define DMC_Init (0U)
#  endif

#  ifndef EngSt1_Ini
#   define EngSt1_Ini (0U)
#  endif

#  ifndef FltEgyCns1_NoFlt
#   define FltEgyCns1_NoFlt (0U)
#  endif

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

#  ifndef GenQf1_UndefindDataAccur
#   define GenQf1_UndefindDataAccur (0U)
#  endif

#  ifndef HvActvnSts_Open
#   define HvActvnSts_Open (0U)
#  endif

#  ifndef HvCoolg1_NoRequestForMoreCoolantPower
#   define HvCoolg1_NoRequestForMoreCoolantPower (0U)
#  endif

#  ifndef ImobEngMgrReqCmd_ImobEngCmdTarIdle
#   define ImobEngMgrReqCmd_ImobEngCmdTarIdle (0U)
#  endif

#  ifndef ImobSts_ImobUndefd
#   define ImobSts_ImobUndefd (0U)
#  endif

#  ifndef ModStatusRms_Invalid
#   define ModStatusRms_Invalid (0U)
#  endif

#  ifndef ModeDMC_Off
#   define ModeDMC_Off (0U)
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

#  ifndef QualityFactor_QfUndefd
#   define QualityFactor_QfUndefd (0U)
#  endif

#  ifndef UsgModSts1_UsgModAbdnd
#   define UsgModSts1_UsgModAbdnd (0U)
#  endif

#  ifndef VehMtnSt2_Ukwn
#   define VehMtnSt2_Ukwn (0U)
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

#  ifndef AlrmSt_Armd
#   define AlrmSt_Armd (1U)
#  endif

#  ifndef AvlSts2_Avl
#   define AvlSts2_Avl (1U)
#  endif

#  ifndef CarModSts1_CarModTrnsp
#   define CarModSts1_CarModTrnsp (1U)
#  endif

#  ifndef CrashSts2_Crash
#   define CrashSts2_Crash (1U)
#  endif

#  ifndef DMC_On
#   define DMC_On (1U)
#  endif

#  ifndef EngSt1_Awake
#   define EngSt1_Awake (1U)
#  endif

#  ifndef FltEgyCns1_Flt
#   define FltEgyCns1_Flt (1U)
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

#  ifndef GenQf1_TmpUndefdData
#   define GenQf1_TmpUndefdData (1U)
#  endif

#  ifndef HvActvnSts_Clsd
#   define HvActvnSts_Clsd (1U)
#  endif

#  ifndef HvCoolg1_IncreaseLevel1ForMoreCoolantPower
#   define HvCoolg1_IncreaseLevel1ForMoreCoolantPower (1U)
#  endif

#  ifndef ImobEngMgrReqCmd_ImobEngMtnStrtReqCmd
#   define ImobEngMgrReqCmd_ImobEngMtnStrtReqCmd (1U)
#  endif

#  ifndef ImobSts_ImobImobn
#   define ImobSts_ImobImobn (1U)
#  endif

#  ifndef ModeDMC_Rpm
#   define ModeDMC_Rpm (1U)
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

#  ifndef PModStatusRms_wrCns
#   define PModStatusRms_wrCns (1U)
#  endif

#  ifndef ParkSts_Parked
#   define ParkSts_Parked (1U)
#  endif

#  ifndef QualityFactor_QfInProgs
#   define QualityFactor_QfInProgs (1U)
#  endif

#  ifndef UsgModSts1_UsgModInActv
#   define UsgModSts1_UsgModInActv (1U)
#  endif

#  ifndef VehMtnSt2_StandStillVal1
#   define VehMtnSt2_StandStillVal1 (1U)
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

#  ifndef AlrmSt_Actv
#   define AlrmSt_Actv (2U)
#  endif

#  ifndef CarModSts1_CarModFcy
#   define CarModSts1_CarModFcy (2U)
#  endif

#  ifndef DMC_Off
#   define DMC_Off (2U)
#  endif

#  ifndef EngSt1_Rdy
#   define EngSt1_Rdy (2U)
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

#  ifndef GenQf1_DataAccurNotWithinSpcn
#   define GenQf1_DataAccurNotWithinSpcn (2U)
#  endif

#  ifndef HvActvnSts_KeepSt
#   define HvActvnSts_KeepSt (2U)
#  endif

#  ifndef HvCoolg1_IncreaseLevel2ForMoreCoolantPower
#   define HvCoolg1_IncreaseLevel2ForMoreCoolantPower (2U)
#  endif

#  ifndef ImobEngMgrReqCmd_ImobEngNoMtnStrtReqCmd
#   define ImobEngMgrReqCmd_ImobEngNoMtnStrtReqCmd (2U)
#  endif

#  ifndef ImobSts_ImobMtn
#   define ImobSts_ImobMtn (2U)
#  endif

#  ifndef ModStatusRms_PwrGen
#   define ModStatusRms_PwrGen (2U)
#  endif

#  ifndef ModeDMC_Trq
#   define ModeDMC_Trq (2U)
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

#  ifndef QualityFactor_QfNotSpc
#   define QualityFactor_QfNotSpc (2U)
#  endif

#  ifndef UsgModSts1_UsgModCnvinc
#   define UsgModSts1_UsgModCnvinc (2U)
#  endif

#  ifndef VehMtnSt2_StandStillVal2
#   define VehMtnSt2_StandStillVal2 (2U)
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

#  ifndef CarModSts1_CarModCrash
#   define CarModSts1_CarModCrash (3U)
#  endif

#  ifndef DMC_Fault
#   define DMC_Fault (3U)
#  endif

#  ifndef EngSt1_PreStrtg
#   define EngSt1_PreStrtg (3U)
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

#  ifndef GenQf1_AccurData
#   define GenQf1_AccurData (3U)
#  endif

#  ifndef HvActvnSts_OpenAndReqActvDcha
#   define HvActvnSts_OpenAndReqActvDcha (3U)
#  endif

#  ifndef HvCoolg1_MaxCoolingPower
#   define HvCoolg1_MaxCoolingPower (3U)
#  endif

#  ifndef ImobEngMgrReqCmd_ImobEngTurnOffCmd
#   define ImobEngMgrReqCmd_ImobEngTurnOffCmd (3U)
#  endif

#  ifndef ImobSts_ImobNoMtn
#   define ImobSts_ImobNoMtn (3U)
#  endif

#  ifndef ModStatusRms_OffSts
#   define ModStatusRms_OffSts (3U)
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

#  ifndef QualityFactor_QfSnsrDataOk
#   define QualityFactor_QfSnsrDataOk (3U)
#  endif

#  ifndef UsgModSts1_UsgModActv
#   define UsgModSts1_UsgModActv (11U)
#  endif

#  ifndef VehMtnSt2_StandStillVal3
#   define VehMtnSt2_StandStillVal3 (3U)
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

#  ifndef CarModSts1_CarModDyno
#   define CarModSts1_CarModDyno (5U)
#  endif

#  ifndef EngSt1_StrtgInProgs
#   define EngSt1_StrtgInProgs (4U)
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

#  ifndef ModStatusRms_RdySts
#   define ModStatusRms_RdySts (4U)
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

#  ifndef UsgModSts1_UsgModDrvg
#   define UsgModSts1_UsgModDrvg (13U)
#  endif

#  ifndef VehMtnSt2_RollgFwdVal1
#   define VehMtnSt2_RollgFwdVal1 (4U)
#  endif

#  ifndef WhlMotSysModStsTyp1_CluOper
#   define WhlMotSysModStsTyp1_CluOper (4U)
#  endif

#  ifndef WhlMotSysModStsTyp2_CluOper
#   define WhlMotSysModStsTyp2_CluOper (4U)
#  endif

#  ifndef EngSt1_RunngRunng
#   define EngSt1_RunngRunng (5U)
#  endif

#  ifndef GearLvrIndcn2_Resd1
#   define GearLvrIndcn2_Resd1 (5U)
#  endif

#  ifndef ModStatusRms_Abnormal
#   define ModStatusRms_Abnormal (5U)
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

#  ifndef VehMtnSt2_RollgFwdVal2
#   define VehMtnSt2_RollgFwdVal2 (5U)
#  endif

#  ifndef WhlMotSysModStsTyp1_PreChrg
#   define WhlMotSysModStsTyp1_PreChrg (5U)
#  endif

#  ifndef WhlMotSysModStsTyp2_PreChrg
#   define WhlMotSysModStsTyp2_PreChrg (5U)
#  endif

#  ifndef EngSt1_RunngStb
#   define EngSt1_RunngStb (6U)
#  endif

#  ifndef GearLvrIndcn2_Resd2
#   define GearLvrIndcn2_Resd2 (6U)
#  endif

#  ifndef ModStatusRms_Invalid1
#   define ModStatusRms_Invalid1 (6U)
#  endif

#  ifndef OnBdChrgrHndlSts1_DischargeConnectwithpowerincar
#   define OnBdChrgrHndlSts1_DischargeConnectwithpowerincar (6U)
#  endif

#  ifndef ParkSts_Unparked
#   define ParkSts_Unparked (6U)
#  endif

#  ifndef VehMtnSt2_RollgBackwVal1
#   define VehMtnSt2_RollgBackwVal1 (6U)
#  endif

#  ifndef WhlMotSysModStsTyp1_PwrDwn
#   define WhlMotSysModStsTyp1_PwrDwn (6U)
#  endif

#  ifndef WhlMotSysModStsTyp2_PwrDwn
#   define WhlMotSysModStsTyp2_PwrDwn (6U)
#  endif

#  ifndef EngSt1_RunngStrtgInProgs
#   define EngSt1_RunngStrtgInProgs (7U)
#  endif

#  ifndef GearLvrIndcn2_Undefd
#   define GearLvrIndcn2_Undefd (7U)
#  endif

#  ifndef ModStatusRms_Invalid2
#   define ModStatusRms_Invalid2 (7U)
#  endif

#  ifndef OnBdChrgrHndlSts1_DischargeConnectwithpoweroutcar
#   define OnBdChrgrHndlSts1_DischargeConnectwithpoweroutcar (7U)
#  endif

#  ifndef ParkSts_Unknown
#   define ParkSts_Unknown (7U)
#  endif

#  ifndef VehMtnSt2_RollgBackwVal2
#   define VehMtnSt2_RollgBackwVal2 (7U)
#  endif

#  ifndef WhlMotSysModStsTyp1_Flt
#   define WhlMotSysModStsTyp1_Flt (7U)
#  endif

#  ifndef WhlMotSysModStsTyp2_Flt
#   define WhlMotSysModStsTyp2_Flt (7U)
#  endif

#  ifndef EngSt1_RunngRemStrtd
#   define EngSt1_RunngRemStrtd (8U)
#  endif

#  ifndef ModStatusRms_Invalid3
#   define ModStatusRms_Invalid3 (8U)
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

#  ifndef EngSt1_AftRun
#   define EngSt1_AftRun (9U)
#  endif

#  ifndef ModStatusRms_Invalid4
#   define ModStatusRms_Invalid4 (9U)
#  endif

#  ifndef OnBdChrgrHndlSts1_Fault
#   define OnBdChrgrHndlSts1_Fault (9U)
#  endif

#  ifndef ModStatusRms_Invalid5
#   define ModStatusRms_Invalid5 (10U)
#  endif

#  ifndef OnBdChrgrHndlSts1_NotCompleteConnnected
#   define OnBdChrgrHndlSts1_NotCompleteConnnected (10U)
#  endif

#  ifndef ModStatusRms_Invalid6
#   define ModStatusRms_Invalid6 (11U)
#  endif

#  ifndef OnBdChrgrHndlSts1_Reserved0
#   define OnBdChrgrHndlSts1_Reserved0 (11U)
#  endif

#  ifndef ModStatusRms_Invalid7
#   define ModStatusRms_Invalid7 (12U)
#  endif

#  ifndef OnBdChrgrHndlSts1_Reserved1
#   define OnBdChrgrHndlSts1_Reserved1 (12U)
#  endif

#  ifndef ModStatusRms_Invalid8
#   define ModStatusRms_Invalid8 (13U)
#  endif

#  ifndef OnBdChrgrHndlSts1_Reserved2
#   define OnBdChrgrHndlSts1_Reserved2 (13U)
#  endif

#  ifndef ModStatusRms_Invalid9
#   define ModStatusRms_Invalid9 (14U)
#  endif

#  ifndef ModStatusRms_Invalid10
#   define ModStatusRms_Invalid10 (15U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_APPL_COMSHELL_TYPE_H */
