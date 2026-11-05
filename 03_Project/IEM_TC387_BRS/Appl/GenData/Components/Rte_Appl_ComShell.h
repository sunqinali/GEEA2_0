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
 *             File:  Rte_Appl_ComShell.h
 *           Config:  IEM_TC387_BRS.dpa
 *      ECU-Project:  IEM_TC387_BRS
 *
 *        Generator:  MICROSAR RTE Generator Version 4.23.0
 *                    RTE Core Version 1.23.0
 *          License:  CBD2000642
 *
 *      Description:  Application header file for SW-C <Appl_ComShell>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_APPL_COMSHELL_H
# define RTE_APPL_COMSHELL_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_Appl_ComShell_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_BkpOfDstTrvld_BkpOfDstTrvld (0U)
#  define Rte_InitValue_CarTiGlb_CarTiGlb (0U)
#  define Rte_InitValue_CooltFlowForDtElec_CooltFlowForDtElec (0U)
#  define Rte_InitValue_CooltTSigForDtElec_CooltTSigForDtElec (400U)
#  define Rte_InitValue_DCChrgnHndlSts_DCChrgnHndlSts (0U)
#  define Rte_InitValue_DrvgCyc_DrvgCyc (0U)
#  define Rte_InitValue_GearLvrIndcn_GearLvrIndcn (0U)
#  define Rte_InitValue_HvBattSoc_HvBattSoc (0U)
#  define Rte_InitValue_HvBattUDc_HvBattUDc (0U)
#  define Rte_InitValue_HvBattUDynMaxLim_HvBattUDynMaxLim (0U)
#  define Rte_InitValue_HvBattUDynMinLim_HvBattUDynMinLim (0U)
#  define Rte_InitValue_ImobEngSts2_ImobEngSts2 (0U)
#  define Rte_InitValue_OnBdChrgrHndlSts1_OnBdChrgrHndlSts1 (0U)
#  define Rte_InitValue_PLockFltIndcRe_PLockFltIndcRe (0U)
#  define Rte_InitValue_PLockFltLvlRe_PLockFltLvlRe (0U)
#  define Rte_InitValue_PLockParkReq_PLockParkReq (0U)
#  define Rte_InitValue_PLockParkStsRe_PLockParkStsRe (0U)
#  define Rte_InitValue_PrpsnFbLimnIndcn_PrpsnFbLimnIndcn (0U)
#  define Rte_InitValue_RearHeatModEnad_RearHeatModEnad (0U)
#  define Rte_InitValue_RearHeatPwrAllwd_RearHeatPwrAllwd (0U)
#  define Rte_InitValue_SpdRotlForWhlsAtAxleRe_SpdRotlForWhlsAtAxleRe (0U)
#  define Rte_InitValue_WhlMotClrRdyReq_WhlMotClrRdyReq (0U)
#  define Rte_InitValue_WhlMotCooltFlowMinReq_WhlMotCooltFlowMinReq (0U)
#  define Rte_InitValue_WhlMotSysActvDampgModReq_WhlMotSysActvDampgModReq (0U)
#  define Rte_InitValue_WhlMotSysCoolgReq_WhlMotSysCoolgReq (0U)
#  define Rte_InitValue_WhlMotSysCooltT_WhlMotSysCooltT (40U)
#  define Rte_InitValue_WhlMotSysErrIndcnReq_WhlMotSysErrIndcnReq (0U)
#  define Rte_InitValue_WhlMotSysHeatFdBck_WhlMotSysHeatFdBck (0U)
#  define Rte_InitValue_WhlMotSysHeatPwrAct_WhlMotSysHeatPwrAct (0U)
#  define Rte_InitValue_WhlMotSysHeatPwrMax_WhlMotSysHeatPwrMax (0U)
#  define Rte_InitValue_WhlMotSysIdc_WhlMotSysIdc (8188U)
#  define Rte_InitValue_WhlMotSysInvrT_WhlMotSysInvrT (50U)
#  define Rte_InitValue_WhlMotSysLimnIndcn_WhlMotSysLimnIndcn (0U)
#  define Rte_InitValue_WhlMotSysModReq_WhlMotSysModReq (0U)
#  define Rte_InitValue_WhlMotSysModSts_WhlMotSysModSts (0U)
#  define Rte_InitValue_WhlMotSysMotT_WhlMotSysMotT (50U)
#  define Rte_InitValue_WhlMotSysPwrLimMax_WhlMotSysPwrLimMax (0U)
#  define Rte_InitValue_WhlMotSysPwrLimMin_WhlMotSysPwrLimMin (1022U)
#  define Rte_InitValue_WhlMotSysSpdAct_WhlMotSysSpdAct (0)
#  define Rte_InitValue_WhlMotSysTqReq_WhlMotSysTqReq (2047U)
#  define Rte_InitValue_WhlMotSysUdc_WhlMotSysUdc (0U)
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Appl_ComShell_ImobEngSts2_ImobEngSts2(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Appl_ComShell_PLockFltIndcRe_PLockFltIndcRe(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Appl_ComShell_PLockFltLvlRe_PLockFltLvlRe(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Appl_ComShell_PLockParkStsRe_PLockParkStsRe(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Appl_ComShell_WhlMotClrRdyReq_WhlMotClrRdyReq(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Appl_ComShell_WhlMotCooltFlowMinReq_WhlMotCooltFlowMinReq(uint16 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Appl_ComShell_WhlMotSysCoolgReq_WhlMotSysCoolgReq(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Appl_ComShell_WhlMotSysCooltT_WhlMotSysCooltT(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Appl_ComShell_WhlMotSysErrIndcnReq_WhlMotSysErrIndcnReq(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Appl_ComShell_WhlMotSysHeatFdBck_WhlMotSysHeatFdBck(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Appl_ComShell_WhlMotSysHeatPwrAct_WhlMotSysHeatPwrAct(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Appl_ComShell_WhlMotSysHeatPwrMax_WhlMotSysHeatPwrMax(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Appl_ComShell_WhlMotSysIdc_WhlMotSysIdc(uint16 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Appl_ComShell_WhlMotSysInvrT_WhlMotSysInvrT(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Appl_ComShell_WhlMotSysLimnIndcn_WhlMotSysLimnIndcn(uint16 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Appl_ComShell_WhlMotSysModSts_WhlMotSysModSts(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Appl_ComShell_WhlMotSysMotT_WhlMotSysMotT(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Appl_ComShell_WhlMotSysSpdAct_WhlMotSysSpdAct(sint16 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Appl_ComShell_WhlMotSysUdc_WhlMotSysUdc(uint16 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_BkpOfDstTrvld_BkpOfDstTrvld Rte_Read_Appl_ComShell_BkpOfDstTrvld_BkpOfDstTrvld
#  define Rte_Read_Appl_ComShell_BkpOfDstTrvld_BkpOfDstTrvld(data) (Com_ReceiveSignal(ComConf_ComSignal_isBkpOfDstTrvld_1c9ea633_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
#  define Rte_Read_CarTiGlb_CarTiGlb Rte_Read_Appl_ComShell_CarTiGlb_CarTiGlb
#  define Rte_Read_Appl_ComShell_CarTiGlb_CarTiGlb(data) (Com_ReceiveSignal(ComConf_ComSignal_isCarTiGlb_7a3bdc75_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
#  define Rte_Read_CooltFlowForDtElec_CooltFlowForDtElec Rte_Read_Appl_ComShell_CooltFlowForDtElec_CooltFlowForDtElec
#  define Rte_Read_Appl_ComShell_CooltFlowForDtElec_CooltFlowForDtElec(data) (Com_ReceiveSignal(ComConf_ComSignal_isCooltFlowForDtElec_89c7c93c_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
#  define Rte_Read_CooltTSigForDtElec_CooltTSigForDtElec Rte_Read_Appl_ComShell_CooltTSigForDtElec_CooltTSigForDtElec
#  define Rte_Read_Appl_ComShell_CooltTSigForDtElec_CooltTSigForDtElec(data) (Com_ReceiveSignal(ComConf_ComSignal_isCooltTSigForDtElec_f43a3873_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
#  define Rte_Read_DCChrgnHndlSts_DCChrgnHndlSts Rte_Read_Appl_ComShell_DCChrgnHndlSts_DCChrgnHndlSts
#  define Rte_Read_Appl_ComShell_DCChrgnHndlSts_DCChrgnHndlSts(data) (Com_ReceiveSignal(ComConf_ComSignal_isDCChrgnHndlSts_7439a8f3_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
#  define Rte_Read_DrvgCyc_DrvgCyc Rte_Read_Appl_ComShell_DrvgCyc_DrvgCyc
#  define Rte_Read_Appl_ComShell_DrvgCyc_DrvgCyc(data) (Com_ReceiveSignal(ComConf_ComSignal_isDrvgCyc_edb7d721_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
#  define Rte_Read_GearLvrIndcn_GearLvrIndcn Rte_Read_Appl_ComShell_GearLvrIndcn_GearLvrIndcn
#  define Rte_Read_Appl_ComShell_GearLvrIndcn_GearLvrIndcn(data) (Com_ReceiveSignal(ComConf_ComSignal_isGearLvrIndcn_bb4b951e_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
#  define Rte_Read_HvBattSoc_HvBattSoc Rte_Read_Appl_ComShell_HvBattSoc_HvBattSoc
#  define Rte_Read_Appl_ComShell_HvBattSoc_HvBattSoc(data) (Com_ReceiveSignal(ComConf_ComSignal_isHvBattSoc_ce242c3f_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
#  define Rte_Read_HvBattUDc_HvBattUDc Rte_Read_Appl_ComShell_HvBattUDc_HvBattUDc
#  define Rte_Read_Appl_ComShell_HvBattUDc_HvBattUDc(data) (Com_ReceiveSignal(ComConf_ComSignal_isHvBattUDc_bcd9ade4_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
#  define Rte_Read_HvBattUDynMaxLim_HvBattUDynMaxLim Rte_Read_Appl_ComShell_HvBattUDynMaxLim_HvBattUDynMaxLim
#  define Rte_Read_Appl_ComShell_HvBattUDynMaxLim_HvBattUDynMaxLim(data) (Com_ReceiveSignal(ComConf_ComSignal_isHvBattUDynMaxLim_6d11df88_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
#  define Rte_Read_HvBattUDynMinLim_HvBattUDynMinLim Rte_Read_Appl_ComShell_HvBattUDynMinLim_HvBattUDynMinLim
#  define Rte_Read_Appl_ComShell_HvBattUDynMinLim_HvBattUDynMinLim(data) (Com_ReceiveSignal(ComConf_ComSignal_isHvBattUDynMinLim_28139c0a_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
#  define Rte_Read_OnBdChrgrHndlSts1_OnBdChrgrHndlSts1 Rte_Read_Appl_ComShell_OnBdChrgrHndlSts1_OnBdChrgrHndlSts1
#  define Rte_Read_Appl_ComShell_OnBdChrgrHndlSts1_OnBdChrgrHndlSts1(data) (Com_ReceiveSignal(ComConf_ComSignal_isOnBdChrgrHndlSts1_677311c9_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
#  define Rte_Read_PLockParkReq_PLockParkReq Rte_Read_Appl_ComShell_PLockParkReq_PLockParkReq
#  define Rte_Read_Appl_ComShell_PLockParkReq_PLockParkReq(data) (Com_ReceiveSignal(ComConf_ComSignal_isPLockParkReq_5b6f1b96_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
#  define Rte_Read_PrpsnFbLimnIndcn_PrpsnFbLimnIndcn Rte_Read_Appl_ComShell_PrpsnFbLimnIndcn_PrpsnFbLimnIndcn
#  define Rte_Read_Appl_ComShell_PrpsnFbLimnIndcn_PrpsnFbLimnIndcn(data) (Com_ReceiveSignal(ComConf_ComSignal_isPrpsnFbLimnIndcn_5674da6b_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
#  define Rte_Read_RearHeatModEnad_RearHeatModEnad Rte_Read_Appl_ComShell_RearHeatModEnad_RearHeatModEnad
#  define Rte_Read_Appl_ComShell_RearHeatModEnad_RearHeatModEnad(data) (Com_ReceiveSignal(ComConf_ComSignal_isRearHeatModEnad_a110df41_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
#  define Rte_Read_RearHeatPwrAllwd_RearHeatPwrAllwd Rte_Read_Appl_ComShell_RearHeatPwrAllwd_RearHeatPwrAllwd
#  define Rte_Read_Appl_ComShell_RearHeatPwrAllwd_RearHeatPwrAllwd(data) (Com_ReceiveSignal(ComConf_ComSignal_isRearHeatPwrAllwd_c919804a_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
#  define Rte_Read_SpdRotlForWhlsAtAxleRe_SpdRotlForWhlsAtAxleRe Rte_Read_Appl_ComShell_SpdRotlForWhlsAtAxleRe_SpdRotlForWhlsAtAxleRe
#  define Rte_Read_Appl_ComShell_SpdRotlForWhlsAtAxleRe_SpdRotlForWhlsAtAxleRe(data) (Com_ReceiveSignal(ComConf_ComSignal_isSpdRotlForWhlsAtAxleRe_cda9e459_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
#  define Rte_Read_WhlMotSysActvDampgModReq_WhlMotSysActvDampgModReq Rte_Read_Appl_ComShell_WhlMotSysActvDampgModReq_WhlMotSysActvDampgModReq
#  define Rte_Read_Appl_ComShell_WhlMotSysActvDampgModReq_WhlMotSysActvDampgModReq(data) (Com_ReceiveSignal(ComConf_ComSignal_isWhlMotSysActvDampgModReq_1c578291_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
#  define Rte_Read_WhlMotSysModReq_WhlMotSysModReq Rte_Read_Appl_ComShell_WhlMotSysModReq_WhlMotSysModReq
#  define Rte_Read_Appl_ComShell_WhlMotSysModReq_WhlMotSysModReq(data) (Com_ReceiveSignal(ComConf_ComSignal_isWhlMotSysModReq_0153ebfe_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
#  define Rte_Read_WhlMotSysPwrLimMax_WhlMotSysPwrLimMax Rte_Read_Appl_ComShell_WhlMotSysPwrLimMax_WhlMotSysPwrLimMax
#  define Rte_Read_Appl_ComShell_WhlMotSysPwrLimMax_WhlMotSysPwrLimMax(data) (Com_ReceiveSignal(ComConf_ComSignal_isWhlMotSysPwrLimMax_45b5505a_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
#  define Rte_Read_WhlMotSysPwrLimMin_WhlMotSysPwrLimMin Rte_Read_Appl_ComShell_WhlMotSysPwrLimMin_WhlMotSysPwrLimMin
#  define Rte_Read_Appl_ComShell_WhlMotSysPwrLimMin_WhlMotSysPwrLimMin(data) (Com_ReceiveSignal(ComConf_ComSignal_isWhlMotSysPwrLimMin_79b86f03_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
#  define Rte_Read_WhlMotSysTqReq_WhlMotSysTqReq Rte_Read_Appl_ComShell_WhlMotSysTqReq_WhlMotSysTqReq
#  define Rte_Read_Appl_ComShell_WhlMotSysTqReq_WhlMotSysTqReq(data) (Com_ReceiveSignal(ComConf_ComSignal_isWhlMotSysTqReq_f0fdb022_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_ImobEngSts2_ImobEngSts2 Rte_Write_Appl_ComShell_ImobEngSts2_ImobEngSts2
#  define Rte_Write_PLockFltIndcRe_PLockFltIndcRe Rte_Write_Appl_ComShell_PLockFltIndcRe_PLockFltIndcRe
#  define Rte_Write_PLockFltLvlRe_PLockFltLvlRe Rte_Write_Appl_ComShell_PLockFltLvlRe_PLockFltLvlRe
#  define Rte_Write_PLockParkStsRe_PLockParkStsRe Rte_Write_Appl_ComShell_PLockParkStsRe_PLockParkStsRe
#  define Rte_Write_WhlMotClrRdyReq_WhlMotClrRdyReq Rte_Write_Appl_ComShell_WhlMotClrRdyReq_WhlMotClrRdyReq
#  define Rte_Write_WhlMotCooltFlowMinReq_WhlMotCooltFlowMinReq Rte_Write_Appl_ComShell_WhlMotCooltFlowMinReq_WhlMotCooltFlowMinReq
#  define Rte_Write_WhlMotSysCoolgReq_WhlMotSysCoolgReq Rte_Write_Appl_ComShell_WhlMotSysCoolgReq_WhlMotSysCoolgReq
#  define Rte_Write_WhlMotSysCooltT_WhlMotSysCooltT Rte_Write_Appl_ComShell_WhlMotSysCooltT_WhlMotSysCooltT
#  define Rte_Write_WhlMotSysErrIndcnReq_WhlMotSysErrIndcnReq Rte_Write_Appl_ComShell_WhlMotSysErrIndcnReq_WhlMotSysErrIndcnReq
#  define Rte_Write_WhlMotSysHeatFdBck_WhlMotSysHeatFdBck Rte_Write_Appl_ComShell_WhlMotSysHeatFdBck_WhlMotSysHeatFdBck
#  define Rte_Write_WhlMotSysHeatPwrAct_WhlMotSysHeatPwrAct Rte_Write_Appl_ComShell_WhlMotSysHeatPwrAct_WhlMotSysHeatPwrAct
#  define Rte_Write_WhlMotSysHeatPwrMax_WhlMotSysHeatPwrMax Rte_Write_Appl_ComShell_WhlMotSysHeatPwrMax_WhlMotSysHeatPwrMax
#  define Rte_Write_WhlMotSysIdc_WhlMotSysIdc Rte_Write_Appl_ComShell_WhlMotSysIdc_WhlMotSysIdc
#  define Rte_Write_WhlMotSysInvrT_WhlMotSysInvrT Rte_Write_Appl_ComShell_WhlMotSysInvrT_WhlMotSysInvrT
#  define Rte_Write_WhlMotSysLimnIndcn_WhlMotSysLimnIndcn Rte_Write_Appl_ComShell_WhlMotSysLimnIndcn_WhlMotSysLimnIndcn
#  define Rte_Write_WhlMotSysModSts_WhlMotSysModSts Rte_Write_Appl_ComShell_WhlMotSysModSts_WhlMotSysModSts
#  define Rte_Write_WhlMotSysMotT_WhlMotSysMotT Rte_Write_Appl_ComShell_WhlMotSysMotT_WhlMotSysMotT
#  define Rte_Write_WhlMotSysSpdAct_WhlMotSysSpdAct Rte_Write_Appl_ComShell_WhlMotSysSpdAct_WhlMotSysSpdAct
#  define Rte_Write_WhlMotSysUdc_WhlMotSysUdc Rte_Write_Appl_ComShell_WhlMotSysUdc_WhlMotSysUdc


# endif /* !defined(RTE_CORE) */


# define Appl_ComShell_START_SEC_CODE
# include "Appl_ComShell_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_Appl_ComShell_Step Appl_ComShell_Step
# endif

FUNC(void, Appl_ComShell_CODE) Appl_ComShell_Step(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define Appl_ComShell_STOP_SEC_CODE
# include "Appl_ComShell_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_APPL_COMSHELL_H */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0624:  MISRA rule: Rule8.3
     Reason:     This MISRA violation is a consequence from the RTE requirements [SWS_Rte_01007] [SWS_Rte_01150].
                 The typedefs are never used in the same context.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_0786:  MISRA rule: Rule5.5
     Reason:     Same macro and idintifier names in first 63 characters are required to meet AUTOSAR spec.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3449:  MISRA rule: Rule8.5
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3451:  MISRA rule: Rule8.5
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
