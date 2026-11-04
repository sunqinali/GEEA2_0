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
 *            Module: PduR
 *           Program: MSR_Vector_SLP4
 *          Customer: Aptiv (China) Technology Company Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397 
 *    License Scope : The usage is restricted to CBD2000642_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: PduR_Cfg.h
 *   Generation Time: 2026-10-30 22:11:23
 *           Project: IEM_TC387_BRS - Version 1
 *          Delivery: CBD2000642_D01
 *      Tool Version: DaVinci Configurator  5.22.45 SP3
 *
 *
 *********************************************************************************************************************/

#if !defined (PDUR_CFG_H)
# define PDUR_CFG_H

/**********************************************************************************************************************
 * MISRA JUSTIFICATION
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "PduR_Types.h"

/**********************************************************************************************************************
 * GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#ifndef PDUR_USE_DUMMY_STATEMENT
#define PDUR_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef PDUR_DUMMY_STATEMENT
#define PDUR_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef PDUR_DUMMY_STATEMENT_CONST
#define PDUR_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef PDUR_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define PDUR_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef PDUR_ATOMIC_VARIABLE_ACCESS
#define PDUR_ATOMIC_VARIABLE_ACCESS 32u /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef PDUR_PROCESSOR_TC397X_STEPB
#define PDUR_PROCESSOR_TC397X_STEPB
#endif
#ifndef PDUR_COMP_TASKING
#define PDUR_COMP_TASKING
#endif
#ifndef PDUR_GEN_GENERATOR_MSR
#define PDUR_GEN_GENERATOR_MSR
#endif
#ifndef PDUR_CPUTYPE_BITORDER_LSB2MSB
#define PDUR_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/vSet/vSetPlatform/vSetBitOrder */
#endif
#ifndef PDUR_CONFIGURATION_VARIANT_PRECOMPILE
#define PDUR_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef PDUR_CONFIGURATION_VARIANT_LINKTIME
#define PDUR_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef PDUR_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define PDUR_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef PDUR_CONFIGURATION_VARIANT
#define PDUR_CONFIGURATION_VARIANT PDUR_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef PDUR_POSTBUILD_VARIANT_SUPPORT
#define PDUR_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif



#define PDUR_DEV_ERROR_DETECT STD_ON  /**< /ActiveEcuC/PduR/PduRGeneral[0:PduRSafeBswChecks] || /ActiveEcuC/PduR/PduRGeneral[0:PduRDevErrorDetect] */
#define PDUR_DEV_ERROR_REPORT STD_ON  /**< /ActiveEcuC/PduR/PduRGeneral[0:PduRDevErrorDetect] */

#define PDUR_EXTENDED_ERROR_CHECKS STD_OFF  /**< /ActiveEcuC/PduR/PduRGeneral[0:PduRExtendedErrorChecks] */

#define PDUR_METADATA_SUPPORT STD_OFF  /**< /ActiveEcuC/PduR/PduRGeneral[0:PduRMetaDataSupport] */
#define PDUR_VERSION_INFO_API STD_OFF  /**< /ActiveEcuC/PduR/PduRGeneral[0:PduRVersionInfoApi] */

#define PDUR_ERROR_NOTIFICATION STD_OFF

#define PDUR_MAIN_FUNCTION STD_OFF

#define PDUR_MULTICORE STD_OFF /**< /ActiveEcuC/PduR/PduRGeneral[0:PduRSupportMulticore] */

#define PduR_PBConfigIdType uint32

 
 /*  DET Error define list  */ 
#define PDUR_FCT_CANIFRXIND 0x01u 
#define PDUR_FCT_CANIFTX 0x09u 
#define PDUR_FCT_CANIFTXCFM 0x02u 
#define PDUR_FCT_CANTPRXIND 0x05u 
#define PDUR_FCT_CANTPTX 0x09u 
#define PDUR_FCT_CANTPTXCFM 0x08u 
#define PDUR_FCT_CANTPSOR 0x06u 
#define PDUR_FCT_CANTPCPYRX 0x04u 
#define PDUR_FCT_CANTPCPYTX 0x07u 
#define PDUR_FCT_COMTX 0x89u 
#define PDUR_FCT_DCMTX 0x99u 
#define PDUR_FCT_CANNMRXIND 0x11u 
#define PDUR_FCT_CANNMTX 0x19u 
#define PDUR_FCT_CANNMTXCFM 0x12u 
#define PDUR_FCT_CANNMTT 0x13u 
 /*   PduR_CanIfIfRxIndication  PduR_CanIfTransmit  PduR_CanIfTxConfirmation  PduR_CanTpTpRxIndication  PduR_CanTpTransmit  PduR_CanTpTxConfirmation  PduR_CanTpStartOfReception  PduR_CanTpCopyRxData  PduR_CanTpCopyTxData  PduR_ComTransmit  PduR_DcmTransmit  PduR_CanNmIfRxIndication  PduR_CanNmTransmit  PduR_CanNmTxConfirmation  PduR_CanNmTriggerTransmit  */ 



