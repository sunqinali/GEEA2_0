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
 *            Module: Com
 *           Program: MSR_Vector_SLP4
 *          Customer: Aptiv (China) Technology Company Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397 
 *    License Scope : The usage is restricted to CBD2000642_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Com_Lcfg.c
 *   Generation Time: 2026-10-30 22:11:24
 *           Project: IEM_TC387_BRS - Version 1
 *          Delivery: CBD2000642_D01
 *      Tool Version: DaVinci Configurator  5.22.45 SP3
 *
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
  MISRA / PClint JUSTIFICATIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#define V_IL_ASRCOMCFG5_LCFG_SOURCE

#include "Com.h"

#include "Com_Lcfg.h"

#include "Appl_Cbk.h"

#include "SchM_Com.h"

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
  SECTION: LOCAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA PROTOTYPES
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
  Com_ActivatableRxComIPdus
**********************************************************************************************************************/
/** 
  \var    Com_ActivatableRxComIPdus
  \brief  Contains all Rx ComIPdu's with assigned ComIPduGroup
  \details
  Element         Description
  RxPduInfoIdx    the index of the 1:1 relation pointing to Com_RxPduInfo
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_ActivatableRxComIPdusType, COM_CONST) Com_ActivatableRxComIPdus[26] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RxPduInfoIdx */
  { /*     0 */           0u },
  { /*     1 */           1u },
  { /*     2 */           2u },
  { /*     3 */           3u },
  { /*     4 */           4u },
  { /*     5 */           5u },
  { /*     6 */           6u },
  { /*     7 */           7u },
  { /*     8 */           8u },
  { /*     9 */           9u },
  { /*    10 */          10u },
  { /*    11 */          11u },
  { /*    12 */          12u },
  { /*    13 */          13u },
  { /*    14 */          15u },
  { /*    15 */          16u },
  { /*    16 */          17u },
  { /*    17 */          18u },
  { /*    18 */          19u },
  { /*    19 */          20u },
  { /*    20 */          21u },
  { /*    21 */          22u },
  { /*    22 */          23u },
  { /*    23 */          24u },
  { /*    24 */          25u },
  { /*    25 */          26u }
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueArrayBased
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueArrayBased
  \brief  Optimized array of commonly used values like initial or invalid values. (UINT8_N, UINT8_DYN)
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_ConstValueArrayBasedType, COM_CONST) Com_ConstValueArrayBased[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     ConstValueArrayBased      Referable Keys */
  /*     0 */                 0x00u,  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_db9c2837_RxInitValue] */
  /*     1 */                 0x00u,  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_db9c2837_RxInitValue] */
  /*     2 */                 0x00u,  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_db9c2837_RxInitValue] */
  /*     3 */                 0x00u,  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_db9c2837_RxInitValue] */
  /*     4 */                 0x00u,  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_db9c2837_RxInitValue] */
  /*     5 */                 0x00u   /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_db9c2837_RxInitValue] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueSInt16
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueSInt16
  \brief  Optimized array of commonly used values like initial or invalid values. (SINT16)
*/ 
#define COM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_ConstValueSInt16Type, COM_CONST) Com_ConstValueSInt16[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     ConstValueSInt16      Referable Keys */
  /*     0 */             20000   /* [/ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx/isPtTqAtAxleMaxReqPtTqAtAxleFrntReq_8c330c00_RxInitValue, /ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx/isPtTqAtAxleMaxReqPtTqAtAxleReReq_449843f2_RxInitValue] */
};
#define COM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueUInt16
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueUInt16
  \brief  Optimized array of commonly used values like initial or invalid values. (UINT16)
*/ 
#define COM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_ConstValueUInt16Type, COM_CONST) Com_ConstValueUInt16[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     ConstValueUInt16      Referable Keys */
  /*     0 */           0x07FFu,  /* [/ActiveEcuC/Com/ComConfig/isWhlMotSysTqReq_f0fdb022_RxInitValue] */
  /*     1 */           0x03FEu,  /* [/ActiveEcuC/Com/ComConfig/isWhlMotSysPwrLimMin_79b86f03_RxInitValue] */
  /*     2 */           0x0190u,  /* [/ActiveEcuC/Com/ComConfig/isCooltTSigForDtElec_f43a3873_RxInitValue] */
  /*     3 */           0x0000u   /* [/ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcEngRotTarSpdDMCFrnt_46c9d05b_RxInitValue, /ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcEngRotTarSpdDMCRear_ee201c9c_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx/isVehSpdLgtA_668ad5e3_RxInitValue, /ActiveEcuC/Com/ComConfig/isCooltFlowForDtElec_89c7c93c_RxInitValue, /ActiveEcuC/Com/ComConfig/isHvBattSoc_ce242c3f_RxInitValue, /ActiveEcuC/Com/ComConfig/isHvBattUDc_bcd9ade4_RxInitValue, /ActiveEcuC/Com/ComConfig/isHvBattUDynMaxLim_6d11df88_RxInitValue, /ActiveEcuC/Com/ComConfig/isHvBattUDynMinLim_28139c0a_RxInitValue, /ActiveEcuC/Com/ComConfig/isSpdRotlForWhlsAtAxleRe_cda9e459_RxInitValue, /ActiveEcuC/Com/ComConfig/isWhlMotSysPwrLimMax_45b5505a_RxInitValue] */
};
#define COM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueUInt32
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueUInt32
  \brief  Optimized array of commonly used values like initial or invalid values. (UINT32)
*/ 
#define COM_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_ConstValueUInt32Type, COM_CONST) Com_ConstValueUInt32[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     ConstValueUInt32      Referable Keys */
  /*     0 */       0x00000000u   /* [/ActiveEcuC/Com/ComConfig/isBkpOfDstTrvld_1c9ea633_RxInitValue, /ActiveEcuC/Com/ComConfig/isCarTiGlb_7a3bdc75_RxInitValue] */
};
#define COM_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueUInt8
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueUInt8
  \brief  Optimized array of commonly used values like initial or invalid values. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_ConstValueUInt8Type, COM_CONST) Com_ConstValueUInt8[44] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     ConstValueUInt8      Referable Keys */
  /*     0 */            0x07u,  /* [/ActiveEcuC/Com/ComConfig/isGearLvrIndcn_bb4b951e_RxInitValue] */
  /*     1 */            0x08u,  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysTqEst_02b3fb8d_TxUbMask, /ActiveEcuC/Com/ComConfig/isDCChrgnHndlSts_7439a8f3_RxUbMask, /ActiveEcuC/Com/ComConfig/isHvBattUDc_bcd9ade4_RxUbMask, /ActiveEcuC/Com/ComConfig/isHvBattUDynMaxLim_6d11df88_RxUbMask, /ActiveEcuC/Com/ComConfig/isHvBattUDynMinLim_28139c0a_RxUbMask, /ActiveEcuC/Com/ComConfig/isOnBdChrgrHndlSts1_677311c9_RxInitValue, /ActiveEcuC/Com/ComConfig/isPLockParkReq_5b6f1b96_RxUbMask, /ActiveEcuC/Com/ComConfig/isWhlMotSysCoolgReq_32e8ee03_TxUbMask, /ActiveEcuC/Com/ComConfig/isWhlMotSysHeatPwrAct_e1709dcf_TxUbMask, /ActiveEcuC/Com/ComConfig/isWhlMotSysModReq_0153ebfe_RxUbMask] */
  /*     2 */            0x04u,  /* [/ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_RxUbMask, /ActiveEcuC/Com/ComConfig/igVehBattU_0a2a47a4_RxUbMask] */
  /*     3 */            0x40u,  /* [/ActiveEcuC/Com/ComConfig/igHvSysRlySts_760c5326_RxUbMask, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqAllwd_20f5846f_RxUbMask, /ActiveEcuC/Com/ComConfig/isCooltFlowForDtElec_89c7c93c_RxUbMask, /ActiveEcuC/Com/ComConfig/isRearHeatModEnad_a110df41_RxUbMask, /ActiveEcuC/Com/ComConfig/isWhlMotCooltFlowMinReq_102e8fa4_TxUbMask, /ActiveEcuC/Com/ComConfig/isWhlMotSysIdc_56101b54_TxUbMask, /ActiveEcuC/Com/ComConfig/isWhlMotSysUdc_432c4140_TxUbMask] */
  /*     4 */            0x02u,  /* [/ActiveEcuC/Com/ComConfig/igHvSysRlySts_760c5326_Rx/isHvSysRlyStsHvSysRlySts_5b219bea_RxInitValue, /ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_TxUbMask, /ActiveEcuC/Com/ComConfig/igVehMtnSt_68a0f345_RxUbMask, /ActiveEcuC/Com/ComConfig/isRearHeatModEnad_a110df41_RxInitValue, /ActiveEcuC/Com/ComConfig/isWhlMotClrRdyReq_189c9369_TxUbMask, /ActiveEcuC/Com/ComConfig/isWhlMotSysErrIndcnReq_d5e6edc2_TxUbMask] */
  /*     5 */            0x10u,  /* [/ActiveEcuC/Com/ComConfig/igEscVariantToDmc_3c205019_RxUbMask, /ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_RxUbMask, /ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_RxUbMask, /ActiveEcuC/Com/ComConfig/isDrvgCyc_edb7d721_RxUbMask, /ActiveEcuC/Com/ComConfig/isHvBattSoc_ce242c3f_RxUbMask, /ActiveEcuC/Com/ComConfig/isOnBdChrgrHndlSts1_677311c9_RxUbMask, /ActiveEcuC/Com/ComConfig/isWhlMotSysHeatPwrMax_d3ea4a02_TxUbMask, /ActiveEcuC/Com/ComConfig/isWhlMotSysModSts_bd46c3f5_TxUbMask, /ActiveEcuC/Com/ComConfig/isWhlMotSysTqReq_f0fdb022_RxUbMask] */
  /*     6 */            0x80u,  /* [/ActiveEcuC/Com/ComConfig/igEngSt1WdSts_adcf75d2_RxUbMask, /ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_RxUbMask, /ActiveEcuC/Com/ComConfig/isCarTiGlb_7a3bdc75_RxUbMask, /ActiveEcuC/Com/ComConfig/isPLockFltLvlRe_167e1ed2_TxUbMask, /ActiveEcuC/Com/ComConfig/isPLockParkStsRe_8fb3cac5_TxUbMask, /ActiveEcuC/Com/ComConfig/isPrpsnFbLimnIndcn_5674da6b_RxUbMask, /ActiveEcuC/Com/ComConfig/isRearHeatPwrAllwd_c919804a_RxUbMask, /ActiveEcuC/Com/ComConfig/isSpdRotlForWhlsAtAxleRe_cda9e459_RxUbMask, /ActiveEcuC/Com/ComConfig/isWhlMotSysInvrT_11341a35_TxUbMask, /ActiveEcuC/Com/ComConfig/isWhlMotSysLimnIndcn_9f88a06a_TxUbMask, /ActiveEcuC/Com/ComConfig/isWhlMotSysSpdAct_e26fc666_TxUbMask] */
  /*     7 */            0x01u,  /* [/ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_TxUbMask, /ActiveEcuC/Com/ComConfig/igVehBattU_0a2a47a4_Rx/isVehBattUSysUQf_f605b03a_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1UsgModSts_8ea1ac37_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_RxUbMask, /ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx/isVehSpdLgtQf_057400a6_RxInitValue, /ActiveEcuC/Com/ComConfig/igWhlMotSysSpdActSafe_58c9c55b_TxUbMask, /ActiveEcuC/Com/ComConfig/isGearLvrIndcn_bb4b951e_RxUbMask, /ActiveEcuC/Com/ComConfig/isWhlMotSysActvDampgModReq_1c578291_RxUbMask, /ActiveEcuC/Com/ComConfig/isWhlMotSysCooltT_da703242_TxUbMask, /ActiveEcuC/Com/ComConfig/isWhlMotSysMotT_54e003b6_TxUbMask] */
  /*     8 */            0x20u,  /* [/ActiveEcuC/Com/ComConfig/igCrashStsSafe_0a09c5f2_RxUbMask, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqAvl_6ba13f42_TxUbMask, /ActiveEcuC/Com/ComConfig/isBkpOfDstTrvld_1c9ea633_RxUbMask, /ActiveEcuC/Com/ComConfig/isCooltTSigForDtElec_f43a3873_RxUbMask, /ActiveEcuC/Com/ComConfig/isImobEngSts2_5f8745c8_TxUbMask, /ActiveEcuC/Com/ComConfig/isPLockFltIndcRe_f756fd30_TxUbMask, /ActiveEcuC/Com/ComConfig/isWhlMotSysHeatFdBck_516116c8_TxUbMask, /ActiveEcuC/Com/ComConfig/isWhlMotSysPwrLimMax_45b5505a_RxUbMask, /ActiveEcuC/Com/ComConfig/isWhlMotSysPwrLimMin_79b86f03_RxUbMask] */
  /*     9 */            0x00u,  /* [/ActiveEcuC/Com/ComConfig/igCrashStsSafe_0a09c5f2_Rx/isCrashStsSafeCntr_fc00f19d_RxInitValue, /ActiveEcuC/Com/ComConfig/igCrashStsSafe_0a09c5f2_Rx/isCrashStsSafeSts_847c5d07_RxInitValue, /ActiveEcuC/Com/ComConfig/igEngSt1WdSts_adcf75d2_Rx/isEngSt1WdStsChks_75cf5b53_RxInitValue, /ActiveEcuC/Com/ComConfig/igEngSt1WdSts_adcf75d2_Rx/isEngSt1WdStsCntr_cb1f19e9_RxInitValue, /ActiveEcuC/Com/ComConfig/igEngSt1WdSts_adcf75d2_Rx/isEngSt1WdStsEngSt1WdSts_21868fa0_RxInitValue, /ActiveEcuC/Com/ComConfig/igEscVariantToDmc_3c205019_Rx/isEscVariantToDmcChks_9a33bac6_RxInitValue, /ActiveEcuC/Com/ComConfig/igEscVariantToDmc_3c205019_Rx/isEscVariantToDmcCntr_24e3f87c_RxInitValue, /ActiveEcuC/Com/ComConfig/igEscVariantToDmc_3c205019_Rx/isEscVariantToDmcEscVariantToDmc_daa2c955_RxInitValue, /ActiveEcuC/Com/ComConfig/igHvSysRlySts_760c5326_Rx/isHvSysRlyStsChks_b1dd6f20_RxInitValue, /ActiveEcuC/Com/ComConfig/igHvSysRlySts_760c5326_Rx/isHvSysRlyStsCntr_0f0d2d9a_RxInitValue, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq0_9c0677f3_RxInitValue, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq1_eb014765_RxInitValue, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq2_720816df_RxInitValue, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq3_050f2649_RxInitValue, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq4_9b6bb3ea_RxInitValue, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq5_ec6c837c_RxInitValue, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq6_7565d2c6_RxInitValue, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngMgrCmdTar1_817e486b_RxInitValue, /ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx/isPtTqAtAxleMaxReqChks_6ad4cf82_RxInitValue, /ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx/isPtTqAtAxleMaxReqCntr_d4048d38_RxInitValue, /ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcChks_7f830d10_RxInitValue, /ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcCntr_c1534faa_RxInitValue, /ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcFrnt_baffba62_RxInitValue, /ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcRear_121676a5_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehBattU_0a2a47a4_Rx/isVehBattUSysU_9501cb8f_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtBlkIDBytePosn1_6585aabf_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn2_e7ede43f_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn3_90ead4a9_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn4_0e8e410a_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn5_7989719c_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn6_e0802026_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn7_978710b0_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn8_07380d21_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmBlkIDBytePosn1_16ee2fa8_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn2_c9255841_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn3_be2268d7_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn4_2046fd74_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn5_5741cde2_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn6_ce489c58_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn7_b94facce_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn8_29f0b15f_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1CarModSts1_a7324f03_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1CarModSubtypWdCarModSubtyp_e21ae44e_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1Chks_5333fc0b_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1Cntr_ede3beb1_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1EgyLvlElecMai_47690dfe_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1EgyLvlElecSubtyp_47668699_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1FltEgyCnsWdSts_c45a6bde_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1PwrLvlElecMai_c178728f_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1PwrLvlElecSubtyp_d042c1b3_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehMtnSt_68a0f345_Rx/isVehMtnStChks_46ae48d7_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehMtnSt_68a0f345_Rx/isVehMtnStCntr_f87e0a6d_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehMtnSt_68a0f345_Rx/isVehMtnStVehMtnSt_e696b713_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx/isVehSpdLgtChks_060f2c10_RxInitValue, /ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx/isVehSpdLgtCntr_b8df6eaa_RxInitValue, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqAllwd_20f5846f_Rx/isWhlMotSysTqAllwdChks_5c573be4_RxInitValue, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqAllwd_20f5846f_Rx/isWhlMotSysTqAllwdCntr_e287795e_RxInitValue, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqAllwd_20f5846f_Rx/isWhlMotSysTqAllwdWhlMotSysTqAllwd_0ecd7abd_RxInitValue, /ActiveEcuC/Com/ComConfig/isDCChrgnHndlSts_7439a8f3_RxInitValue, /ActiveEcuC/Com/ComConfig/isDrvgCyc_edb7d721_RxInitValue, /ActiveEcuC/Com/ComConfig/isPLockParkReq_5b6f1b96_RxInitValue, /ActiveEcuC/Com/ComConfig/isPrpsnFbLimnIndcn_5674da6b_RxInitValue, /ActiveEcuC/Com/ComConfig/isRearHeatPwrAllwd_c919804a_RxInitValue, /ActiveEcuC/Com/ComConfig/isWhlMotSysActvDampgModReq_1c578291_RxInitValue, /ActiveEcuC/Com/ComConfig/isWhlMotSysModReq_0153ebfe_RxInitValue] */
  /*    10 */            0xFFu,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_TxUbMask, /ActiveEcuC/Com/ComConfig/igCrashStsSafe_0a09c5f2_Rx/isCrashStsSafeChks_42d0b327_RxInitValue] */
  /*    11 */            0xCFu,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_TxUbMask] */
  /*    12 */            0x3Fu,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_TxUbMask] */
  /*    13 */            0xFFu,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_TxUbMask] */
  /*    14 */            0xF7u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_TxUbMask] */
  /*    15 */            0xFFu,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_TxUbMask] */
  /*    16 */            0x74u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_TxUbMask] */
  /*    17 */            0xFFu,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_TxUbMask] */
  /*    18 */            0xFDu,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_TxUbMask, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_TxUbMask] */
  /*    19 */            0x7Fu,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_TxUbMask] */
  /*    20 */            0xFFu,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_TxUbMask] */
  /*    21 */            0xFEu,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_TxUbMask] */
  /*    22 */            0xFFu,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_TxUbMask] */
  /*    23 */            0x1Fu,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_TxUbMask] */
  /*    24 */            0xFFu,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_TxUbMask] */
  /*    25 */            0xFFu,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_TxUbMask] */
  /*    26 */            0xFFu,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_TxUbMask] */
  /*    27 */            0xF7u,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_TxUbMask] */
  /*    28 */            0xCFu,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_TxUbMask] */
  /*    29 */            0xDFu,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_TxUbMask] */
  /*    30 */            0xFFu,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_TxUbMask] */
  /*    31 */            0xFFu,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_TxUbMask] */
  /*    32 */            0xFFu,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_TxUbMask] */
  /*    33 */            0xFFu,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_TxUbMask] */
  /*    34 */            0xFFu,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_TxUbMask] */
  /*    35 */            0x3Fu,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_TxUbMask] */
  /*    36 */            0xFFu,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_TxUbMask] */
  /*    37 */            0xFFu,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_TxUbMask] */
  /*    38 */            0xFFu,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_TxUbMask] */
  /*    39 */            0xFFu,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_TxUbMask] */
  /*    40 */            0xFFu,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_TxUbMask, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_TxUbMask] */
  /*    41 */            0xFFu,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_TxUbMask, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_TxUbMask] */
  /*    42 */            0xFFu,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_TxUbMask, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_TxUbMask] */
  /*    43 */            0xFEu   /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_TxUbMask, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_TxUbMask] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_PduGrpVector
