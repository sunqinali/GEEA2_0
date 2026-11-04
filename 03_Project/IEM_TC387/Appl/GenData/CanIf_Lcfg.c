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
 *            Module: CanIf
 *           Program: MSR_Vector_SLP4
 *          Customer: Aptiv (China) Technology Company Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Aurix 2G/TC397 B-Step
 *    License Scope : The usage is restricted to CBD1900078_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: CanIf_Lcfg.c
 *   Generation Time: 2026-10-30 12:41:03
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

#define CANIF_LCFG_SOURCE

/* PRQA S 0850 EOF */ /* MD_MSR_19.8 */
/* PRQA S 0857 EOF */ /* MD_CanIf_1.1_NumberOfMacroDefinitions */
/* PRQA S 0779 EOF */ /* MD_CanIf_5.1 */
/* PRQA S 0777 EOF */ /* MD_CanIf_5.1 */
/* PRQA S 1330, 1334 EOF */ /* MD_CanIf_16.4, MD_CanIf_16.4 */

/**********************************************************************************************************************
  \file  Includes
**********************************************************************************************************************/
/** 
  \brief  Required external files.
*/ 

#include "CanIf_Cfg.h"

 /*  CanNm Header Files  */ 
#include "CanNm_Cfg.h"
#include "CanNm_Cbk.h"
 /*  CanTp Header Files  */ 
#include "CanTp_Cfg.h"
#include "CanTp_Cbk.h"
 /*  PduR Header Files  */ 
#include "PduR_Cfg.h"
#include "PduR_CanIf.h"
 /*  CanSM Header Files  */ 
#include "CanSM_Cbk.h"

#define CANIF_START_SEC_APPL_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/**********************************************************************************************************************
  \var  Prototypes of callback functions
**********************************************************************************************************************/

/** 
  \brief  Tx confirmation functions.
*/



/** 
  \brief  Rx indication functions.
*/





#define CANIF_STOP_SEC_APPL_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/**********************************************************************************************************************
  ComStackLib
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
  CanIf_BusOffNotificationFctPtr