/**
 * \defgroup PduRHandleIdsIfRxDest Handle IDs of handle space IfRxDest.
 * \brief Communication interface Rx destination PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_BecmPropSignalIpdu01_e4f1b6c7_Rx_d978c2f8_Rx 0u
#define PduRConf_PduRDestPdu_BecmPropSignalIpdu02_a919b6a0_Rx_03540ad7_Rx 1u
#define PduRConf_PduRDestPdu_BecmPropSignalIpdu03_24914b42_Rx_2fbd4436_Rx 2u
#define PduRConf_PduRDestPdu_BecmPropSignalIpdu15_f1c84025_Rx_97fbab59_Rx 3u
#define PduRConf_PduRDestPdu_CddObcPropSignalIPdu01_1ee0577a_Rx_9b6ba7e6_Rx 4u
#define PduRConf_PduRDestPdu_ECMPropSignalIPDU02_2a2da2a9_Rx_c52842d9_Rx 5u
#define PduRConf_PduRDestPdu_ECMPropSignalIPDU04_b1fda267_Rx_e135b2fa_Rx 6u
#define PduRConf_PduRDestPdu_ECMPropSignalIPDU05_3c755f85_Rx_916b682c_Rx 7u
#define PduRConf_PduRDestPdu_ECMPropSignalIPDU06_719d5fe2_Rx_2d833a1c_Rx 8u
#define PduRConf_PduRDestPdu_EcmPropSignalIPDU08_f2c9e4fc_Rx_cd8794a7_Rx 9u
#define PduRConf_PduRDestPdu_EcmPropSignalIPDU11_86a9e821_Rx_019d6fbe_Rx 10u
#define PduRConf_PduRDestPdu_EcmPropSignalIPDU28_6fdbf3ae_Rx_332380ac_Rx 11u
#define PduRConf_PduRDestPdu_EcmPropSignalIPdu24_045785fe_Rx_0c4be5f2_Rx 12u
#define PduRConf_PduRDestPdu_EcmPropSignalIPdu25_89df781c_Rx_87cbdfdf_Rx 13u
#define PduRConf_PduRDestPdu_PropulsionCAN_33157db4_Rx_d0a6735a_Rx_f30b45d0_Rx 14u
#define PduRConf_PduRDestPdu_SrsPropSignalIPdu02_30ca6a16_Rx_e6b4c0ad_Rx 15u
#define PduRConf_PduRDestPdu_VDDMPropSignalIPDU05_753dbccf_Rx_8adb95b0_Rx 16u
#define PduRConf_PduRDestPdu_VDDMPropSignalIPDU06_38d5bca8_Rx_ac9bf55a_Rx 17u
#define PduRConf_PduRDestPdu_VDDMPropSignalIPDU08_146446f0_Rx_eff178fd_Rx 18u
#define PduRConf_PduRDestPdu_VDDMPropSignalIPDU11_60044a2d_Rx_3ed696a1_Rx 19u
#define PduRConf_PduRDestPdu_VDDMPropSignalIPDU16_765cb701_Rx_86801b79_Rx 20u
#define PduRConf_PduRDestPdu_VDDMPropSignalIPDU17_fbd44ae3_Rx_a83bf697_Rx 21u
#define PduRConf_PduRDestPdu_VDDMPropSignalIPDU18_5aed4d59_Rx_c01e7a1d_Rx 22u
#define PduRConf_PduRDestPdu_VDDMPropSignalIPDU19_d765b0bb_Rx_83c4d48c_Rx 23u
#define PduRConf_PduRDestPdu_VDDMPropdTCSignalIPdu38_4bda4dd7_Rx_f7a62982_Rx 24u
#define PduRConf_PduRDestPdu_VddmBcmPropdTCSignalIPDU01_857b2e99_Rx_f2322b88_Rx 25u
#define PduRConf_PduRDestPdu_VddmPropSignalIPdu26_893fed53_Rx_21f2d8e6_Rx 26u
/**\} */

/**
 * \defgroup PduRHandleIdsIfRxSrc Handle IDs of handle space IfRxSrc.
 * \brief Communication interface Rx source PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0c4be5f2                       12u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2d833a1c                       8u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2fbd4436                       2u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3ed696a1                       19u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_8adb95b0                       16u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_9b6ba7e6                       4u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_21f2d8e6                       26u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_83c4d48c                       23u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_87cbdfdf                       13u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_97fbab59                       3u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_019d6fbe                       10u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_916b682c                       7u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_03540ad7                       1u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_86801b79                       20u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_332380ac                       11u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_a83bf697                       21u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ac9bf55a                       17u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c01e7a1d                       22u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c52842d9                       5u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_cd8794a7                       9u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_d978c2f8                       0u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_e6b4c0ad                       15u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_e135b2fa                       6u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_eff178fd                       18u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_f7a62982                       24u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_f30b45d0                       14u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_f2322b88                       25u
/**\} */