**********************************************************************************************************************/
/** 
  \var    Com_PduGrpVector
  \brief  Contains an I-PDU-Group vector for each I-PDU, mapping the I-PDU to the corresponding I-PDU-Groups.
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_PduGrpVectorType, COM_CONST) Com_PduGrpVector[41] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     PduGrpVector      Referable Keys */
  /*     0 */         0x2Bu,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU16_69df6d31_Rx] */
  /*     1 */         0x29u,  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU28_1c24086a_Rx] */
  /*     2 */         0xAFu,  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU08_2e126ae8_Rx] */
  /*     3 */         0x7Fu,  /* [/ActiveEcuC/Com/ComConfig/CddObcPropSignalIPdu01_003f0830_Rx] */
  /*     4 */         0x21u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU08_977c7177_Rx] */
  /*     5 */         0x01u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU06_70c45c70_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU08_977c7177_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU17_1ed85da7_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU19_f96070a0_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropdTCSignalIPdu38_808bfd3f_Rx, /ActiveEcuC/Com/ComConfig/VddmBcmPropdTCSignalIPDU01_886bd56f_Rx, /ActiveEcuC/Com/ComConfig/VddmPropSignalIPdu26_8fec2bf2_Rx] */
  /*     6 */         0x02u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU06_70c45c70_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU17_1ed85da7_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU19_f96070a0_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropdTCSignalIPdu38_808bfd3f_Rx, /ActiveEcuC/Com/ComConfig/VddmBcmPropdTCSignalIPDU01_886bd56f_Rx, /ActiveEcuC/Com/ComConfig/VddmPropSignalIPdu26_8fec2bf2_Rx] */
  /*     7 */         0x69u,  /* [/ActiveEcuC/Com/ComConfig/SrsPropSignalIPdu02_4fa2d123_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU05_e9cd0dca_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU11_f7bbf892_Rx] */
  /*     8 */         0x01u,  /* [/ActiveEcuC/Com/ComConfig/SrsPropSignalIPdu02_4fa2d123_Rx] */
  /*     9 */         0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx] */
  /*    10 */         0x0Cu,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx] */
  /*    11 */         0x2Fu,  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu25_faea9d09_Rx, /ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU02_bd22093c_Rx, /ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU04_5441ac09_Rx, /ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU05_23469c9f_Rx, /ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU06_ba4fcd25_Rx, /ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu24_8dedad9f_Rx] */
  /*    12 */         0x01u,  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu25_faea9d09_Rx] */
  /*    13 */         0xA9u,  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU11_4ed5e30d_Rx] */
  /*    14 */         0x01u,  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU11_4ed5e30d_Rx] */
  /*    15 */         0xEFu,  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu01_7a983997_Rx, /ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu02_e391682d_Rx, /ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu03_949658bb_Rx, /ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu15_64eecccf_Rx] */
  /*    16 */         0x01u,  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu01_7a983997_Rx, /ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu02_e391682d_Rx, /ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu03_949658bb_Rx, /ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu15_64eecccf_Rx] */
  /*    17 */         0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_Tx] */
  /*    18 */         0xE4u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_Tx] */
  /*    19 */         0x02u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_Tx] */
  /*    20 */         0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx] */
  /*    21 */         0x54u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx] */
  /*    22 */         0x2Eu,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx] */
  /*    23 */         0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx] */
  /*    24 */         0xF4u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx] */
  /*    25 */         0x3Bu,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx] */
  /*    26 */         0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx] */
  /*    27 */         0xE4u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx] */
  /*    28 */         0x32u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx] */
  /*    29 */         0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  /*    30 */         0xE4u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  /*    31 */         0x03u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  /*    32 */         0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx] */
  /*    33 */         0xA4u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx] */
  /*    34 */         0x02u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx] */
  /*    35 */         0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx] */
  /*    36 */         0xE4u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx] */
  /*    37 */         0x33u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx] */
  /*    38 */         0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx] */
  /*    39 */         0xF4u,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx] */
  /*    40 */         0x3Fu   /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxAccessInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxAccessInfo
  \brief  Contains all signal layout information necessary for signal access within an I-PDU.
  \details
  Element                                Description
  InitValueUsed                          TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
  RxSigBufferArrayBasedBufferUsed        TRUE, if the 0:n relation has 1 relation pointing to Com_RxSigBufferArrayBased
  ShdBufferUsed                          TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_RxSigBufferUInt8,Com_RxSigBufferUInt16,Com_RxSigBufferUInt32,Com_RxSigBufferUInt64,Com_RxSigBufferZeroBit,Com_RxSigBufferSInt8,Com_RxSigBufferSInt16,Com_RxSigBufferSInt32,Com_RxSigBufferSInt64,Com_RxSigBufferFloat32,Com_RxSigBufferFloat64
  ApplType                               Application data type.
  BitLength                              Bit length of the signal or group signal.
  BitPosition                            Little endian bit position of the signal or group signal within the I-PDU.
  BufferIdx                              the index of the 0:1 relation pointing to Com_RxSigBufferUInt8,Com_RxSigBufferUInt16,Com_RxSigBufferUInt32,Com_RxSigBufferUInt64,Com_RxSigBufferZeroBit,Com_RxSigBufferSInt8,Com_RxSigBufferSInt16,Com_RxSigBufferSInt32,Com_RxSigBufferSInt64,Com_RxSigBufferFloat32,Com_RxSigBufferFloat64
  BusAcc                                 BUS access algorithm for signal or group signal packing / un-packing.
  ByteLength                             Byte length of the signal or group signal.
  BytePosition                           Little endian byte position of the signal or group signal within the I-PDU.
  InitValueIdx                           the index of the 0:1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
  RxPduInfoIdx                           the index of the 1:1 relation pointing to Com_RxPduInfo
  RxSigBufferArrayBasedBufferEndIdx      the end index of the 0:n relation pointing to Com_RxSigBufferArrayBased
  RxSigBufferArrayBasedBufferStartIdx    the start index of the 0:n relation pointing to Com_RxSigBufferArrayBased
  ShdBufferIdx                           the index of the 0:1 relation pointing to Com_RxSigBufferUInt8,Com_RxSigBufferUInt16,Com_RxSigBufferUInt32,Com_RxSigBufferUInt64,Com_RxSigBufferZeroBit,Com_RxSigBufferSInt8,Com_RxSigBufferSInt16,Com_RxSigBufferSInt32,Com_RxSigBufferSInt64,Com_RxSigBufferFloat32,Com_RxSigBufferFloat64
  StartByteInPduPosition                 Start Byte position of the signal or group signal within the I-PDU.
  TmpBufferIdx                           the index of the 0:1 relation pointing to Com_TmpRxShdBufferUInt8,Com_TmpRxShdBufferUInt16,Com_TmpRxShdBufferUInt32,Com_TmpRxShdBufferUInt64,Com_TmpRxShdBufferSInt8,Com_TmpRxShdBufferSInt16,Com_TmpRxShdBufferSInt32,Com_TmpRxShdBufferSInt64,Com_TmpRxShdBufferFloat32,Com_TmpRxShdBufferFloat64
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxAccessInfoType, COM_CONST) Com_RxAccessInfo[91] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    InitValueUsed  RxSigBufferArrayBasedBufferUsed  ShdBufferUsed  ApplType                            BitLength  BitPosition  BufferIdx                       BusAcc                                 ByteLength  BytePosition  InitValueIdx                       RxPduInfoIdx  RxSigBufferArrayBasedBufferEndIdx                       RxSigBufferArrayBasedBufferStartIdx                       ShdBufferIdx                       StartByteInPduPosition  TmpBufferIdx                             Referable Keys */
  { /*     0 */         FALSE,                            TRUE,         FALSE, COM_UINT8_N_APPLTYPEOFRXACCESSINFO,       48u,          0u, COM_NO_BUFFERIDXOFRXACCESSINFO,  COM_ARRAY_BASED_BUSACCOFRXACCESSINFO,         6u,           0u, COM_NO_INITVALUEIDXOFRXACCESSINFO,          14u,                                                     6u,                                                       0u, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     0u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_db9c2837_Rx, /ActiveEcuC/Com/ComConfig/PropulsionCAN_33157db4_Rx] */
  { /*     1 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          8u,                             0u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           1u,                               10u,          15u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                1u,                     1u,                                0u },  /* [/ActiveEcuC/Com/ComConfig/igCrashStsSafe_0a09c5f2_Rx/isCrashStsSafeChks_42d0b327_Rx, /ActiveEcuC/Com/ComConfig/SrsPropSignalIPdu02_4fa2d123_Rx, /ActiveEcuC/Com/ComConfig/igCrashStsSafe_0a09c5f2_Rx] */
  { /*     2 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,          0u,                             2u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           0u,                                9u,          15u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                3u,                     0u,                                1u },  /* [/ActiveEcuC/Com/ComConfig/igCrashStsSafe_0a09c5f2_Rx/isCrashStsSafeCntr_fc00f19d_Rx, /ActiveEcuC/Com/ComConfig/SrsPropSignalIPdu02_4fa2d123_Rx, /ActiveEcuC/Com/ComConfig/igCrashStsSafe_0a09c5f2_Rx] */
  { /*     3 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,          4u,                             4u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           0u,                                9u,          15u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                5u,                     0u,                                2u },  /* [/ActiveEcuC/Com/ComConfig/igCrashStsSafe_0a09c5f2_Rx/isCrashStsSafeSts_847c5d07_Rx, /ActiveEcuC/Com/ComConfig/SrsPropSignalIPdu02_4fa2d123_Rx, /ActiveEcuC/Com/ComConfig/igCrashStsSafe_0a09c5f2_Rx] */
  { /*     4 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         32u,                             6u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           4u,                                9u,          12u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                7u,                     4u,                                0u },  /* [/ActiveEcuC/Com/ComConfig/igEngSt1WdSts_adcf75d2_Rx/isEngSt1WdStsChks_75cf5b53_Rx, /ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu24_8dedad9f_Rx, /ActiveEcuC/Com/ComConfig/igEngSt1WdSts_adcf75d2_Rx] */
  { /*     5 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,         44u,                             8u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           5u,                                9u,          12u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                9u,                     5u,                                1u },  /* [/ActiveEcuC/Com/ComConfig/igEngSt1WdSts_adcf75d2_Rx/isEngSt1WdStsCntr_cb1f19e9_Rx, /ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu24_8dedad9f_Rx, /ActiveEcuC/Com/ComConfig/igEngSt1WdSts_adcf75d2_Rx] */
  { /*     6 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,         40u,                            10u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           5u,                                9u,          12u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               11u,                     5u,                                2u },  /* [/ActiveEcuC/Com/ComConfig/igEngSt1WdSts_adcf75d2_Rx/isEngSt1WdStsEngSt1WdSts_21868fa0_Rx, /ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu24_8dedad9f_Rx, /ActiveEcuC/Com/ComConfig/igEngSt1WdSts_adcf75d2_Rx] */
  { /*     7 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          8u,                            12u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           1u,                                9u,          25u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               13u,                     1u,                                1u },  /* [/ActiveEcuC/Com/ComConfig/igEscVariantToDmc_3c205019_Rx/isEscVariantToDmcChks_9a33bac6_Rx, /ActiveEcuC/Com/ComConfig/VddmBcmPropdTCSignalIPDU01_886bd56f_Rx, /ActiveEcuC/Com/ComConfig/igEscVariantToDmc_3c205019_Rx] */
  { /*     8 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,          0u,                            14u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           0u,                                9u,          25u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               15u,                     0u,                                2u },  /* [/ActiveEcuC/Com/ComConfig/igEscVariantToDmc_3c205019_Rx/isEscVariantToDmcCntr_24e3f87c_Rx, /ActiveEcuC/Com/ComConfig/VddmBcmPropdTCSignalIPDU01_886bd56f_Rx, /ActiveEcuC/Com/ComConfig/igEscVariantToDmc_3c205019_Rx] */
  { /*     9 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         16u,                            16u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           2u,                                9u,          25u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               17u,                     2u,                                0u },  /* [/ActiveEcuC/Com/ComConfig/igEscVariantToDmc_3c205019_Rx/isEscVariantToDmcEscVariantToDmc_daa2c955_Rx, /ActiveEcuC/Com/ComConfig/VddmBcmPropdTCSignalIPDU01_886bd56f_Rx, /ActiveEcuC/Com/ComConfig/igEscVariantToDmc_3c205019_Rx] */
  { /*    10 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          8u,                            18u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           1u,                                9u,           0u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               19u,                     1u,                                1u },  /* [/ActiveEcuC/Com/ComConfig/igHvSysRlySts_760c5326_Rx/isHvSysRlyStsChks_b1dd6f20_Rx, /ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu01_7a983997_Rx, /ActiveEcuC/Com/ComConfig/igHvSysRlySts_760c5326_Rx] */
  { /*    11 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,          0u,                            20u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           0u,                                9u,           0u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               21u,                     0u,                                2u },  /* [/ActiveEcuC/Com/ComConfig/igHvSysRlySts_760c5326_Rx/isHvSysRlyStsCntr_0f0d2d9a_Rx, /ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu01_7a983997_Rx, /ActiveEcuC/Com/ComConfig/igHvSysRlySts_760c5326_Rx] */
  { /*    12 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,          4u,                            22u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           0u,                                4u,           0u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               23u,                     0u,                                0u },  /* [/ActiveEcuC/Com/ComConfig/igHvSysRlySts_760c5326_Rx/isHvSysRlyStsHvSysRlySts_5b219bea_Rx, /ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu01_7a983997_Rx, /ActiveEcuC/Com/ComConfig/igHvSysRlySts_760c5326_Rx] */
  { /*    13 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          8u,                            24u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           1u,                                9u,          20u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               25u,                     1u,                                2u },  /* [/ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq0_9c0677f3_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU16_69df6d31_Rx, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx] */
  { /*    14 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         16u,                            26u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           2u,                                9u,          20u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               27u,                     2u,                                4u },  /* [/ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq1_eb014765_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU16_69df6d31_Rx, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx] */
  { /*    15 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         24u,                            28u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           3u,                                9u,          20u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               29u,                     3u,                                7u },  /* [/ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq2_720816df_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU16_69df6d31_Rx, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx] */
  { /*    16 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         32u,                            30u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           4u,                                9u,          20u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               31u,                     4u,                                6u },  /* [/ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq3_050f2649_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU16_69df6d31_Rx, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx] */
  { /*    17 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         40u,                            32u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           5u,                                9u,          20u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               33u,                     5u,                                0u },  /* [/ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq4_9b6bb3ea_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU16_69df6d31_Rx, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx] */
  { /*    18 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         48u,                            34u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           6u,                                9u,          20u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               35u,                     6u,                                3u },  /* [/ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq5_ec6c837c_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU16_69df6d31_Rx, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx] */
  { /*    19 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         56u,                            36u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           7u,                                9u,          20u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               37u,                     7u,                                5u },  /* [/ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq6_7565d2c6_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU16_69df6d31_Rx, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx] */
  { /*    20 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,          0u,                            38u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           0u,                                9u,          20u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               39u,                     0u,                                1u },  /* [/ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngMgrCmdTar1_817e486b_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU16_69df6d31_Rx, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx] */
  { /*    21 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         24u,                            40u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           3u,                                9u,          18u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               41u,                     3u,                                1u },  /* [/ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx/isPtTqAtAxleMaxReqChks_6ad4cf82_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU08_977c7177_Rx, /ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx] */
  { /*    22 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,         16u,                            42u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,                                9u,          18u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               43u,                     2u,                                0u },  /* [/ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx/isPtTqAtAxleMaxReqCntr_d4048d38_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU08_977c7177_Rx, /ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx] */
  { /*    23 */          TRUE,                           FALSE,          TRUE,  COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,         40u,                             0u,     COM_NBYTE_SW_BUSACCOFRXACCESSINFO,         2u,           5u,                                0u,          18u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                1u,                     4u,                                1u },  /* [/ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx/isPtTqAtAxleMaxReqPtTqAtAxleFrntReq_8c330c00_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU08_977c7177_Rx, /ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx] */
  { /*    24 */          TRUE,                           FALSE,          TRUE,  COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,         56u,                             2u,     COM_NBYTE_SW_BUSACCOFRXACCESSINFO,         2u,           7u,                                0u,          18u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                3u,                     6u,                                0u },  /* [/ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx/isPtTqAtAxleMaxReqPtTqAtAxleReReq_449843f2_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU08_977c7177_Rx, /ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx] */
  { /*    25 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          8u,                            44u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           1u,                                9u,          24u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               45u,                     1u,                                1u },  /* [/ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcChks_7f830d10_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropdTCSignalIPdu38_808bfd3f_Rx, /ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx] */
  { /*    26 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,          0u,                            46u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           0u,                                9u,          24u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               47u,                     0u,                                3u },  /* [/ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcCntr_c1534faa_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropdTCSignalIPdu38_808bfd3f_Rx, /ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx] */
  { /*    27 */          TRUE,                           FALSE,          TRUE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       16u,         24u,                             0u,     COM_NBYTE_SW_BUSACCOFRXACCESSINFO,         2u,           3u,                                3u,          24u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                1u,                     2u,                                0u },  /* [/ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcEngRotTarSpdDMCFrnt_46c9d05b_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropdTCSignalIPdu38_808bfd3f_Rx, /ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx] */
  { /*    28 */          TRUE,                           FALSE,          TRUE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       16u,         40u,                             2u,     COM_NBYTE_SW_BUSACCOFRXACCESSINFO,         2u,           5u,                                3u,          24u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                3u,                     4u,                                1u },  /* [/ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcEngRotTarSpdDMCRear_ee201c9c_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropdTCSignalIPdu38_808bfd3f_Rx, /ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx] */
  { /*    29 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         48u,                            48u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           6u,                                9u,          24u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               49u,                     6u,                                2u },  /* [/ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcFrnt_baffba62_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropdTCSignalIPdu38_808bfd3f_Rx, /ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx] */
  { /*    30 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         56u,                            50u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           7u,                                9u,          24u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               51u,                     7u,                                0u },  /* [/ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcRear_121676a5_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropdTCSignalIPdu38_808bfd3f_Rx, /ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx] */
  { /*    31 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,          0u,                            52u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           0u,                                7u,          23u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               53u,                     0u,                                0u },  /* [/ActiveEcuC/Com/ComConfig/igVehBattU_0a2a47a4_Rx/isVehBattUSysUQf_f605b03a_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU19_f96070a0_Rx, /ActiveEcuC/Com/ComConfig/igVehBattU_0a2a47a4_Rx] */
  { /*    32 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          8u,                            54u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           1u,                                9u,          23u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               55u,                     1u,                                1u },  /* [/ActiveEcuC/Com/ComConfig/igVehBattU_0a2a47a4_Rx/isVehBattUSysU_9501cb8f_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU19_f96070a0_Rx, /ActiveEcuC/Com/ComConfig/igVehBattU_0a2a47a4_Rx] */
  { /*    33 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          0u,                            56u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           0u,                                9u,          26u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               57u,                     0u,                                0u },  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtBlkIDBytePosn1_6585aabf_Rx, /ActiveEcuC/Com/ComConfig/VddmPropSignalIPdu26_8fec2bf2_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx] */
  { /*    34 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          8u,                            58u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           1u,                                9u,          26u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               59u,                     1u,                                2u },  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn2_e7ede43f_Rx, /ActiveEcuC/Com/ComConfig/VddmPropSignalIPdu26_8fec2bf2_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx] */
  { /*    35 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         16u,                            60u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           2u,                                9u,          26u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               61u,                     2u,                                1u },  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn3_90ead4a9_Rx, /ActiveEcuC/Com/ComConfig/VddmPropSignalIPdu26_8fec2bf2_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx] */
  { /*    36 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         24u,                            62u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           3u,                                9u,          26u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               63u,                     3u,                                5u },  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn4_0e8e410a_Rx, /ActiveEcuC/Com/ComConfig/VddmPropSignalIPdu26_8fec2bf2_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx] */
  { /*    37 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         32u,                            64u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           4u,                                9u,          26u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               65u,                     4u,                                3u },  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn5_7989719c_Rx, /ActiveEcuC/Com/ComConfig/VddmPropSignalIPdu26_8fec2bf2_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx] */
  { /*    38 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         40u,                            66u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           5u,                                9u,          26u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               67u,                     5u,                                4u },  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn6_e0802026_Rx, /ActiveEcuC/Com/ComConfig/VddmPropSignalIPdu26_8fec2bf2_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx] */
  { /*    39 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         48u,                            68u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           6u,                                9u,          26u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               69u,                     6u,                                6u },  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn7_978710b0_Rx, /ActiveEcuC/Com/ComConfig/VddmPropSignalIPdu26_8fec2bf2_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx] */
  { /*    40 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         56u,                            70u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           7u,                                9u,          26u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               71u,                     7u,                                7u },  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn8_07380d21_Rx, /ActiveEcuC/Com/ComConfig/VddmPropSignalIPdu26_8fec2bf2_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx] */
  { /*    41 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          0u,                            72u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           0u,                                9u,          17u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               73u,                     0u,                                4u },  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmBlkIDBytePosn1_16ee2fa8_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU06_70c45c70_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx] */
  { /*    42 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          8u,                            74u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           1u,                                9u,          17u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               75u,                     1u,                                5u },  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn2_c9255841_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU06_70c45c70_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx] */
  { /*    43 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         16u,                            76u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           2u,                                9u,          17u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               77u,                     2u,                                3u },  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn3_be2268d7_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU06_70c45c70_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx] */
  { /*    44 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         24u,                            78u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           3u,                                9u,          17u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               79u,                     3u,                                2u },  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn4_2046fd74_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU06_70c45c70_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx] */
  { /*    45 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         32u,                            80u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           4u,                                9u,          17u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               81u,                     4u,                                1u },  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn5_5741cde2_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU06_70c45c70_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx] */
  { /*    46 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         40u,                            82u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           5u,                                9u,          17u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               83u,                     5u,                                6u },  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn6_ce489c58_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU06_70c45c70_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx] */
  { /*    47 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         48u,                            84u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           6u,                                9u,          17u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               85u,                     6u,                                7u },  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn7_b94facce_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU06_70c45c70_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx] */
  { /*    48 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         56u,                            86u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           7u,                                9u,          17u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               87u,                     7u,                                0u },  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn8_29f0b15f_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU06_70c45c70_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx] */
  { /*    49 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        3u,         37u,                            88u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           4u,                                9u,          22u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               89u,                     4u,                                7u },  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1CarModSts1_a7324f03_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx] */
    /* Index    InitValueUsed  RxSigBufferArrayBasedBufferUsed  ShdBufferUsed  ApplType                            BitLength  BitPosition  BufferIdx                       BusAcc                                 ByteLength  BytePosition  InitValueIdx                       RxPduInfoIdx  RxSigBufferArrayBasedBufferEndIdx                       RxSigBufferArrayBasedBufferStartIdx                       ShdBufferIdx                       StartByteInPduPosition  TmpBufferIdx                             Referable Keys */
  { /*    50 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        3u,         34u,                            90u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           4u,                                9u,          22u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               91u,                     4u,                                3u },  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1CarModSubtypWdCarModSubtyp_e21ae44e_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx] */
  { /*    51 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          0u,                            92u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           0u,                                9u,          22u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               93u,                     0u,                                5u },  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1Chks_5333fc0b_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx] */
  { /*    52 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,         12u,                            94u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           1u,                                9u,          22u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               95u,                     1u,                                1u },  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1Cntr_ede3beb1_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx] */
  { /*    53 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,         24u,                            96u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           3u,                                9u,          22u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               97u,                     3u,                                0u },  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1EgyLvlElecMai_47690dfe_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx] */
  { /*    54 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,         28u,                            98u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           3u,                                9u,          22u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                               99u,                     3u,                                8u },  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1EgyLvlElecSubtyp_47668699_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx] */
  { /*    55 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,         33u,                           100u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           4u,                                9u,          22u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                              101u,                     4u,                                9u },  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1FltEgyCnsWdSts_c45a6bde_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx] */
  { /*    56 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,         16u,                           102u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,                                9u,          22u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                              103u,                     2u,                                4u },  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1PwrLvlElecMai_c178728f_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx] */
  { /*    57 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,         20u,                           104u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,                                9u,          22u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                              105u,                     2u,                                6u },  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1PwrLvlElecSubtyp_d042c1b3_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx] */
  { /*    58 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,          8u,                           106u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           1u,                                7u,          22u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                              107u,                     1u,                                2u },  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1UsgModSts_8ea1ac37_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx] */
  { /*    59 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         24u,                           108u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           3u,                                9u,          16u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                              109u,                     3u,                                0u },  /* [/ActiveEcuC/Com/ComConfig/igVehMtnSt_68a0f345_Rx/isVehMtnStChks_46ae48d7_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU05_e9cd0dca_Rx, /ActiveEcuC/Com/ComConfig/igVehMtnSt_68a0f345_Rx] */
  { /*    60 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,         19u,                           110u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,                                9u,          16u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                              111u,                     2u,                                2u },  /* [/ActiveEcuC/Com/ComConfig/igVehMtnSt_68a0f345_Rx/isVehMtnStCntr_f87e0a6d_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU05_e9cd0dca_Rx, /ActiveEcuC/Com/ComConfig/igVehMtnSt_68a0f345_Rx] */
  { /*    61 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        3u,         16u,                           112u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,                                9u,          16u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                              113u,                     2u,                                1u },  /* [/ActiveEcuC/Com/ComConfig/igVehMtnSt_68a0f345_Rx/isVehMtnStVehMtnSt_e696b713_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU05_e9cd0dca_Rx, /ActiveEcuC/Com/ComConfig/igVehMtnSt_68a0f345_Rx] */
  { /*    62 */          TRUE,                           FALSE,          TRUE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       15u,         40u,                             4u, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1u,           5u,                                3u,          16u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                5u,                     4u,                                0u },  /* [/ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx/isVehSpdLgtA_668ad5e3_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU05_e9cd0dca_Rx, /ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx] */
  { /*    63 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         48u,                           114u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           6u,                                9u,          16u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                              115u,                     6u,                                2u },  /* [/ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx/isVehSpdLgtChks_060f2c10_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU05_e9cd0dca_Rx, /ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx] */
  { /*    64 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,         60u,                           116u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           7u,                                9u,          16u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                              117u,                     7u,                                1u },  /* [/ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx/isVehSpdLgtCntr_b8df6eaa_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU05_e9cd0dca_Rx, /ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx] */
  { /*    65 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,         58u,                           118u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           7u,                                7u,          16u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                              119u,                     7u,                                0u },  /* [/ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx/isVehSpdLgtQf_057400a6_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU05_e9cd0dca_Rx, /ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx] */
  { /*    66 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          8u,                           120u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           1u,                                9u,           7u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                              121u,                     1u,                                2u },  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysTqAllwd_20f5846f_Rx/isWhlMotSysTqAllwdChks_5c573be4_Rx, /ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU05_23469c9f_Rx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqAllwd_20f5846f_Rx] */
  { /*    67 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,          0u,                           122u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           0u,                                9u,           7u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                              123u,                     0u,                                1u },  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysTqAllwd_20f5846f_Rx/isWhlMotSysTqAllwdCntr_e287795e_Rx, /ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU05_23469c9f_Rx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqAllwd_20f5846f_Rx] */
  { /*    68 */          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,          4u,                           124u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           0u,                                9u,           7u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                              125u,                     0u,                                0u },  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysTqAllwd_20f5846f_Rx/isWhlMotSysTqAllwdWhlMotSysTqAllwd_0ecd7abd_Rx, /ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU05_23469c9f_Rx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqAllwd_20f5846f_Rx] */
  { /*    69 */          TRUE,                           FALSE,         FALSE,  COM_UINT32_APPLTYPEOFRXACCESSINFO,       21u,         32u,                             0u, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         2u,           4u,                                0u,          23u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     2u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/isBkpOfDstTrvld_1c9ea633_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU19_f96070a0_Rx] */
  { /*    70 */          TRUE,                           FALSE,         FALSE,  COM_UINT32_APPLTYPEOFRXACCESSINFO,       32u,         24u,                             1u,     COM_NBYTE_SW_BUSACCOFRXACCESSINFO,         4u,           3u,                                0u,          21u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     0u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/isCarTiGlb_7a3bdc75_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU17_1ed85da7_Rx] */
  { /*    71 */          TRUE,                           FALSE,         FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,        9u,         49u,                             6u, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1u,           6u,                                3u,          10u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     5u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/isCooltFlowForDtElec_89c7c93c_Rx, /ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU11_4ed5e30d_Rx] */
  { /*    72 */          TRUE,                           FALSE,         FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       11u,         45u,                             7u, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1u,           5u,                                2u,          10u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     4u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/isCooltTSigForDtElec_f43a3873_Rx, /ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU11_4ed5e30d_Rx] */
  { /*    73 */          TRUE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        3u,         21u,                           126u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,                                9u,           3u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     2u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/isDCChrgnHndlSts_7439a8f3_Rx, /ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu15_64eecccf_Rx] */
  { /*    74 */          TRUE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,          5u,                           127u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           0u,                                9u,          13u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     0u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/isDrvgCyc_edb7d721_Rx, /ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu25_faea9d09_Rx] */
  { /*    75 */          TRUE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        3u,         25u,                           128u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           3u,                                0u,          12u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     3u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/isGearLvrIndcn_bb4b951e_Rx, /ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu24_8dedad9f_Rx] */
  { /*    76 */          TRUE,                           FALSE,         FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       11u,         53u,                             8u, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1u,           6u,                                3u,           2u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     5u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/isHvBattSoc_ce242c3f_Rx, /ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu03_949658bb_Rx] */
  { /*    77 */          TRUE,                           FALSE,         FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       11u,         24u,                             9u, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1u,           3u,                                3u,           0u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     2u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/isHvBattUDc_bcd9ade4_Rx, /ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu01_7a983997_Rx] */
  { /*    78 */          TRUE,                           FALSE,         FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       11u,         40u,                            10u, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1u,           5u,                                3u,           0u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     4u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/isHvBattUDynMaxLim_6d11df88_Rx, /ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu01_7a983997_Rx] */
  { /*    79 */          TRUE,                           FALSE,         FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       11u,         32u,                            11u, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1u,           4u,                                3u,           1u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     3u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/isHvBattUDynMinLim_28139c0a_Rx, /ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu02_e391682d_Rx] */
  { /*    80 */          TRUE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,         16u,                           129u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,                                1u,           4u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     2u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/isOnBdChrgrHndlSts1_677311c9_Rx, /ActiveEcuC/Com/ComConfig/CddObcPropSignalIPdu01_003f0830_Rx] */
  { /*    81 */          TRUE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,         52u,                           130u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           6u,                                9u,           8u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     6u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/isPLockParkReq_5b6f1b96_Rx, /ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU06_ba4fcd25_Rx] */
  { /*    82 */          TRUE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,         19u,                           131u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,                                9u,           9u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     2u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/isPrpsnFbLimnIndcn_5674da6b_Rx, /ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU08_2e126ae8_Rx] */
  { /*    83 */          TRUE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,         10u,                           132u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           1u,                                4u,          11u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     1u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/isRearHeatModEnad_a110df41_Rx, /ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU28_1c24086a_Rx] */
  { /*    84 */          TRUE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         16u,                           133u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           2u,                                9u,          11u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     2u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/isRearHeatPwrAllwd_c919804a_Rx, /ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU28_1c24086a_Rx] */
  { /*    85 */          TRUE,                           FALSE,         FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       15u,         40u,                            12u, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1u,           5u,                                3u,          19u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     4u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/isSpdRotlForWhlsAtAxleRe_cda9e459_Rx, /ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU11_f7bbf892_Rx] */
  { /*    86 */          TRUE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,         49u,                           134u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           6u,                                9u,           8u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     6u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/isWhlMotSysActvDampgModReq_1c578291_Rx, /ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU06_ba4fcd25_Rx] */
  { /*    87 */          TRUE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        3u,         56u,                           135u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           7u,                                9u,           5u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     7u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/isWhlMotSysModReq_0153ebfe_Rx, /ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU02_bd22093c_Rx] */
  { /*    88 */          TRUE,                           FALSE,         FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       10u,         48u,                            13u, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1u,           6u,                                3u,           6u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     5u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/isWhlMotSysPwrLimMax_45b5505a_Rx, /ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU04_5441ac09_Rx] */
  { /*    89 */          TRUE,                           FALSE,         FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       10u,         30u,                            14u, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1u,           3u,                                1u,           8u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     2u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/isWhlMotSysPwrLimMin_79b86f03_Rx, /ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU06_ba4fcd25_Rx] */
  { /*    90 */          TRUE,                           FALSE,         FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       12u,         16u,                            15u, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1u,           2u,                                0u,          12u, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     1u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO }   /* [/ActiveEcuC/Com/ComConfig/isWhlMotSysTqReq_f0fdb022_Rx, /ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu24_8dedad9f_Rx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxAccessInfoInd
**********************************************************************************************************************/
/** 
  \var    Com_RxAccessInfoInd
  \brief  the indexes of the 1:1 sorted relation pointing to Com_RxAccessInfo
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxAccessInfoIndType, COM_CONST) Com_RxAccessInfoInd[91] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     RxAccessInfoInd      Referable Keys */
  /*     0 */              10u,  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu01_7a983997_Rx] */
  /*     1 */              11u,  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu01_7a983997_Rx] */
  /*     2 */              12u,  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu01_7a983997_Rx] */
  /*     3 */              77u,  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu01_7a983997_Rx] */
  /*     4 */              78u,  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu01_7a983997_Rx] */
  /*     5 */              79u,  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu02_e391682d_Rx] */
  /*     6 */              76u,  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu03_949658bb_Rx] */
  /*     7 */              73u,  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu15_64eecccf_Rx] */
  /*     8 */              80u,  /* [/ActiveEcuC/Com/ComConfig/CddObcPropSignalIPdu01_003f0830_Rx] */
  /*     9 */              87u,  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU02_bd22093c_Rx] */
  /*    10 */              88u,  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU04_5441ac09_Rx] */
  /*    11 */              66u,  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU05_23469c9f_Rx] */
  /*    12 */              67u,  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU05_23469c9f_Rx] */
  /*    13 */              68u,  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU05_23469c9f_Rx] */
  /*    14 */              81u,  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU06_ba4fcd25_Rx] */
  /*    15 */              86u,  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU06_ba4fcd25_Rx] */
  /*    16 */              89u,  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU06_ba4fcd25_Rx] */
  /*    17 */              82u,  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU08_2e126ae8_Rx] */
  /*    18 */              71u,  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU11_4ed5e30d_Rx] */
  /*    19 */              72u,  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU11_4ed5e30d_Rx] */
  /*    20 */              83u,  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU28_1c24086a_Rx] */
  /*    21 */              84u,  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU28_1c24086a_Rx] */
  /*    22 */               4u,  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu24_8dedad9f_Rx] */
  /*    23 */               5u,  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu24_8dedad9f_Rx] */
  /*    24 */               6u,  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu24_8dedad9f_Rx] */
  /*    25 */              75u,  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu24_8dedad9f_Rx] */
  /*    26 */              90u,  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu24_8dedad9f_Rx] */
  /*    27 */              74u,  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu25_faea9d09_Rx] */
  /*    28 */               0u,  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_33157db4_Rx] */
  /*    29 */               1u,  /* [/ActiveEcuC/Com/ComConfig/SrsPropSignalIPdu02_4fa2d123_Rx] */
  /*    30 */               2u,  /* [/ActiveEcuC/Com/ComConfig/SrsPropSignalIPdu02_4fa2d123_Rx] */
  /*    31 */               3u,  /* [/ActiveEcuC/Com/ComConfig/SrsPropSignalIPdu02_4fa2d123_Rx] */
  /*    32 */              59u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU05_e9cd0dca_Rx] */
  /*    33 */              60u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU05_e9cd0dca_Rx] */
  /*    34 */              61u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU05_e9cd0dca_Rx] */
  /*    35 */              62u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU05_e9cd0dca_Rx] */
  /*    36 */              63u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU05_e9cd0dca_Rx] */
  /*    37 */              64u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU05_e9cd0dca_Rx] */
  /*    38 */              65u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU05_e9cd0dca_Rx] */
  /*    39 */              41u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU06_70c45c70_Rx] */
  /*    40 */              42u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU06_70c45c70_Rx] */
  /*    41 */              43u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU06_70c45c70_Rx] */
  /*    42 */              44u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU06_70c45c70_Rx] */
  /*    43 */              45u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU06_70c45c70_Rx] */
  /*    44 */              46u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU06_70c45c70_Rx] */
  /*    45 */              47u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU06_70c45c70_Rx] */
  /*    46 */              48u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU06_70c45c70_Rx] */
  /*    47 */              21u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU08_977c7177_Rx] */
  /*    48 */              22u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU08_977c7177_Rx] */
  /*    49 */              23u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU08_977c7177_Rx] */
  /* Index     RxAccessInfoInd      Referable Keys */
  /*    50 */              24u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU08_977c7177_Rx] */
  /*    51 */              85u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU11_f7bbf892_Rx] */
  /*    52 */              13u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU16_69df6d31_Rx] */
  /*    53 */              14u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU16_69df6d31_Rx] */
  /*    54 */              15u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU16_69df6d31_Rx] */
  /*    55 */              16u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU16_69df6d31_Rx] */
  /*    56 */              17u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU16_69df6d31_Rx] */
  /*    57 */              18u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU16_69df6d31_Rx] */
  /*    58 */              19u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU16_69df6d31_Rx] */
  /*    59 */              20u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU16_69df6d31_Rx] */
  /*    60 */              70u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU17_1ed85da7_Rx] */
  /*    61 */              49u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx] */
  /*    62 */              50u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx] */
  /*    63 */              51u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx] */
  /*    64 */              52u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx] */
  /*    65 */              53u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx] */
  /*    66 */              54u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx] */
  /*    67 */              55u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx] */
  /*    68 */              56u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx] */
  /*    69 */              57u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx] */
  /*    70 */              58u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx] */
  /*    71 */              31u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU19_f96070a0_Rx] */
  /*    72 */              32u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU19_f96070a0_Rx] */
  /*    73 */              69u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU19_f96070a0_Rx] */
  /*    74 */              25u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropdTCSignalIPdu38_808bfd3f_Rx] */
  /*    75 */              26u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropdTCSignalIPdu38_808bfd3f_Rx] */
  /*    76 */              27u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropdTCSignalIPdu38_808bfd3f_Rx] */
  /*    77 */              28u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropdTCSignalIPdu38_808bfd3f_Rx] */
  /*    78 */              29u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropdTCSignalIPdu38_808bfd3f_Rx] */
  /*    79 */              30u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropdTCSignalIPdu38_808bfd3f_Rx] */
  /*    80 */               7u,  /* [/ActiveEcuC/Com/ComConfig/VddmBcmPropdTCSignalIPDU01_886bd56f_Rx] */
  /*    81 */               8u,  /* [/ActiveEcuC/Com/ComConfig/VddmBcmPropdTCSignalIPDU01_886bd56f_Rx] */
  /*    82 */               9u,  /* [/ActiveEcuC/Com/ComConfig/VddmBcmPropdTCSignalIPDU01_886bd56f_Rx] */
  /*    83 */              33u,  /* [/ActiveEcuC/Com/ComConfig/VddmPropSignalIPdu26_8fec2bf2_Rx] */
  /*    84 */              34u,  /* [/ActiveEcuC/Com/ComConfig/VddmPropSignalIPdu26_8fec2bf2_Rx] */
  /*    85 */              35u,  /* [/ActiveEcuC/Com/ComConfig/VddmPropSignalIPdu26_8fec2bf2_Rx] */
  /*    86 */              36u,  /* [/ActiveEcuC/Com/ComConfig/VddmPropSignalIPdu26_8fec2bf2_Rx] */
  /*    87 */              37u,  /* [/ActiveEcuC/Com/ComConfig/VddmPropSignalIPdu26_8fec2bf2_Rx] */
  /*    88 */              38u,  /* [/ActiveEcuC/Com/ComConfig/VddmPropSignalIPdu26_8fec2bf2_Rx] */
  /*    89 */              39u,  /* [/ActiveEcuC/Com/ComConfig/VddmPropSignalIPdu26_8fec2bf2_Rx] */
  /*    90 */              40u   /* [/ActiveEcuC/Com/ComConfig/VddmPropSignalIPdu26_8fec2bf2_Rx] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxCbkFuncPtr
**********************************************************************************************************************/
/** 
  \var    Com_RxCbkFuncPtr
  \brief  Function pointer table containing configured notification and invalid notifications function pointer for signals and signal groups.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(ComRxCbkType, COM_CONST) Com_RxCbkFuncPtr[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     RxCbkFuncPtr                               Referable Keys */
  /*     0 */ ComM_ComCbk_PropulsionCAN_db9c2837_Rx    /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_db9c2837_RxAck] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxPduInfo
  \brief  Contains all relevant common information for Rx I-PDUs.
  \details
  Element                    Description
  RxAccessInfoIndUsed        TRUE, if the 0:n relation has 1 relation pointing to Com_RxAccessInfoInd
  PduGrpVectorEndIdx         the end index of the 0:n relation pointing to Com_PduGrpVector
  PduGrpVectorStartIdx       the start index of the 0:n relation pointing to Com_PduGrpVector
  RxAccessInfoIndEndIdx      the end index of the 0:n relation pointing to Com_RxAccessInfoInd
  RxAccessInfoIndStartIdx    the start index of the 0:n relation pointing to Com_RxAccessInfoInd
  RxDefPduBufferEndIdx       the end index of the 0:n relation pointing to Com_RxDefPduBuffer
  RxDefPduBufferStartIdx     the start index of the 0:n relation pointing to Com_RxDefPduBuffer
  RxSigGrpInfoIndEndIdx      the end index of the 0:n relation pointing to Com_RxSigGrpInfoInd
  RxSigGrpInfoIndStartIdx    the start index of the 0:n relation pointing to Com_RxSigGrpInfoInd
  RxSigInfoEndIdx            the end index of the 0:n relation pointing to Com_RxSigInfo
  RxSigInfoStartIdx          the start index of the 0:n relation pointing to Com_RxSigInfo
  Type                       Defines whether rx Pdu is a NORMAL or TP IPdu.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxPduInfoType, COM_CONST) Com_RxPduInfo[27] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RxAccessInfoIndUsed  PduGrpVectorEndIdx                    PduGrpVectorStartIdx                    RxAccessInfoIndEndIdx  RxAccessInfoIndStartIdx  RxDefPduBufferEndIdx  RxDefPduBufferStartIdx  RxSigGrpInfoIndEndIdx                    RxSigGrpInfoIndStartIdx                    RxSigInfoEndIdx                    RxSigInfoStartIdx                    Type                              Referable Keys */
  { /*     0 */                TRUE,                                  17u,                                    15u,                    5u,                      0u,                   8u,                     0u,                                      1u,                                        0u,                                2u,                                  0u, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu01_7a983997_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC35_97da5486, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC39_9e6c18ad, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC30_e7b0a009, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC24_f9c65551, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC25_8ec165c7] */
  { /*     1 */                TRUE,                                  17u,                                    15u,                    6u,                      5u,                  16u,                     8u, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                                3u,                                  2u, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu02_e391682d_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC35_97da5486, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC39_9e6c18ad, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC30_e7b0a009, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC24_f9c65551, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC25_8ec165c7] */
  { /*     2 */                TRUE,                                  17u,                                    15u,                    7u,                      6u,                  24u,                    16u, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                                4u,                                  3u, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu03_949658bb_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC35_97da5486, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC39_9e6c18ad, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC30_e7b0a009, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC24_f9c65551, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC25_8ec165c7] */
  { /*     3 */                TRUE,                                  17u,                                    15u,                    8u,                      7u,                  32u,                    24u, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                                5u,                                  4u, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu15_64eecccf_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC35_97da5486, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC39_9e6c18ad, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC30_e7b0a009, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC24_f9c65551, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC25_8ec165c7] */
  { /*     4 */                TRUE,                                   4u,                                     3u,                    9u,                      8u,                  40u,                    32u, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                                6u,                                  5u, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/CddObcPropSignalIPdu01_003f0830_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC30_e7b0a009, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC24_f9c65551, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC27_60cf04eb, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC25_8ec165c7] */
  { /*     5 */                TRUE,                                  12u,                                    11u,                   10u,                      9u,                  48u,                    40u, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                                7u,                                  6u, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU02_bd22093c_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC24_f9c65551, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC25_8ec165c7] */
  { /*     6 */                TRUE,                                  12u,                                    11u,                   11u,                     10u,                  56u,                    48u, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                                8u,                                  7u, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU04_5441ac09_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC24_f9c65551, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC25_8ec165c7] */
  { /*     7 */                TRUE,                                  12u,                                    11u,                   14u,                     11u,                  64u,                    56u,                                      2u,                                        1u, COM_NO_RXSIGINFOENDIDXOFRXPDUINFO, COM_NO_RXSIGINFOSTARTIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU05_23469c9f_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC24_f9c65551, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC25_8ec165c7] */
  { /*     8 */                TRUE,                                  12u,                                    11u,                   17u,                     14u,                  72u,                    64u, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                               11u,                                  8u, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU06_ba4fcd25_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC24_f9c65551, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC25_8ec165c7] */
  { /*     9 */                TRUE,                                   3u,                                     2u,                   18u,                     17u,                  80u,                    72u, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                               12u,                                 11u, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU08_2e126ae8_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC35_97da5486, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC24_f9c65551, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC25_8ec165c7] */
  { /*    10 */                TRUE,                                  15u,                                    13u,                   20u,                     18u,                  88u,                    80u, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                               14u,                                 12u, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU11_4ed5e30d_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC35_97da5486, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC39_9e6c18ad, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec] */
  { /*    11 */                TRUE,                                   2u,                                     1u,                   22u,                     20u,                  96u,                    88u, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                               16u,                                 14u, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU28_1c24086a_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec] */
  { /*    12 */                TRUE,                                  12u,                                    11u,                   27u,                     22u,                 104u,                    96u,                                      3u,                                        2u,                               18u,                                 16u, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu24_8dedad9f_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC24_f9c65551, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC25_8ec165c7] */
  { /*    13 */                TRUE,                                  13u,                                    11u,                   28u,                     27u,                 112u,                   104u, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                               19u,                                 18u, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu25_faea9d09_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC39_9e6c18ad, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC24_f9c65551, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC25_8ec165c7] */
  { /*    14 */                TRUE, COM_NO_PDUGRPVECTORENDIDXOFRXPDUINFO, COM_NO_PDUGRPVECTORSTARTIDXOFRXPDUINFO,                   29u,                     28u,                 118u,                   112u, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                               20u,                                 19u, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_33157db4_Rx] */
  { /*    15 */                TRUE,                                   9u,                                     7u,                   32u,                     29u,                 126u,                   118u,                                      4u,                                        3u, COM_NO_RXSIGINFOENDIDXOFRXPDUINFO, COM_NO_RXSIGINFOSTARTIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/SrsPropSignalIPdu02_4fa2d123_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC39_9e6c18ad, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC30_e7b0a009, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec] */
  { /*    16 */                TRUE,                                   8u,                                     7u,                   39u,                     32u,                 134u,                   126u,                                      6u,                                        4u, COM_NO_RXSIGINFOENDIDXOFRXPDUINFO, COM_NO_RXSIGINFOSTARTIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU05_e9cd0dca_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC30_e7b0a009, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec] */
  { /*    17 */                TRUE,                                   7u,                                     5u,                   47u,                     39u,                 142u,                   134u,                                      7u,                                        6u, COM_NO_RXSIGINFOENDIDXOFRXPDUINFO, COM_NO_RXSIGINFOSTARTIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU06_70c45c70_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_fca0cb9e] */
  { /*    18 */                TRUE,                                   6u,                                     4u,                   51u,                     47u,                 150u,                   142u,                                      8u,                                        7u, COM_NO_RXSIGINFOENDIDXOFRXPDUINFO, COM_NO_RXSIGINFOSTARTIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU08_977c7177_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC39_9e6c18ad, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec] */
  { /*    19 */                TRUE,                                   8u,                                     7u,                   52u,                     51u,                 158u,                   150u, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                               21u,                                 20u, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU11_f7bbf892_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC30_e7b0a009, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec] */
  { /*    20 */                TRUE,                                   1u,                                     0u,                   60u,                     52u,                 166u,                   158u,                                      9u,                                        8u, COM_NO_RXSIGINFOENDIDXOFRXPDUINFO, COM_NO_RXSIGINFOSTARTIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU16_69df6d31_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC24_f9c65551, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec] */
  { /*    21 */                TRUE,                                   7u,                                     5u,                   61u,                     60u,                 174u,                   166u, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                               22u,                                 21u, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU17_1ed85da7_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_fca0cb9e] */
  { /*    22 */                TRUE,                                   7u,                                     5u,                   71u,                     61u,                 182u,                   174u,                                     10u,                                        9u, COM_NO_RXSIGINFOENDIDXOFRXPDUINFO, COM_NO_RXSIGINFOSTARTIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_fca0cb9e] */
  { /*    23 */                TRUE,                                   7u,                                     5u,                   74u,                     71u,                 190u,                   182u,                                     11u,                                       10u,                               23u,                                 22u, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU19_f96070a0_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_fca0cb9e] */
  { /*    24 */                TRUE,                                   7u,                                     5u,                   80u,                     74u,                 198u,                   190u,                                     12u,                                       11u, COM_NO_RXSIGINFOENDIDXOFRXPDUINFO, COM_NO_RXSIGINFOSTARTIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/VDDMPropdTCSignalIPdu38_808bfd3f_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_fca0cb9e] */
  { /*    25 */                TRUE,                                   7u,                                     5u,                   83u,                     80u,                 206u,                   198u,                                     13u,                                       12u, COM_NO_RXSIGINFOENDIDXOFRXPDUINFO, COM_NO_RXSIGINFOSTARTIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/VddmBcmPropdTCSignalIPDU01_886bd56f_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_fca0cb9e] */
  { /*    26 */                TRUE,                                   7u,                                     5u,                   91u,                     83u,                 214u,                   206u,                                     14u,                                       13u, COM_NO_RXSIGINFOENDIDXOFRXPDUINFO, COM_NO_RXSIGINFOSTARTIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO }   /* [/ActiveEcuC/Com/ComConfig/VddmPropSignalIPdu26_8fec2bf2_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_fca0cb9e] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigGrpInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxSigGrpInfo
  \brief  Contains all relevant information for Rx signal groups.
  \details
  Element                          Description
  ShdBufferRequired            
  RxAccessInfoGrpSigIndEndIdx      the end index of the 0:n relation pointing to Com_RxAccessInfoGrpSigInd
  RxAccessInfoGrpSigIndStartIdx    the start index of the 0:n relation pointing to Com_RxAccessInfoGrpSigInd
  RxPduInfoIdx                     the index of the 1:1 relation pointing to Com_RxPduInfo
  SignalProcessing             
  StartBytePosition                Least significant byte position of first group signal within the ComIPdu.
  UbIdx                            Byte position of update-bit within the I-PDU. ea:{9B36DD60-EF52-4c12-9FB3-17D39CA664C3}
  UbMaskIdx                        the index of the 0:1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
  ValidDlc                         Minimum length of PDU required to completely receive the signal or signal group.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxSigGrpInfoType, COM_CONST) Com_RxSigGrpInfo[14] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    ShdBufferRequired  RxAccessInfoGrpSigIndEndIdx  RxAccessInfoGrpSigIndStartIdx  RxPduInfoIdx  SignalProcessing                             StartBytePosition  UbIdx                       UbMaskIdx                       ValidDlc        Referable Keys */
  { /*     0 */              TRUE,                          3u,                            0u,          15u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,                0u,                         0u,                             8u,       2u },  /* [/ActiveEcuC/Com/ComConfig/SrsPropSignalIPdu02_4fa2d123_Rx, /ActiveEcuC/Com/ComConfig/igCrashStsSafe_0a09c5f2_Rx] */
  { /*     1 */              TRUE,                          6u,                            3u,          12u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,                4u,                         3u,                             6u,       6u },  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu24_8dedad9f_Rx, /ActiveEcuC/Com/ComConfig/igEngSt1WdSts_adcf75d2_Rx] */
  { /*     2 */              TRUE,                          9u,                            6u,          25u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,                0u,                         0u,                             5u,       3u },  /* [/ActiveEcuC/Com/ComConfig/VddmBcmPropdTCSignalIPDU01_886bd56f_Rx, /ActiveEcuC/Com/ComConfig/igEscVariantToDmc_3c205019_Rx] */
  { /*     3 */              TRUE,                         12u,                            9u,           0u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,                0u,                         2u,                             3u,       2u },  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu01_7a983997_Rx, /ActiveEcuC/Com/ComConfig/igHvSysRlySts_760c5326_Rx] */
  { /*     4 */              TRUE,                         20u,                           12u,          20u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,                0u,                         0u,                             2u,       8u },  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU16_69df6d31_Rx, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx] */
  { /*     5 */              TRUE,                         24u,                           20u,          18u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,                2u,                         2u,                             5u,       8u },  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU08_977c7177_Rx, /ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx] */
  { /*     6 */              TRUE,                         30u,                           24u,          24u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,                0u,                         0u,                             5u,       8u },  /* [/ActiveEcuC/Com/ComConfig/VDDMPropdTCSignalIPdu38_808bfd3f_Rx, /ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx] */
  { /*     7 */              TRUE,                         32u,                           30u,          23u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,                0u,                         0u,                             2u,       2u },  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU19_f96070a0_Rx, /ActiveEcuC/Com/ComConfig/igVehBattU_0a2a47a4_Rx] */
  { /*     8 */              TRUE,                         40u,                           32u,          26u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,                0u, COM_NO_UBIDXOFRXSIGGRPINFO, COM_NO_UBMASKIDXOFRXSIGGRPINFO,       8u },  /* [/ActiveEcuC/Com/ComConfig/VddmPropSignalIPdu26_8fec2bf2_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx] */
  { /*     9 */              TRUE,                         48u,                           40u,          17u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,                0u, COM_NO_UBIDXOFRXSIGGRPINFO, COM_NO_UBMASKIDXOFRXSIGGRPINFO,       8u },  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU06_70c45c70_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx] */
  { /*    10 */              TRUE,                         58u,                           48u,          22u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,                0u,                         4u,                             7u,       5u },  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx] */
  { /*    11 */              TRUE,                         61u,                           58u,          16u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,                2u,                         7u,                             4u,       4u },  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU05_e9cd0dca_Rx, /ActiveEcuC/Com/ComConfig/igVehMtnSt_68a0f345_Rx] */
  { /*    12 */              TRUE,                         65u,                           61u,          16u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,                4u,                         4u,                             6u,       8u },  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU05_e9cd0dca_Rx, /ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx] */
  { /*    13 */              TRUE,                         68u,                           65u,           7u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,                0u,                         0u,                             3u,       2u }   /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU05_23469c9f_Rx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqAllwd_20f5846f_Rx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigGrpInfoInd
**********************************************************************************************************************/
/** 
  \var    Com_RxSigGrpInfoInd
  \brief  the indexes of the 1:1 sorted relation pointing to Com_RxSigGrpInfo
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxSigGrpInfoIndType, COM_CONST) Com_RxSigGrpInfoInd[14] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     RxSigGrpInfoInd      Referable Keys */
  /*     0 */               3u,  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu01_7a983997_Rx] */
  /*     1 */              13u,  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU05_23469c9f_Rx] */
  /*     2 */               1u,  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu24_8dedad9f_Rx] */
  /*     3 */               0u,  /* [/ActiveEcuC/Com/ComConfig/SrsPropSignalIPdu02_4fa2d123_Rx] */
  /*     4 */              11u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU05_e9cd0dca_Rx] */
  /*     5 */              12u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU05_e9cd0dca_Rx] */
  /*     6 */               9u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU06_70c45c70_Rx] */
  /*     7 */               5u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU08_977c7177_Rx] */
  /*     8 */               4u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU16_69df6d31_Rx] */
  /*     9 */              10u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx] */
  /*    10 */               7u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU19_f96070a0_Rx] */
  /*    11 */               6u,  /* [/ActiveEcuC/Com/ComConfig/VDDMPropdTCSignalIPdu38_808bfd3f_Rx] */
  /*    12 */               2u,  /* [/ActiveEcuC/Com/ComConfig/VddmBcmPropdTCSignalIPDU01_886bd56f_Rx] */
  /*    13 */               8u   /* [/ActiveEcuC/Com/ComConfig/VddmPropSignalIPdu26_8fec2bf2_Rx] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxSigInfo
  \brief  Contains all relevant information for Rx signals.
  \details
  Element               Description
  UbMaskUsed            TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
  RxAccessInfoIdx       the index of the 1:1 relation pointing to Com_RxAccessInfo
  RxCbkFuncPtrAckIdx    the index of the 0:1 relation pointing to Com_RxCbkFuncPtr
  SignalProcessing  
  UbIdx                 Byte position of update-bit within the I-PDU. ea:{9B36DD60-EF52-4c12-9FB3-17D39CA664C3}
  UbMaskIdx             the index of the 0:1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
  ValidDlc              Minimum length of PDU required to completely receive the signal or signal group.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxSigInfoType, COM_CONST) Com_RxSigInfo[23] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    UbMaskUsed  RxAccessInfoIdx  RxCbkFuncPtrAckIdx                    SignalProcessing                          UbIdx                    UbMaskIdx                    ValidDlc        Referable Keys */
  { /*     0 */       TRUE,             77u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,                      2u,                          1u,       4u },  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu01_7a983997_Rx] */
  { /*     1 */       TRUE,             78u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,                      4u,                          1u,       6u },  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu01_7a983997_Rx] */
  { /*     2 */       TRUE,             79u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,                      3u,                          1u,       5u },  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu02_e391682d_Rx] */
  { /*     3 */       TRUE,             76u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,                      6u,                          5u,       7u },  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu03_949658bb_Rx] */
  { /*     4 */       TRUE,             73u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,                      4u,                          1u,       3u },  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu15_64eecccf_Rx] */
  { /*     5 */       TRUE,             80u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,                      2u,                          5u,       3u },  /* [/ActiveEcuC/Com/ComConfig/CddObcPropSignalIPdu01_003f0830_Rx] */
  { /*     6 */       TRUE,             87u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,                      7u,                          1u,       8u },  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU02_bd22093c_Rx] */
  { /*     7 */       TRUE,             88u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,                      5u,                          8u,       7u },  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU04_5441ac09_Rx] */
  { /*     8 */       TRUE,             81u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,                      6u,                          1u,       7u },  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU06_ba4fcd25_Rx] */
  { /*     9 */       TRUE,             86u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,                      6u,                          7u,       7u },  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU06_ba4fcd25_Rx] */
  { /*    10 */       TRUE,             89u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,                      3u,                          8u,       4u },  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU06_ba4fcd25_Rx] */
  { /*    11 */       TRUE,             82u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,                      2u,                          6u,       3u },  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU08_2e126ae8_Rx] */
  { /*    12 */       TRUE,             71u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,                      0u,                          3u,       7u },  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU11_4ed5e30d_Rx] */
  { /*    13 */       TRUE,             72u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,                      0u,                          8u,       6u },  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU11_4ed5e30d_Rx] */
  { /*    14 */       TRUE,             83u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,                      1u,                          3u,       2u },  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU28_1c24086a_Rx] */
  { /*    15 */       TRUE,             84u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,                      1u,                          6u,       3u },  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU28_1c24086a_Rx] */
  { /*    16 */       TRUE,             75u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,                      3u,                          7u,       4u },  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu24_8dedad9f_Rx] */
  { /*    17 */       TRUE,             90u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,                      1u,                          5u,       3u },  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu24_8dedad9f_Rx] */
  { /*    18 */       TRUE,             74u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,                      0u,                          5u,       1u },  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu25_faea9d09_Rx] */
  { /*    19 */      FALSE,              0u,                                   0u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO, COM_NO_UBIDXOFRXSIGINFO, COM_NO_UBMASKIDXOFRXSIGINFO,       6u },  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_33157db4_Rx] */
  { /*    20 */       TRUE,             85u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,                      4u,                          6u,       6u },  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU11_f7bbf892_Rx] */
  { /*    21 */       TRUE,             70u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,                      4u,                          6u,       4u },  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU17_1ed85da7_Rx] */
  { /*    22 */       TRUE,             69u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,                      2u,                          8u,       5u }   /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU19_f96070a0_Rx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxCyclicPdu
**********************************************************************************************************************/
/** 
  \var    Com_TxCyclicPdu
  \details
  Element         Description
  TxPduInfoIdx    the index of the 1:1 relation pointing to Com_TxPduInfo
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxCyclicPduType, COM_CONST) Com_TxCyclicPdu[13] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxPduInfoIdx        Referable Keys */
  { /*     0 */           2u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx] */
  { /*     1 */           0u },  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx] */
  { /*     2 */           8u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx] */
  { /*     3 */           5u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx] */
  { /*     4 */          12u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx] */
  { /*     5 */           7u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx] */
  { /*     6 */           9u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx] */
  { /*     7 */           3u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx] */
  { /*     8 */           1u },  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx] */
  { /*     9 */          11u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_Tx] */
  { /*    10 */          10u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx] */
  { /*    11 */           4u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx] */
  { /*    12 */           6u }   /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxModeInfo
  \brief  Contains all relevant information for transmission mode handling.
  \details
  Element          Description
  InitMode         Initial transmission mode selector of the Tx I-PDU.
  TxModeTrueIdx    the index of the 1:1 relation pointing to Com_TxModeTrue
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxModeInfoType, COM_CONST) Com_TxModeInfo[14] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    InitMode  TxModeTrueIdx        Referable Keys */
  { /*     0 */     TRUE,            8u },  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx] */
  { /*     1 */     TRUE,            7u },  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx] */
  { /*     2 */     TRUE,            6u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx] */
  { /*     3 */     TRUE,            6u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx] */
  { /*     4 */     TRUE,            5u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx] */
  { /*     5 */     TRUE,            4u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx] */
  { /*     6 */     TRUE,            3u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  { /*     7 */     TRUE,            2u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx] */
  { /*     8 */     TRUE,            7u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx] */
  { /*     9 */     TRUE,            6u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx] */
  { /*    10 */     TRUE,            1u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx] */
  { /*    11 */     TRUE,            4u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_Tx] */
  { /*    12 */     TRUE,            7u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx] */
  { /*    13 */     TRUE,            0u }   /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_EiraIpdu_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeTrue
**********************************************************************************************************************/
/** 
  \var    Com_TxModeTrue
  \brief  Contains all relevant information for transmission mode true.
  \details
  Element       Description
  TimePeriod    Cycle time factor.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxModeTrueType, COM_CONST) Com_TxModeTrue[9] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TimePeriod        Referable Keys */
  { /*     0 */         0u },  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_EiraIpdu_Tx] */
  { /*     1 */         8u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx] */
  { /*     2 */        30u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx] */
  { /*     3 */        20u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  { /*     4 */        16u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_Tx] */
  { /*     5 */       120u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx] */
  { /*     6 */       160u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx] */
  { /*     7 */         4u },  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx] */
  { /*     8 */         2u }   /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxPduInfo
  \brief  Contains all relevant information for Tx I-PDUs.
  \details
  Element                               Description
  TxPduInitValueUsed                    TRUE, if the 0:n relation has 1 relation pointing to Com_TxPduInitValue
  ClrUb                                 Context the update-bits shall be cleared.
  ConstValueUInt8UbClearMaskEndIdx      the end index of the 0:n relation pointing to Com_ConstValueUInt8
  ConstValueUInt8UbClearMaskStartIdx    the start index of the 0:n relation pointing to Com_ConstValueUInt8
  ExternalId                            External ID used to call PduR_ComTransmit().
  MetaDataLength                        Length of MetaData.
  PduGrpVectorEndIdx                    the end index of the 0:n relation pointing to Com_PduGrpVector
  PduGrpVectorStartIdx                  the start index of the 0:n relation pointing to Com_PduGrpVector
  TxBufferLength                        the number of relations pointing to Com_TxBuffer
  TxPduInitValueEndIdx                  the end index of the 0:n relation pointing to Com_TxPduInitValue
  TxPduInitValueStartIdx                the start index of the 0:n relation pointing to Com_TxPduInitValue
  TxSigGrpInfoIndEndIdx                 the end index of the 0:n relation pointing to Com_TxSigGrpInfoInd
  TxSigGrpInfoIndStartIdx               the start index of the 0:n relation pointing to Com_TxSigGrpInfoInd
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxPduInfoType, COM_CONST) Com_TxPduInfo[14] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxPduInitValueUsed  ClrUb                          ConstValueUInt8UbClearMaskEndIdx                    ConstValueUInt8UbClearMaskStartIdx                    ExternalId                               MetaDataLength  PduGrpVectorEndIdx                    PduGrpVectorStartIdx                    TxBufferLength  TxPduInitValueEndIdx  TxPduInitValueStartIdx  TxSigGrpInfoIndEndIdx                    TxSigGrpInfoIndStartIdx                          Referable Keys */
  { /*     0 */               TRUE, COM_TRANSMIT_CLRUBOFTXPDUINFO,                                                29u,                                                  24u, PduRConf_PduRSrcPdu_PduRSrcPdu_5ecec422,             0u,                                  41u,                                    38u,             8u,                   8u,                     0u,                                      2u,                                        0u },  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC33_15629d15, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC35_fc013820, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC30_8c6bccaf, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC16_573e0b18, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC27_0b14684d] */
  { /*     1 */               TRUE, COM_TRANSMIT_CLRUBOFTXPDUINFO,                                                24u,                                                  19u, PduRConf_PduRSrcPdu_PduRSrcPdu_f9d732b4,             0u,                                  11u,                                     9u,             8u,                  16u,                     8u, COM_NO_TXSIGGRPINFOINDENDIDXOFTXPDUINFO, COM_NO_TXSIGGRPINFOINDSTARTIDXOFTXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  { /*     2 */               TRUE, COM_NOT_USED_CLRUBOFTXPDUINFO, COM_NO_CONSTVALUEUINT8UBCLEARMASKENDIDXOFTXPDUINFO, COM_NO_CONSTVALUEUINT8UBCLEARMASKSTARTIDXOFTXPDUINFO, PduRConf_PduRSrcPdu_PduRSrcPdu_0bf0194b,             0u,                                  11u,                                     9u,             8u,                  24u,                    16u,                                      3u,                                        2u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  { /*     3 */               TRUE, COM_NOT_USED_CLRUBOFTXPDUINFO, COM_NO_CONSTVALUEUINT8UBCLEARMASKENDIDXOFTXPDUINFO, COM_NO_CONSTVALUEUINT8UBCLEARMASKSTARTIDXOFTXPDUINFO, PduRConf_PduRSrcPdu_PduRSrcPdu_956c143d,             0u,                                  11u,                                     9u,             8u,                  32u,                    24u,                                      4u,                                        3u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  { /*     4 */               TRUE, COM_TRANSMIT_CLRUBOFTXPDUINFO,                                                19u,                                                  15u, PduRConf_PduRSrcPdu_PduRSrcPdu_292b77a0,             0u,                                  38u,                                    35u,             8u,                  40u,                    32u, COM_NO_TXSIGGRPINFOINDENDIDXOFTXPDUINFO, COM_NO_TXSIGGRPINFOINDSTARTIDXOFTXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC35_fc013820, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC27_0b14684d] */
  { /*     5 */               TRUE, COM_TRANSMIT_CLRUBOFTXPDUINFO,                                                19u,                                                  18u, PduRConf_PduRSrcPdu_PduRSrcPdu_53beb1f3,             0u,                                  35u,                                    32u,             8u,                  48u,                    40u,                                      5u,                                        4u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db] */
  { /*     6 */               TRUE, COM_NOT_USED_CLRUBOFTXPDUINFO, COM_NO_CONSTVALUEUINT8UBCLEARMASKENDIDXOFTXPDUINFO, COM_NO_CONSTVALUEUINT8UBCLEARMASKSTARTIDXOFTXPDUINFO, PduRConf_PduRSrcPdu_PduRSrcPdu_0af6e6e3,             0u,                                  32u,                                    29u,             8u,                  56u,                    48u,                                      6u,                                        5u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC27_0b14684d] */
  { /*     7 */               TRUE, COM_TRANSMIT_CLRUBOFTXPDUINFO,                                                36u,                                                  29u, PduRConf_PduRSrcPdu_PduRSrcPdu_9766d5ce,             0u,                                  29u,                                    26u,             8u,                  64u,                    56u, COM_NO_TXSIGGRPINFOINDENDIDXOFTXPDUINFO, COM_NO_TXSIGGRPINFOINDSTARTIDXOFTXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC35_fc013820] */
  { /*     8 */               TRUE, COM_TRANSMIT_CLRUBOFTXPDUINFO,                                                15u,                                                  12u, PduRConf_PduRSrcPdu_PduRSrcPdu_145e853b,             0u,                                  26u,                                    23u,             8u,                  72u,                    64u, COM_NO_TXSIGGRPINFOINDENDIDXOFTXPDUINFO, COM_NO_TXSIGGRPINFOINDSTARTIDXOFTXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC33_15629d15, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC35_fc013820, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC16_573e0b18, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC27_0b14684d] */
  { /*     9 */               TRUE, COM_NOT_USED_CLRUBOFTXPDUINFO, COM_NO_CONSTVALUEUINT8UBCLEARMASKENDIDXOFTXPDUINFO, COM_NO_CONSTVALUEUINT8UBCLEARMASKSTARTIDXOFTXPDUINFO, PduRConf_PduRSrcPdu_PduRSrcPdu_2b1294b8,             0u,                                  11u,                                     9u,             8u,                  80u,                    72u,                                      7u,                                        6u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  { /*    10 */               TRUE, COM_TRANSMIT_CLRUBOFTXPDUINFO,                                                44u,                                                  40u, PduRConf_PduRSrcPdu_PduRSrcPdu_a9fef54e,             0u,                                  23u,                                    20u,             8u,                  88u,                    80u,                                      8u,                                        7u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC33_15629d15, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC30_8c6bccaf, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC16_573e0b18] */
  { /*    11 */               TRUE, COM_TRANSMIT_CLRUBOFTXPDUINFO,                                                12u,                                                  10u, PduRConf_PduRSrcPdu_PduRSrcPdu_acf6831c,             0u,                                  20u,                                    17u,             8u,                  96u,                    88u, COM_NO_TXSIGGRPINFOINDENDIDXOFTXPDUINFO, COM_NO_TXSIGGRPINFOINDSTARTIDXOFTXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db] */
  { /*    12 */               TRUE, COM_TRANSMIT_CLRUBOFTXPDUINFO,                                                44u,                                                  36u, PduRConf_PduRSrcPdu_PduRSrcPdu_35fca203,             0u,                                  11u,                                     9u,             8u,                 104u,                    96u,                                      9u,                                        8u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  { /*    13 */               TRUE, COM_NOT_USED_CLRUBOFTXPDUINFO, COM_NO_CONSTVALUEUINT8UBCLEARMASKENDIDXOFTXPDUINFO, COM_NO_CONSTVALUEUINT8UBCLEARMASKSTARTIDXOFTXPDUINFO,        PduRConf_PduRSrcPdu_PduRSrcPdu_3,             0u, COM_NO_PDUGRPVECTORENDIDXOFTXPDUINFO, COM_NO_PDUGRPVECTORSTARTIDXOFTXPDUINFO,             6u,                 110u,                   104u, COM_NO_TXSIGGRPINFOINDENDIDXOFTXPDUINFO, COM_NO_TXSIGGRPINFOINDSTARTIDXOFTXPDUINFO }   /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_EiraIpdu_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduInitValue
**********************************************************************************************************************/
/** 
  \var    Com_TxPduInitValue
  \brief  Initial values used for Tx I-PDU buffer initialization.
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxPduInitValueType, COM_CONST) Com_TxPduInitValue[110] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     TxPduInitValue      Referable Keys */
  /*     0 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx] */
  /*     1 */           0x7Fu,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx] */
  /*     2 */           0xF1u,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx] */
  /*     3 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx] */
  /*     4 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx] */
  /*     5 */           0x7Fu,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx] */
  /*     6 */           0xF7u,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx] */
  /*     7 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx] */
  /*     8 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx] */
  /*     9 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx] */
  /*    10 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx] */
  /*    11 */           0x28u,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx] */
  /*    12 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx] */
  /*    13 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx] */
  /*    14 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx] */
  /*    15 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx] */
  /*    16 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx] */
  /*    17 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx] */
  /*    18 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx] */
  /*    19 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx] */
  /*    20 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx] */
  /*    21 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx] */
  /*    22 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx] */
  /*    23 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx] */
  /*    24 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx] */
  /*    25 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx] */
  /*    26 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx] */
  /*    27 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx] */
  /*    28 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx] */
  /*    29 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx] */
  /*    30 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx] */
  /*    31 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx] */
  /*    32 */           0x32u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx] */
  /*    33 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx] */
  /*    34 */           0x32u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx] */
  /*    35 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx] */
  /*    36 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx] */
  /*    37 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx] */
  /*    38 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx] */
  /*    39 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx] */
  /*    40 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx] */
  /*    41 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx] */
  /*    42 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx] */
  /*    43 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx] */
  /*    44 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx] */
  /*    45 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx] */
  /*    46 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx] */
  /*    47 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx] */
  /*    48 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  /*    49 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  /* Index     TxPduInitValue      Referable Keys */
  /*    50 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  /*    51 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  /*    52 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  /*    53 */           0x30u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  /*    54 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  /*    55 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  /*    56 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx] */
  /*    57 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx] */
  /*    58 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx] */
  /*    59 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx] */
  /*    60 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx] */
  /*    61 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx] */
  /*    62 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx] */
  /*    63 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx] */
  /*    64 */           0x1Fu,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx] */
  /*    65 */           0xFCu,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx] */
  /*    66 */           0x70u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx] */
  /*    67 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx] */
  /*    68 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx] */
  /*    69 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx] */
  /*    70 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx] */
  /*    71 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx] */
  /*    72 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx] */
  /*    73 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx] */
  /*    74 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx] */
  /*    75 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx] */
  /*    76 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx] */
  /*    77 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx] */
  /*    78 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx] */
  /*    79 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx] */
  /*    80 */           0x10u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx] */
  /*    81 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx] */
  /*    82 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx] */
  /*    83 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx] */
  /*    84 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx] */
  /*    85 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx] */
  /*    86 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx] */
  /*    87 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx] */
  /*    88 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_Tx] */
  /*    89 */           0x40u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_Tx] */
  /*    90 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_Tx] */
  /*    91 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_Tx] */
  /*    92 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_Tx] */
  /*    93 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_Tx] */
  /*    94 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_Tx] */
  /*    95 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_Tx] */
  /*    96 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx] */
  /*    97 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx] */
  /*    98 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx] */
  /*    99 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx] */
  /* Index     TxPduInitValue      Referable Keys */
  /*   100 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx] */
  /*   101 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx] */
  /*   102 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx] */
  /*   103 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx] */
  /*   104 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_EiraIpdu_Tx] */
  /*   105 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_EiraIpdu_Tx] */
  /*   106 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_EiraIpdu_Tx] */
  /*   107 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_EiraIpdu_Tx] */
  /*   108 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_EiraIpdu_Tx] */
  /*   109 */           0x00u   /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_EiraIpdu_Tx] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigGrpInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxSigGrpInfo
  \brief  Contains all relevant information for Tx Signal Groups.
  \details
  Element                           Description
  TxSigGrpMaskUsed                  TRUE, if the 0:n relation has 1 relation pointing to Com_TxSigGrpMask
  UbMaskUsed                        TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
  PduOffset                         Byte offset relative to the PDU the signal group is starting.
  TransferProperty              
  TxBufferEndIdx                    the end index of the 0:n relation pointing to Com_TxBuffer
  TxBufferSigGrpInTxIPDUEndIdx      the end index of the 1:n relation pointing to Com_TxBuffer
  TxBufferSigGrpInTxIPDUStartIdx    the start index of the 1:n relation pointing to Com_TxBuffer
  TxBufferStartIdx                  the start index of the 0:n relation pointing to Com_TxBuffer
  TxBufferUbIdxInTxBufferIdx        the index of the 0:1 relation pointing to Com_TxBuffer
  TxPduInfoIdx                      the index of the 1:1 relation pointing to Com_TxPduInfo
  TxSigGrpMaskEndIdx                the end index of the 0:n relation pointing to Com_TxSigGrpMask
  TxSigGrpMaskStartIdx              the start index of the 0:n relation pointing to Com_TxSigGrpMask
  UbMaskIdx                         the index of the 0:1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxSigGrpInfoType, COM_CONST) Com_TxSigGrpInfo[9] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxSigGrpMaskUsed  UbMaskUsed  PduOffset  TransferProperty                              TxBufferEndIdx  TxBufferSigGrpInTxIPDUEndIdx  TxBufferSigGrpInTxIPDUStartIdx  TxBufferStartIdx  TxBufferUbIdxInTxBufferIdx                       TxPduInfoIdx  TxSigGrpMaskEndIdx  TxSigGrpMaskStartIdx  UbMaskIdx                             Referable Keys */
  { /*     0 */             TRUE,       TRUE,        0u,   COM_PENDING_TRANSFERPROPERTYOFTXSIGGRPINFO,           116u,                         102u,                            96u,             110u,                                            103u,          12u,                 7u,                   1u,                             7u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx, /ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx/isDmcStsRearToEscDmcSts_2fffc6c5_Tx, /ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx/isDmcStsRearToEscDmcActAppTarTq_eaa126f0_Tx, /ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx/isDmcStsRearToEscDmcSWInfo_6d930900_Tx, /ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx/isDmcStsRearToEscChks_0817ec86_Tx, /ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx/isDmcStsRearToEscCntr_b6c7ae3c_Tx] */
  { /*     1 */             TRUE,      FALSE,        0u, COM_TRIGGERED_TRANSFERPROPERTYOFTXSIGGRPINFO,           124u,                          24u,                            16u,             116u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGGRPINFO,           2u,                 9u,                   1u, COM_NO_UBMASKIDXOFTXSIGGRPINFO },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx/isIEMTestFr1Byte3_722c740b_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx/isIEMTestFr1Byte2_052b449d_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx/isIEMTestFr1Byte7_7541b012_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx/isIEMTestFr1Byte6_02468084_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx/isIEMTestFr1Byte5_9b4fd13e_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx/isIEMTestFr1Byte0_eb2525b1_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx/isIEMTestFr1Byte4_ec48e1a8_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx/isIEMTestFr1Byte1_9c221527_Tx] */
  { /*     2 */             TRUE,      FALSE,        0u, COM_TRIGGERED_TRANSFERPROPERTYOFTXSIGGRPINFO,           132u,                          32u,                            24u,             124u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGGRPINFO,           3u,                 9u,                   1u, COM_NO_UBMASKIDXOFTXSIGGRPINFO },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx/isIEMTestFr2Byte4_6adc9306_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx/isIEMTestFr2Byte5_1ddba390_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx/isIEMTestFr2Byte0_6db1571f_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx/isIEMTestFr2Byte3_f4b806a5_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx/isIEMTestFr2Byte2_83bf3633_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx/isIEMTestFr2Byte1_1ab66789_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx/isIEMTestFr2Byte6_84d2f22a_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx/isIEMTestFr2Byte7_f3d5c2bc_Tx] */
  { /*     3 */             TRUE,      FALSE,        0u, COM_TRIGGERED_TRANSFERPROPERTYOFTXSIGGRPINFO,           140u,                          80u,                            72u,             132u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGGRPINFO,           9u,                 9u,                   1u, COM_NO_UBMASKIDXOFTXSIGGRPINFO },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx/isIEMTestFr3Byte5_d6877035_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx/isIEMTestFr3Byte6_4f8e218f_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx/isIEMTestFr3Byte2_48e3e596_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx/isIEMTestFr3Byte1_d1eab42c_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx/isIEMTestFr3Byte4_a18040a3_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx/isIEMTestFr3Byte0_a6ed84ba_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx/isIEMTestFr3Byte3_3fe4d500_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx/isIEMTestFr3Byte7_38891119_Tx] */
  { /*     4 */             TRUE,      FALSE,        0u,   COM_PENDING_TRANSFERPROPERTYOFTXSIGGRPINFO,           148u,                          56u,                            48u,             140u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGGRPINFO,           6u,                 9u,                   1u, COM_NO_UBMASKIDXOFTXSIGGRPINFO },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericEMSeqNr_5f6f0e31_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericUDcAlrmSt_14e497d8_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericADAlrmSt_2216fde0_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericDTCLow_2f81f21c_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericModStatusRms_527fb71c_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericSpdAlrmSt_a3de8d5b_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericEMQnty_067a3f4d_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericTypeInfo_10f77ae7_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericIacAlrmSt_ef864a8f_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericRslAlrmSt_09c5d09c_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericFltAlrmSt_094332cf_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericDTCSts_96a019d2_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericDTCHig_6365ed22_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericInvrtTAlrmSt_ad103698_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericMotTAlrmSt_e29bb0dd_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericDTCMid_fca77e73_Tx] */
  { /*     5 */             TRUE,       TRUE,        0u,   COM_PENDING_TRANSFERPROPERTYOFTXSIGGRPINFO,           156u,                          48u,                            40u,             148u,                                             40u,           5u,                 8u,                   0u,                             4u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx, /ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx/isImobEngChk2ImobEngDataChk5_8bcc7104_Tx, /ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx/isImobEngChk2ImobEngDataChk0_fba6858b_Tx, /ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx/isImobEngChk2ImobEngDataChk3_62afd431_Tx, /ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx/isImobEngChk2ImobEngDataChk2_15a8e4a7_Tx, /ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx/isImobEngChk2ImobEngDataChk6_12c520be_Tx, /ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx/isImobEngChk2ImobEngDataChk4_fccb4192_Tx, /ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx/isImobEngChk2ImobEngChkSts_8e88c5e4_Tx, /ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx/isImobEngChk2ImobEngDataChk1_8ca1b51d_Tx] */
  { /*     6 */             TRUE,       TRUE,        0u,   COM_PENDING_TRANSFERPROPERTYOFTXSIGGRPINFO,           160u,                          84u,                            80u,             156u,                                             83u,          10u,                15u,                  11u,                             7u },  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysSpdActSafe_58c9c55b_Tx/isWhlMotSysSpdActSafeChks_8eaaad7b_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysSpdActSafe_58c9c55b_Tx/isWhlMotSysSpdActSafeCntr_307aefc1_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysSpdActSafe_58c9c55b_Tx/isWhlMotSysSpdActSafeIsgSpdWSgnTyp_9d8822c6_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysSpdActSafe_58c9c55b_Tx/isWhlMotSysSpdActSafeQf_b9719ecc_Tx] */
  { /*     7 */             TRUE,       TRUE,        5u,   COM_PENDING_TRANSFERPROPERTYOFTXSIGGRPINFO,           163u,                           8u,                             5u,             160u,                                              4u,           0u,                10u,                   7u,                             8u },  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqAvl_6ba13f42_Tx/isWhlMotSysTqAvlTqAvlMin_875cb2e3_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqAvl_6ba13f42_Tx/isWhlMotSysTqAvlTqAvlMax_bb518dba_Tx] */
  { /*     8 */             TRUE,       TRUE,        0u,   COM_PENDING_TRANSFERPROPERTYOFTXSIGGRPINFO,           167u,                           4u,                             0u,             163u,                                              3u,           0u,                11u,                   7u,                             1u }   /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqEst_02b3fb8d_Tx/isWhlMotSysTqEstChks_cdf81842_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqEst_02b3fb8d_Tx/isWhlMotSysTqEstIsgTqAct_70852206_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqEst_02b3fb8d_Tx/isWhlMotSysTqEstCntr_73285af8_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqEst_02b3fb8d_Tx/isWhlMotSysTqEstQualityFactor_cb4e64ff_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigGrpInfoInd
**********************************************************************************************************************/
/** 
  \var    Com_TxSigGrpInfoInd
  \brief  the indexes of the 1:1 sorted relation pointing to Com_TxSigGrpInfo
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxSigGrpInfoIndType, COM_CONST) Com_TxSigGrpInfoInd[9] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     TxSigGrpInfoInd      Referable Keys */
  /*     0 */               7u,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx] */
  /*     1 */               8u,  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx] */
  /*     2 */               1u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx] */
  /*     3 */               2u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx] */
  /*     4 */               5u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx] */
  /*     5 */               4u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  /*     6 */               3u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx] */
  /*     7 */               6u,  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx] */
  /*     8 */               0u   /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigGrpMask
**********************************************************************************************************************/
/** 
  \var    Com_TxSigGrpMask
  \brief  Signal group mask needed to copy interlaced signal groups to the Tx PDU buffer.
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxSigGrpMaskType, COM_CONST) Com_TxSigGrpMask[15] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     TxSigGrpMask      Referable Keys */
  /*     0 */         0x01u,  /* [/ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx] */
  /*     1 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx, /ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx] */
  /*     2 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx, /ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx] */
  /*     3 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx, /ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx] */
  /*     4 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx, /ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx] */
  /*     5 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx, /ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx] */
  /*     6 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx, /ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx] */
  /*     7 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysTqEst_02b3fb8d_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqAvl_6ba13f42_Tx, /ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx] */
  /*     8 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysTqEst_02b3fb8d_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqAvl_6ba13f42_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx] */
  /*     9 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysTqEst_02b3fb8d_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqAvl_6ba13f42_Tx] */
  /*    10 */         0xF0u,  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysTqEst_02b3fb8d_Tx] */
  /*    11 */         0x3Fu,  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysSpdActSafe_58c9c55b_Tx] */
  /*    12 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysSpdActSafe_58c9c55b_Tx] */
  /*    13 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysSpdActSafe_58c9c55b_Tx] */
  /*    14 */         0xFEu   /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysSpdActSafe_58c9c55b_Tx] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxSigInfo
  \brief  Contains all relevant information for Tx signals and group signals.
  \details
  Element                       Description
  UbMaskUsed                    TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
  ApplType                      Application data type.
  BitLength                     Bit length of the signal or group signal.
  BitPosition                   Little endian bit position of the signal or group signal within the I-PDU.
  BusAcc                        BUS access algorithm for signal or group signal packing / un-packing.
  ByteLength                    Byte length of the signal or group signal.
  BytePosition                  Little endian byte position of the signal or group signal within the I-PDU.
  StartByteInPduPosition        Start Byte position of the signal or group signal within the I-PDU.
  TxBufferEndIdx                the end index of the 0:n relation pointing to Com_TxBuffer
  TxBufferStartIdx              the start index of the 0:n relation pointing to Com_TxBuffer
  TxBufferUbIdxInTxBufferIdx    the index of the 0:1 relation pointing to Com_TxBuffer
  TxPduInfoIdx                  the index of the 1:1 relation pointing to Com_TxPduInfo
  TxSigGrpInfoIdx               the index of the 0:1 relation pointing to Com_TxSigGrpInfo
  UbMaskIdx                     the index of the 0:1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxSigInfoType, COM_CONST) Com_TxSigInfo[83] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    UbMaskUsed  ApplType                         BitLength  BitPosition  BusAcc                              ByteLength  BytePosition  StartByteInPduPosition  TxBufferEndIdx  TxBufferStartIdx  TxBufferUbIdxInTxBufferIdx                    TxPduInfoIdx  TxSigGrpInfoIdx                    UbMaskIdx                          Referable Keys */
  { /*     0 */      FALSE, COM_UINT8_N_APPLTYPEOFTXSIGINFO,       48u,          0u,  COM_ARRAY_BASED_BUSACCOFTXSIGINFO,         6u,           0u,                     0u,           110u,             104u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,          13u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_EiraSignal_Tx, /ActiveEcuC/Com/ComConfig/PropulsionCAN_EiraIpdu_Tx] */
  { /*     1 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,          0u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           0u,                     0u,           111u,             110u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,          12u,                                0u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx/isDmcStsRearToEscChks_0817ec86_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx] */
  { /*     2 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        4u,         12u,         COM_NBIT_BUSACCOFTXSIGINFO,         0u,           1u,                     1u,           112u,             111u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,          12u,                                0u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx/isDmcStsRearToEscCntr_b6c7ae3c_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx] */
  { /*     3 */      FALSE,  COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         24u,     COM_NBYTE_SW_BUSACCOFTXSIGINFO,         2u,           3u,                     2u,           114u,             112u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,          12u,                                0u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx/isDmcStsRearToEscDmcActAppTarTq_eaa126f0_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx] */
  { /*     4 */      FALSE,  COM_UINT16_APPLTYPEOFTXSIGINFO,       16u,         40u,     COM_NBYTE_SW_BUSACCOFTXSIGINFO,         2u,           5u,                     4u,           116u,             114u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,          12u,                                0u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx/isDmcStsRearToEscDmcSWInfo_6d930900_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx] */
  { /*     5 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        4u,          8u,         COM_NBIT_BUSACCOFTXSIGINFO,         0u,           1u,                     1u,           112u,             111u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,          12u,                                0u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx/isDmcStsRearToEscDmcSts_2fffc6c5_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx] */
  { /*     6 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,          0u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           0u,                     0u,           117u,             116u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           2u,                                1u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx/isIEMTestFr1Byte0_eb2525b1_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx] */
  { /*     7 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,          8u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           1u,                     1u,           118u,             117u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           2u,                                1u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx/isIEMTestFr1Byte1_9c221527_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx] */
  { /*     8 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         16u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           2u,                     2u,           119u,             118u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           2u,                                1u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx/isIEMTestFr1Byte2_052b449d_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx] */
  { /*     9 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         24u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           3u,                     3u,           120u,             119u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           2u,                                1u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx/isIEMTestFr1Byte3_722c740b_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx] */
  { /*    10 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         32u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           4u,                     4u,           121u,             120u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           2u,                                1u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx/isIEMTestFr1Byte4_ec48e1a8_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx] */
  { /*    11 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         40u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           5u,                     5u,           122u,             121u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           2u,                                1u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx/isIEMTestFr1Byte5_9b4fd13e_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx] */
  { /*    12 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         48u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           6u,                     6u,           123u,             122u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           2u,                                1u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx/isIEMTestFr1Byte6_02468084_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx] */
  { /*    13 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         56u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           7u,                     7u,           124u,             123u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           2u,                                1u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx/isIEMTestFr1Byte7_7541b012_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx] */
  { /*    14 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,          0u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           0u,                     0u,           125u,             124u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           3u,                                2u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx/isIEMTestFr2Byte0_6db1571f_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx] */
  { /*    15 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,          8u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           1u,                     1u,           126u,             125u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           3u,                                2u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx/isIEMTestFr2Byte1_1ab66789_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx] */
  { /*    16 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         16u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           2u,                     2u,           127u,             126u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           3u,                                2u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx/isIEMTestFr2Byte2_83bf3633_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx] */
  { /*    17 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         24u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           3u,                     3u,           128u,             127u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           3u,                                2u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx/isIEMTestFr2Byte3_f4b806a5_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx] */
  { /*    18 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         32u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           4u,                     4u,           129u,             128u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           3u,                                2u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx/isIEMTestFr2Byte4_6adc9306_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx] */
  { /*    19 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         40u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           5u,                     5u,           130u,             129u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           3u,                                2u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx/isIEMTestFr2Byte5_1ddba390_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx] */
  { /*    20 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         48u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           6u,                     6u,           131u,             130u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           3u,                                2u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx/isIEMTestFr2Byte6_84d2f22a_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx] */
  { /*    21 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         56u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           7u,                     7u,           132u,             131u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           3u,                                2u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx/isIEMTestFr2Byte7_f3d5c2bc_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx] */
  { /*    22 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,          0u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           0u,                     0u,           133u,             132u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           9u,                                3u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx/isIEMTestFr3Byte0_a6ed84ba_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx] */
  { /*    23 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,          8u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           1u,                     1u,           134u,             133u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           9u,                                3u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx/isIEMTestFr3Byte1_d1eab42c_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx] */
  { /*    24 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         16u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           2u,                     2u,           135u,             134u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           9u,                                3u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx/isIEMTestFr3Byte2_48e3e596_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx] */
  { /*    25 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         24u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           3u,                     3u,           136u,             135u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           9u,                                3u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx/isIEMTestFr3Byte3_3fe4d500_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx] */
  { /*    26 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         32u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           4u,                     4u,           137u,             136u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           9u,                                3u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx/isIEMTestFr3Byte4_a18040a3_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx] */
  { /*    27 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         40u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           5u,                     5u,           138u,             137u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           9u,                                3u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx/isIEMTestFr3Byte5_d6877035_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx] */
  { /*    28 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         48u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           6u,                     6u,           139u,             138u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           9u,                                3u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx/isIEMTestFr3Byte6_4f8e218f_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx] */
  { /*    29 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         56u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           7u,                     7u,           140u,             139u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           9u,                                3u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx/isIEMTestFr3Byte7_38891119_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx] */
  { /*    30 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        2u,         54u,         COM_NBIT_BUSACCOFTXSIGINFO,         0u,           6u,                     6u,           147u,             146u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           6u,                                4u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericADAlrmSt_2216fde0_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  { /*    31 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,          0u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           0u,                     0u,           141u,             140u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           6u,                                4u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericDTCHig_6365ed22_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  { /*    32 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,          8u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           1u,                     1u,           142u,             141u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           6u,                                4u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericDTCLow_2f81f21c_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  { /*    33 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         16u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           2u,                     2u,           143u,             142u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           6u,                                4u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericDTCMid_fca77e73_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  { /*    34 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         24u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           3u,                     3u,           144u,             143u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           6u,                                4u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericDTCSts_96a019d2_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  { /*    35 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        4u,         36u,         COM_NBIT_BUSACCOFTXSIGINFO,         0u,           4u,                     4u,           145u,             144u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           6u,                                4u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericEMQnty_067a3f4d_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  { /*    36 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        4u,         32u,         COM_NBIT_BUSACCOFTXSIGINFO,         0u,           4u,                     4u,           145u,             144u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           6u,                                4u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericEMSeqNr_5f6f0e31_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  { /*    37 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        2u,         52u,         COM_NBIT_BUSACCOFTXSIGINFO,         0u,           6u,                     6u,           147u,             146u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           6u,                                4u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericFltAlrmSt_094332cf_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  { /*    38 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        2u,         50u,         COM_NBIT_BUSACCOFTXSIGINFO,         0u,           6u,                     6u,           147u,             146u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           6u,                                4u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericIacAlrmSt_ef864a8f_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  { /*    39 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        2u,         48u,         COM_NBIT_BUSACCOFTXSIGINFO,         0u,           6u,                     6u,           147u,             146u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           6u,                                4u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericInvrtTAlrmSt_ad103698_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  { /*    40 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        4u,         44u,         COM_NBIT_BUSACCOFTXSIGINFO,         0u,           5u,                     5u,           146u,             145u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           6u,                                4u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericModStatusRms_527fb71c_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  { /*    41 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        2u,         62u,         COM_NBIT_BUSACCOFTXSIGINFO,         0u,           7u,                     7u,           148u,             147u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           6u,                                4u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericMotTAlrmSt_e29bb0dd_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  { /*    42 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        2u,         60u,         COM_NBIT_BUSACCOFTXSIGINFO,         0u,           7u,                     7u,           148u,             147u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           6u,                                4u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericRslAlrmSt_09c5d09c_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  { /*    43 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        2u,         58u,         COM_NBIT_BUSACCOFTXSIGINFO,         0u,           7u,                     7u,           148u,             147u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           6u,                                4u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericSpdAlrmSt_a3de8d5b_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  { /*    44 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        4u,         40u,         COM_NBIT_BUSACCOFTXSIGINFO,         0u,           5u,                     5u,           146u,             145u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           6u,                                4u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericTypeInfo_10f77ae7_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  { /*    45 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        2u,         56u,         COM_NBIT_BUSACCOFTXSIGINFO,         0u,           7u,                     7u,           148u,             147u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           6u,                                4u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericUDcAlrmSt_14e497d8_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx] */
  { /*    46 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        1u,          0u,         COM_NBIT_BUSACCOFTXSIGINFO,         0u,           0u,                     0u,           149u,             148u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           5u,                                5u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx/isImobEngChk2ImobEngChkSts_8e88c5e4_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx] */
  { /*    47 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,          8u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           1u,                     1u,           150u,             149u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           5u,                                5u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx/isImobEngChk2ImobEngDataChk0_fba6858b_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx] */
  { /*    48 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         16u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           2u,                     2u,           151u,             150u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           5u,                                5u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx/isImobEngChk2ImobEngDataChk1_8ca1b51d_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx] */
  { /*    49 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         24u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           3u,                     3u,           152u,             151u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           5u,                                5u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx/isImobEngChk2ImobEngDataChk2_15a8e4a7_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx] */
    /* Index    UbMaskUsed  ApplType                         BitLength  BitPosition  BusAcc                              ByteLength  BytePosition  StartByteInPduPosition  TxBufferEndIdx  TxBufferStartIdx  TxBufferUbIdxInTxBufferIdx                    TxPduInfoIdx  TxSigGrpInfoIdx                    UbMaskIdx                          Referable Keys */
  { /*    50 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         32u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           4u,                     4u,           153u,             152u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           5u,                                5u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx/isImobEngChk2ImobEngDataChk3_62afd431_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx] */
  { /*    51 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         40u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           5u,                     5u,           154u,             153u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           5u,                                5u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx/isImobEngChk2ImobEngDataChk4_fccb4192_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx] */
  { /*    52 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         48u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           6u,                     6u,           155u,             154u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           5u,                                5u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx/isImobEngChk2ImobEngDataChk5_8bcc7104_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx] */
  { /*    53 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         56u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           7u,                     7u,           156u,             155u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           5u,                                5u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx/isImobEngChk2ImobEngDataChk6_12c520be_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx] */
  { /*    54 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,          8u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           1u,                     1u,           158u,             157u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,          10u,                                6u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysSpdActSafe_58c9c55b_Tx/isWhlMotSysSpdActSafeChks_8eaaad7b_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx] */
  { /*    55 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        4u,          0u,         COM_NBIT_BUSACCOFTXSIGINFO,         0u,           0u,                     0u,           157u,             156u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,          10u,                                6u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysSpdActSafe_58c9c55b_Tx/isWhlMotSysSpdActSafeCntr_307aefc1_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx] */
  { /*    56 */      FALSE,  COM_SINT16_APPLTYPEOFTXSIGINFO,       15u,         25u, COM_NBITNBYTE_SW_BUSACCOFTXSIGINFO,         1u,           3u,                     2u,           160u,             158u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,          10u,                                6u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysSpdActSafe_58c9c55b_Tx/isWhlMotSysSpdActSafeIsgSpdWSgnTyp_9d8822c6_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx] */
  { /*    57 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        2u,          4u,         COM_NBIT_BUSACCOFTXSIGINFO,         0u,           0u,                     0u,           157u,             156u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,          10u,                                6u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysSpdActSafe_58c9c55b_Tx/isWhlMotSysSpdActSafeQf_b9719ecc_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx] */
  { /*    58 */      FALSE,  COM_UINT16_APPLTYPEOFTXSIGINFO,       12u,         52u, COM_NBITNBYTE_SW_BUSACCOFTXSIGINFO,         1u,           6u,                     5u,           162u,             160u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           0u,                                7u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysTqAvl_6ba13f42_Tx/isWhlMotSysTqAvlTqAvlMax_bb518dba_Tx, /ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx] */
  { /*    59 */      FALSE,  COM_UINT16_APPLTYPEOFTXSIGINFO,       12u,         56u, COM_NBITNBYTE_SW_BUSACCOFTXSIGINFO,         1u,           7u,                     6u,           163u,             161u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           0u,                                7u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysTqAvl_6ba13f42_Tx/isWhlMotSysTqAvlTqAvlMin_875cb2e3_Tx, /ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx] */
  { /*    60 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,          0u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           0u,                     0u,           164u,             163u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           0u,                                8u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysTqEst_02b3fb8d_Tx/isWhlMotSysTqEstChks_cdf81842_Tx, /ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx] */
  { /*    61 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        4u,         28u,         COM_NBIT_BUSACCOFTXSIGINFO,         0u,           3u,                     3u,           167u,             166u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           0u,                                8u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysTqEst_02b3fb8d_Tx/isWhlMotSysTqEstCntr_73285af8_Tx, /ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx] */
  { /*    62 */      FALSE,  COM_UINT16_APPLTYPEOFTXSIGINFO,       14u,         18u, COM_NBITNBYTE_SW_BUSACCOFTXSIGINFO,         1u,           2u,                     1u,           166u,             164u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           0u,                                8u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysTqEst_02b3fb8d_Tx/isWhlMotSysTqEstIsgTqAct_70852206_Tx, /ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx] */
  { /*    63 */      FALSE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        2u,         16u,         COM_NBIT_BUSACCOFTXSIGINFO,         0u,           2u,                     2u,           166u,             165u, COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO,           0u,                                8u, COM_NO_UBMASKIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysTqEst_02b3fb8d_Tx/isWhlMotSysTqEstQualityFactor_cb4e64ff_Tx, /ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx] */
  { /*    64 */       TRUE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        2u,         35u,         COM_NBIT_BUSACCOFTXSIGINFO,         0u,           4u,                     4u,            13u,              12u,                                          12u,           1u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO,                          8u },  /* [/ActiveEcuC/Com/ComConfig/isImobEngSts2_5f8745c8_Tx, /ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx] */
  { /*    65 */       TRUE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        3u,          2u,         COM_NBIT_BUSACCOFTXSIGINFO,         0u,           0u,                     0u,            57u,              56u,                                          56u,           7u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO,                          8u },  /* [/ActiveEcuC/Com/ComConfig/isPLockFltIndcRe_f756fd30_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx] */
  { /*    66 */       TRUE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        2u,          6u,         COM_NBIT_BUSACCOFTXSIGINFO,         0u,           0u,                     0u,            57u,              56u,                                          62u,           7u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO,                          6u },  /* [/ActiveEcuC/Com/ComConfig/isPLockFltLvlRe_167e1ed2_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx] */
  { /*    67 */       TRUE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        4u,         20u,         COM_NBIT_BUSACCOFTXSIGINFO,         0u,           2u,                     2u,            67u,              66u,                                          64u,           8u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO,                          6u },  /* [/ActiveEcuC/Com/ComConfig/isPLockParkStsRe_8fb3cac5_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx] */
  { /*    68 */       TRUE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        1u,         24u,         COM_NBIT_BUSACCOFTXSIGINFO,         0u,           3u,                     3u,            36u,              35u,                                          35u,           4u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO,                          4u },  /* [/ActiveEcuC/Com/ComConfig/isWhlMotClrRdyReq_189c9369_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx] */
  { /*    69 */       TRUE,  COM_UINT16_APPLTYPEOFTXSIGINFO,       10u,          8u, COM_NBITNBYTE_SW_BUSACCOFTXSIGINFO,         1u,           1u,                     0u,            58u,              56u,                                          62u,           7u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO,                          3u },  /* [/ActiveEcuC/Com/ComConfig/isWhlMotCooltFlowMinReq_102e8fa4_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx] */
  { /*    70 */       TRUE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        3u,         12u,         COM_NBIT_BUSACCOFTXSIGINFO,         0u,           1u,                     1u,            34u,              33u,                                          33u,           4u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO,                          1u },  /* [/ActiveEcuC/Com/ComConfig/isWhlMotSysCoolgReq_32e8ee03_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx] */
  { /*    71 */       TRUE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         24u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           3u,                     3u,            12u,              11u,                                          10u,           1u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO,                          7u },  /* [/ActiveEcuC/Com/ComConfig/isWhlMotSysCooltT_da703242_Tx, /ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx] */
  { /*    72 */       TRUE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        1u,         10u,         COM_NBIT_BUSACCOFTXSIGINFO,         0u,           1u,                     1u,            34u,              33u,                                          33u,           4u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO,                          4u },  /* [/ActiveEcuC/Com/ComConfig/isWhlMotSysErrIndcnReq_d5e6edc2_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx] */
  { /*    73 */       TRUE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        2u,         14u,         COM_NBIT_BUSACCOFTXSIGINFO,         0u,           1u,                     1u,            90u,              89u,                                          89u,          11u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO,                          8u },  /* [/ActiveEcuC/Com/ComConfig/isWhlMotSysHeatFdBck_516116c8_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_Tx] */
  { /*    74 */       TRUE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         24u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           3u,                     3u,            68u,              67u,                                          66u,           8u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO,                          1u },  /* [/ActiveEcuC/Com/ComConfig/isWhlMotSysHeatPwrAct_e1709dcf_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx] */
  { /*    75 */       TRUE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,          0u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           0u,                     0u,            89u,              88u,                                          89u,          11u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO,                          5u },  /* [/ActiveEcuC/Com/ComConfig/isWhlMotSysHeatPwrMax_d3ea4a02_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_Tx] */
  { /*    76 */       TRUE,  COM_UINT16_APPLTYPEOFTXSIGINFO,       14u,          8u, COM_NBITNBYTE_SW_BUSACCOFTXSIGINFO,         1u,           1u,                     0u,            66u,              64u,                                          64u,           8u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO,                          3u },  /* [/ActiveEcuC/Com/ComConfig/isWhlMotSysIdc_56101b54_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx] */
  { /*    77 */       TRUE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,          0u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           0u,                     0u,            33u,              32u,                                          33u,           4u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO,                          6u },  /* [/ActiveEcuC/Com/ComConfig/isWhlMotSysInvrT_11341a35_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx] */
  { /*    78 */       TRUE,  COM_UINT16_APPLTYPEOFTXSIGINFO,       16u,         56u,     COM_NBYTE_SW_BUSACCOFTXSIGINFO,         2u,           7u,                     6u,            16u,              14u,                                          12u,           1u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO,                          6u },  /* [/ActiveEcuC/Com/ComConfig/isWhlMotSysLimnIndcn_9f88a06a_Tx, /ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx] */
  { /*    79 */       TRUE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        4u,         32u,         COM_NBIT_BUSACCOFTXSIGINFO,         0u,           4u,                     4u,             5u,               4u,                                           4u,           0u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO,                          5u },  /* [/ActiveEcuC/Com/ComConfig/isWhlMotSysModSts_bd46c3f5_Tx, /ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx] */
  { /*    80 */       TRUE,   COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         16u,         COM_BYTE_BUSACCOFTXSIGINFO,         1u,           2u,                     2u,            35u,              34u,                                          33u,           4u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO,                          7u },  /* [/ActiveEcuC/Com/ComConfig/isWhlMotSysMotT_54e003b6_Tx, /ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx] */
  { /*    81 */       TRUE,  COM_SINT16_APPLTYPEOFTXSIGINFO,       15u,          8u, COM_NBITNBYTE_SW_BUSACCOFTXSIGINFO,         1u,           1u,                     0u,            10u,               8u,                                           8u,           1u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO,                          6u },  /* [/ActiveEcuC/Com/ComConfig/isWhlMotSysSpdAct_e26fc666_Tx, /ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx] */
  { /*    82 */       TRUE,  COM_UINT16_APPLTYPEOFTXSIGINFO,       11u,         40u, COM_NBITNBYTE_SW_BUSACCOFTXSIGINFO,         1u,           5u,                     4u,            14u,              12u,                                          12u,           1u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO,                          3u }   /* [/ActiveEcuC/Com/ComConfig/isWhlMotSysUdc_432c4140_Tx, /ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_CurrentTxMode
**********************************************************************************************************************/
/** 
  \var    Com_CurrentTxMode
  \brief  Current transmission mode state of all Tx I-PDUs.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_CurrentTxModeType, COM_VAR_NOINIT) Com_CurrentTxMode[14];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC33_15629d15, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC35_fc013820, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC30_8c6bccaf, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC16_573e0b18, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC27_0b14684d] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC35_fc013820, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC27_0b14684d] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC27_0b14684d] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC35_fc013820] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC33_15629d15, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC35_fc013820, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC16_573e0b18, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC27_0b14684d] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC33_15629d15, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC30_8c6bccaf, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC16_573e0b18] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_EiraIpdu_Tx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_CycleTimeCnt
**********************************************************************************************************************/
/** 
  \var    Com_CycleTimeCnt
  \brief  Current counter value of cyclic transmission.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_CycleTimeCntType, COM_VAR_NOINIT) Com_CycleTimeCnt[14];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC33_15629d15, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC35_fc013820, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC30_8c6bccaf, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC16_573e0b18, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC27_0b14684d] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC35_fc013820, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC27_0b14684d] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC27_0b14684d] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC35_fc013820] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC33_15629d15, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC35_fc013820, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC16_573e0b18, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC27_0b14684d] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC33_15629d15, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC30_8c6bccaf, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC16_573e0b18] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_EiraIpdu_Tx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_CyclicSendRequest
**********************************************************************************************************************/
/** 
  \var    Com_CyclicSendRequest
  \brief  Cyclic send request flag used to indicate cyclic transmission mode for all Tx I-PDU.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_CyclicSendRequestType, COM_VAR_NOINIT) Com_CyclicSendRequest[14];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC33_15629d15, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC35_fc013820, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC30_8c6bccaf, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC16_573e0b18, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC27_0b14684d] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC35_fc013820, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC27_0b14684d] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC27_0b14684d] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC35_fc013820] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC33_15629d15, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC35_fc013820, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC16_573e0b18, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC27_0b14684d] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC33_15629d15, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC30_8c6bccaf, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC16_573e0b18] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_EiraIpdu_Tx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_HandleRxPduDeferred
**********************************************************************************************************************/
/** 
  \var    Com_HandleRxPduDeferred
  \brief  Array indicating received Rx I-PDUs to be processed deferred within the next call of Com_MainfunctionRx().
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_HandleRxPduDeferredUType, COM_VAR_NOINIT) Com_HandleRxPduDeferred;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu01_7a983997_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu02_e391682d_Rx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu03_949658bb_Rx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu15_64eecccf_Rx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/CddObcPropSignalIPdu01_003f0830_Rx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU02_bd22093c_Rx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU04_5441ac09_Rx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU05_23469c9f_Rx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU06_ba4fcd25_Rx] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU08_2e126ae8_Rx] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU11_4ed5e30d_Rx] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU28_1c24086a_Rx] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu24_8dedad9f_Rx] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu25_faea9d09_Rx] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_33157db4_Rx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/SrsPropSignalIPdu02_4fa2d123_Rx] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU05_e9cd0dca_Rx] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU06_70c45c70_Rx] */
  /*    18 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU08_977c7177_Rx] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU11_f7bbf892_Rx] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU16_69df6d31_Rx] */
  /*    21 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU17_1ed85da7_Rx] */
  /*    22 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU19_f96070a0_Rx] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropdTCSignalIPdu38_808bfd3f_Rx] */
  /*    25 */  /* [/ActiveEcuC/Com/ComConfig/VddmBcmPropdTCSignalIPDU01_886bd56f_Rx] */
  /*    26 */  /* [/ActiveEcuC/Com/ComConfig/VddmPropSignalIPdu26_8fec2bf2_Rx] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_Initialized
**********************************************************************************************************************/
/** 
  \var    Com_Initialized
  \brief  Initialization state of Com. TRUE, if Com_Init() has been called, else FALSE.
*/ 
#define COM_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_InitializedType, COM_VAR_ZERO_INIT) Com_Initialized = FALSE;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDefPduBuffer
**********************************************************************************************************************/
/** 
  \var    Com_RxDefPduBuffer
  \brief  Rx I-PDU buffer for deferred signal processing.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxDefPduBufferUType, COM_VAR_NOINIT) Com_RxDefPduBuffer;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu01_7a983997_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu01_7a983997_Rx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu01_7a983997_Rx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu02_e391682d_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu02_e391682d_Rx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu02_e391682d_Rx] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu03_949658bb_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu03_949658bb_Rx] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu03_949658bb_Rx] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu15_64eecccf_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu15_64eecccf_Rx] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu15_64eecccf_Rx] */
  /*    32 */  /* [/ActiveEcuC/Com/ComConfig/CddObcPropSignalIPdu01_003f0830_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/CddObcPropSignalIPdu01_003f0830_Rx] */
  /*    39 */  /* [/ActiveEcuC/Com/ComConfig/CddObcPropSignalIPdu01_003f0830_Rx] */
  /*    40 */  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU02_bd22093c_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU02_bd22093c_Rx] */
  /*    47 */  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU02_bd22093c_Rx] */
  /*    48 */  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU04_5441ac09_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU04_5441ac09_Rx] */
  /*    55 */  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU04_5441ac09_Rx] */
  /*    56 */  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU05_23469c9f_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU05_23469c9f_Rx] */
  /*    63 */  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU05_23469c9f_Rx] */
  /*    64 */  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU06_ba4fcd25_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU06_ba4fcd25_Rx] */
  /*    71 */  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU06_ba4fcd25_Rx] */
  /*    72 */  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU08_2e126ae8_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU08_2e126ae8_Rx] */
  /*    79 */  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU08_2e126ae8_Rx] */
  /*    80 */  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU11_4ed5e30d_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU11_4ed5e30d_Rx] */
  /*    87 */  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU11_4ed5e30d_Rx] */
  /*    88 */  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU28_1c24086a_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU28_1c24086a_Rx] */
  /*    95 */  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU28_1c24086a_Rx] */
  /*    96 */  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu24_8dedad9f_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu24_8dedad9f_Rx] */
  /*   103 */  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu24_8dedad9f_Rx] */
  /*   104 */  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu25_faea9d09_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu25_faea9d09_Rx] */
  /*   111 */  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu25_faea9d09_Rx] */
  /*   112 */  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_33157db4_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_33157db4_Rx] */
  /*   117 */  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_33157db4_Rx] */
  /*   118 */  /* [/ActiveEcuC/Com/ComConfig/SrsPropSignalIPdu02_4fa2d123_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SrsPropSignalIPdu02_4fa2d123_Rx] */
  /*   125 */  /* [/ActiveEcuC/Com/ComConfig/SrsPropSignalIPdu02_4fa2d123_Rx] */
  /*   126 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU05_e9cd0dca_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU05_e9cd0dca_Rx] */
  /*   133 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU05_e9cd0dca_Rx] */
  /* Index        Referable Keys */
  /*   134 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU06_70c45c70_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU06_70c45c70_Rx] */
  /*   141 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU06_70c45c70_Rx] */
  /*   142 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU08_977c7177_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU08_977c7177_Rx] */
  /*   149 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU08_977c7177_Rx] */
  /*   150 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU11_f7bbf892_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU11_f7bbf892_Rx] */
  /*   157 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU11_f7bbf892_Rx] */
  /*   158 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU16_69df6d31_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU16_69df6d31_Rx] */
  /*   165 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU16_69df6d31_Rx] */
  /*   166 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU17_1ed85da7_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU17_1ed85da7_Rx] */
  /*   173 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU17_1ed85da7_Rx] */
  /*   174 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx] */
  /*   181 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx] */
  /*   182 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU19_f96070a0_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU19_f96070a0_Rx] */
  /*   189 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU19_f96070a0_Rx] */
  /*   190 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropdTCSignalIPdu38_808bfd3f_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropdTCSignalIPdu38_808bfd3f_Rx] */
  /*   197 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropdTCSignalIPdu38_808bfd3f_Rx] */
  /*   198 */  /* [/ActiveEcuC/Com/ComConfig/VddmBcmPropdTCSignalIPDU01_886bd56f_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/VddmBcmPropdTCSignalIPDU01_886bd56f_Rx] */
  /*   205 */  /* [/ActiveEcuC/Com/ComConfig/VddmBcmPropdTCSignalIPDU01_886bd56f_Rx] */
  /*   206 */  /* [/ActiveEcuC/Com/ComConfig/VddmPropSignalIPdu26_8fec2bf2_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/VddmPropSignalIPdu26_8fec2bf2_Rx] */
  /*   213 */  /* [/ActiveEcuC/Com/ComConfig/VddmPropSignalIPdu26_8fec2bf2_Rx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDeferredFctPtrCache
**********************************************************************************************************************/
/** 
  \var    Com_RxDeferredFctPtrCache
  \brief  Cache for deferred Rx (invalid) notification.
*/ 
#define COM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxDeferredFctPtrCacheType, COM_VAR_NOINIT) Com_RxDeferredFctPtrCache[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDeferredProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxDeferredProcessingISRLockCounterType, COM_VAR_NOINIT) Com_RxDeferredProcessingISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxIPduGroupISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxIPduGroupISRLockCounterType, COM_VAR_NOINIT) Com_RxIPduGroupISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduGrpActive
**********************************************************************************************************************/
/** 
  \var    Com_RxPduGrpActive
  \brief  Rx I-PDU based state (started/stopped) of the corresponding I-PDU-Group.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxPduGrpActiveType, COM_VAR_NOINIT) Com_RxPduGrpActive[27];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu01_7a983997_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC35_97da5486, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC39_9e6c18ad, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC30_e7b0a009, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC24_f9c65551, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC25_8ec165c7] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu02_e391682d_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC35_97da5486, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC39_9e6c18ad, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC30_e7b0a009, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC24_f9c65551, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC25_8ec165c7] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu03_949658bb_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC35_97da5486, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC39_9e6c18ad, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC30_e7b0a009, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC24_f9c65551, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC25_8ec165c7] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/BecmPropSignalIpdu15_64eecccf_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC35_97da5486, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC39_9e6c18ad, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC30_e7b0a009, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC24_f9c65551, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC25_8ec165c7] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/CddObcPropSignalIPdu01_003f0830_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC30_e7b0a009, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC24_f9c65551, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC27_60cf04eb, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC25_8ec165c7] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU02_bd22093c_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC24_f9c65551, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC25_8ec165c7] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU04_5441ac09_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC24_f9c65551, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC25_8ec165c7] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU05_23469c9f_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC24_f9c65551, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC25_8ec165c7] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/ECMPropSignalIPDU06_ba4fcd25_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC24_f9c65551, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC25_8ec165c7] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU08_2e126ae8_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC35_97da5486, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC24_f9c65551, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC25_8ec165c7] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU11_4ed5e30d_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC35_97da5486, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC39_9e6c18ad, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPDU28_1c24086a_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu24_8dedad9f_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC24_f9c65551, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC25_8ec165c7] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/EcmPropSignalIPdu25_faea9d09_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC39_9e6c18ad, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC24_f9c65551, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC25_8ec165c7] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_33157db4_Rx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/SrsPropSignalIPdu02_4fa2d123_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC39_9e6c18ad, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC30_e7b0a009, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU05_e9cd0dca_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC30_e7b0a009, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU06_70c45c70_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_fca0cb9e] */
  /*    18 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU08_977c7177_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC39_9e6c18ad, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU11_f7bbf892_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC30_e7b0a009, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU16_69df6d31_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC26_17c8347d, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC24_f9c65551, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_PNC29_877729ec] */
  /*    21 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU17_1ed85da7_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_fca0cb9e] */
  /*    22 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU18_8e674036_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_fca0cb9e] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropSignalIPDU19_f96070a0_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_fca0cb9e] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/VDDMPropdTCSignalIPdu38_808bfd3f_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_fca0cb9e] */
  /*    25 */  /* [/ActiveEcuC/Com/ComConfig/VddmBcmPropdTCSignalIPDU01_886bd56f_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_fca0cb9e] */
  /*    26 */  /* [/ActiveEcuC/Com/ComConfig/VddmPropSignalIPdu26_8fec2bf2_Rx, /ActiveEcuC/Com/ComConfig/RxSPG_PropulsionCAN_fca0cb9e] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferArrayBased
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferArrayBased
  \brief  Rx Signal and Group Signal Buffer. (UINT8_N, UINT8_DYN)
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxSigBufferArrayBasedType, COM_VAR_NOINIT) Com_RxSigBufferArrayBased[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_db9c2837_Rx, /ActiveEcuC/Com/ComConfig/PropulsionCAN_db9c2837_Rx_RxSignalBufferRouting] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_db9c2837_Rx, /ActiveEcuC/Com/ComConfig/PropulsionCAN_db9c2837_Rx_RxSignalBufferRouting] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_db9c2837_Rx, /ActiveEcuC/Com/ComConfig/PropulsionCAN_db9c2837_Rx_RxSignalBufferRouting] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferSInt16
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferSInt16
  \brief  Rx Signal and Group Signal Buffer. (SINT16)
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxSigBufferSInt16Type, COM_VAR_NOINIT) Com_RxSigBufferSInt16[4];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx/isPtTqAtAxleMaxReqPtTqAtAxleFrntReq_8c330c00_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx/isPtTqAtAxleMaxReqPtTqAtAxleFrntReq_8c330c00_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx/isPtTqAtAxleMaxReqPtTqAtAxleFrntReq_8c330c00_Rx_RxSignalBufferRouting] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx/isPtTqAtAxleMaxReqPtTqAtAxleReReq_449843f2_Rx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx/isPtTqAtAxleMaxReqPtTqAtAxleReReq_449843f2_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx/isPtTqAtAxleMaxReqPtTqAtAxleReReq_449843f2_Rx_RxSignalBufferRouting] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferUInt16
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferUInt16
  \brief  Rx Signal and Group Signal Buffer. (UINT16)
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxSigBufferUInt16Type, COM_VAR_NOINIT) Com_RxSigBufferUInt16[16];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcEngRotTarSpdDMCFrnt_46c9d05b_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcEngRotTarSpdDMCFrnt_46c9d05b_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcEngRotTarSpdDMCFrnt_46c9d05b_Rx_RxSignalBufferRouting] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcEngRotTarSpdDMCRear_ee201c9c_Rx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcEngRotTarSpdDMCRear_ee201c9c_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcEngRotTarSpdDMCRear_ee201c9c_Rx_RxSignalBufferRouting] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx/isVehSpdLgtA_668ad5e3_Rx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx/isVehSpdLgtA_668ad5e3_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx/isVehSpdLgtA_668ad5e3_Rx_RxSignalBufferRouting] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/isCooltFlowForDtElec_89c7c93c_Rx, /ActiveEcuC/Com/ComConfig/isCooltFlowForDtElec_89c7c93c_Rx_RxSignalBufferRouting] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/isCooltTSigForDtElec_f43a3873_Rx, /ActiveEcuC/Com/ComConfig/isCooltTSigForDtElec_f43a3873_Rx_RxSignalBufferRouting] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/isHvBattSoc_ce242c3f_Rx, /ActiveEcuC/Com/ComConfig/isHvBattSoc_ce242c3f_Rx_RxSignalBufferRouting] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/isHvBattUDc_bcd9ade4_Rx, /ActiveEcuC/Com/ComConfig/isHvBattUDc_bcd9ade4_Rx_RxSignalBufferRouting] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/isHvBattUDynMaxLim_6d11df88_Rx, /ActiveEcuC/Com/ComConfig/isHvBattUDynMaxLim_6d11df88_Rx_RxSignalBufferRouting] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/isHvBattUDynMinLim_28139c0a_Rx, /ActiveEcuC/Com/ComConfig/isHvBattUDynMinLim_28139c0a_Rx_RxSignalBufferRouting] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/isSpdRotlForWhlsAtAxleRe_cda9e459_Rx, /ActiveEcuC/Com/ComConfig/isSpdRotlForWhlsAtAxleRe_cda9e459_Rx_RxSignalBufferRouting] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/isWhlMotSysPwrLimMax_45b5505a_Rx, /ActiveEcuC/Com/ComConfig/isWhlMotSysPwrLimMax_45b5505a_Rx_RxSignalBufferRouting] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/isWhlMotSysPwrLimMin_79b86f03_Rx, /ActiveEcuC/Com/ComConfig/isWhlMotSysPwrLimMin_79b86f03_Rx_RxSignalBufferRouting] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/isWhlMotSysTqReq_f0fdb022_Rx, /ActiveEcuC/Com/ComConfig/isWhlMotSysTqReq_f0fdb022_Rx_RxSignalBufferRouting] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferUInt32
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferUInt32
  \brief  Rx Signal and Group Signal Buffer. (UINT32)
*/ 
#define COM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxSigBufferUInt32Type, COM_VAR_NOINIT) Com_RxSigBufferUInt32[2];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/isBkpOfDstTrvld_1c9ea633_Rx, /ActiveEcuC/Com/ComConfig/isBkpOfDstTrvld_1c9ea633_Rx_RxSignalBufferRouting] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/isCarTiGlb_7a3bdc75_Rx, /ActiveEcuC/Com/ComConfig/isCarTiGlb_7a3bdc75_Rx_RxSignalBufferRouting] */

#define COM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferUInt8
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferUInt8
  \brief  Rx Signal and Group Signal Buffer. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxSigBufferUInt8Type, COM_VAR_NOINIT) Com_RxSigBufferUInt8[136];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/igCrashStsSafe_0a09c5f2_Rx/isCrashStsSafeChks_42d0b327_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/igCrashStsSafe_0a09c5f2_Rx/isCrashStsSafeChks_42d0b327_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igCrashStsSafe_0a09c5f2_Rx/isCrashStsSafeChks_42d0b327_Rx_RxSignalBufferRouting] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/igCrashStsSafe_0a09c5f2_Rx/isCrashStsSafeCntr_fc00f19d_Rx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/igCrashStsSafe_0a09c5f2_Rx/isCrashStsSafeCntr_fc00f19d_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igCrashStsSafe_0a09c5f2_Rx/isCrashStsSafeCntr_fc00f19d_Rx_RxSignalBufferRouting] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/igCrashStsSafe_0a09c5f2_Rx/isCrashStsSafeSts_847c5d07_Rx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/igCrashStsSafe_0a09c5f2_Rx/isCrashStsSafeSts_847c5d07_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igCrashStsSafe_0a09c5f2_Rx/isCrashStsSafeSts_847c5d07_Rx_RxSignalBufferRouting] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/igEngSt1WdSts_adcf75d2_Rx/isEngSt1WdStsChks_75cf5b53_Rx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/igEngSt1WdSts_adcf75d2_Rx/isEngSt1WdStsChks_75cf5b53_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igEngSt1WdSts_adcf75d2_Rx/isEngSt1WdStsChks_75cf5b53_Rx_RxSignalBufferRouting] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/igEngSt1WdSts_adcf75d2_Rx/isEngSt1WdStsCntr_cb1f19e9_Rx] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/igEngSt1WdSts_adcf75d2_Rx/isEngSt1WdStsCntr_cb1f19e9_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igEngSt1WdSts_adcf75d2_Rx/isEngSt1WdStsCntr_cb1f19e9_Rx_RxSignalBufferRouting] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/igEngSt1WdSts_adcf75d2_Rx/isEngSt1WdStsEngSt1WdSts_21868fa0_Rx] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/igEngSt1WdSts_adcf75d2_Rx/isEngSt1WdStsEngSt1WdSts_21868fa0_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igEngSt1WdSts_adcf75d2_Rx/isEngSt1WdStsEngSt1WdSts_21868fa0_Rx_RxSignalBufferRouting] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/igEscVariantToDmc_3c205019_Rx/isEscVariantToDmcChks_9a33bac6_Rx] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/igEscVariantToDmc_3c205019_Rx/isEscVariantToDmcChks_9a33bac6_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igEscVariantToDmc_3c205019_Rx/isEscVariantToDmcChks_9a33bac6_Rx_RxSignalBufferRouting] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/igEscVariantToDmc_3c205019_Rx/isEscVariantToDmcCntr_24e3f87c_Rx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/igEscVariantToDmc_3c205019_Rx/isEscVariantToDmcCntr_24e3f87c_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igEscVariantToDmc_3c205019_Rx/isEscVariantToDmcCntr_24e3f87c_Rx_RxSignalBufferRouting] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/igEscVariantToDmc_3c205019_Rx/isEscVariantToDmcEscVariantToDmc_daa2c955_Rx] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/igEscVariantToDmc_3c205019_Rx/isEscVariantToDmcEscVariantToDmc_daa2c955_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igEscVariantToDmc_3c205019_Rx/isEscVariantToDmcEscVariantToDmc_daa2c955_Rx_RxSignalBufferRouting] */
  /*    18 */  /* [/ActiveEcuC/Com/ComConfig/igHvSysRlySts_760c5326_Rx/isHvSysRlyStsChks_b1dd6f20_Rx] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/igHvSysRlySts_760c5326_Rx/isHvSysRlyStsChks_b1dd6f20_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igHvSysRlySts_760c5326_Rx/isHvSysRlyStsChks_b1dd6f20_Rx_RxSignalBufferRouting] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/igHvSysRlySts_760c5326_Rx/isHvSysRlyStsCntr_0f0d2d9a_Rx] */
  /*    21 */  /* [/ActiveEcuC/Com/ComConfig/igHvSysRlySts_760c5326_Rx/isHvSysRlyStsCntr_0f0d2d9a_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igHvSysRlySts_760c5326_Rx/isHvSysRlyStsCntr_0f0d2d9a_Rx_RxSignalBufferRouting] */
  /*    22 */  /* [/ActiveEcuC/Com/ComConfig/igHvSysRlySts_760c5326_Rx/isHvSysRlyStsHvSysRlySts_5b219bea_Rx] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/igHvSysRlySts_760c5326_Rx/isHvSysRlyStsHvSysRlySts_5b219bea_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igHvSysRlySts_760c5326_Rx/isHvSysRlyStsHvSysRlySts_5b219bea_Rx_RxSignalBufferRouting] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq0_9c0677f3_Rx] */
  /*    25 */  /* [/ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq0_9c0677f3_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq0_9c0677f3_Rx_RxSignalBufferRouting] */
  /*    26 */  /* [/ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq1_eb014765_Rx] */
  /*    27 */  /* [/ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq1_eb014765_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq1_eb014765_Rx_RxSignalBufferRouting] */
  /*    28 */  /* [/ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq2_720816df_Rx] */
  /*    29 */  /* [/ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq2_720816df_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq2_720816df_Rx_RxSignalBufferRouting] */
  /*    30 */  /* [/ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq3_050f2649_Rx] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq3_050f2649_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq3_050f2649_Rx_RxSignalBufferRouting] */
  /*    32 */  /* [/ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq4_9b6bb3ea_Rx] */
  /*    33 */  /* [/ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq4_9b6bb3ea_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq4_9b6bb3ea_Rx_RxSignalBufferRouting] */
  /*    34 */  /* [/ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq5_ec6c837c_Rx] */
  /*    35 */  /* [/ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq5_ec6c837c_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq5_ec6c837c_Rx_RxSignalBufferRouting] */
  /*    36 */  /* [/ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq6_7565d2c6_Rx] */
  /*    37 */  /* [/ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq6_7565d2c6_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq6_7565d2c6_Rx_RxSignalBufferRouting] */
  /*    38 */  /* [/ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngMgrCmdTar1_817e486b_Rx] */
  /*    39 */  /* [/ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngMgrCmdTar1_817e486b_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngMgrCmdTar1_817e486b_Rx_RxSignalBufferRouting] */
  /*    40 */  /* [/ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx/isPtTqAtAxleMaxReqChks_6ad4cf82_Rx] */
  /*    41 */  /* [/ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx/isPtTqAtAxleMaxReqChks_6ad4cf82_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx/isPtTqAtAxleMaxReqChks_6ad4cf82_Rx_RxSignalBufferRouting] */
  /*    42 */  /* [/ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx/isPtTqAtAxleMaxReqCntr_d4048d38_Rx] */
  /*    43 */  /* [/ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx/isPtTqAtAxleMaxReqCntr_d4048d38_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx/isPtTqAtAxleMaxReqCntr_d4048d38_Rx_RxSignalBufferRouting] */
  /*    44 */  /* [/ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcChks_7f830d10_Rx] */
  /*    45 */  /* [/ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcChks_7f830d10_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcChks_7f830d10_Rx_RxSignalBufferRouting] */
  /*    46 */  /* [/ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcCntr_c1534faa_Rx] */
  /*    47 */  /* [/ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcCntr_c1534faa_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcCntr_c1534faa_Rx_RxSignalBufferRouting] */
  /*    48 */  /* [/ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcFrnt_baffba62_Rx] */
  /*    49 */  /* [/ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcFrnt_baffba62_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcFrnt_baffba62_Rx_RxSignalBufferRouting] */
  /* Index        Referable Keys */
  /*    50 */  /* [/ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcRear_121676a5_Rx] */
  /*    51 */  /* [/ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcRear_121676a5_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcRear_121676a5_Rx_RxSignalBufferRouting] */
  /*    52 */  /* [/ActiveEcuC/Com/ComConfig/igVehBattU_0a2a47a4_Rx/isVehBattUSysUQf_f605b03a_Rx] */
  /*    53 */  /* [/ActiveEcuC/Com/ComConfig/igVehBattU_0a2a47a4_Rx/isVehBattUSysUQf_f605b03a_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehBattU_0a2a47a4_Rx/isVehBattUSysUQf_f605b03a_Rx_RxSignalBufferRouting] */
  /*    54 */  /* [/ActiveEcuC/Com/ComConfig/igVehBattU_0a2a47a4_Rx/isVehBattUSysU_9501cb8f_Rx] */
  /*    55 */  /* [/ActiveEcuC/Com/ComConfig/igVehBattU_0a2a47a4_Rx/isVehBattUSysU_9501cb8f_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehBattU_0a2a47a4_Rx/isVehBattUSysU_9501cb8f_Rx_RxSignalBufferRouting] */
  /*    56 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtBlkIDBytePosn1_6585aabf_Rx] */
  /*    57 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtBlkIDBytePosn1_6585aabf_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtBlkIDBytePosn1_6585aabf_Rx_RxSignalBufferRouting] */
  /*    58 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn2_e7ede43f_Rx] */
  /*    59 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn2_e7ede43f_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn2_e7ede43f_Rx_RxSignalBufferRouting] */
  /*    60 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn3_90ead4a9_Rx] */
  /*    61 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn3_90ead4a9_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn3_90ead4a9_Rx_RxSignalBufferRouting] */
  /*    62 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn4_0e8e410a_Rx] */
  /*    63 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn4_0e8e410a_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn4_0e8e410a_Rx_RxSignalBufferRouting] */
  /*    64 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn5_7989719c_Rx] */
  /*    65 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn5_7989719c_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn5_7989719c_Rx_RxSignalBufferRouting] */
  /*    66 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn6_e0802026_Rx] */
  /*    67 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn6_e0802026_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn6_e0802026_Rx_RxSignalBufferRouting] */
  /*    68 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn7_978710b0_Rx] */
  /*    69 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn7_978710b0_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn7_978710b0_Rx_RxSignalBufferRouting] */
  /*    70 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn8_07380d21_Rx] */
  /*    71 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn8_07380d21_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn8_07380d21_Rx_RxSignalBufferRouting] */
  /*    72 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmBlkIDBytePosn1_16ee2fa8_Rx] */
  /*    73 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmBlkIDBytePosn1_16ee2fa8_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmBlkIDBytePosn1_16ee2fa8_Rx_RxSignalBufferRouting] */
  /*    74 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn2_c9255841_Rx] */
  /*    75 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn2_c9255841_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn2_c9255841_Rx_RxSignalBufferRouting] */
  /*    76 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn3_be2268d7_Rx] */
  /*    77 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn3_be2268d7_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn3_be2268d7_Rx_RxSignalBufferRouting] */
  /*    78 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn4_2046fd74_Rx] */
  /*    79 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn4_2046fd74_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn4_2046fd74_Rx_RxSignalBufferRouting] */
  /*    80 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn5_5741cde2_Rx] */
  /*    81 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn5_5741cde2_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn5_5741cde2_Rx_RxSignalBufferRouting] */
  /*    82 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn6_ce489c58_Rx] */
  /*    83 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn6_ce489c58_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn6_ce489c58_Rx_RxSignalBufferRouting] */
  /*    84 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn7_b94facce_Rx] */
  /*    85 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn7_b94facce_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn7_b94facce_Rx_RxSignalBufferRouting] */
  /*    86 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn8_29f0b15f_Rx] */
  /*    87 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn8_29f0b15f_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn8_29f0b15f_Rx_RxSignalBufferRouting] */
  /*    88 */  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1CarModSts1_a7324f03_Rx] */
  /*    89 */  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1CarModSts1_a7324f03_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1CarModSts1_a7324f03_Rx_RxSignalBufferRouting] */
  /*    90 */  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1CarModSubtypWdCarModSubtyp_e21ae44e_Rx] */
  /*    91 */  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1CarModSubtypWdCarModSubtyp_e21ae44e_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1CarModSubtypWdCarModSubtyp_e21ae44e_Rx_RxSignalBufferRouting] */
  /*    92 */  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1Chks_5333fc0b_Rx] */
  /*    93 */  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1Chks_5333fc0b_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1Chks_5333fc0b_Rx_RxSignalBufferRouting] */
  /*    94 */  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1Cntr_ede3beb1_Rx] */
  /*    95 */  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1Cntr_ede3beb1_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1Cntr_ede3beb1_Rx_RxSignalBufferRouting] */
  /*    96 */  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1EgyLvlElecMai_47690dfe_Rx] */
  /*    97 */  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1EgyLvlElecMai_47690dfe_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1EgyLvlElecMai_47690dfe_Rx_RxSignalBufferRouting] */
  /*    98 */  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1EgyLvlElecSubtyp_47668699_Rx] */
  /*    99 */  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1EgyLvlElecSubtyp_47668699_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1EgyLvlElecSubtyp_47668699_Rx_RxSignalBufferRouting] */
  /* Index        Referable Keys */
  /*   100 */  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1FltEgyCnsWdSts_c45a6bde_Rx] */
  /*   101 */  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1FltEgyCnsWdSts_c45a6bde_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1FltEgyCnsWdSts_c45a6bde_Rx_RxSignalBufferRouting] */
  /*   102 */  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1PwrLvlElecMai_c178728f_Rx] */
  /*   103 */  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1PwrLvlElecMai_c178728f_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1PwrLvlElecMai_c178728f_Rx_RxSignalBufferRouting] */
  /*   104 */  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1PwrLvlElecSubtyp_d042c1b3_Rx] */
  /*   105 */  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1PwrLvlElecSubtyp_d042c1b3_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1PwrLvlElecSubtyp_d042c1b3_Rx_RxSignalBufferRouting] */
  /*   106 */  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1UsgModSts_8ea1ac37_Rx] */
  /*   107 */  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1UsgModSts_8ea1ac37_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1UsgModSts_8ea1ac37_Rx_RxSignalBufferRouting] */
  /*   108 */  /* [/ActiveEcuC/Com/ComConfig/igVehMtnSt_68a0f345_Rx/isVehMtnStChks_46ae48d7_Rx] */
  /*   109 */  /* [/ActiveEcuC/Com/ComConfig/igVehMtnSt_68a0f345_Rx/isVehMtnStChks_46ae48d7_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehMtnSt_68a0f345_Rx/isVehMtnStChks_46ae48d7_Rx_RxSignalBufferRouting] */
  /*   110 */  /* [/ActiveEcuC/Com/ComConfig/igVehMtnSt_68a0f345_Rx/isVehMtnStCntr_f87e0a6d_Rx] */
  /*   111 */  /* [/ActiveEcuC/Com/ComConfig/igVehMtnSt_68a0f345_Rx/isVehMtnStCntr_f87e0a6d_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehMtnSt_68a0f345_Rx/isVehMtnStCntr_f87e0a6d_Rx_RxSignalBufferRouting] */
  /*   112 */  /* [/ActiveEcuC/Com/ComConfig/igVehMtnSt_68a0f345_Rx/isVehMtnStVehMtnSt_e696b713_Rx] */
  /*   113 */  /* [/ActiveEcuC/Com/ComConfig/igVehMtnSt_68a0f345_Rx/isVehMtnStVehMtnSt_e696b713_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehMtnSt_68a0f345_Rx/isVehMtnStVehMtnSt_e696b713_Rx_RxSignalBufferRouting] */
  /*   114 */  /* [/ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx/isVehSpdLgtChks_060f2c10_Rx] */
  /*   115 */  /* [/ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx/isVehSpdLgtChks_060f2c10_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx/isVehSpdLgtChks_060f2c10_Rx_RxSignalBufferRouting] */
  /*   116 */  /* [/ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx/isVehSpdLgtCntr_b8df6eaa_Rx] */
  /*   117 */  /* [/ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx/isVehSpdLgtCntr_b8df6eaa_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx/isVehSpdLgtCntr_b8df6eaa_Rx_RxSignalBufferRouting] */
  /*   118 */  /* [/ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx/isVehSpdLgtQf_057400a6_Rx] */
  /*   119 */  /* [/ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx/isVehSpdLgtQf_057400a6_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx/isVehSpdLgtQf_057400a6_Rx_RxSignalBufferRouting] */
  /*   120 */  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysTqAllwd_20f5846f_Rx/isWhlMotSysTqAllwdChks_5c573be4_Rx] */
  /*   121 */  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysTqAllwd_20f5846f_Rx/isWhlMotSysTqAllwdChks_5c573be4_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqAllwd_20f5846f_Rx/isWhlMotSysTqAllwdChks_5c573be4_Rx_RxSignalBufferRouting] */
  /*   122 */  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysTqAllwd_20f5846f_Rx/isWhlMotSysTqAllwdCntr_e287795e_Rx] */
  /*   123 */  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysTqAllwd_20f5846f_Rx/isWhlMotSysTqAllwdCntr_e287795e_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqAllwd_20f5846f_Rx/isWhlMotSysTqAllwdCntr_e287795e_Rx_RxSignalBufferRouting] */
  /*   124 */  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysTqAllwd_20f5846f_Rx/isWhlMotSysTqAllwdWhlMotSysTqAllwd_0ecd7abd_Rx] */
  /*   125 */  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysTqAllwd_20f5846f_Rx/isWhlMotSysTqAllwdWhlMotSysTqAllwd_0ecd7abd_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqAllwd_20f5846f_Rx/isWhlMotSysTqAllwdWhlMotSysTqAllwd_0ecd7abd_Rx_RxSignalBufferRouting] */
  /*   126 */  /* [/ActiveEcuC/Com/ComConfig/isDCChrgnHndlSts_7439a8f3_Rx, /ActiveEcuC/Com/ComConfig/isDCChrgnHndlSts_7439a8f3_Rx_RxSignalBufferRouting] */
  /*   127 */  /* [/ActiveEcuC/Com/ComConfig/isDrvgCyc_edb7d721_Rx, /ActiveEcuC/Com/ComConfig/isDrvgCyc_edb7d721_Rx_RxSignalBufferRouting] */
  /*   128 */  /* [/ActiveEcuC/Com/ComConfig/isGearLvrIndcn_bb4b951e_Rx, /ActiveEcuC/Com/ComConfig/isGearLvrIndcn_bb4b951e_Rx_RxSignalBufferRouting] */
  /*   129 */  /* [/ActiveEcuC/Com/ComConfig/isOnBdChrgrHndlSts1_677311c9_Rx, /ActiveEcuC/Com/ComConfig/isOnBdChrgrHndlSts1_677311c9_Rx_RxSignalBufferRouting] */
  /*   130 */  /* [/ActiveEcuC/Com/ComConfig/isPLockParkReq_5b6f1b96_Rx, /ActiveEcuC/Com/ComConfig/isPLockParkReq_5b6f1b96_Rx_RxSignalBufferRouting] */
  /*   131 */  /* [/ActiveEcuC/Com/ComConfig/isPrpsnFbLimnIndcn_5674da6b_Rx, /ActiveEcuC/Com/ComConfig/isPrpsnFbLimnIndcn_5674da6b_Rx_RxSignalBufferRouting] */
  /*   132 */  /* [/ActiveEcuC/Com/ComConfig/isRearHeatModEnad_a110df41_Rx, /ActiveEcuC/Com/ComConfig/isRearHeatModEnad_a110df41_Rx_RxSignalBufferRouting] */
  /*   133 */  /* [/ActiveEcuC/Com/ComConfig/isRearHeatPwrAllwd_c919804a_Rx, /ActiveEcuC/Com/ComConfig/isRearHeatPwrAllwd_c919804a_Rx_RxSignalBufferRouting] */
  /*   134 */  /* [/ActiveEcuC/Com/ComConfig/isWhlMotSysActvDampgModReq_1c578291_Rx, /ActiveEcuC/Com/ComConfig/isWhlMotSysActvDampgModReq_1c578291_Rx_RxSignalBufferRouting] */
  /*   135 */  /* [/ActiveEcuC/Com/ComConfig/isWhlMotSysModReq_0153ebfe_Rx, /ActiveEcuC/Com/ComConfig/isWhlMotSysModReq_0153ebfe_Rx_RxSignalBufferRouting] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_SigGrpEventFlag
**********************************************************************************************************************/
/** 
  \var    Com_SigGrpEventFlag
  \brief  Flag is set if a group signal write access caused a triggered event.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_SigGrpEventFlagType, COM_VAR_NOINIT) Com_SigGrpEventFlag[9];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TmpRxBuffer
**********************************************************************************************************************/
/** 
  \var    Com_TmpRxBuffer
  \brief  Temporary buffer for Rx UINT8_N and UINT8_DYN signals.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TmpRxBufferType, COM_VAR_NOINIT) Com_TmpRxBuffer[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TmpRxShdBufferSInt16
**********************************************************************************************************************/
/** 
  \var    Com_TmpRxShdBufferSInt16
  \brief  Temporary Rx Group Signal Shadow Buffer. (SINT16)
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TmpRxShdBufferSInt16UType, COM_VAR_NOINIT) Com_TmpRxShdBufferSInt16;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx/isPtTqAtAxleMaxReqPtTqAtAxleReReq_449843f2_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx/isPtTqAtAxleMaxReqPtTqAtAxleFrntReq_8c330c00_Rx] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TmpRxShdBufferUInt16
**********************************************************************************************************************/
/** 
  \var    Com_TmpRxShdBufferUInt16
  \brief  Temporary Rx Group Signal Shadow Buffer. (UINT16)
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TmpRxShdBufferUInt16Type, COM_VAR_NOINIT) Com_TmpRxShdBufferUInt16[2];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx/isVehSpdLgtA_668ad5e3_Rx, /ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcEngRotTarSpdDMCFrnt_46c9d05b_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcEngRotTarSpdDMCRear_ee201c9c_Rx] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TmpRxShdBufferUInt8
**********************************************************************************************************************/
/** 
  \var    Com_TmpRxShdBufferUInt8
  \brief  Temporary Rx Group Signal Shadow Buffer. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TmpRxShdBufferUInt8Type, COM_VAR_NOINIT) Com_TmpRxShdBufferUInt8[10];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/igHvSysRlySts_760c5326_Rx/isHvSysRlyStsHvSysRlySts_5b219bea_Rx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqAllwd_20f5846f_Rx/isWhlMotSysTqAllwdWhlMotSysTqAllwd_0ecd7abd_Rx, /ActiveEcuC/Com/ComConfig/igEngSt1WdSts_adcf75d2_Rx/isEngSt1WdStsChks_75cf5b53_Rx, /ActiveEcuC/Com/ComConfig/igCrashStsSafe_0a09c5f2_Rx/isCrashStsSafeChks_42d0b327_Rx, /ActiveEcuC/Com/ComConfig/igVehMtnSt_68a0f345_Rx/isVehMtnStChks_46ae48d7_Rx, /ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx/isVehSpdLgtQf_057400a6_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn8_29f0b15f_Rx, /ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx/isPtTqAtAxleMaxReqCntr_d4048d38_Rx, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq4_9b6bb3ea_Rx, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1EgyLvlElecMai_47690dfe_Rx, /ActiveEcuC/Com/ComConfig/igVehBattU_0a2a47a4_Rx/isVehBattUSysUQf_f605b03a_Rx, /ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcRear_121676a5_Rx, /ActiveEcuC/Com/ComConfig/igEscVariantToDmc_3c205019_Rx/isEscVariantToDmcEscVariantToDmc_daa2c955_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtBlkIDBytePosn1_6585aabf_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/igHvSysRlySts_760c5326_Rx/isHvSysRlyStsChks_b1dd6f20_Rx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqAllwd_20f5846f_Rx/isWhlMotSysTqAllwdCntr_e287795e_Rx, /ActiveEcuC/Com/ComConfig/igEngSt1WdSts_adcf75d2_Rx/isEngSt1WdStsCntr_cb1f19e9_Rx, /ActiveEcuC/Com/ComConfig/igCrashStsSafe_0a09c5f2_Rx/isCrashStsSafeCntr_fc00f19d_Rx, /ActiveEcuC/Com/ComConfig/igVehMtnSt_68a0f345_Rx/isVehMtnStVehMtnSt_e696b713_Rx, /ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx/isVehSpdLgtCntr_b8df6eaa_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn5_5741cde2_Rx, /ActiveEcuC/Com/ComConfig/igPtTqAtAxleMaxReq_e1a6f04e_Rx/isPtTqAtAxleMaxReqChks_6ad4cf82_Rx, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngMgrCmdTar1_817e486b_Rx, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1Cntr_ede3beb1_Rx, /ActiveEcuC/Com/ComConfig/igVehBattU_0a2a47a4_Rx/isVehBattUSysU_9501cb8f_Rx, /ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcChks_7f830d10_Rx, /ActiveEcuC/Com/ComConfig/igEscVariantToDmc_3c205019_Rx/isEscVariantToDmcChks_9a33bac6_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn3_90ead4a9_Rx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/igHvSysRlySts_760c5326_Rx/isHvSysRlyStsCntr_0f0d2d9a_Rx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqAllwd_20f5846f_Rx/isWhlMotSysTqAllwdChks_5c573be4_Rx, /ActiveEcuC/Com/ComConfig/igEngSt1WdSts_adcf75d2_Rx/isEngSt1WdStsEngSt1WdSts_21868fa0_Rx, /ActiveEcuC/Com/ComConfig/igCrashStsSafe_0a09c5f2_Rx/isCrashStsSafeSts_847c5d07_Rx, /ActiveEcuC/Com/ComConfig/igVehMtnSt_68a0f345_Rx/isVehMtnStCntr_f87e0a6d_Rx, /ActiveEcuC/Com/ComConfig/igVehSpdLgt_56c0cfd4_Rx/isVehSpdLgtChks_060f2c10_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn4_2046fd74_Rx, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq0_9c0677f3_Rx, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1UsgModSts_8ea1ac37_Rx, /ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcFrnt_baffba62_Rx, /ActiveEcuC/Com/ComConfig/igEscVariantToDmc_3c205019_Rx/isEscVariantToDmcCntr_24e3f87c_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn2_e7ede43f_Rx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn3_be2268d7_Rx, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq5_ec6c837c_Rx, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1CarModSubtypWdCarModSubtyp_e21ae44e_Rx, /ActiveEcuC/Com/ComConfig/igStcStsToDmc_cb036148_Rx/isStcStsToDmcCntr_c1534faa_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn5_7989719c_Rx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmBlkIDBytePosn1_16ee2fa8_Rx, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq1_eb014765_Rx, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1PwrLvlElecMai_c178728f_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn6_e0802026_Rx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn2_c9255841_Rx, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq6_7565d2c6_Rx, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1Chks_5333fc0b_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn4_0e8e410a_Rx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn6_ce489c58_Rx, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq3_050f2649_Rx, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1PwrLvlElecSubtyp_d042c1b3_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn7_978710b0_Rx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/igVehCfgPrm_eee11443_Rx/isVehCfgPrmCCPBytePosn7_b94facce_Rx, /ActiveEcuC/Com/ComConfig/igImobEngMgrReq2_1df0559d_Rx/isImobEngMgrReq2ImobEngDataMgrReq2_720816df_Rx, /ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1CarModSts1_a7324f03_Rx, /ActiveEcuC/Com/ComConfig/igVehCfgPrmExt_b2e1e62e_Rx/isVehCfgPrmExtCCPBytePosn8_07380d21_Rx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1EgyLvlElecSubtyp_47668699_Rx] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/igVehModMngtGlbSafe1_d1f2be1a_Rx/isVehModMngtGlbSafe1FltEgyCnsWdSts_c45a6bde_Rx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TransmitRequest
**********************************************************************************************************************/
/** 
  \var    Com_TransmitRequest
  \brief  Transmit request flag used for decoupled Tx I-PDU tranmission.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TransmitRequestType, COM_VAR_NOINIT) Com_TransmitRequest[14];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC33_15629d15, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC35_fc013820, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC30_8c6bccaf, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC16_573e0b18, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC27_0b14684d] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC35_fc013820, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC27_0b14684d] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC27_0b14684d] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC35_fc013820] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC33_15629d15, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC35_fc013820, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC16_573e0b18, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC27_0b14684d] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC33_15629d15, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC30_8c6bccaf, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC16_573e0b18] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_EiraIpdu_Tx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxBuffer
**********************************************************************************************************************/
/** 
  \var    Com_TxBuffer
  \brief  Shared uint8 buffer for Tx I-PDUs and ComSignalGroup shadow buffer.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxBufferType, COM_VAR_NOINIT) Com_TxBuffer[167];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqEst_02b3fb8d_TxSigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqEst_02b3fb8d_TxSigGrpInTxIPDU] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqEst_02b3fb8d_TxSigGrpInTxIPDU] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqEst_02b3fb8d_TxSigGrpInTxIPDU, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqEst_02b3fb8d_TxUbIdxInTxBuffer] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx, /ActiveEcuC/Com/ComConfig/isWhlMotSysModSts_bd46c3f5_Tx, /ActiveEcuC/Com/ComConfig/isWhlMotSysModSts_bd46c3f5_TxUbIdxInTxBuffer, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqAvl_6ba13f42_TxUbIdxInTxBuffer] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqAvl_6ba13f42_TxSigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqAvl_6ba13f42_TxSigGrpInTxIPDU] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqAvl_6ba13f42_TxSigGrpInTxIPDU] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx, /ActiveEcuC/Com/ComConfig/isWhlMotSysSpdAct_e26fc666_Tx, /ActiveEcuC/Com/ComConfig/isWhlMotSysSpdAct_e26fc666_TxUbIdxInTxBuffer] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx, /ActiveEcuC/Com/ComConfig/isWhlMotSysSpdAct_e26fc666_Tx] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx, /ActiveEcuC/Com/ComConfig/isWhlMotSysCooltT_da703242_TxUbIdxInTxBuffer] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx, /ActiveEcuC/Com/ComConfig/isWhlMotSysCooltT_da703242_Tx] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx, /ActiveEcuC/Com/ComConfig/isImobEngSts2_5f8745c8_Tx, /ActiveEcuC/Com/ComConfig/isImobEngSts2_5f8745c8_TxUbIdxInTxBuffer, /ActiveEcuC/Com/ComConfig/isWhlMotSysLimnIndcn_9f88a06a_TxUbIdxInTxBuffer, /ActiveEcuC/Com/ComConfig/isWhlMotSysUdc_432c4140_Tx, /ActiveEcuC/Com/ComConfig/isWhlMotSysUdc_432c4140_TxUbIdxInTxBuffer] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx, /ActiveEcuC/Com/ComConfig/isWhlMotSysUdc_432c4140_Tx] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx, /ActiveEcuC/Com/ComConfig/isWhlMotSysLimnIndcn_9f88a06a_Tx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx, /ActiveEcuC/Com/ComConfig/isWhlMotSysLimnIndcn_9f88a06a_Tx] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_TxSigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_TxSigGrpInTxIPDU] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_TxSigGrpInTxIPDU] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_TxSigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_TxSigGrpInTxIPDU] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_TxSigGrpInTxIPDU] */
  /*    32 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx, /ActiveEcuC/Com/ComConfig/isWhlMotSysInvrT_11341a35_Tx] */
  /*    33 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx, /ActiveEcuC/Com/ComConfig/isWhlMotSysCoolgReq_32e8ee03_Tx, /ActiveEcuC/Com/ComConfig/isWhlMotSysCoolgReq_32e8ee03_TxUbIdxInTxBuffer, /ActiveEcuC/Com/ComConfig/isWhlMotSysErrIndcnReq_d5e6edc2_Tx, /ActiveEcuC/Com/ComConfig/isWhlMotSysErrIndcnReq_d5e6edc2_TxUbIdxInTxBuffer, /ActiveEcuC/Com/ComConfig/isWhlMotSysInvrT_11341a35_TxUbIdxInTxBuffer, /ActiveEcuC/Com/ComConfig/isWhlMotSysMotT_54e003b6_TxUbIdxInTxBuffer] */
  /*    34 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx, /ActiveEcuC/Com/ComConfig/isWhlMotSysMotT_54e003b6_Tx] */
  /*    35 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx, /ActiveEcuC/Com/ComConfig/isWhlMotClrRdyReq_189c9369_Tx, /ActiveEcuC/Com/ComConfig/isWhlMotClrRdyReq_189c9369_TxUbIdxInTxBuffer] */
  /*    36 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx] */
  /*    39 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx] */
  /*    40 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx, /ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_TxSigGrpInTxIPDU, /ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_TxUbIdxInTxBuffer] */
  /*    41 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx, /ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_TxSigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx, /ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_TxSigGrpInTxIPDU] */
  /*    47 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx, /ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_TxSigGrpInTxIPDU] */
  /*    48 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_TxSigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_TxSigGrpInTxIPDU] */
  /*    55 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_TxSigGrpInTxIPDU] */
  /*    56 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx, /ActiveEcuC/Com/ComConfig/isPLockFltIndcRe_f756fd30_Tx, /ActiveEcuC/Com/ComConfig/isPLockFltIndcRe_f756fd30_TxUbIdxInTxBuffer, /ActiveEcuC/Com/ComConfig/isPLockFltLvlRe_167e1ed2_Tx, /ActiveEcuC/Com/ComConfig/isWhlMotCooltFlowMinReq_102e8fa4_Tx] */
  /*    57 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx, /ActiveEcuC/Com/ComConfig/isWhlMotCooltFlowMinReq_102e8fa4_Tx] */
  /*    58 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx] */
  /*    61 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx] */
  /*    62 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx, /ActiveEcuC/Com/ComConfig/isPLockFltLvlRe_167e1ed2_TxUbIdxInTxBuffer, /ActiveEcuC/Com/ComConfig/isWhlMotCooltFlowMinReq_102e8fa4_TxUbIdxInTxBuffer] */
  /*    63 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx] */
  /*    64 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx, /ActiveEcuC/Com/ComConfig/isPLockParkStsRe_8fb3cac5_TxUbIdxInTxBuffer, /ActiveEcuC/Com/ComConfig/isWhlMotSysIdc_56101b54_Tx, /ActiveEcuC/Com/ComConfig/isWhlMotSysIdc_56101b54_TxUbIdxInTxBuffer] */
  /*    65 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx, /ActiveEcuC/Com/ComConfig/isWhlMotSysIdc_56101b54_Tx] */
  /*    66 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx, /ActiveEcuC/Com/ComConfig/isPLockParkStsRe_8fb3cac5_Tx, /ActiveEcuC/Com/ComConfig/isWhlMotSysHeatPwrAct_e1709dcf_TxUbIdxInTxBuffer] */
  /*    67 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx, /ActiveEcuC/Com/ComConfig/isWhlMotSysHeatPwrAct_e1709dcf_Tx] */
  /*    68 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx] */
  /*    71 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx] */
  /* Index        Referable Keys */
  /*    72 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_TxSigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_TxSigGrpInTxIPDU] */
  /*    79 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_TxSigGrpInTxIPDU] */
  /*    80 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysSpdActSafe_58c9c55b_TxSigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysSpdActSafe_58c9c55b_TxSigGrpInTxIPDU] */
  /*    82 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysSpdActSafe_58c9c55b_TxSigGrpInTxIPDU] */
  /*    83 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysSpdActSafe_58c9c55b_TxSigGrpInTxIPDU, /ActiveEcuC/Com/ComConfig/igWhlMotSysSpdActSafe_58c9c55b_TxUbIdxInTxBuffer] */
  /*    84 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx] */
  /*    87 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx] */
  /*    88 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_Tx, /ActiveEcuC/Com/ComConfig/isWhlMotSysHeatPwrMax_d3ea4a02_Tx] */
  /*    89 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_Tx, /ActiveEcuC/Com/ComConfig/isWhlMotSysHeatFdBck_516116c8_Tx, /ActiveEcuC/Com/ComConfig/isWhlMotSysHeatFdBck_516116c8_TxUbIdxInTxBuffer, /ActiveEcuC/Com/ComConfig/isWhlMotSysHeatPwrMax_d3ea4a02_TxUbIdxInTxBuffer] */
  /*    90 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_Tx] */
  /*    95 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_Tx] */
  /*    96 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx, /ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_TxSigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx, /ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_TxSigGrpInTxIPDU] */
  /*   101 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx, /ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_TxSigGrpInTxIPDU] */
  /*   102 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx] */
  /*   103 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx, /ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_TxUbIdxInTxBuffer] */
  /*   104 */  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_EiraIpdu_Tx, /ActiveEcuC/Com/ComConfig/PropulsionCAN_EiraSignal_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_EiraIpdu_Tx, /ActiveEcuC/Com/ComConfig/PropulsionCAN_EiraSignal_Tx] */
  /*   109 */  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_EiraIpdu_Tx, /ActiveEcuC/Com/ComConfig/PropulsionCAN_EiraSignal_Tx] */
  /*   110 */  /* [/ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx, /ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx/isDmcStsRearToEscChks_0817ec86_Tx] */
  /*   111 */  /* [/ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx, /ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx/isDmcStsRearToEscDmcSts_2fffc6c5_Tx, /ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx/isDmcStsRearToEscCntr_b6c7ae3c_Tx] */
  /*   112 */  /* [/ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx, /ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx/isDmcStsRearToEscDmcActAppTarTq_eaa126f0_Tx] */
  /*   113 */  /* [/ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx, /ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx/isDmcStsRearToEscDmcActAppTarTq_eaa126f0_Tx] */
  /*   114 */  /* [/ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx, /ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx/isDmcStsRearToEscDmcSWInfo_6d930900_Tx] */
  /*   115 */  /* [/ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx, /ActiveEcuC/Com/ComConfig/igDmcStsRearToEsc_5d8e0053_Tx/isDmcStsRearToEscDmcSWInfo_6d930900_Tx] */
  /*   116 */  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx/isIEMTestFr1Byte0_eb2525b1_Tx] */
  /*   117 */  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx/isIEMTestFr1Byte1_9c221527_Tx] */
  /*   118 */  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx/isIEMTestFr1Byte2_052b449d_Tx] */
  /*   119 */  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx/isIEMTestFr1Byte3_722c740b_Tx] */
  /*   120 */  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx/isIEMTestFr1Byte4_ec48e1a8_Tx] */
  /*   121 */  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx/isIEMTestFr1Byte5_9b4fd13e_Tx] */
  /*   122 */  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx/isIEMTestFr1Byte6_02468084_Tx] */
  /*   123 */  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr1_f9c0b06a_Tx/isIEMTestFr1Byte7_7541b012_Tx] */
  /*   124 */  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx/isIEMTestFr2Byte0_6db1571f_Tx] */
  /*   125 */  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx/isIEMTestFr2Byte1_1ab66789_Tx] */
  /*   126 */  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx/isIEMTestFr2Byte2_83bf3633_Tx] */
  /*   127 */  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx/isIEMTestFr2Byte3_f4b806a5_Tx] */
  /*   128 */  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx/isIEMTestFr2Byte4_6adc9306_Tx] */
  /*   129 */  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx/isIEMTestFr2Byte5_1ddba390_Tx] */
  /*   130 */  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx/isIEMTestFr2Byte6_84d2f22a_Tx] */
  /*   131 */  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr2_60c9e1d0_Tx/isIEMTestFr2Byte7_f3d5c2bc_Tx] */
  /*   132 */  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx/isIEMTestFr3Byte0_a6ed84ba_Tx] */
  /*   133 */  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx/isIEMTestFr3Byte1_d1eab42c_Tx] */
  /*   134 */  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx/isIEMTestFr3Byte2_48e3e596_Tx] */
  /*   135 */  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx/isIEMTestFr3Byte3_3fe4d500_Tx] */
  /*   136 */  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx/isIEMTestFr3Byte4_a18040a3_Tx] */
  /* Index        Referable Keys */
  /*   137 */  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx/isIEMTestFr3Byte5_d6877035_Tx] */
  /*   138 */  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx/isIEMTestFr3Byte6_4f8e218f_Tx] */
  /*   139 */  /* [/ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx, /ActiveEcuC/Com/ComConfig/igIEMTestFr3_17ced146_Tx/isIEMTestFr3Byte7_38891119_Tx] */
  /*   140 */  /* [/ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericDTCHig_6365ed22_Tx] */
  /*   141 */  /* [/ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericDTCLow_2f81f21c_Tx] */
  /*   142 */  /* [/ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericDTCMid_fca77e73_Tx] */
  /*   143 */  /* [/ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericDTCSts_96a019d2_Tx] */
  /*   144 */  /* [/ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericEMSeqNr_5f6f0e31_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericEMQnty_067a3f4d_Tx] */
  /*   145 */  /* [/ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericModStatusRms_527fb71c_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericTypeInfo_10f77ae7_Tx] */
  /*   146 */  /* [/ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericADAlrmSt_2216fde0_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericIacAlrmSt_ef864a8f_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericFltAlrmSt_094332cf_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericInvrtTAlrmSt_ad103698_Tx] */
  /*   147 */  /* [/ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericUDcAlrmSt_14e497d8_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericSpdAlrmSt_a3de8d5b_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericRslAlrmSt_09c5d09c_Tx, /ActiveEcuC/Com/ComConfig/igIemGeneric_ab95030b_Tx/isIemGenericMotTAlrmSt_e29bb0dd_Tx] */
  /*   148 */  /* [/ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx, /ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx/isImobEngChk2ImobEngChkSts_8e88c5e4_Tx] */
  /*   149 */  /* [/ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx, /ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx/isImobEngChk2ImobEngDataChk0_fba6858b_Tx] */
  /*   150 */  /* [/ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx, /ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx/isImobEngChk2ImobEngDataChk1_8ca1b51d_Tx] */
  /*   151 */  /* [/ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx, /ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx/isImobEngChk2ImobEngDataChk2_15a8e4a7_Tx] */
  /*   152 */  /* [/ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx, /ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx/isImobEngChk2ImobEngDataChk3_62afd431_Tx] */
  /*   153 */  /* [/ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx, /ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx/isImobEngChk2ImobEngDataChk4_fccb4192_Tx] */
  /*   154 */  /* [/ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx, /ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx/isImobEngChk2ImobEngDataChk5_8bcc7104_Tx] */
  /*   155 */  /* [/ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx, /ActiveEcuC/Com/ComConfig/igImobEngChk2_35eae3c1_Tx/isImobEngChk2ImobEngDataChk6_12c520be_Tx] */
  /*   156 */  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysSpdActSafe_58c9c55b_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysSpdActSafe_58c9c55b_Tx/isWhlMotSysSpdActSafeCntr_307aefc1_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysSpdActSafe_58c9c55b_Tx/isWhlMotSysSpdActSafeQf_b9719ecc_Tx] */
  /*   157 */  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysSpdActSafe_58c9c55b_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysSpdActSafe_58c9c55b_Tx/isWhlMotSysSpdActSafeChks_8eaaad7b_Tx] */
  /*   158 */  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysSpdActSafe_58c9c55b_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysSpdActSafe_58c9c55b_Tx/isWhlMotSysSpdActSafeIsgSpdWSgnTyp_9d8822c6_Tx] */
  /*   159 */  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysSpdActSafe_58c9c55b_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysSpdActSafe_58c9c55b_Tx/isWhlMotSysSpdActSafeIsgSpdWSgnTyp_9d8822c6_Tx] */
  /*   160 */  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysTqAvl_6ba13f42_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqAvl_6ba13f42_Tx/isWhlMotSysTqAvlTqAvlMax_bb518dba_Tx] */
  /*   161 */  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysTqAvl_6ba13f42_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqAvl_6ba13f42_Tx/isWhlMotSysTqAvlTqAvlMin_875cb2e3_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqAvl_6ba13f42_Tx/isWhlMotSysTqAvlTqAvlMax_bb518dba_Tx] */
  /*   162 */  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysTqAvl_6ba13f42_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqAvl_6ba13f42_Tx/isWhlMotSysTqAvlTqAvlMin_875cb2e3_Tx] */
  /*   163 */  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysTqEst_02b3fb8d_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqEst_02b3fb8d_Tx/isWhlMotSysTqEstChks_cdf81842_Tx] */
  /*   164 */  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysTqEst_02b3fb8d_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqEst_02b3fb8d_Tx/isWhlMotSysTqEstIsgTqAct_70852206_Tx] */
  /*   165 */  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysTqEst_02b3fb8d_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqEst_02b3fb8d_Tx/isWhlMotSysTqEstIsgTqAct_70852206_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqEst_02b3fb8d_Tx/isWhlMotSysTqEstQualityFactor_cb4e64ff_Tx] */
  /*   166 */  /* [/ActiveEcuC/Com/ComConfig/igWhlMotSysTqEst_02b3fb8d_Tx, /ActiveEcuC/Com/ComConfig/igWhlMotSysTqEst_02b3fb8d_Tx/isWhlMotSysTqEstCntr_73285af8_Tx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxCyclicProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxCyclicProcessingISRLockCounterType, COM_VAR_NOINIT) Com_TxCyclicProcessingISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxIPduGroupISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxIPduGroupISRLockCounterType, COM_VAR_NOINIT) Com_TxIPduGroupISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduGrpActive
**********************************************************************************************************************/
/** 
  \var    Com_TxPduGrpActive
  \brief  Tx I-PDU based state (started/stopped) of the corresponding I-PDU-Group.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxPduGrpActiveType, COM_VAR_NOINIT) Com_TxPduGrpActive[14];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC33_15629d15, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC35_fc013820, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC30_8c6bccaf, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC16_573e0b18, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC27_0b14684d] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC35_fc013820, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC27_0b14684d] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC27_0b14684d] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC35_fc013820] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC33_15629d15, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC35_fc013820, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC16_573e0b18, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC27_0b14684d] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC33_15629d15, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC30_8c6bccaf, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC16_573e0b18] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_EiraIpdu_Tx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxProcessingISRLockCounterType, COM_VAR_NOINIT) Com_TxProcessingISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSduLength
**********************************************************************************************************************/
/** 
  \var    Com_TxSduLength
  \brief  This var Array contains the Com Ipdu Length.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxSduLengthType, COM_VAR_NOINIT) Com_TxSduLength[14];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu01_3346005e_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC33_15629d15, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC35_fc013820, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC30_8c6bccaf, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC16_573e0b18, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC27_0b14684d] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/IemEduPropSignalIPdu02_aa4f51e4_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu01_21049770_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu02_b80dc6ca_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu03_cf0af65c_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC35_fc013820, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC27_0b14684d] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu04_516e63ff_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu06_bf6002d3_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC27_0b14684d] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu07_c8673245_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC35_fc013820] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu08_58d82fd4_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC33_15629d15, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC35_fc013820, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC16_573e0b18, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC27_0b14684d] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu09_2fdf1f42_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu12_a116f78b_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC39_f5b7740b, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC33_15629d15, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC30_8c6bccaf, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC16_573e0b18] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu14_487552be_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC25_e51a0961, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC29_ecac454a, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC24_921d39f7, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_PNC26_7c1358db] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/IemPropSignalIPdu16_a67b3392_Tx, /ActiveEcuC/Com/ComConfig/TxSPG_PropulsionCAN_617cc08d] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/PropulsionCAN_EiraIpdu_Tx] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
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
  END OF FILE: Com_Lcfg.c
**********************************************************************************************************************/