**********************************************************************************************************************/
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_BusOffNotificationFctType, CANIF_CONST) CanIf_BusOffNotificationFctPtr = CanSM_ControllerBusOff;
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_CanIfCtrlId2MappedTxBuffersConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_CanIfCtrlId2MappedTxBuffersConfig
  \brief  CAN controller configuration - mapped Tx-buffer(s).
  \details
  Element                          Description
  MappedTxBuffersConfigEndIdx      the end index of the 1:n relation pointing to CanIf_MappedTxBuffersConfig
  MappedTxBuffersConfigStartIdx    the start index of the 1:n relation pointing to CanIf_MappedTxBuffersConfig
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_CanIfCtrlId2MappedTxBuffersConfigType, CANIF_CONST) CanIf_CanIfCtrlId2MappedTxBuffersConfig[1] = {
    /* Index    MappedTxBuffersConfigEndIdx                                                                           MappedTxBuffersConfigStartIdx                                                                                 Referable Keys */
  { /*     0 */                         1uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef */,                           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef */ }   /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_CtrlModeIndicationFctPtr
**********************************************************************************************************************/
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_CtrlModeIndicationFctType, CANIF_CONST) CanIf_CtrlModeIndicationFctPtr = CanSM_ControllerModeIndication;
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_MailBoxConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_MailBoxConfig
  \brief  Mailbox table.
  \details
  Element                 Description
  CtrlStatesIdx           the index of the 1:1 relation pointing to CanIf_CtrlStates
  PduIdFirst              "First" PDU mapped to mailbox.
  PduIdLast               "Last" PDU mapped to mailbox.
  TxBufferCfgIdx          the index of the 0:1 relation pointing to CanIf_TxBufferPrioByCanIdByteQueueConfig
  TxBufferHandlingType
  MailBoxType             Type of mailbox: Rx-/Tx- BasicCAN/FullCAN/unused.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_MailBoxConfigType, CANIF_CONST) CanIf_MailBoxConfig[2] = {
    /* Index    CtrlStatesIdx                                                                           PduIdFirst                           PduIdLast                            TxBufferCfgIdx                                                                                       TxBufferHandlingType                     MailBoxType                    Referable Keys */
  { /*     0 */           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef */,         0u  /* Unused, TxPduId 0 */,        0u  /* Unused, TxPduId 18 */,                                    0uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/PropulsionCAN_c77d42b7 */, CANIF_TXBUFFER_HANDLINGTYPE_PRIOBYCANID, CANIF_TxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/PropulsionCAN_IEM_19020f5a_Tx] */
  { /*     1 */           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef */,         1u  /* RxPduId */          ,       33u  /* RxPduId  */          , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex1 */                                         , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxBasicCANMailbox }   /* [/ActiveEcuC/Can/CanConfigSet/PropulsionCAN_IEM_751e9595_Rx] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_MappedTxBuffersConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_MappedTxBuffersConfig
  \brief  Mapped Tx-buffer(s)
  \details
  Element             Description
  MailBoxConfigIdx    the index of the 1:1 relation pointing to CanIf_MailBoxConfig
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_MappedTxBuffersConfigType, CANIF_CONST) CanIf_MappedTxBuffersConfig[1] = {
    /* Index    MailBoxConfigIdx                                                                          Referable Keys */
  { /*     0 */              0uL  /* /ActiveEcuC/Can/CanConfigSet/PropulsionCAN_IEM_19020f5a_Tx */ }   /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_RxIndicationFctList
**********************************************************************************************************************/
/** 
  \var    CanIf_RxIndicationFctList
  \brief  Rx indication functions table.
  \details
  Element               Description
  RxIndicationFct       Rx indication function.
  RxIndicationLayout    Layout of Rx indication function.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_RxIndicationFctListType, CANIF_CONST) CanIf_RxIndicationFctList[4] = {
    /* Index    RxIndicationFct                                               RxIndicationLayout                                                            Referable Keys */
  { /*     0 */  { (CanIf_SimpleRxIndicationFctType)NULL_PTR }              , CanIf_SimpleRxIndicationLayout    /* PRQA S 313 */ /* MD_CanIf_11.1 */ },  /* [NULL_PTR] */
  { /*     1 */  { (CanIf_SimpleRxIndicationFctType)CanNm_RxIndication }    , CanIf_AdvancedRxIndicationLayout  /* PRQA S 313 */ /* MD_CanIf_11.1 */ },  /* [CanNm_RxIndication] */
  { /*     2 */  { (CanIf_SimpleRxIndicationFctType)CanTp_RxIndication }    , CanIf_AdvancedRxIndicationLayout  /* PRQA S 313 */ /* MD_CanIf_11.1 */ },  /* [CanTp_RxIndication] */
  { /*     3 */  { (CanIf_SimpleRxIndicationFctType)PduR_CanIfRxIndication }, CanIf_AdvancedRxIndicationLayout  /* PRQA S 313 */ /* MD_CanIf_11.1 */ }   /* [PduR_CanIfRxIndication] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_RxPduConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_RxPduConfig
  \brief  Rx-PDU configuration table.
  \details
  Element                   Description
  RxPduCanId                Rx-PDU: CAN identifier.
  RxPduMask                 Rx-PDU: CAN identifier mask.
  UpperPduId                PDU ID defined by upper layer.
  Dlc                       Data length code.
  RxIndicationFctListIdx    the index of the 1:1 relation pointing to CanIf_RxIndicationFctList
  MsgType                   Type of CAN message: *CAN (both 2.0 or FD), *FD_CAN (only FD), *NO_FD_CAN (only 2.0).
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_RxPduConfigType, CANIF_CONST) CanIf_RxPduConfig[34] = {
    /* Index    RxPduCanId                                                                          RxPduMask                                                            UpperPduId                                               Dlc  RxIndicationFctListIdx                                MsgType                         Comment                                                                           Referable Keys */
  { /*     0 */    0x0500u  /* Lower CanId of range: IemPropCanNmNode_9021399f_Rx, only 2.0-PDU */,   0x653Fu  /* Upper CanId of range: IemPropCanNmNode_9021399f_Rx */, CanNmConf_CanNmRxPdu_PropulsionCanNmCluster_99dff440_Rx,  8u,                    1uL  /* CanNm_RxIndication */    , CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: IemPropCanNmNode_9021399f_Rx, Lower CanId of range: 0x500]      */  /* [CanIfConf_CanIfRxPduCfg_IemPropCanNmNode_9021399f_Rx] */
  { /*     1 */    0x07FFu  /* VddmToAllFuncPropDiagReqNpdu_b900be48_Rx, only 2.0-PDU */          ,   0x07FFu  /* VddmToAllFuncPropDiagReqNpdu_b900be48_Rx */          , CanTpConf_CanTpRxNPdu_CanTpRxNPdu_9726b6f8             ,  8u,                    2uL  /* CanTp_RxIndication */    , CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: VddmToAllFuncPropDiagReqNpdu_b900be48_Rx, CanId: 0x7ff]         */  /* [CanIfConf_CanIfRxPduCfg_VddmToAllFuncPropDiagReqNpdu_b900be48_Rx] */
  { /*     2 */    0x07F3u  /* UudtFcNPdu3, only 2.0-PDU */                                       ,   0x07FFu  /* UudtFcNPdu3 */                                       , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_002              ,  8u,                    2uL  /* CanTp_RxIndication */    , CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: UudtFcNPdu3, CanId: 0x7f3]                                      */  /* [CanIfConf_CanIfRxPduCfg_UudtFcNPdu3] */
  { /*     3 */    0x07F2u  /* UudtFcNPdu2, only 2.0-PDU */                                       ,   0x07FFu  /* UudtFcNPdu2 */                                       , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_001              ,  8u,                    2uL  /* CanTp_RxIndication */    , CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: UudtFcNPdu2, CanId: 0x7f2]                                      */  /* [CanIfConf_CanIfRxPduCfg_UudtFcNPdu2] */
  { /*     4 */    0x07F1u  /* UudtFcNPdu1, only 2.0-PDU */                                       ,   0x07FFu  /* UudtFcNPdu1 */                                       , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu                  ,  8u,                    2uL  /* CanTp_RxIndication */    , CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: UudtFcNPdu1, CanId: 0x7f1]                                      */  /* [CanIfConf_CanIfRxPduCfg_UudtFcNPdu1] */
  { /*     5 */    0x07E3u  /* VgmToIemJ1979OBDPropCanReqNpdu11_a6f3d656_Rx, only 2.0-PDU */      ,   0x07FFu  /* VgmToIemJ1979OBDPropCanReqNpdu11_a6f3d656_Rx */      , CanTpConf_CanTpRxNPdu_CanTpRxNPdu_106c7114             ,  8u,                    2uL  /* CanTp_RxIndication */    , CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: VgmToIemJ1979OBDPropCanReqNpdu11_a6f3d656_Rx, CanId: 0x7e3]     */  /* [CanIfConf_CanIfRxPduCfg_VgmToIemJ1979OBDPropCanReqNpdu11_a6f3d656_Rx] */
  { /*     6 */    0x07DFu  /* VgmToAllFuncJ1979OBDPropCanReqNpdu11_68e7dbfc_Rx, only 2.0-PDU */  ,   0x07FFu  /* VgmToAllFuncJ1979OBDPropCanReqNpdu11_68e7dbfc_Rx */  , CanTpConf_CanTpRxNPdu_CanTpRxNPdu_8f524760             ,  8u,                    2uL  /* CanTp_RxIndication */    , CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: VgmToAllFuncJ1979OBDPropCanReqNpdu11_68e7dbfc_Rx, CanId: 0x7df] */  /* [CanIfConf_CanIfRxPduCfg_VgmToAllFuncJ1979OBDPropCanReqNpdu11_68e7dbfc_Rx] */
  { /*     7 */    0x0737u  /* VddmToIemPropDiagReqNpdu_0145b13a_Rx, only 2.0-PDU */              ,   0x07FFu  /* VddmToIemPropDiagReqNpdu_0145b13a_Rx */              , CanTpConf_CanTpRxNPdu_CanTpRxNPdu_17ec4684             ,  8u,                    2uL  /* CanTp_RxIndication */    , CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: VddmToIemPropDiagReqNpdu_0145b13a_Rx, CanId: 0x737]             */  /* [CanIfConf_CanIfRxPduCfg_VddmToIemPropDiagReqNpdu_0145b13a_Rx] */
  { /*     8 */    0x0287u  /* EcmPropSignalIPDU11_9b78db2c_Rx, only 2.0-PDU */                   ,   0x07FFu  /* EcmPropSignalIPDU11_9b78db2c_Rx */                   , PduRConf_PduRSrcPdu_PduRSrcPdu_019d6fbe                ,  8u,                    3uL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: EcmPropSignalIPDU11_9b78db2c_Rx, CanId: 0x287]                  */  /* [CanIfConf_CanIfRxPduCfg_EcmPropSignalIPDU11_9b78db2c_Rx] */
  { /*     9 */    0x0285u  /* VDDMPropSignalIPDU19_7dad5c2c_Rx, only 2.0-PDU */                  ,   0x07FFu  /* VDDMPropSignalIPDU19_7dad5c2c_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_83c4d48c                ,  8u,                    3uL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: VDDMPropSignalIPDU19_7dad5c2c_Rx, CanId: 0x285]                 */  /* [CanIfConf_CanIfRxPduCfg_VDDMPropSignalIPDU19_7dad5c2c_Rx] */
  { /*    10 */    0x027Au  /* EcmPropSignalIPdu25_ed472200_Rx, only 2.0-PDU */                   ,   0x07FFu  /* EcmPropSignalIPdu25_ed472200_Rx */                   , PduRConf_PduRSrcPdu_PduRSrcPdu_87cbdfdf                ,  8u,                    3uL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: EcmPropSignalIPdu25_ed472200_Rx, CanId: 0x27a]                  */  /* [CanIfConf_CanIfRxPduCfg_EcmPropSignalIPdu25_ed472200_Rx] */
  { /*    11 */    0x0255u  /* VDDMPropSignalIPDU16_b505c2af_Rx, only 2.0-PDU */                  ,   0x07FFu  /* VDDMPropSignalIPDU16_b505c2af_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_86801b79                ,  8u,                    3uL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: VDDMPropSignalIPDU16_b505c2af_Rx, CanId: 0x255]                 */  /* [CanIfConf_CanIfRxPduCfg_VDDMPropSignalIPDU16_b505c2af_Rx] */
  { /*    12 */    0x0236u  /* VddmPropSignalIPdu26_dc850ebd_Rx, only 2.0-PDU */                  ,   0x07FFu  /* VddmPropSignalIPdu26_dc850ebd_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_21f2d8e6                ,  8u,                    3uL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: VddmPropSignalIPdu26_dc850ebd_Rx, CanId: 0x236]                 */  /* [CanIfConf_CanIfRxPduCfg_VddmPropSignalIPdu26_dc850ebd_Rx] */
  { /*    13 */    0x0235u  /* VDDMPropSignalIPDU06_f578cb85_Rx, only 2.0-PDU */                  ,   0x07FFu  /* VDDMPropSignalIPDU06_f578cb85_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_ac9bf55a                ,  8u,                    3uL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: VDDMPropSignalIPDU06_f578cb85_Rx, CanId: 0x235]                 */  /* [CanIfConf_CanIfRxPduCfg_VDDMPropSignalIPDU06_f578cb85_Rx] */
  { /*    14 */    0x0218u  /* CddObcPropSignalIPdu01_e083acac_Rx, only 2.0-PDU */                ,   0x07FFu  /* CddObcPropSignalIPdu01_e083acac_Rx */                , PduRConf_PduRSrcPdu_PduRSrcPdu_9b6ba7e6                ,  8u,                    3uL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: CddObcPropSignalIPdu01_e083acac_Rx, CanId: 0x218]               */  /* [CanIfConf_CanIfRxPduCfg_CddObcPropSignalIPdu01_e083acac_Rx] */
  { /*    15 */    0x0191u  /* EcmPropSignalIPDU28_97c4e73e_Rx, only 2.0-PDU */                   ,   0x07FFu  /* EcmPropSignalIPDU28_97c4e73e_Rx */                   , PduRConf_PduRSrcPdu_PduRSrcPdu_332380ac                ,  8u,                    3uL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: EcmPropSignalIPDU28_97c4e73e_Rx, CanId: 0x191]                  */  /* [CanIfConf_CanIfRxPduCfg_EcmPropSignalIPDU28_97c4e73e_Rx] */
  { /*    16 */    0x0178u  /* BecmPropSignalIpdu03_e9a68992_Rx, only 2.0-PDU */                  ,   0x07FFu  /* BecmPropSignalIpdu03_e9a68992_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_2fbd4436                ,  8u,                    3uL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: BecmPropSignalIpdu03_e9a68992_Rx, CanId: 0x178]                 */  /* [CanIfConf_CanIfRxPduCfg_BecmPropSignalIpdu03_e9a68992_Rx] */
  { /*    17 */    0x0175u  /* BecmPropSignalIpdu02_4ba4c578_Rx, only 2.0-PDU */                  ,   0x07FFu  /* BecmPropSignalIpdu02_4ba4c578_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_03540ad7                ,  8u,                    3uL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: BecmPropSignalIpdu02_4ba4c578_Rx, CanId: 0x175]                 */  /* [CanIfConf_CanIfRxPduCfg_BecmPropSignalIpdu02_4ba4c578_Rx] */
  { /*    18 */    0x0171u  /* EcmPropSignalIPDU08_d4897b05_Rx, only 2.0-PDU */                   ,   0x07FFu  /* EcmPropSignalIPDU08_d4897b05_Rx */                   , PduRConf_PduRSrcPdu_PduRSrcPdu_cd8794a7                ,  8u,                    3uL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: EcmPropSignalIPDU08_d4897b05_Rx, CanId: 0x171]                  */  /* [CanIfConf_CanIfRxPduCfg_EcmPropSignalIPDU08_d4897b05_Rx] */
  { /*    19 */    0x0162u  /* VDDMPropSignalIPDU17_17078e45_Rx, only 2.0-PDU */                  ,   0x07FFu  /* VDDMPropSignalIPDU17_17078e45_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_a83bf697                ,  8u,                    3uL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: VDDMPropSignalIPDU17_17078e45_Rx, CanId: 0x162]                 */  /* [CanIfConf_CanIfRxPduCfg_VDDMPropSignalIPDU17_17078e45_Rx] */
  { /*    20 */    0x0148u  /* ECMPropSignalIPDU06_d83cf7f3_Rx, only 2.0-PDU */                   ,   0x07FFu  /* ECMPropSignalIPDU06_d83cf7f3_Rx */                   , PduRConf_PduRSrcPdu_PduRSrcPdu_2d833a1c                ,  8u,                    3uL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: ECMPropSignalIPDU06_d83cf7f3_Rx, CanId: 0x148]                  */  /* [CanIfConf_CanIfRxPduCfg_ECMPropSignalIPDU06_d83cf7f3_Rx] */
  { /*    21 */    0x0143u  /* BecmPropSignalIpdu15_d3342646_Rx, only 2.0-PDU */                  ,   0x07FFu  /* BecmPropSignalIpdu15_d3342646_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_97fbab59                ,  8u,                    3uL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: BecmPropSignalIpdu15_d3342646_Rx, CanId: 0x143]                 */  /* [CanIfConf_CanIfRxPduCfg_BecmPropSignalIpdu15_d3342646_Rx] */
  { /*    22 */    0x0141u  /* BecmPropSignalIpdu01_76d31607_Rx, only 2.0-PDU */                  ,   0x07FFu  /* BecmPropSignalIpdu01_76d31607_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_d978c2f8                ,  8u,                    3uL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: BecmPropSignalIpdu01_76d31607_Rx, CanId: 0x141]                 */  /* [CanIfConf_CanIfRxPduCfg_BecmPropSignalIpdu01_76d31607_Rx] */
  { /*    23 */    0x0139u  /* VDDMPropSignalIPDU11_6de828bb_Rx, only 2.0-PDU */                  ,   0x07FFu  /* VDDMPropSignalIPDU11_6de828bb_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_3ed696a1                ,  8u,                    3uL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: VDDMPropSignalIPDU11_6de828bb_Rx, CanId: 0x139]                 */  /* [CanIfConf_CanIfRxPduCfg_VDDMPropSignalIPDU11_6de828bb_Rx] */
  { /*    24 */    0x0131u  /* ECMPropSignalIPDU04_3d57323b_Rx, only 2.0-PDU */                   ,   0x07FFu  /* ECMPropSignalIPDU04_3d57323b_Rx */                   , PduRConf_PduRSrcPdu_PduRSrcPdu_e135b2fa                ,  8u,                    3uL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: ECMPropSignalIPDU04_3d57323b_Rx, CanId: 0x131]                  */  /* [CanIfConf_CanIfRxPduCfg_ECMPropSignalIPDU04_3d57323b_Rx] */
  { /*    25 */    0x012Eu  /* VddmBcmPropdTCSignalIPDU01_bdf43e36_Rx, only 2.0-PDU */            ,   0x07FFu  /* VddmBcmPropdTCSignalIPDU01_bdf43e36_Rx */            , PduRConf_PduRSrcPdu_PduRSrcPdu_f2322b88                ,  8u,                    3uL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: VddmBcmPropdTCSignalIPDU01_bdf43e36_Rx, CanId: 0x12e]           */  /* [CanIfConf_CanIfRxPduCfg_VddmBcmPropdTCSignalIPDU01_bdf43e36_Rx] */
  { /*    26 */    0x011Au  /* VDDMPropdTCSignalIPdu38_c1b9326a_Rx, only 2.0-PDU */               ,   0x07FFu  /* VDDMPropdTCSignalIPdu38_c1b9326a_Rx */               , PduRConf_PduRSrcPdu_PduRSrcPdu_f7a62982                ,  8u,                    3uL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: VDDMPropdTCSignalIPdu38_c1b9326a_Rx, CanId: 0x11a]              */  /* [CanIfConf_CanIfRxPduCfg_VDDMPropdTCSignalIPdu38_c1b9326a_Rx] */
  { /*    27 */    0x0084u  /* ECMPropSignalIPDU05_2f6d9a8f_Rx, only 2.0-PDU */                   ,   0x07FFu  /* ECMPropSignalIPDU05_2f6d9a8f_Rx */                   , PduRConf_PduRSrcPdu_PduRSrcPdu_916b682c                ,  8u,                    3uL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: ECMPropSignalIPDU05_2f6d9a8f_Rx, CanId: 0x84]                   */  /* [CanIfConf_CanIfRxPduCfg_ECMPropSignalIPDU05_2f6d9a8f_Rx] */
  { /*    28 */    0x0076u  /* VDDMPropSignalIPDU05_c80f18fa_Rx, only 2.0-PDU */                  ,   0x07FFu  /* VDDMPropSignalIPDU05_c80f18fa_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_8adb95b0                ,  8u,                    3uL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: VDDMPropSignalIPDU05_c80f18fa_Rx, CanId: 0x76]                  */  /* [CanIfConf_CanIfRxPduCfg_VDDMPropSignalIPDU05_c80f18fa_Rx] */
  { /*    29 */    0x0066u  /* ECMPropSignalIPDU02_51c8c183_Rx, only 2.0-PDU */                   ,   0x07FFu  /* ECMPropSignalIPDU02_51c8c183_Rx */                   , PduRConf_PduRSrcPdu_PduRSrcPdu_c52842d9                ,  8u,                    3uL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: ECMPropSignalIPDU02_51c8c183_Rx, CanId: 0x66]                   */  /* [CanIfConf_CanIfRxPduCfg_ECMPropSignalIPDU02_51c8c183_Rx] */
  { /*    30 */    0x0056u  /* VDDMPropSignalIPDU18_dfaf10c6_Rx, only 2.0-PDU */                  ,   0x07FFu  /* VDDMPropSignalIPDU18_dfaf10c6_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_c01e7a1d                ,  8u,                    3uL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: VDDMPropSignalIPDU18_dfaf10c6_Rx, CanId: 0x56]                  */  /* [CanIfConf_CanIfRxPduCfg_VDDMPropSignalIPDU18_dfaf10c6_Rx] */
  { /*    31 */    0x004Bu  /* EcmPropSignalIPdu24_ff7d8ab4_Rx, only 2.0-PDU */                   ,   0x07FFu  /* EcmPropSignalIPdu24_ff7d8ab4_Rx */                   , PduRConf_PduRSrcPdu_PduRSrcPdu_0c4be5f2                ,  8u,                    3uL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: EcmPropSignalIPdu24_ff7d8ab4_Rx, CanId: 0x4b]                   */  /* [CanIfConf_CanIfRxPduCfg_EcmPropSignalIPdu24_ff7d8ab4_Rx] */
  { /*    32 */    0x0041u  /* VDDMPropSignalIPDU08_9fd219ec_Rx, only 2.0-PDU */                  ,   0x07FFu  /* VDDMPropSignalIPDU08_9fd219ec_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_eff178fd                ,  8u,                    3uL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: VDDMPropSignalIPDU08_9fd219ec_Rx, CanId: 0x41]                  */  /* [CanIfConf_CanIfRxPduCfg_VDDMPropSignalIPDU08_9fd219ec_Rx] */
  { /*    33 */    0x0035u  /* SrsPropSignalIPdu02_67d0f726_Rx, only 2.0-PDU */                   ,   0x07FFu  /* SrsPropSignalIPdu02_67d0f726_Rx */                   , PduRConf_PduRSrcPdu_PduRSrcPdu_e6b4c0ad                ,  8u,                    3uL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_NO_FD_CAN }   /* [PDU: SrsPropSignalIPdu02_67d0f726_Rx, CanId: 0x35]                   */  /* [CanIfConf_CanIfRxPduCfg_SrsPropSignalIPdu02_67d0f726_Rx] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxBufferPrioByCanIdByteQueueConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_TxBufferPrioByCanIdByteQueueConfig
  \brief  Tx-buffer: PRIO_BY_CANID as BYTE_QUEUE
  \details
  Element                                             Description
  TxBufferPrioByCanIdBaseIdx                          the index of the 1:1 relation pointing to CanIf_TxBufferPrioByCanIdBase
  TxBufferPrioByCanIdByteQueueMappedTxPdusEndIdx      the end index of the 1:n relation pointing to CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
  TxBufferPrioByCanIdByteQueueMappedTxPdusLength      the number of relations pointing to CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
  TxBufferPrioByCanIdByteQueueMappedTxPdusStartIdx    the start index of the 1:n relation pointing to CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_TxBufferPrioByCanIdByteQueueConfigType, CANIF_CONST) CanIf_TxBufferPrioByCanIdByteQueueConfig[1] = {
    /* Index    TxBufferPrioByCanIdBaseIdx                                                               TxBufferPrioByCanIdByteQueueMappedTxPdusEndIdx                                                               TxBufferPrioByCanIdByteQueueMappedTxPdusLength                                                               TxBufferPrioByCanIdByteQueueMappedTxPdusStartIdx                                                                     Referable Keys */
  { /*     0 */                        0uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/PropulsionCAN_c77d42b7 */,                                           19uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/PropulsionCAN_c77d42b7 */,                                           19uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/PropulsionCAN_c77d42b7 */,                                              0uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/PropulsionCAN_c77d42b7 */ }   /* [/ActiveEcuC/CanIf/CanIfInitCfg/PropulsionCAN_c77d42b7] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
**********************************************************************************************************************/
/** 
  \var    CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
  \brief  Tx-buffer: PRIO_BY_CANID as BYTE_QUEUE: Mapped Tx-PDUs
  \details
  Element           Description
  TxPduConfigIdx    the index of the 1:1 relation pointing to CanIf_TxPduConfig
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdusType, CANIF_CONST) CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus[19] = {
    /* Index    TxPduConfigIdx                                                                                           Referable Keys */
  { /*     0 */            0uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemToVgmJ1979OBDPropCanResNpdu11_d809dece_Tx */ },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PropulsionCAN_c77d42b7] */
  { /*     1 */            1uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/UudtIemNPdu3_97faad06_Tx */                     },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PropulsionCAN_c77d42b7] */
  { /*     2 */            2uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/UudtIemNPdu2_85c005b2_Tx */                     },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PropulsionCAN_c77d42b7] */
  { /*     3 */            3uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/UudtIemNPdu1_b38ffc6e_Tx */                     },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PropulsionCAN_c77d42b7] */
  { /*     4 */            4uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemToVddmPropDiagResNpdu_1dd128ca_Tx */         },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PropulsionCAN_c77d42b7] */
  { /*     5 */            5uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemPropNmPdu1_1cf32a7f_Tx */                    },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PropulsionCAN_c77d42b7] */
  { /*     6 */            6uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu09_40f13570_Tx */              },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PropulsionCAN_c77d42b7] */
  { /*     7 */            7uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu02_e76b890c_Tx */              },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PropulsionCAN_c77d42b7] */
  { /*     8 */            8uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu01_d12470d0_Tx */              },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PropulsionCAN_c77d42b7] */
  { /*     9 */            9uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu03_f55121b8_Tx */              },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PropulsionCAN_c77d42b7] */
  { /*    10 */           10uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu07_bdbb8368_Tx */              },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PropulsionCAN_c77d42b7] */
  { /*    11 */           11uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu06_af812bdc_Tx */              },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PropulsionCAN_c77d42b7] */
  { /*    12 */           12uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu04_8bf47ab4_Tx */              },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PropulsionCAN_c77d42b7] */
  { /*    13 */           13uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu14_47ea3789_Tx */              },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PropulsionCAN_c77d42b7] */
  { /*    14 */           14uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu12_2b75c431_Tx */              },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PropulsionCAN_c77d42b7] */
  { /*    15 */           15uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu16_3b1ed2aa_Tx */              },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PropulsionCAN_c77d42b7] */
  { /*    16 */           16uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu08_52cb9dc4_Tx */              },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PropulsionCAN_c77d42b7] */
  { /*    17 */           17uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemEduPropSignalIPdu02_69927b9a_Tx */           },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PropulsionCAN_c77d42b7] */
  { /*    18 */           18uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemEduPropSignalIPdu01_45a04f59_Tx */           }   /* [/ActiveEcuC/CanIf/CanIfInitCfg/PropulsionCAN_c77d42b7] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxConfirmationFctList
**********************************************************************************************************************/
/** 
  \var    CanIf_TxConfirmationFctList
  \brief  Tx confirmation functions table.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_TxConfirmationFctType, CANIF_CONST) CanIf_TxConfirmationFctList[4] = {
  /* Index     TxConfirmationFctList                      Referable Keys */
  /*     0 */ (CanIf_TxConfirmationFctType)NULL_PTR ,  /* [NULL_PTR] */
  /*     1 */ CanNm_TxConfirmation                  ,  /* [CanNm_TxConfirmation] */
  /*     2 */ CanTp_TxConfirmation                  ,  /* [CanTp_TxConfirmation] */
  /*     3 */ PduR_CanIfTxConfirmation                 /* [PduR_CanIfTxConfirmation] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxPduConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_TxPduConfig
  \brief  Tx-PDUs - configuration.
  \details
  Element                     Description
  CanId                       CAN identifier (16bit / 32bit).
  UpperLayerTxPduId           Upper layer handle ID (8bit / 16bit).
  CtrlStatesIdx               the index of the 1:1 relation pointing to CanIf_CtrlStates
  Dlc                         Data length code.
  MailBoxConfigIdx            the index of the 1:1 relation pointing to CanIf_MailBoxConfig
  TxConfirmationFctListIdx    the index of the 1:1 relation pointing to CanIf_TxConfirmationFctList
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_TxPduConfigType, CANIF_CONST) CanIf_TxPduConfig[19] = {
    /* Index    CanId    UpperLayerTxPduId                                        CtrlStatesIdx                                                                           Dlc  MailBoxConfigIdx                                                                    TxConfirmationFctListIdx                                        Comment                                                         Referable Keys */
  { /*     0 */ 0x07EBu, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_106c7114         ,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef */,  8u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/PropulsionCAN_IEM_19020f5a_Tx */,                      2uL  /* CanTp_TxConfirmation */     },  /* [PDU: IemToVgmJ1979OBDPropCanResNpdu11_d809dece_Tx] */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemToVgmJ1979OBDPropCanResNpdu11_d809dece_Tx] */
  { /*     1 */ 0x06F2u, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_173b30c5             ,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef */,  8u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/PropulsionCAN_IEM_19020f5a_Tx */,                      2uL  /* CanTp_TxConfirmation */     },  /* [PDU: UudtIemNPdu3_97faad06_Tx]                     */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/UudtIemNPdu3_97faad06_Tx] */
  { /*     2 */ 0x06F1u, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_6f36b3fb             ,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef */,  8u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/PropulsionCAN_IEM_19020f5a_Tx */,                      2uL  /* CanTp_TxConfirmation */     },  /* [PDU: UudtIemNPdu2_85c005b2_Tx]                     */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/UudtIemNPdu2_85c005b2_Tx] */
  { /*     3 */ 0x06F0u, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_8431c063             ,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef */,  8u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/PropulsionCAN_IEM_19020f5a_Tx */,                      2uL  /* CanTp_TxConfirmation */     },  /* [PDU: UudtIemNPdu1_b38ffc6e_Tx]                     */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/UudtIemNPdu1_b38ffc6e_Tx] */
  { /*     4 */ 0x0637u, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_17ec4684         ,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef */,  8u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/PropulsionCAN_IEM_19020f5a_Tx */,                      2uL  /* CanTp_TxConfirmation */     },  /* [PDU: IemToVddmPropDiagResNpdu_1dd128ca_Tx]         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemToVddmPropDiagResNpdu_1dd128ca_Tx] */
  { /*     5 */ 0x051Cu, CanNmConf_CanNmTxPdu_IemPropNmPdu1_277f9a9b_Tx         ,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef */,  8u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/PropulsionCAN_IEM_19020f5a_Tx */,                      1uL  /* CanNm_TxConfirmation */     },  /* [PDU: IemPropNmPdu1_1cf32a7f_Tx]                    */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropNmPdu1_1cf32a7f_Tx] */
  { /*     6 */ 0x0466u, PduRConf_PduRDestPdu_IemPropSignalIPdu09_aee91317_Tx   ,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef */,  8u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/PropulsionCAN_IEM_19020f5a_Tx */,                      3uL  /* PduR_CanIfTxConfirmation */ },  /* [PDU: IemPropSignalIPdu09_40f13570_Tx]              */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu09_40f13570_Tx] */
  { /*     7 */ 0x0465u, PduRConf_PduRDestPdu_IemPropSignalIPdu02_5460e9e6_Tx   ,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef */,  8u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/PropulsionCAN_IEM_19020f5a_Tx */,                      3uL  /* PduR_CanIfTxConfirmation */ },  /* [PDU: IemPropSignalIPdu02_e76b890c_Tx]              */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu02_e76b890c_Tx] */
  { /*     8 */ 0x0457u, PduRConf_PduRDestPdu_IemPropSignalIPdu01_1988e981_Tx   ,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef */,  8u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/PropulsionCAN_IEM_19020f5a_Tx */,                      3uL  /* PduR_CanIfTxConfirmation */ },  /* [PDU: IemPropSignalIPdu01_d12470d0_Tx]              */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu01_d12470d0_Tx] */
  { /*     9 */ 0x0305u, PduRConf_PduRDestPdu_IemPropSignalIPdu03_d9e81404_Tx   ,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef */,  8u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/PropulsionCAN_IEM_19020f5a_Tx */,                      3uL  /* PduR_CanIfTxConfirmation */ },  /* [PDU: IemPropSignalIPdu03_f55121b8_Tx]              */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu03_f55121b8_Tx] */
  { /*    10 */ 0x0283u, PduRConf_PduRDestPdu_IemPropSignalIPdu07_8258e94f_Tx   ,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef */,  8u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/PropulsionCAN_IEM_19020f5a_Tx */,                      3uL  /* PduR_CanIfTxConfirmation */ },  /* [PDU: IemPropSignalIPdu07_bdbb8368_Tx]              */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu07_bdbb8368_Tx] */
  { /*    11 */ 0x0272u, PduRConf_PduRDestPdu_IemPropSignalIPdu06_0fd014ad_Tx   ,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef */,  8u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/PropulsionCAN_IEM_19020f5a_Tx */,                      3uL  /* PduR_CanIfTxConfirmation */ },  /* [PDU: IemPropSignalIPdu06_af812bdc_Tx]              */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu06_af812bdc_Tx] */
  { /*    12 */ 0x0265u, PduRConf_PduRDestPdu_IemPropSignalIPdu04_cfb0e928_Tx   ,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef */,  8u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/PropulsionCAN_IEM_19020f5a_Tx */,                      3uL  /* PduR_CanIfTxConfirmation */ },  /* [PDU: IemPropSignalIPdu04_8bf47ab4_Tx]              */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu04_8bf47ab4_Tx] */
  { /*    13 */ 0x0220u, PduRConf_PduRDestPdu_IemPropSignalIPdu14_8139e281_Tx   ,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef */,  8u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/PropulsionCAN_IEM_19020f5a_Tx */,                      3uL  /* PduR_CanIfTxConfirmation */ },  /* [PDU: IemPropSignalIPdu14_47ea3789_Tx]              */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu14_47ea3789_Tx] */
  { /*    14 */ 0x0189u, PduRConf_PduRDestPdu_IemPropSignalIPdu12_1ae9e24f_Tx   ,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef */,  8u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/PropulsionCAN_IEM_19020f5a_Tx */,                      3uL  /* PduR_CanIfTxConfirmation */ },  /* [PDU: IemPropSignalIPdu12_2b75c431_Tx]              */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu12_2b75c431_Tx] */
  { /*    15 */ 0x0110u, PduRConf_PduRDestPdu_IemPropSignalIPdu16_41591f04_Tx   ,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef */,  8u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/PropulsionCAN_IEM_19020f5a_Tx */,                      3uL  /* PduR_CanIfTxConfirmation */ },  /* [PDU: IemPropSignalIPdu16_3b1ed2aa_Tx]              */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu16_3b1ed2aa_Tx] */
  { /*    16 */ 0x0063u, PduRConf_PduRDestPdu_IemPropSignalIPdu08_2361eef5_Tx   ,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef */,  8u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/PropulsionCAN_IEM_19020f5a_Tx */,                      3uL  /* PduR_CanIfTxConfirmation */ },  /* [PDU: IemPropSignalIPdu08_52cb9dc4_Tx]              */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu08_52cb9dc4_Tx] */
  { /*    17 */ 0x0060u, PduRConf_PduRDestPdu_IemEduPropSignalIPdu02_ee254c80_Tx,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef */,  8u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/PropulsionCAN_IEM_19020f5a_Tx */,                      3uL  /* PduR_CanIfTxConfirmation */ },  /* [PDU: IemEduPropSignalIPdu02_69927b9a_Tx]           */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemEduPropSignalIPdu02_69927b9a_Tx] */
  { /*    18 */ 0x004Cu, PduRConf_PduRDestPdu_IemEduPropSignalIPdu01_a3cd4ce7_Tx,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef */,  8u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/PropulsionCAN_IEM_19020f5a_Tx */,                      3uL  /* PduR_CanIfTxConfirmation */ }   /* [PDU: IemEduPropSignalIPdu01_45a04f59_Tx]           */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemEduPropSignalIPdu01_45a04f59_Tx] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxPduQueueIndex
**********************************************************************************************************************/
/** 
  \var    CanIf_TxPduQueueIndex
  \brief  Indirection table: Tx-PDU handle ID to corresponding Tx buffer handle ID. NOTE: Only BasicCAN Tx-PDUs have a valid indirection into the Tx buffer.
  \details
  Element       Description
  TxQueueIdx    the index of the 0:1 relation pointing to CanIf_TxQueue
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_TxPduQueueIndexType, CANIF_CONST) CanIf_TxPduQueueIndex[19] = {
    /* Index    TxQueueIdx                                                                                           Comment                                                                                   Referable Keys */
  { /*     0 */        0uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemToVgmJ1979OBDPropCanResNpdu11_d809dece_Tx */ },  /* [IemToVgmJ1979OBDPropCanResNpdu11_d809dece_Tx, BasicCAN TxPdu with Tx-buffer] */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemToVgmJ1979OBDPropCanResNpdu11_d809dece_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef] */
  { /*     1 */        1uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/UudtIemNPdu3_97faad06_Tx */                     },  /* [UudtIemNPdu3_97faad06_Tx, BasicCAN TxPdu with Tx-buffer]                     */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/UudtIemNPdu3_97faad06_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef] */
  { /*     2 */        2uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/UudtIemNPdu2_85c005b2_Tx */                     },  /* [UudtIemNPdu2_85c005b2_Tx, BasicCAN TxPdu with Tx-buffer]                     */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/UudtIemNPdu2_85c005b2_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef] */
  { /*     3 */        3uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/UudtIemNPdu1_b38ffc6e_Tx */                     },  /* [UudtIemNPdu1_b38ffc6e_Tx, BasicCAN TxPdu with Tx-buffer]                     */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/UudtIemNPdu1_b38ffc6e_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef] */
  { /*     4 */        4uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemToVddmPropDiagResNpdu_1dd128ca_Tx */         },  /* [IemToVddmPropDiagResNpdu_1dd128ca_Tx, BasicCAN TxPdu with Tx-buffer]         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemToVddmPropDiagResNpdu_1dd128ca_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef] */
  { /*     5 */        5uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemPropNmPdu1_1cf32a7f_Tx */                    },  /* [IemPropNmPdu1_1cf32a7f_Tx, BasicCAN TxPdu with Tx-buffer]                    */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropNmPdu1_1cf32a7f_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef] */
  { /*     6 */        6uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu09_40f13570_Tx */              },  /* [IemPropSignalIPdu09_40f13570_Tx, BasicCAN TxPdu with Tx-buffer]              */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu09_40f13570_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef] */
  { /*     7 */        7uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu02_e76b890c_Tx */              },  /* [IemPropSignalIPdu02_e76b890c_Tx, BasicCAN TxPdu with Tx-buffer]              */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu02_e76b890c_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef] */
  { /*     8 */        8uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu01_d12470d0_Tx */              },  /* [IemPropSignalIPdu01_d12470d0_Tx, BasicCAN TxPdu with Tx-buffer]              */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu01_d12470d0_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef] */
  { /*     9 */        9uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu03_f55121b8_Tx */              },  /* [IemPropSignalIPdu03_f55121b8_Tx, BasicCAN TxPdu with Tx-buffer]              */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu03_f55121b8_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef] */
  { /*    10 */       10uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu07_bdbb8368_Tx */              },  /* [IemPropSignalIPdu07_bdbb8368_Tx, BasicCAN TxPdu with Tx-buffer]              */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu07_bdbb8368_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef] */
  { /*    11 */       11uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu06_af812bdc_Tx */              },  /* [IemPropSignalIPdu06_af812bdc_Tx, BasicCAN TxPdu with Tx-buffer]              */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu06_af812bdc_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef] */
  { /*    12 */       12uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu04_8bf47ab4_Tx */              },  /* [IemPropSignalIPdu04_8bf47ab4_Tx, BasicCAN TxPdu with Tx-buffer]              */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu04_8bf47ab4_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef] */
  { /*    13 */       13uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu14_47ea3789_Tx */              },  /* [IemPropSignalIPdu14_47ea3789_Tx, BasicCAN TxPdu with Tx-buffer]              */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu14_47ea3789_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef] */
  { /*    14 */       14uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu12_2b75c431_Tx */              },  /* [IemPropSignalIPdu12_2b75c431_Tx, BasicCAN TxPdu with Tx-buffer]              */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu12_2b75c431_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef] */
  { /*    15 */       15uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu16_3b1ed2aa_Tx */              },  /* [IemPropSignalIPdu16_3b1ed2aa_Tx, BasicCAN TxPdu with Tx-buffer]              */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu16_3b1ed2aa_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef] */
  { /*    16 */       16uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu08_52cb9dc4_Tx */              },  /* [IemPropSignalIPdu08_52cb9dc4_Tx, BasicCAN TxPdu with Tx-buffer]              */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu08_52cb9dc4_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef] */
  { /*    17 */       17uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemEduPropSignalIPdu02_69927b9a_Tx */           },  /* [IemEduPropSignalIPdu02_69927b9a_Tx, BasicCAN TxPdu with Tx-buffer]           */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemEduPropSignalIPdu02_69927b9a_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef] */
  { /*    18 */       18uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/IemEduPropSignalIPdu01_45a04f59_Tx */           }   /* [IemEduPropSignalIPdu01_45a04f59_Tx, BasicCAN TxPdu with Tx-buffer]           */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemEduPropSignalIPdu01_45a04f59_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_CtrlStates