/**
 * \defgroup PduRHandleIdsIfTpTxSrc Handle IDs of handle space IfTpTxSrc.
 * \brief Communication interface and transport protocol Tx PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0af6e6e3                       6u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0bf0194b                       2u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1f99744c                       15u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2b1294b8                       9u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3                              18u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_5ecec422                       0u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_35fca203                       12u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_53beb1f3                       5u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_75b2e816                       13u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_145e853b                       8u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_292b77a0                       4u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_956c143d                       3u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_9766d5ce                       7u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_a6ed57d5                       17u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_a9fef54e                       10u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_acf6831c                       11u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c6a1321b                       14u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_e109a8bf                       16u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_f9d732b4                       1u
/**\} */

/**
 * \defgroup PduRHandleIdsIfTxDest Handle IDs of handle space IfTxDest.
 * \brief Communication interface Tx destination PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_IemEduPropSignalIPdu01_a3cd4ce7_Tx       0u
#define PduRConf_PduRDestPdu_IemEduPropSignalIPdu02_ee254c80_Tx       1u
#define PduRConf_PduRDestPdu_IemPropSignalIPdu01_1988e981_Tx          2u
#define PduRConf_PduRDestPdu_IemPropSignalIPdu02_5460e9e6_Tx          3u
#define PduRConf_PduRDestPdu_IemPropSignalIPdu03_d9e81404_Tx          4u
#define PduRConf_PduRDestPdu_IemPropSignalIPdu04_cfb0e928_Tx          5u
#define PduRConf_PduRDestPdu_IemPropSignalIPdu06_0fd014ad_Tx          6u
#define PduRConf_PduRDestPdu_IemPropSignalIPdu07_8258e94f_Tx          7u
#define PduRConf_PduRDestPdu_IemPropSignalIPdu08_2361eef5_Tx          8u
#define PduRConf_PduRDestPdu_IemPropSignalIPdu09_aee91317_Tx          9u
#define PduRConf_PduRDestPdu_IemPropSignalIPdu12_1ae9e24f_Tx          10u
#define PduRConf_PduRDestPdu_IemPropSignalIPdu14_8139e281_Tx          11u
#define PduRConf_PduRDestPdu_IemPropSignalIPdu16_41591f04_Tx          12u
#define PduRConf_PduRDestPdu_PropulsionCAN_EiraUserData_Dest          13u
/**\} */

/**
 * \defgroup PduRHandleIdsTpRxDest Handle IDs of handle space TpRxDest.
 * \brief Transport protocol Rx destination PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_EtcToAllJ1979OBDDiagDcmIpdu11_b7ab7660_Rx_63335c9b_Rx 0u
#define PduRConf_PduRDestPdu_EtcToIemJ1979OBDDiagDcmIpdu11_ac95f359_Rx_62791526_Rx 1u
#define PduRConf_PduRDestPdu_UudtDcmRx1_Dest                          2u
#define PduRConf_PduRDestPdu_UudtDcmRx2_Dest                          3u
#define PduRConf_PduRDestPdu_UudtDcmRx3_Dest                          4u
#define PduRConf_PduRDestPdu_VgmToAllFuncDiagDcmIpdu_030e2fcd_Rx_3ccfd7a6_Rx 5u
#define PduRConf_PduRDestPdu_VgmToIemDiagDcmIpdu_81f41e2d_Rx_f62b73a4_Rx 6u
/**\} */

/**
 * \defgroup PduRHandleIdsTpRxSrc Handle IDs of handle space TpRxSrc.
 * \brief Transport protocol Rx source PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRSrcPdu_PduRSrcPdu                                2u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1                              3u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2                              4u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3ccfd7a6                       5u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_63335c9b                       0u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_62791526                       1u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_f62b73a4                       6u
/**\} */

/**
 * \defgroup PduRHandleIdsTpTxDest Handle IDs of handle space TpTxDest.
 * \brief Transport protocol Tx PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_IemToEtcJ1979OBDDiagDcmIpdu11_525ada58_Tx 0u
#define PduRConf_PduRDestPdu_IemToEtcUudtDcmIpdu1_4ae85965_Tx         1u
#define PduRConf_PduRDestPdu_IemToEtcUudtDcmIpdu2_07005902_Tx         2u
#define PduRConf_PduRDestPdu_IemToEtcUudtDcmIpdu3_8a88a4e0_Tx         3u
#define PduRConf_PduRDestPdu_IemToVgmDiagDcmIpdu_411ec11e_Tx          4u
/**\} */


/* User Config File Start */

/* User Config File End */


/**********************************************************************************************************************
 * GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

#endif  /* PDUR_CFG_H */
/**********************************************************************************************************************
 * END OF FILE: PduR_Cfg.h
 *********************************************************************************************************************/

