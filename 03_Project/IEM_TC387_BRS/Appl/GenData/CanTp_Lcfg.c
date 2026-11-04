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
 *            Module: CanTp
 *           Program: MSR_Vector_SLP4
 *          Customer: Aptiv (China) Technology Company Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397 
 *    License Scope : The usage is restricted to CBD2000642_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: CanTp_Lcfg.c
 *   Generation Time: 2026-10-30 22:11:23
 *           Project: IEM_TC387_BRS - Version 1
 *          Delivery: CBD2000642_D01
 *      Tool Version: DaVinci Configurator  5.22.45 SP3
 *
 *
 *********************************************************************************************************************/

#define CANTP_LCFG_SOURCE

/* -----------------------------------------------------------------------------
    &&&~ Include files
 ----------------------------------------------------------------------------- */

#include "CanTp_Lcfg.h"
#if (CANTP_LOLAYER_CANIF == STD_ON)
# include "CanIf.h"
#endif
#include "PduR_CanTp.h"
/* -----------------------------------------------------------------------------
    &&&~ Data definitions
 ----------------------------------------------------------------------------- */



/**********************************************************************************************************************
 *  LOCAL DATA
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
 *  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CanTp_RxPduMap
**********************************************************************************************************************/
/** 
  \var    CanTp_RxPduMap
  \details
  Element                Description
  RxSduCfgIndEndIdx      the end index of the 0:n relation pointing to CanTp_RxSduCfgInd
  RxSduCfgIndStartIdx    the start index of the 0:n relation pointing to CanTp_RxSduCfgInd
  TxSduCfgIndEndIdx      the end index of the 0:n relation pointing to CanTp_TxSduCfgInd
  TxSduCfgIndStartIdx    the start index of the 0:n relation pointing to CanTp_TxSduCfgInd
*/ 
#define CANTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTp_RxPduMapType, CANTP_CONST) CanTp_RxPduMap[7] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RxSduCfgIndEndIdx  RxSduCfgIndStartIdx  TxSduCfgIndEndIdx                     TxSduCfgIndStartIdx                    */
  { /*     0 */                1u,                  0u,                                   1u,                                     0u },
  { /*     1 */                2u,                  1u,                                   2u,                                     1u },
  { /*     2 */                3u,                  2u,                                   3u,                                     2u },
  { /*     3 */                4u,                  3u,                                   4u,                                     3u },
  { /*     4 */                5u,                  4u,                                   5u,                                     4u },
  { /*     5 */                6u,                  5u, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP },
  { /*     6 */                7u,                  6u, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP }
};
#define CANTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_RxSduCfg
**********************************************************************************************************************/
/** 
  \var    CanTp_RxSduCfg
  \details
  Element                     Description
  LoLayerTxFcPduId        
  PduRRxSduId             
  RxPduId                 
  TxFcPduConfirmationPduId
  RxTaType                
  TxSduCfgIdx                 the index of the 0:1 relation pointing to CanTp_TxSduCfg
*/ 
#define CANTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTp_RxSduCfgType, CANTP_CONST) CanTp_RxSduCfg[7] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    LoLayerTxFcPduId                                                      PduRRxSduId                              RxPduId                                     TxFcPduConfirmationPduId                        RxTaType                             TxSduCfgIdx                           Comment                            Referable Keys */
  { /*     0 */ CanIfConf_CanIfTxPduCfg_UudtIemNPdu1_b38ffc6e_Tx                    , PduRConf_PduRSrcPdu_PduRSrcPdu         , CanTpConf_CanTpRxNPdu_CanTpRxNPdu         , CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu         ,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,                             1u },  /* [CanTpRxNSdu]          */  /* [CanTpRxNSdu, 0] */
  { /*     1 */ CANTP_INVALID_HDL                                                   , PduRConf_PduRSrcPdu_PduRSrcPdu_63335c9b, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_8f524760, CANTP_INVALID_HDL                             , CANTP_FUNCTIONAL_RXTATYPEOFRXSDUCFG, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_0d429961] */  /* [CanTpRxNSdu_0d429961, 6] */
  { /*     2 */ CanIfConf_CanIfTxPduCfg_UudtIemNPdu2_85c005b2_Tx                    , PduRConf_PduRSrcPdu_PduRSrcPdu_1       , CanTpConf_CanTpRxNPdu_CanTpRxNPdu_1       , CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_001     ,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,                             0u },  /* [CanTpRxNSdu_001]      */  /* [CanTpRxNSdu_001, 1] */
  { /*     3 */ CanIfConf_CanIfTxPduCfg_UudtIemNPdu3_97faad06_Tx                    , PduRConf_PduRSrcPdu_PduRSrcPdu_2       , CanTpConf_CanTpRxNPdu_CanTpRxNPdu_2       , CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_002     ,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,                             3u },  /* [CanTpRxNSdu_002]      */  /* [CanTpRxNSdu_002, 2] */
  { /*     4 */ CanIfConf_CanIfTxPduCfg_IemToVddmPropDiagResNpdu_1dd128ca_Tx        , PduRConf_PduRSrcPdu_PduRSrcPdu_f62b73a4, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_17ec4684, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_17ec4684,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,                             2u },  /* [CanTpRxNSdu_183e09ee] */  /* [CanTpRxNSdu_183e09ee, 3] */
  { /*     5 */ CANTP_INVALID_HDL                                                   , PduRConf_PduRSrcPdu_PduRSrcPdu_3ccfd7a6, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_9726b6f8, CANTP_INVALID_HDL                             , CANTP_FUNCTIONAL_RXTATYPEOFRXSDUCFG, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_c024ac3e] */  /* [CanTpRxNSdu_c024ac3e, 5] */
  { /*     6 */ CanIfConf_CanIfTxPduCfg_IemToVgmJ1979OBDPropCanResNpdu11_d809dece_Tx, PduRConf_PduRSrcPdu_PduRSrcPdu_62791526, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_106c7114, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_106c7114,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,                             4u }   /* [CanTpRxNSdu_f73faffe] */  /* [CanTpRxNSdu_f73faffe, 4] */
};
#define CANTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_RxSduCfgInd
**********************************************************************************************************************/
/** 
  \var    CanTp_RxSduCfgInd
  \brief  the indexes of the 1:1 sorted relation pointing to CanTp_RxSduCfg
*/ 
#define CANTP_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTp_RxSduCfgIndType, CANTP_CONST) CanTp_RxSduCfgInd[7] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     RxSduCfgInd      Referable Keys */
  /*     0 */           0u,  /* [0] */
  /*     1 */           2u,  /* [1] */
  /*     2 */           3u,  /* [2] */
  /*     3 */           4u,  /* [3] */
  /*     4 */           6u,  /* [4] */
  /*     5 */           5u,  /* [5] */
  /*     6 */           1u   /* [6] */
};
#define CANTP_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_RxSduSnv2Hdl
**********************************************************************************************************************/
/** 
  \var    CanTp_RxSduSnv2Hdl
  \details
  Element        Description
  RxSduCfgIdx    the index of the 0:1 relation pointing to CanTp_RxSduCfg
*/ 
#define CANTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTp_RxSduSnv2HdlType, CANTP_CONST) CanTp_RxSduSnv2Hdl[7] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RxSduCfgIdx        Comment */
  { /*     0 */          0u },  /* [CanTpRxNSdu] */
  { /*     1 */          1u },  /* [CanTpRxNSdu_0d429961] */
  { /*     2 */          2u },  /* [CanTpRxNSdu_001] */
  { /*     3 */          3u },  /* [CanTpRxNSdu_002] */
  { /*     4 */          4u },  /* [CanTpRxNSdu_183e09ee] */
  { /*     5 */          5u },  /* [CanTpRxNSdu_c024ac3e] */
  { /*     6 */          6u }   /* [CanTpRxNSdu_f73faffe] */
};
#define CANTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_TxSduCfg
**********************************************************************************************************************/
/** 
  \var    CanTp_TxSduCfg
  \details
  Element                   Description
  LoLayerTxPduId        
  PduRTxSduId           
  RxFcPduId             
  TxPduConfirmationPduId
  RxSduCfgIdx               the index of the 0:1 relation pointing to CanTp_RxSduCfg
*/ 
#define CANTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTp_TxSduCfgType, CANTP_CONST) CanTp_TxSduCfg[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    LoLayerTxPduId                                                        PduRTxSduId                                                     RxFcPduId                                       TxPduConfirmationPduId                      RxSduCfgIdx        Comment                            Referable Keys */
  { /*     0 */ CanIfConf_CanIfTxPduCfg_UudtIemNPdu2_85c005b2_Tx                    , PduRConf_PduRDestPdu_IemToEtcUudtDcmIpdu2_07005902_Tx         , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_001     , CanTpConf_CanTpTxNPdu_CanTpTxNPdu_6f36b3fb,          2u },  /* [CanTpTxNSdu_4e62aa3e] */  /* [CanTpTxNSdu_4e62aa3e, 1] */
  { /*     1 */ CanIfConf_CanIfTxPduCfg_UudtIemNPdu1_b38ffc6e_Tx                    , PduRConf_PduRDestPdu_IemToEtcUudtDcmIpdu1_4ae85965_Tx         , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu         , CanTpConf_CanTpTxNPdu_CanTpTxNPdu_8431c063,          0u },  /* [CanTpTxNSdu_46d88454] */  /* [CanTpTxNSdu_46d88454, 0] */
  { /*     2 */ CanIfConf_CanIfTxPduCfg_IemToVddmPropDiagResNpdu_1dd128ca_Tx        , PduRConf_PduRDestPdu_IemToVgmDiagDcmIpdu_411ec11e_Tx          , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_35169276, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_35169276,          4u },  /* [CanTpTxNSdu_183e09ee] */  /* [CanTpTxNSdu_183e09ee, 3] */
  { /*     3 */ CanIfConf_CanIfTxPduCfg_UudtIemNPdu3_97faad06_Tx                    , PduRConf_PduRDestPdu_IemToEtcUudtDcmIpdu3_8a88a4e0_Tx         , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_002     , CanTpConf_CanTpTxNPdu_CanTpTxNPdu_173b30c5,          3u },  /* [CanTpTxNSdu_67838de1] */  /* [CanTpTxNSdu_67838de1, 2] */
  { /*     4 */ CanIfConf_CanIfTxPduCfg_IemToVgmJ1979OBDPropCanResNpdu11_d809dece_Tx, PduRConf_PduRDestPdu_IemToEtcJ1979OBDDiagDcmIpdu11_525ada58_Tx, CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_3296a5e6, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_3296a5e6,          6u }   /* [CanTpTxNSdu_f73faffe] */  /* [CanTpTxNSdu_f73faffe, 4] */
};
#define CANTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_TxSduCfgInd
**********************************************************************************************************************/
/** 
  \var    CanTp_TxSduCfgInd
  \brief  the indexes of the 1:1 sorted relation pointing to CanTp_TxSduCfg
*/ 
#define CANTP_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTp_TxSduCfgIndType, CANTP_CONST) CanTp_TxSduCfgInd[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     TxSduCfgInd      Referable Keys */
  /*     0 */           1u,  /* [0] */
  /*     1 */           0u,  /* [1] */
  /*     2 */           3u,  /* [2] */
  /*     3 */           2u,  /* [3] */
  /*     4 */           4u   /* [4] */
};
#define CANTP_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_TxSduSnv2Hdl
**********************************************************************************************************************/
/** 
  \var    CanTp_TxSduSnv2Hdl
  \details
  Element        Description
  TxSduCfgIdx    the index of the 0:1 relation pointing to CanTp_TxSduCfg
*/ 
#define CANTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTp_TxSduSnv2HdlType, CANTP_CONST) CanTp_TxSduSnv2Hdl[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxSduCfgIdx        Comment */
  { /*     0 */          0u },  /* [CanTpTxNSdu_4e62aa3e] */
  { /*     1 */          1u },  /* [CanTpTxNSdu_46d88454] */
  { /*     2 */          2u },  /* [CanTpTxNSdu_183e09ee] */
  { /*     3 */          3u },  /* [CanTpTxNSdu_67838de1] */
  { /*     4 */          4u }   /* [CanTpTxNSdu_f73faffe] */
};
#define CANTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_CalcBS
**********************************************************************************************************************/
#define CANTP_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanTp_CalcBSType, CANTP_VAR_NOINIT) CanTp_CalcBS[7];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CANTP_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_RxState
**********************************************************************************************************************/
#define CANTP_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanTp_RxStateType, CANTP_VAR_NOINIT) CanTp_RxState[7];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CANTP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_TxSemaphores
**********************************************************************************************************************/
#define CANTP_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanTp_TxSemaphoreType, CANTP_VAR_NOINIT) CanTp_TxSemaphores[5];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CANTP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_TxState
**********************************************************************************************************************/
#define CANTP_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanTp_TxStateType, CANTP_VAR_NOINIT) CanTp_TxState[5];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CANTP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
 * FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/