**********************************************************************************************************************/
/** 
  \var    CanIf_CtrlStates
  \details
  Element     Description
  CtrlMode    Controller mode.
  PduMode     PDU mode state.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanIf_CtrlStatesUType, CANIF_VAR_NOINIT) CanIf_CtrlStates;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/PropulsionCAN_6c6185ef] */

#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxBufferPrioByCanIdBase
**********************************************************************************************************************/
/** 
  \var    CanIf_TxBufferPrioByCanIdBase
  \brief  Variable declaration - Tx-buffer: PRIO_BY_CANID as byte/bit-queue. Stores at least the QueueCounter.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanIf_TxBufferPrioByCanIdBaseUType, CANIF_VAR_NOINIT) CanIf_TxBufferPrioByCanIdBase;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PropulsionCAN_c77d42b7] */

#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxQueue
**********************************************************************************************************************/
/** 
  \var    CanIf_TxQueue
  \brief  Variable declaration - Tx byte queue.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanIf_TxQueueUType, CANIF_VAR_NOINIT) CanIf_TxQueue;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemToVgmJ1979OBDPropCanResNpdu11_d809dece_Tx] */
  /*     1 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/UudtIemNPdu3_97faad06_Tx] */
  /*     2 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/UudtIemNPdu2_85c005b2_Tx] */
  /*     3 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/UudtIemNPdu1_b38ffc6e_Tx] */
  /*     4 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemToVddmPropDiagResNpdu_1dd128ca_Tx] */
  /*     5 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropNmPdu1_1cf32a7f_Tx] */
  /*     6 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu09_40f13570_Tx] */
  /*     7 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu02_e76b890c_Tx] */
  /*     8 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu01_d12470d0_Tx] */
  /*     9 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu03_f55121b8_Tx] */
  /*    10 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu07_bdbb8368_Tx] */
  /*    11 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu06_af812bdc_Tx] */
  /*    12 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu04_8bf47ab4_Tx] */
  /*    13 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu14_47ea3789_Tx] */
  /*    14 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu12_2b75c431_Tx] */
  /*    15 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu16_3b1ed2aa_Tx] */
  /*    16 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemPropSignalIPdu08_52cb9dc4_Tx] */
  /*    17 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemEduPropSignalIPdu02_69927b9a_Tx] */
  /*    18 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/IemEduPropSignalIPdu01_45a04f59_Tx] */

#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/



