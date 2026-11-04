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
 *              File: PduR_Lcfg.c
 *   Generation Time: 2026-10-30 22:11:23
 *           Project: IEM_TC387_BRS - Version 1
 *          Delivery: CBD2000642_D01
 *      Tool Version: DaVinci Configurator  5.22.45 SP3
 *
 *
 *********************************************************************************************************************/

#define PDUR_LCFG_SOURCE

/**********************************************************************************************************************
 * MISRA / PCLINT JUSTIFICATION
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "PduR.h"
#include "PduR_Fm.h"
#include "PduR_IFQ.h"
#include "PduR_Sm.h"
#include "PduR_RmIf.h"
#include "PduR_RmTp.h"
#include "PduR_RmTp_TxInst.h"
#include "SchM_PduR.h"
#if(PDUR_DEV_ERROR_REPORT == STD_ON)
# include "Det.h"
#endif
# include "PduR_Lcfg.h"



/* Include headers with callbacks */
#include "PduR_CanIf.h"
#include "PduR_CanTp.h"
#include "PduR_Com.h"
#include "PduR_Dcm.h"
#include "PduR_CanNm.h"


/**********************************************************************************************************************
 * LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
/* Exclusive Area Wrapper functions */
static FUNC(void, PDUR_CODE) PduR_SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0(void);
static FUNC(void, PDUR_CODE) PduR_SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0(void);
  
/**********************************************************************************************************************
 * LOCAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * GLOBAL DATA
 *********************************************************************************************************************/
/* \trace SPEC-663, SPEC-661 */

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  PduR_ExclusiveAreaRom
**********************************************************************************************************************/
/** 
  \var    PduR_ExclusiveAreaRom
  \brief  PduR Exclusive Area Locks
  \details
  Element    Description
  Lock       Lock function
  Unlock     Unlock function
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_ExclusiveAreaRomType, PDUR_CONST) PduR_ExclusiveAreaRom[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Lock                                        Unlock                                           Referable Keys */
  { /*     0 */ PduR_SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0, PduR_SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0 }   /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRLock_PduRExclusiveArea] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_GeneralPropertiesRom
**********************************************************************************************************************/
/** 
  \var    PduR_GeneralPropertiesRom
  \brief  General Properties Switches of the PduR.
  \details
  Element         Description
  hasIfRouting
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_GeneralPropertiesRomType, PDUR_CONST) PduR_GeneralPropertiesRom[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    hasIfRouting        Referable Keys */
  { /*     0 */         TRUE }   /* [/ActiveEcuC/PduR] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_MmRom
**********************************************************************************************************************/
/** 
  \var    PduR_MmRom
  \brief  Module manager: Contains all function pointers of the bordering modules.
  \details
  Element                         Description
  DestApplicationManagerRomIdx    the index of the 1:1 relation pointing to PduR_DestApplicationManagerRom
  MaskedBits                      contains bitcoded the boolean data of PduR_LoIfOfMmRom, PduR_LoTpOfMmRom, PduR_RmGDestRomUsedOfMmRom, PduR_UpIfOfMmRom, PduR_UpTpOfMmRom
  RmGDestRomEndIdx                the end index of the 0:n relation pointing to PduR_RmGDestRom
  RmGDestRomStartIdx              the start index of the 0:n relation pointing to PduR_RmGDestRom
  UpTpCopyRxDataFctPtr            Transport protocol CopyRxData function pointers
  UpTpCopyTxDataFctPtr            Transport protocol CopyTxData function pointers
  UpIfRxIndicationFctPtr          Upper layer communication interface Rx indication function pointers.
  UpIfTxConfirmationFctPtr        Upper layer communication interface Tx confimation function pointers
  UpTpStartOfReceptionFctPtr      Transport protocol StartOfReception function pointers
  UpTpTpRxIndicationFctPtr        Transport protocol TpRxIndication function pointers
  UpTpTpTxConfirmationFctPtr      Transport protocol TpTxConfimation function pointers
  LoIfTransmitFctPtr              Lower layer If transmit function pointers
  LoTpTransmitFctPtr              Lower layer Tp transmit function pointers
  UpIfTriggerTransmitFctPtr       Upper layer trigger transmit function pointers
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_MmRomType, PDUR_CONST) PduR_MmRom[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    DestApplicationManagerRomIdx  MaskedBits  RmGDestRomEndIdx  RmGDestRomStartIdx  UpTpCopyRxDataFctPtr  UpTpCopyTxDataFctPtr  UpIfRxIndicationFctPtr  UpIfTxConfirmationFctPtr  UpTpStartOfReceptionFctPtr  UpTpTpRxIndicationFctPtr  UpTpTpTxConfirmationFctPtr  LoIfTransmitFctPtr  LoTpTransmitFctPtr  UpIfTriggerTransmitFctPtr        Comment                        Referable Keys */
  { /*     0 */                           0u,      0x14u,              13u,                 0u, NULL_PTR            , NULL_PTR            , NULL_PTR              , NULL_PTR                , NULL_PTR                  , NULL_PTR                , NULL_PTR                  , CanIf_Transmit    , NULL_PTR          , NULL_PTR                  },  /* [BswModule: CanIf] */  /* [/ActiveEcuC/PduR/CanIf, /ActiveEcuC/PduR] */
  { /*     1 */                           0u,      0x14u,              14u,                13u, NULL_PTR            , NULL_PTR            , NULL_PTR              , NULL_PTR                , NULL_PTR                  , NULL_PTR                , NULL_PTR                  , CanNm_Transmit    , NULL_PTR          , NULL_PTR                  },  /* [BswModule: CanNm] */  /* [/ActiveEcuC/PduR/CanNm, /ActiveEcuC/PduR] */
  { /*     2 */                           0u,      0x0Cu,              19u,                14u, NULL_PTR            , NULL_PTR            , NULL_PTR              , NULL_PTR                , NULL_PTR                  , NULL_PTR                , NULL_PTR                  , NULL_PTR          , CanTp_Transmit    , NULL_PTR                  },  /* [BswModule: CanTp] */  /* [/ActiveEcuC/PduR/CanTp, /ActiveEcuC/PduR] */
  { /*     3 */                           0u,      0x06u,              46u,                19u, NULL_PTR            , NULL_PTR            , Com_RxIndication      , Com_TxConfirmation      , NULL_PTR                  , NULL_PTR                , NULL_PTR                  , NULL_PTR          , NULL_PTR          , Com_TriggerTransmit       },  /* [BswModule: Com]   */  /* [/ActiveEcuC/PduR/Com, /ActiveEcuC/PduR] */
  { /*     4 */                           0u,      0x05u,              53u,                46u, Dcm_CopyRxData      , Dcm_CopyTxData      , NULL_PTR              , NULL_PTR                , Dcm_StartOfReception      , Dcm_TpRxIndication      , Dcm_TpTxConfirmation      , NULL_PTR          , NULL_PTR          , NULL_PTR                  }   /* [BswModule: Dcm]   */  /* [/ActiveEcuC/PduR/Dcm, /ActiveEcuC/PduR] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_PartitionIdentifiers
**********************************************************************************************************************/
/** 
  \var    PduR_PartitionIdentifiers
  \brief  the partition context in Config
  \details
  Element         Description
  PartitionSNV
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_PartitionIdentifiersType, PDUR_CONST) PduR_PartitionIdentifiers[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PartitionSNV       */
  { /*     0 */ CommonSharedMemory }
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmDestRom
**********************************************************************************************************************/
/** 
  \var    PduR_RmDestRom
  \brief  PduR RoutiongPathManager destPdu Table
  \details
  Element                      Description
  PartitionIndexOfCsl      
  PduLengthHandlingStrategy    The strategy how larger than configured If Pdus are handled.
  RmGDestRomIdx                the index of the 1:1 relation pointing to PduR_RmGDestRom
  RmSrcRomIdx                  the index of the 1:1 relation pointing to PduR_RmSrcRom
  RoutingType                  Type of the Routing (API Forwarding, Gateway).
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_RmDestRomType, PDUR_CONST) PduR_RmDestRom[53] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PartitionIndexOfCsl                            PduLengthHandlingStrategy                         RmGDestRomIdx  RmSrcRomIdx  RoutingType                                                 Comment                                                                          Referable Keys */
  { /*     0 */                  0u  /* CommonSharedMemory */, PDUR_UNUSED_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           48u,         29u, PDUR_TP_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: UudtDcmRx1_Dest]                                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/UudtDcmRx1/PduRSrcPdu, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/UudtDcmRx1/UudtDcmRx1_Dest] */
  { /*     1 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           29u,         10u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: EcmPropSignalIPDU11_86a9e821_Rx_019d6fbe_Rx]           */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EcmPropSignalIPDU11_86a9e821_Rx/PduRSrcPdu_019d6fbe, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EcmPropSignalIPDU11_86a9e821_Rx/EcmPropSignalIPDU11_86a9e821_Rx_019d6fbe_Rx] */
  { /*     2 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           20u,          1u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: BecmPropSignalIpdu02_a919b6a0_Rx_03540ad7_Rx]          */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/BecmPropSignalIpdu02_a919b6a0_Rx/PduRSrcPdu_03540ad7, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/BecmPropSignalIpdu02_a919b6a0_Rx/BecmPropSignalIpdu02_a919b6a0_Rx_03540ad7_Rx] */
  { /*     3 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            6u,         40u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: IemPropSignalIPdu06_0fd014ad_Tx]                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu06_bf6002d3_Tx/PduRSrcPdu_0af6e6e3, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu06_bf6002d3_Tx/IemPropSignalIPdu06_0fd014ad_Tx] */
  { /*     4 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            2u,         36u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: IemPropSignalIPdu01_1988e981_Tx]                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu01_21049770_Tx/PduRSrcPdu_0bf0194b, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu01_21049770_Tx/IemPropSignalIPdu01_1988e981_Tx] */
  { /*     5 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           31u,         12u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: EcmPropSignalIPdu24_045785fe_Rx_0c4be5f2_Rx]           */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EcmPropSignalIPdu24_045785fe_Rx/PduRSrcPdu_0c4be5f2, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EcmPropSignalIPdu24_045785fe_Rx/EcmPropSignalIPdu24_045785fe_Rx_0c4be5f2_Rx] */
  { /*     6 */                  0u  /* CommonSharedMemory */, PDUR_UNUSED_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           49u,         30u, PDUR_TP_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: UudtDcmRx2_Dest]                                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/UudtDcmRx2/PduRSrcPdu_1, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/UudtDcmRx2/UudtDcmRx2_Dest] */
  { /*     7 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            8u,         42u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: IemPropSignalIPdu08_2361eef5_Tx]                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu08_58d82fd4_Tx/PduRSrcPdu_145e853b, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu08_58d82fd4_Tx/IemPropSignalIPdu08_2361eef5_Tx] */
  { /*     8 */                  0u  /* CommonSharedMemory */, PDUR_UNUSED_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           16u,         49u, PDUR_TP_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: IemToEtcUudtDcmIpdu2_07005902_Tx]                      */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemToEtcUudtDcmIpdu2_39d23cc2_Tx/PduRSrcPdu_1f99744c, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemToEtcUudtDcmIpdu2_39d23cc2_Tx/IemToEtcUudtDcmIpdu2_07005902_Tx] */
  { /*     9 */                  0u  /* CommonSharedMemory */, PDUR_UNUSED_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           50u,         31u, PDUR_TP_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: UudtDcmRx3_Dest]                                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/UudtDcmRx3/PduRSrcPdu_2, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/UudtDcmRx3/UudtDcmRx3_Dest] */
  { /*    10 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           45u,         26u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VddmPropSignalIPdu26_893fed53_Rx_21f2d8e6_Rx]          */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VddmPropSignalIPdu26_893fed53_Rx/PduRSrcPdu_21f2d8e6, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VddmPropSignalIPdu26_893fed53_Rx/VddmPropSignalIPdu26_893fed53_Rx_21f2d8e6_Rx] */
  { /*    11 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            4u,         38u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: IemPropSignalIPdu03_d9e81404_Tx]                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu03_cf0af65c_Tx/PduRSrcPdu_292b77a0, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu03_cf0af65c_Tx/IemPropSignalIPdu03_d9e81404_Tx] */
  { /*    12 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            9u,         43u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: IemPropSignalIPdu09_aee91317_Tx]                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu09_2fdf1f42_Tx/PduRSrcPdu_2b1294b8, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu09_2fdf1f42_Tx/IemPropSignalIPdu09_aee91317_Tx] */
  { /*    13 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           27u,          8u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: ECMPropSignalIPDU06_719d5fe2_Rx_2d833a1c_Rx]           */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ECMPropSignalIPDU06_719d5fe2_Rx/PduRSrcPdu_2d833a1c, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ECMPropSignalIPDU06_719d5fe2_Rx/ECMPropSignalIPDU06_719d5fe2_Rx_2d833a1c_Rx] */
  { /*    14 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           21u,          2u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: BecmPropSignalIpdu03_24914b42_Rx_2fbd4436_Rx]          */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/BecmPropSignalIpdu03_24914b42_Rx/PduRSrcPdu_2fbd4436, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/BecmPropSignalIpdu03_24914b42_Rx/BecmPropSignalIpdu03_24914b42_Rx_2fbd4436_Rx] */
  { /*    15 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           13u,         52u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: PropulsionCAN_EiraUserData_Dest]                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PropulsionCAN_EiraUserData/PduRSrcPdu_3, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PropulsionCAN_EiraUserData/PropulsionCAN_EiraUserData_Dest] */
  { /*    16 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           30u,         11u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: EcmPropSignalIPDU28_6fdbf3ae_Rx_332380ac_Rx]           */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EcmPropSignalIPDU28_6fdbf3ae_Rx/PduRSrcPdu_332380ac, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EcmPropSignalIPDU28_6fdbf3ae_Rx/EcmPropSignalIPDU28_6fdbf3ae_Rx_332380ac_Rx] */
  { /*    17 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           12u,         46u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: IemPropSignalIPdu16_41591f04_Tx]                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu16_a67b3392_Tx/PduRSrcPdu_35fca203, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu16_a67b3392_Tx/IemPropSignalIPdu16_41591f04_Tx] */
  { /*    18 */                  0u  /* CommonSharedMemory */, PDUR_UNUSED_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           51u,         32u, PDUR_TP_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VgmToAllFuncDiagDcmIpdu_030e2fcd_Rx_3ccfd7a6_Rx]       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VgmToAllFuncDiagDcmIpdu_030e2fcd_Rx/PduRSrcPdu_3ccfd7a6, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VgmToAllFuncDiagDcmIpdu_030e2fcd_Rx/VgmToAllFuncDiagDcmIpdu_030e2fcd_Rx_3ccfd7a6_Rx] */
  { /*    19 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           38u,         19u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VDDMPropSignalIPDU11_60044a2d_Rx_3ed696a1_Rx]          */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU11_60044a2d_Rx/PduRSrcPdu_3ed696a1, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU11_60044a2d_Rx/VDDMPropSignalIPDU11_60044a2d_Rx_3ed696a1_Rx] */
  { /*    20 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            5u,         39u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: IemPropSignalIPdu04_cfb0e928_Tx]                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu04_516e63ff_Tx/PduRSrcPdu_53beb1f3, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu04_516e63ff_Tx/IemPropSignalIPdu04_cfb0e928_Tx] */
  { /*    21 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            0u,         34u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: IemEduPropSignalIPdu01_a3cd4ce7_Tx]                    */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemEduPropSignalIPdu01_3346005e_Tx/PduRSrcPdu_5ecec422, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemEduPropSignalIPdu01_3346005e_Tx/IemEduPropSignalIPdu01_a3cd4ce7_Tx] */
  { /*    22 */                  0u  /* CommonSharedMemory */, PDUR_UNUSED_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           47u,         28u, PDUR_TP_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: EtcToIemJ1979OBDDiagDcmIpdu11_ac95f359_Rx_62791526_Rx] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EtcToIemJ1979OBDDiagDcmIpdu11_ac95f359_Rx/PduRSrcPdu_62791526, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EtcToIemJ1979OBDDiagDcmIpdu11_ac95f359_Rx/EtcToIemJ1979OBDDiagDcmIpdu11_ac95f359_Rx_62791526_Rx] */
  { /*    23 */                  0u  /* CommonSharedMemory */, PDUR_UNUSED_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           46u,         27u, PDUR_TP_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: EtcToAllJ1979OBDDiagDcmIpdu11_b7ab7660_Rx_63335c9b_Rx] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EtcToAllJ1979OBDDiagDcmIpdu11_b7ab7660_Rx/PduRSrcPdu_63335c9b, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EtcToAllJ1979OBDDiagDcmIpdu11_b7ab7660_Rx/EtcToAllJ1979OBDDiagDcmIpdu11_b7ab7660_Rx_63335c9b_Rx] */
  { /*    24 */                  0u  /* CommonSharedMemory */, PDUR_UNUSED_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           14u,         47u, PDUR_TP_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: IemToEtcJ1979OBDDiagDcmIpdu11_525ada58_Tx]             */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemToEtcJ1979OBDDiagDcmIpdu11_da239b2d_Tx/PduRSrcPdu_75b2e816, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemToEtcJ1979OBDDiagDcmIpdu11_da239b2d_Tx/IemToEtcJ1979OBDDiagDcmIpdu11_525ada58_Tx] */
  { /*    25 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           42u,         23u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VDDMPropSignalIPDU19_d765b0bb_Rx_83c4d48c_Rx]          */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU19_d765b0bb_Rx/PduRSrcPdu_83c4d48c, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU19_d765b0bb_Rx/VDDMPropSignalIPDU19_d765b0bb_Rx_83c4d48c_Rx] */
  { /*    26 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           39u,         20u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VDDMPropSignalIPDU16_765cb701_Rx_86801b79_Rx]          */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU16_765cb701_Rx/PduRSrcPdu_86801b79, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU16_765cb701_Rx/VDDMPropSignalIPDU16_765cb701_Rx_86801b79_Rx] */
  { /*    27 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           32u,         13u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: EcmPropSignalIPdu25_89df781c_Rx_87cbdfdf_Rx]           */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EcmPropSignalIPdu25_89df781c_Rx/PduRSrcPdu_87cbdfdf, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EcmPropSignalIPdu25_89df781c_Rx/EcmPropSignalIPdu25_89df781c_Rx_87cbdfdf_Rx] */
  { /*    28 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           35u,         16u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VDDMPropSignalIPDU05_753dbccf_Rx_8adb95b0_Rx]          */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU05_753dbccf_Rx/PduRSrcPdu_8adb95b0, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU05_753dbccf_Rx/VDDMPropSignalIPDU05_753dbccf_Rx_8adb95b0_Rx] */
  { /*    29 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           26u,          7u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: ECMPropSignalIPDU05_3c755f85_Rx_916b682c_Rx]           */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ECMPropSignalIPDU05_3c755f85_Rx/PduRSrcPdu_916b682c, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ECMPropSignalIPDU05_3c755f85_Rx/ECMPropSignalIPDU05_3c755f85_Rx_916b682c_Rx] */
  { /*    30 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            3u,         37u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: IemPropSignalIPdu02_5460e9e6_Tx]                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu02_b80dc6ca_Tx/PduRSrcPdu_956c143d, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu02_b80dc6ca_Tx/IemPropSignalIPdu02_5460e9e6_Tx] */
  { /*    31 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            7u,         41u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: IemPropSignalIPdu07_8258e94f_Tx]                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu07_c8673245_Tx/PduRSrcPdu_9766d5ce, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu07_c8673245_Tx/IemPropSignalIPdu07_8258e94f_Tx] */
  { /*    32 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           22u,          3u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: BecmPropSignalIpdu15_f1c84025_Rx_97fbab59_Rx]          */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/BecmPropSignalIpdu15_f1c84025_Rx/PduRSrcPdu_97fbab59, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/BecmPropSignalIpdu15_f1c84025_Rx/BecmPropSignalIpdu15_f1c84025_Rx_97fbab59_Rx] */
  { /*    33 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           23u,          4u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: CddObcPropSignalIPdu01_1ee0577a_Rx_9b6ba7e6_Rx]        */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/CddObcPropSignalIPdu01_1ee0577a_Rx/PduRSrcPdu_9b6ba7e6, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/CddObcPropSignalIPdu01_1ee0577a_Rx/CddObcPropSignalIPdu01_1ee0577a_Rx_9b6ba7e6_Rx] */
  { /*    34 */                  0u  /* CommonSharedMemory */, PDUR_UNUSED_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           18u,         51u, PDUR_TP_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: IemToVgmDiagDcmIpdu_411ec11e_Tx]                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemToVgmDiagDcmIpdu_ce8379a0_Tx/PduRSrcPdu_a6ed57d5, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemToVgmDiagDcmIpdu_ce8379a0_Tx/IemToVgmDiagDcmIpdu_411ec11e_Tx] */
  { /*    35 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           40u,         21u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VDDMPropSignalIPDU17_fbd44ae3_Rx_a83bf697_Rx]          */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU17_fbd44ae3_Rx/PduRSrcPdu_a83bf697, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU17_fbd44ae3_Rx/VDDMPropSignalIPDU17_fbd44ae3_Rx_a83bf697_Rx] */
  { /*    36 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           10u,         44u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: IemPropSignalIPdu12_1ae9e24f_Tx]                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu12_a116f78b_Tx/PduRSrcPdu_a9fef54e, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu12_a116f78b_Tx/IemPropSignalIPdu12_1ae9e24f_Tx] */
  { /*    37 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           36u,         17u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VDDMPropSignalIPDU06_38d5bca8_Rx_ac9bf55a_Rx]          */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU06_38d5bca8_Rx/PduRSrcPdu_ac9bf55a, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU06_38d5bca8_Rx/VDDMPropSignalIPDU06_38d5bca8_Rx_ac9bf55a_Rx] */
  { /*    38 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           11u,         45u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: IemPropSignalIPdu14_8139e281_Tx]                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu14_487552be_Tx/PduRSrcPdu_acf6831c, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu14_487552be_Tx/IemPropSignalIPdu14_8139e281_Tx] */
  { /*    39 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           41u,         22u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VDDMPropSignalIPDU18_5aed4d59_Rx_c01e7a1d_Rx]          */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU18_5aed4d59_Rx/PduRSrcPdu_c01e7a1d, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU18_5aed4d59_Rx/VDDMPropSignalIPDU18_5aed4d59_Rx_c01e7a1d_Rx] */
  { /*    40 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           24u,          5u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: ECMPropSignalIPDU02_2a2da2a9_Rx_c52842d9_Rx]           */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ECMPropSignalIPDU02_2a2da2a9_Rx/PduRSrcPdu_c52842d9, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ECMPropSignalIPDU02_2a2da2a9_Rx/ECMPropSignalIPDU02_2a2da2a9_Rx_c52842d9_Rx] */
  { /*    41 */                  0u  /* CommonSharedMemory */, PDUR_UNUSED_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           15u,         48u, PDUR_TP_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: IemToEtcUudtDcmIpdu1_4ae85965_Tx]                      */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemToEtcUudtDcmIpdu1_a0db6d78_Tx/PduRSrcPdu_c6a1321b, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemToEtcUudtDcmIpdu1_a0db6d78_Tx/IemToEtcUudtDcmIpdu1_4ae85965_Tx] */
  { /*    42 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           28u,          9u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: EcmPropSignalIPDU08_f2c9e4fc_Rx_cd8794a7_Rx]           */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EcmPropSignalIPDU08_f2c9e4fc_Rx/PduRSrcPdu_cd8794a7, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EcmPropSignalIPDU08_f2c9e4fc_Rx/EcmPropSignalIPDU08_f2c9e4fc_Rx_cd8794a7_Rx] */
  { /*    43 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           19u,          0u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: BecmPropSignalIpdu01_e4f1b6c7_Rx_d978c2f8_Rx]          */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/BecmPropSignalIpdu01_e4f1b6c7_Rx/PduRSrcPdu_d978c2f8, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/BecmPropSignalIpdu01_e4f1b6c7_Rx/BecmPropSignalIpdu01_e4f1b6c7_Rx_d978c2f8_Rx] */
  { /*    44 */                  0u  /* CommonSharedMemory */, PDUR_UNUSED_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           17u,         50u, PDUR_TP_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: IemToEtcUudtDcmIpdu3_8a88a4e0_Tx]                      */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemToEtcUudtDcmIpdu3_4ed50c54_Tx/PduRSrcPdu_e109a8bf, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemToEtcUudtDcmIpdu3_4ed50c54_Tx/IemToEtcUudtDcmIpdu3_8a88a4e0_Tx] */
  { /*    45 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           25u,          6u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: ECMPropSignalIPDU04_b1fda267_Rx_e135b2fa_Rx]           */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ECMPropSignalIPDU04_b1fda267_Rx/PduRSrcPdu_e135b2fa, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ECMPropSignalIPDU04_b1fda267_Rx/ECMPropSignalIPDU04_b1fda267_Rx_e135b2fa_Rx] */
  { /*    46 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           34u,         15u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: SrsPropSignalIPdu02_30ca6a16_Rx_e6b4c0ad_Rx]           */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/SrsPropSignalIPdu02_30ca6a16_Rx/PduRSrcPdu_e6b4c0ad, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/SrsPropSignalIPdu02_30ca6a16_Rx/SrsPropSignalIPdu02_30ca6a16_Rx_e6b4c0ad_Rx] */
  { /*    47 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           37u,         18u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VDDMPropSignalIPDU08_146446f0_Rx_eff178fd_Rx]          */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU08_146446f0_Rx/PduRSrcPdu_eff178fd, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU08_146446f0_Rx/VDDMPropSignalIPDU08_146446f0_Rx_eff178fd_Rx] */
  { /*    48 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           44u,         25u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VddmBcmPropdTCSignalIPDU01_857b2e99_Rx_f2322b88_Rx]    */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VddmBcmPropdTCSignalIPDU01_857b2e99_Rx/PduRSrcPdu_f2322b88, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VddmBcmPropdTCSignalIPDU01_857b2e99_Rx/VddmBcmPropdTCSignalIPDU01_857b2e99_Rx_f2322b88_Rx] */
  { /*    49 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           33u,         14u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: PropulsionCAN_33157db4_Rx_d0a6735a_Rx_f30b45d0_Rx]     */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PropulsionCAN_33157db4_Rx_d0a6735a_Rx/PduRSrcPdu_f30b45d0, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PropulsionCAN_33157db4_Rx_d0a6735a_Rx/PropulsionCAN_33157db4_Rx_d0a6735a_Rx_f30b45d0_Rx] */
    /* Index    PartitionIndexOfCsl                            PduLengthHandlingStrategy                         RmGDestRomIdx  RmSrcRomIdx  RoutingType                                                 Comment                                                                          Referable Keys */
  { /*    50 */                  0u  /* CommonSharedMemory */, PDUR_UNUSED_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           52u,         33u, PDUR_TP_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VgmToIemDiagDcmIpdu_81f41e2d_Rx_f62b73a4_Rx]           */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VgmToIemDiagDcmIpdu_81f41e2d_Rx/PduRSrcPdu_f62b73a4, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VgmToIemDiagDcmIpdu_81f41e2d_Rx/VgmToIemDiagDcmIpdu_81f41e2d_Rx_f62b73a4_Rx] */
  { /*    51 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           43u,         24u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VDDMPropdTCSignalIPdu38_4bda4dd7_Rx_f7a62982_Rx]       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropdTCSignalIPdu38_4bda4dd7_Rx/PduRSrcPdu_f7a62982, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropdTCSignalIPdu38_4bda4dd7_Rx/VDDMPropdTCSignalIPdu38_4bda4dd7_Rx_f7a62982_Rx] */
  { /*    52 */                  0u  /* CommonSharedMemory */, PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            1u,         35u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM }   /* [PduRDestPdu: IemEduPropSignalIPdu02_ee254c80_Tx]                    */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemEduPropSignalIPdu02_aa4f51e4_Tx/PduRSrcPdu_f9d732b4, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemEduPropSignalIPdu02_aa4f51e4_Tx/IemEduPropSignalIPdu02_ee254c80_Tx] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmGDestRom
**********************************************************************************************************************/
/** 
  \var    PduR_RmGDestRom
  \brief  PduR RoutingPathManager global destPdu Table
  \details
  Element                Description
  MaxPduLength           Configured PduLength + metadata length.
  DestHnd                handle to be used as parameter for the StartOfReception, CopyRxData, Transmit or RxIndication function call.
  Direction              Direction of this Pdu: Rx or Tx
  MmRomIdx               the index of the 1:1 relation pointing to PduR_MmRom
  PartitionIndexOfCsl
  RmDestRomIdx           the index of the 1:1 relation pointing to PduR_RmDestRom
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_RmGDestRomType, PDUR_CONST) PduR_RmGDestRom[53] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    MaxPduLength  DestHnd                                                                      Direction                      MmRomIdx  PartitionIndexOfCsl                            RmDestRomIdx        Comment                                                                     Referable Keys */
  { /*     0 */           8u,                  CanIfConf_CanIfTxPduCfg_IemEduPropSignalIPdu01_45a04f59_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u,                  0u  /* CommonSharedMemory */,          21u },  /* [Global PduRDestPdu: IemEduPropSignalIPdu01_a3cd4ce7_Tx]        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemEduPropSignalIPdu01_a3cd4ce7_Tx, /ActiveEcuC/PduR/CanIf] */
  { /*     1 */           8u,                  CanIfConf_CanIfTxPduCfg_IemEduPropSignalIPdu02_69927b9a_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u,                  0u  /* CommonSharedMemory */,          52u },  /* [Global PduRDestPdu: IemEduPropSignalIPdu02_ee254c80_Tx]        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemEduPropSignalIPdu02_ee254c80_Tx, /ActiveEcuC/PduR/CanIf] */
  { /*     2 */           8u,                     CanIfConf_CanIfTxPduCfg_IemPropSignalIPdu01_d12470d0_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u,                  0u  /* CommonSharedMemory */,           4u },  /* [Global PduRDestPdu: IemPropSignalIPdu01_1988e981_Tx]           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemPropSignalIPdu01_1988e981_Tx, /ActiveEcuC/PduR/CanIf] */
  { /*     3 */           8u,                     CanIfConf_CanIfTxPduCfg_IemPropSignalIPdu02_e76b890c_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u,                  0u  /* CommonSharedMemory */,          30u },  /* [Global PduRDestPdu: IemPropSignalIPdu02_5460e9e6_Tx]           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemPropSignalIPdu02_5460e9e6_Tx, /ActiveEcuC/PduR/CanIf] */
  { /*     4 */           8u,                     CanIfConf_CanIfTxPduCfg_IemPropSignalIPdu03_f55121b8_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u,                  0u  /* CommonSharedMemory */,          11u },  /* [Global PduRDestPdu: IemPropSignalIPdu03_d9e81404_Tx]           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemPropSignalIPdu03_d9e81404_Tx, /ActiveEcuC/PduR/CanIf] */
  { /*     5 */           8u,                     CanIfConf_CanIfTxPduCfg_IemPropSignalIPdu04_8bf47ab4_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u,                  0u  /* CommonSharedMemory */,          20u },  /* [Global PduRDestPdu: IemPropSignalIPdu04_cfb0e928_Tx]           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemPropSignalIPdu04_cfb0e928_Tx, /ActiveEcuC/PduR/CanIf] */
  { /*     6 */           8u,                     CanIfConf_CanIfTxPduCfg_IemPropSignalIPdu06_af812bdc_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u,                  0u  /* CommonSharedMemory */,           3u },  /* [Global PduRDestPdu: IemPropSignalIPdu06_0fd014ad_Tx]           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemPropSignalIPdu06_0fd014ad_Tx, /ActiveEcuC/PduR/CanIf] */
  { /*     7 */           8u,                     CanIfConf_CanIfTxPduCfg_IemPropSignalIPdu07_bdbb8368_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u,                  0u  /* CommonSharedMemory */,          31u },  /* [Global PduRDestPdu: IemPropSignalIPdu07_8258e94f_Tx]           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemPropSignalIPdu07_8258e94f_Tx, /ActiveEcuC/PduR/CanIf] */
  { /*     8 */           8u,                     CanIfConf_CanIfTxPduCfg_IemPropSignalIPdu08_52cb9dc4_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u,                  0u  /* CommonSharedMemory */,           7u },  /* [Global PduRDestPdu: IemPropSignalIPdu08_2361eef5_Tx]           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemPropSignalIPdu08_2361eef5_Tx, /ActiveEcuC/PduR/CanIf] */
  { /*     9 */           8u,                     CanIfConf_CanIfTxPduCfg_IemPropSignalIPdu09_40f13570_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u,                  0u  /* CommonSharedMemory */,          12u },  /* [Global PduRDestPdu: IemPropSignalIPdu09_aee91317_Tx]           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemPropSignalIPdu09_aee91317_Tx, /ActiveEcuC/PduR/CanIf] */
  { /*    10 */           8u,                     CanIfConf_CanIfTxPduCfg_IemPropSignalIPdu12_2b75c431_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u,                  0u  /* CommonSharedMemory */,          36u },  /* [Global PduRDestPdu: IemPropSignalIPdu12_1ae9e24f_Tx]           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemPropSignalIPdu12_1ae9e24f_Tx, /ActiveEcuC/PduR/CanIf] */
  { /*    11 */           8u,                     CanIfConf_CanIfTxPduCfg_IemPropSignalIPdu14_47ea3789_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u,                  0u  /* CommonSharedMemory */,          38u },  /* [Global PduRDestPdu: IemPropSignalIPdu14_8139e281_Tx]           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemPropSignalIPdu14_8139e281_Tx, /ActiveEcuC/PduR/CanIf] */
  { /*    12 */           8u,                     CanIfConf_CanIfTxPduCfg_IemPropSignalIPdu16_3b1ed2aa_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u,                  0u  /* CommonSharedMemory */,          17u },  /* [Global PduRDestPdu: IemPropSignalIPdu16_41591f04_Tx]           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemPropSignalIPdu16_41591f04_Tx, /ActiveEcuC/PduR/CanIf] */
  { /*    13 */           6u,                             CanNmConf_CanNmUserDataTxPdu_CanNmUserDataTxPdu, PDUR_TX_DIRECTIONOFRMGDESTROM,       1u,                  0u  /* CommonSharedMemory */,          15u },  /* [Global PduRDestPdu: PropulsionCAN_EiraUserData_Tx]             */  /* [/ActiveEcuC/EcuC/EcucPduCollection/PropulsionCAN_EiraUserData_Tx, /ActiveEcuC/PduR/CanNm] */
  { /*    14 */        4000u,                                  CanTpConf_CanTpTxNSdu_CanTpTxNSdu_f73faffe, PDUR_TX_DIRECTIONOFRMGDESTROM,       2u,                  0u  /* CommonSharedMemory */,          24u },  /* [Global PduRDestPdu: IemToEtcJ1979OBDDiagDcmIpdu11_525ada58_Tx] */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemToEtcJ1979OBDDiagDcmIpdu11_525ada58_Tx, /ActiveEcuC/PduR/CanTp] */
  { /*    15 */           8u,                                  CanTpConf_CanTpTxNSdu_CanTpTxNSdu_46d88454, PDUR_TX_DIRECTIONOFRMGDESTROM,       2u,                  0u  /* CommonSharedMemory */,          41u },  /* [Global PduRDestPdu: IemToEtcUudtDcmIpdu1_4ae85965_Tx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemToEtcUudtDcmIpdu1_4ae85965_Tx, /ActiveEcuC/PduR/CanTp] */
  { /*    16 */           8u,                                  CanTpConf_CanTpTxNSdu_CanTpTxNSdu_4e62aa3e, PDUR_TX_DIRECTIONOFRMGDESTROM,       2u,                  0u  /* CommonSharedMemory */,           8u },  /* [Global PduRDestPdu: IemToEtcUudtDcmIpdu2_07005902_Tx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemToEtcUudtDcmIpdu2_07005902_Tx, /ActiveEcuC/PduR/CanTp] */
  { /*    17 */           8u,                                  CanTpConf_CanTpTxNSdu_CanTpTxNSdu_67838de1, PDUR_TX_DIRECTIONOFRMGDESTROM,       2u,                  0u  /* CommonSharedMemory */,          44u },  /* [Global PduRDestPdu: IemToEtcUudtDcmIpdu3_8a88a4e0_Tx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemToEtcUudtDcmIpdu3_8a88a4e0_Tx, /ActiveEcuC/PduR/CanTp] */
  { /*    18 */        4000u,                                  CanTpConf_CanTpTxNSdu_CanTpTxNSdu_183e09ee, PDUR_TX_DIRECTIONOFRMGDESTROM,       2u,                  0u  /* CommonSharedMemory */,          34u },  /* [Global PduRDestPdu: IemToVgmDiagDcmIpdu_411ec11e_Tx]           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemToVgmDiagDcmIpdu_411ec11e_Tx, /ActiveEcuC/PduR/CanTp] */
  { /*    19 */           8u,                            ComConf_ComIPdu_BecmPropSignalIpdu01_7a983997_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u,                  0u  /* CommonSharedMemory */,          43u },  /* [Global PduRDestPdu: BecmPropSignalIpdu01_7a983997_Rx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/BecmPropSignalIpdu01_7a983997_Rx, /ActiveEcuC/PduR/Com] */
  { /*    20 */           8u,                            ComConf_ComIPdu_BecmPropSignalIpdu02_e391682d_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u,                  0u  /* CommonSharedMemory */,           2u },  /* [Global PduRDestPdu: BecmPropSignalIpdu02_e391682d_Rx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/BecmPropSignalIpdu02_e391682d_Rx, /ActiveEcuC/PduR/Com] */
  { /*    21 */           8u,                            ComConf_ComIPdu_BecmPropSignalIpdu03_949658bb_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u,                  0u  /* CommonSharedMemory */,          14u },  /* [Global PduRDestPdu: BecmPropSignalIpdu03_949658bb_Rx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/BecmPropSignalIpdu03_949658bb_Rx, /ActiveEcuC/PduR/Com] */
  { /*    22 */           8u,                            ComConf_ComIPdu_BecmPropSignalIpdu15_64eecccf_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u,                  0u  /* CommonSharedMemory */,          32u },  /* [Global PduRDestPdu: BecmPropSignalIpdu15_64eecccf_Rx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/BecmPropSignalIpdu15_64eecccf_Rx, /ActiveEcuC/PduR/Com] */
  { /*    23 */           8u,                          ComConf_ComIPdu_CddObcPropSignalIPdu01_003f0830_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u,                  0u  /* CommonSharedMemory */,          33u },  /* [Global PduRDestPdu: CddObcPropSignalIPdu01_003f0830_Rx]        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/CddObcPropSignalIPdu01_003f0830_Rx, /ActiveEcuC/PduR/Com] */
  { /*    24 */           8u,                             ComConf_ComIPdu_ECMPropSignalIPDU02_bd22093c_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u,                  0u  /* CommonSharedMemory */,          40u },  /* [Global PduRDestPdu: ECMPropSignalIPDU02_bd22093c_Rx]           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/ECMPropSignalIPDU02_bd22093c_Rx, /ActiveEcuC/PduR/Com] */
  { /*    25 */           8u,                             ComConf_ComIPdu_ECMPropSignalIPDU04_5441ac09_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u,                  0u  /* CommonSharedMemory */,          45u },  /* [Global PduRDestPdu: ECMPropSignalIPDU04_5441ac09_Rx]           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/ECMPropSignalIPDU04_5441ac09_Rx, /ActiveEcuC/PduR/Com] */
  { /*    26 */           8u,                             ComConf_ComIPdu_ECMPropSignalIPDU05_23469c9f_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u,                  0u  /* CommonSharedMemory */,          29u },  /* [Global PduRDestPdu: ECMPropSignalIPDU05_23469c9f_Rx]           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/ECMPropSignalIPDU05_23469c9f_Rx, /ActiveEcuC/PduR/Com] */
  { /*    27 */           8u,                             ComConf_ComIPdu_ECMPropSignalIPDU06_ba4fcd25_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u,                  0u  /* CommonSharedMemory */,          13u },  /* [Global PduRDestPdu: ECMPropSignalIPDU06_ba4fcd25_Rx]           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/ECMPropSignalIPDU06_ba4fcd25_Rx, /ActiveEcuC/PduR/Com] */
  { /*    28 */           8u,                             ComConf_ComIPdu_EcmPropSignalIPDU08_2e126ae8_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u,                  0u  /* CommonSharedMemory */,          42u },  /* [Global PduRDestPdu: EcmPropSignalIPDU08_2e126ae8_Rx]           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/EcmPropSignalIPDU08_2e126ae8_Rx, /ActiveEcuC/PduR/Com] */
  { /*    29 */           8u,                             ComConf_ComIPdu_EcmPropSignalIPDU11_4ed5e30d_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u,                  0u  /* CommonSharedMemory */,           1u },  /* [Global PduRDestPdu: EcmPropSignalIPDU11_4ed5e30d_Rx]           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/EcmPropSignalIPDU11_4ed5e30d_Rx, /ActiveEcuC/PduR/Com] */
  { /*    30 */           8u,                             ComConf_ComIPdu_EcmPropSignalIPDU28_1c24086a_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u,                  0u  /* CommonSharedMemory */,          16u },  /* [Global PduRDestPdu: EcmPropSignalIPDU28_1c24086a_Rx]           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/EcmPropSignalIPDU28_1c24086a_Rx, /ActiveEcuC/PduR/Com] */
  { /*    31 */           8u,                             ComConf_ComIPdu_EcmPropSignalIPdu24_8dedad9f_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u,                  0u  /* CommonSharedMemory */,           5u },  /* [Global PduRDestPdu: EcmPropSignalIPdu24_8dedad9f_Rx]           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/EcmPropSignalIPdu24_8dedad9f_Rx, /ActiveEcuC/PduR/Com] */
  { /*    32 */           8u,                             ComConf_ComIPdu_EcmPropSignalIPdu25_faea9d09_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u,                  0u  /* CommonSharedMemory */,          27u },  /* [Global PduRDestPdu: EcmPropSignalIPdu25_faea9d09_Rx]           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/EcmPropSignalIPdu25_faea9d09_Rx, /ActiveEcuC/PduR/Com] */
  { /*    33 */           6u,                                   ComConf_ComIPdu_PropulsionCAN_33157db4_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u,                  0u  /* CommonSharedMemory */,          49u },  /* [Global PduRDestPdu: PropulsionCAN_c71a5358_Rx]                 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/PropulsionCAN_c71a5358_Rx, /ActiveEcuC/PduR/Com] */
  { /*    34 */           8u,                             ComConf_ComIPdu_SrsPropSignalIPdu02_4fa2d123_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u,                  0u  /* CommonSharedMemory */,          46u },  /* [Global PduRDestPdu: SrsPropSignalIPdu02_4fa2d123_Rx]           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/SrsPropSignalIPdu02_4fa2d123_Rx, /ActiveEcuC/PduR/Com] */
  { /*    35 */           8u,                            ComConf_ComIPdu_VDDMPropSignalIPDU05_e9cd0dca_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u,                  0u  /* CommonSharedMemory */,          28u },  /* [Global PduRDestPdu: VDDMPropSignalIPDU05_e9cd0dca_Rx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VDDMPropSignalIPDU05_e9cd0dca_Rx, /ActiveEcuC/PduR/Com] */
  { /*    36 */           8u,                            ComConf_ComIPdu_VDDMPropSignalIPDU06_70c45c70_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u,                  0u  /* CommonSharedMemory */,          37u },  /* [Global PduRDestPdu: VDDMPropSignalIPDU06_70c45c70_Rx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VDDMPropSignalIPDU06_70c45c70_Rx, /ActiveEcuC/PduR/Com] */
  { /*    37 */           8u,                            ComConf_ComIPdu_VDDMPropSignalIPDU08_977c7177_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u,                  0u  /* CommonSharedMemory */,          47u },  /* [Global PduRDestPdu: VDDMPropSignalIPDU08_977c7177_Rx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VDDMPropSignalIPDU08_977c7177_Rx, /ActiveEcuC/PduR/Com] */
  { /*    38 */           8u,                            ComConf_ComIPdu_VDDMPropSignalIPDU11_f7bbf892_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u,                  0u  /* CommonSharedMemory */,          19u },  /* [Global PduRDestPdu: VDDMPropSignalIPDU11_f7bbf892_Rx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VDDMPropSignalIPDU11_f7bbf892_Rx, /ActiveEcuC/PduR/Com] */
  { /*    39 */           8u,                            ComConf_ComIPdu_VDDMPropSignalIPDU16_69df6d31_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u,                  0u  /* CommonSharedMemory */,          26u },  /* [Global PduRDestPdu: VDDMPropSignalIPDU16_69df6d31_Rx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VDDMPropSignalIPDU16_69df6d31_Rx, /ActiveEcuC/PduR/Com] */
  { /*    40 */           8u,                            ComConf_ComIPdu_VDDMPropSignalIPDU17_1ed85da7_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u,                  0u  /* CommonSharedMemory */,          35u },  /* [Global PduRDestPdu: VDDMPropSignalIPDU17_1ed85da7_Rx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VDDMPropSignalIPDU17_1ed85da7_Rx, /ActiveEcuC/PduR/Com] */
  { /*    41 */           8u,                            ComConf_ComIPdu_VDDMPropSignalIPDU18_8e674036_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u,                  0u  /* CommonSharedMemory */,          39u },  /* [Global PduRDestPdu: VDDMPropSignalIPDU18_8e674036_Rx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VDDMPropSignalIPDU18_8e674036_Rx, /ActiveEcuC/PduR/Com] */
  { /*    42 */           8u,                            ComConf_ComIPdu_VDDMPropSignalIPDU19_f96070a0_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u,                  0u  /* CommonSharedMemory */,          25u },  /* [Global PduRDestPdu: VDDMPropSignalIPDU19_f96070a0_Rx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VDDMPropSignalIPDU19_f96070a0_Rx, /ActiveEcuC/PduR/Com] */
  { /*    43 */           8u,                         ComConf_ComIPdu_VDDMPropdTCSignalIPdu38_808bfd3f_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u,                  0u  /* CommonSharedMemory */,          51u },  /* [Global PduRDestPdu: VDDMPropdTCSignalIPdu38_808bfd3f_Rx]       */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VDDMPropdTCSignalIPdu38_808bfd3f_Rx, /ActiveEcuC/PduR/Com] */
  { /*    44 */           8u,                      ComConf_ComIPdu_VddmBcmPropdTCSignalIPDU01_886bd56f_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u,                  0u  /* CommonSharedMemory */,          48u },  /* [Global PduRDestPdu: VddmBcmPropdTCSignalIPDU01_886bd56f_Rx]    */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VddmBcmPropdTCSignalIPDU01_886bd56f_Rx, /ActiveEcuC/PduR/Com] */
  { /*    45 */           8u,                            ComConf_ComIPdu_VddmPropSignalIPdu26_8fec2bf2_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u,                  0u  /* CommonSharedMemory */,          10u },  /* [Global PduRDestPdu: VddmPropSignalIPdu26_8fec2bf2_Rx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VddmPropSignalIPdu26_8fec2bf2_Rx, /ActiveEcuC/PduR/Com] */
  { /*    46 */           6u, DcmConf_DcmDslProtocolRx_EtcToAllJ1979OBDDiagDcmIpdu11_f3f7d8ab_Rx_d2b52588, PDUR_RX_DIRECTIONOFRMGDESTROM,       4u,                  0u  /* CommonSharedMemory */,          23u },  /* [Global PduRDestPdu: EtcToAllJ1979OBDDiagDcmIpdu11_f3f7d8ab_Rx] */  /* [/ActiveEcuC/EcuC/EcucPduCollection/EtcToAllJ1979OBDDiagDcmIpdu11_f3f7d8ab_Rx, /ActiveEcuC/PduR/Dcm] */
  { /*    47 */        4000u, DcmConf_DcmDslProtocolRx_EtcToIemJ1979OBDDiagDcmIpdu11_ad182927_Rx_3695805f, PDUR_RX_DIRECTIONOFRMGDESTROM,       4u,                  0u  /* CommonSharedMemory */,          22u },  /* [Global PduRDestPdu: EtcToIemJ1979OBDDiagDcmIpdu11_ad182927_Rx] */  /* [/ActiveEcuC/EcuC/EcucPduCollection/EtcToIemJ1979OBDDiagDcmIpdu11_ad182927_Rx, /ActiveEcuC/PduR/Dcm] */
  { /*    48 */           8u,                             DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_Uudt1, PDUR_RX_DIRECTIONOFRMGDESTROM,       4u,                  0u  /* CommonSharedMemory */,           0u },  /* [Global PduRDestPdu: UudtDcmRx1]                                */  /* [/ActiveEcuC/EcuC/EcucPduCollection/UudtDcmRx1, /ActiveEcuC/PduR/Dcm] */
  { /*    49 */           8u,                             DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_Uudt2, PDUR_RX_DIRECTIONOFRMGDESTROM,       4u,                  0u  /* CommonSharedMemory */,           6u },  /* [Global PduRDestPdu: UudtDcmRx2]                                */  /* [/ActiveEcuC/EcuC/EcucPduCollection/UudtDcmRx2, /ActiveEcuC/PduR/Dcm] */
    /* Index    MaxPduLength  DestHnd                                                                      Direction                      MmRomIdx  PartitionIndexOfCsl                            RmDestRomIdx        Comment                                                                     Referable Keys */
  { /*    50 */           8u,                             DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_Uudt3, PDUR_RX_DIRECTIONOFRMGDESTROM,       4u,                  0u  /* CommonSharedMemory */,           9u },  /* [Global PduRDestPdu: UudtDcmRx3]                                */  /* [/ActiveEcuC/EcuC/EcucPduCollection/UudtDcmRx3, /ActiveEcuC/PduR/Dcm] */
  { /*    51 */           6u,                              DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_Func, PDUR_RX_DIRECTIONOFRMGDESTROM,       4u,                  0u  /* CommonSharedMemory */,          18u },  /* [Global PduRDestPdu: VgmToAllFuncDiagDcmIpdu_89c72e24_Rx]       */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VgmToAllFuncDiagDcmIpdu_89c72e24_Rx, /ActiveEcuC/PduR/Dcm] */
  { /*    52 */        4000u,           DcmConf_DcmDslProtocolRx_VgmToIemDiagDcmIpdu_cbf08236_Rx_05e7e935, PDUR_RX_DIRECTIONOFRMGDESTROM,       4u,                  0u  /* CommonSharedMemory */,          50u }   /* [Global PduRDestPdu: VgmToIemDiagDcmIpdu_cbf08236_Rx]           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VgmToIemDiagDcmIpdu_cbf08236_Rx, /ActiveEcuC/PduR/Dcm] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmSrcRom
**********************************************************************************************************************/
/** 
  \var    PduR_RmSrcRom
  \brief  PduR RoutiongManager SrcPdu Table
  \details
  Element                Description
  MaskedBits             contains bitcoded the boolean data of PduR_TriggerTransmitSupportedOfRmSrcRom, PduR_TxConfirmationSupportedOfRmSrcRom
  MmRomIdx               the index of the 1:1 relation pointing to PduR_MmRom
  PartitionIndexOfCsl
  RmDestRomStartIdx      the start index of the 1:n relation pointing to PduR_RmDestRom
  SrcHnd                 handle to be used as parameter for the TxConfirmation or TriggerTransmit function call.
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_RmSrcRomType, PDUR_CONST) PduR_RmSrcRom[53] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    MaskedBits  MmRomIdx  PartitionIndexOfCsl                            RmDestRomStartIdx  SrcHnd                                                                             Comment                                       Referable Keys */
  { /*     0 */      0x00u,       0u,                  0u  /* CommonSharedMemory */,               43u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_d978c2f8] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/BecmPropSignalIpdu01_e4f1b6c7_Rx/PduRSrcPdu_d978c2f8] */
  { /*     1 */      0x00u,       0u,                  0u  /* CommonSharedMemory */,                2u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_03540ad7] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/BecmPropSignalIpdu02_a919b6a0_Rx/PduRSrcPdu_03540ad7] */
  { /*     2 */      0x00u,       0u,                  0u  /* CommonSharedMemory */,               14u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_2fbd4436] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/BecmPropSignalIpdu03_24914b42_Rx/PduRSrcPdu_2fbd4436] */
  { /*     3 */      0x00u,       0u,                  0u  /* CommonSharedMemory */,               32u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_97fbab59] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/BecmPropSignalIpdu15_f1c84025_Rx/PduRSrcPdu_97fbab59] */
  { /*     4 */      0x00u,       0u,                  0u  /* CommonSharedMemory */,               33u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_9b6ba7e6] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/CddObcPropSignalIPdu01_1ee0577a_Rx/PduRSrcPdu_9b6ba7e6] */
  { /*     5 */      0x00u,       0u,                  0u  /* CommonSharedMemory */,               40u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_c52842d9] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ECMPropSignalIPDU02_2a2da2a9_Rx/PduRSrcPdu_c52842d9] */
  { /*     6 */      0x00u,       0u,                  0u  /* CommonSharedMemory */,               45u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_e135b2fa] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ECMPropSignalIPDU04_b1fda267_Rx/PduRSrcPdu_e135b2fa] */
  { /*     7 */      0x00u,       0u,                  0u  /* CommonSharedMemory */,               29u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_916b682c] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ECMPropSignalIPDU05_3c755f85_Rx/PduRSrcPdu_916b682c] */
  { /*     8 */      0x00u,       0u,                  0u  /* CommonSharedMemory */,               13u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_2d833a1c] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ECMPropSignalIPDU06_719d5fe2_Rx/PduRSrcPdu_2d833a1c] */
  { /*     9 */      0x00u,       0u,                  0u  /* CommonSharedMemory */,               42u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_cd8794a7] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EcmPropSignalIPDU08_f2c9e4fc_Rx/PduRSrcPdu_cd8794a7] */
  { /*    10 */      0x00u,       0u,                  0u  /* CommonSharedMemory */,                1u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_019d6fbe] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EcmPropSignalIPDU11_86a9e821_Rx/PduRSrcPdu_019d6fbe] */
  { /*    11 */      0x00u,       0u,                  0u  /* CommonSharedMemory */,               16u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_332380ac] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EcmPropSignalIPDU28_6fdbf3ae_Rx/PduRSrcPdu_332380ac] */
  { /*    12 */      0x00u,       0u,                  0u  /* CommonSharedMemory */,                5u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_0c4be5f2] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EcmPropSignalIPdu24_045785fe_Rx/PduRSrcPdu_0c4be5f2] */
  { /*    13 */      0x00u,       0u,                  0u  /* CommonSharedMemory */,               27u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_87cbdfdf] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EcmPropSignalIPdu25_89df781c_Rx/PduRSrcPdu_87cbdfdf] */
  { /*    14 */      0x00u,       1u,                  0u  /* CommonSharedMemory */,               49u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_f30b45d0] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PropulsionCAN_33157db4_Rx_d0a6735a_Rx/PduRSrcPdu_f30b45d0] */
  { /*    15 */      0x00u,       0u,                  0u  /* CommonSharedMemory */,               46u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_e6b4c0ad] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/SrsPropSignalIPdu02_30ca6a16_Rx/PduRSrcPdu_e6b4c0ad] */
  { /*    16 */      0x00u,       0u,                  0u  /* CommonSharedMemory */,               28u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_8adb95b0] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU05_753dbccf_Rx/PduRSrcPdu_8adb95b0] */
  { /*    17 */      0x00u,       0u,                  0u  /* CommonSharedMemory */,               37u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_ac9bf55a] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU06_38d5bca8_Rx/PduRSrcPdu_ac9bf55a] */
  { /*    18 */      0x00u,       0u,                  0u  /* CommonSharedMemory */,               47u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_eff178fd] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU08_146446f0_Rx/PduRSrcPdu_eff178fd] */
  { /*    19 */      0x00u,       0u,                  0u  /* CommonSharedMemory */,               19u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_3ed696a1] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU11_60044a2d_Rx/PduRSrcPdu_3ed696a1] */
  { /*    20 */      0x00u,       0u,                  0u  /* CommonSharedMemory */,               26u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_86801b79] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU16_765cb701_Rx/PduRSrcPdu_86801b79] */
  { /*    21 */      0x00u,       0u,                  0u  /* CommonSharedMemory */,               35u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_a83bf697] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU17_fbd44ae3_Rx/PduRSrcPdu_a83bf697] */
  { /*    22 */      0x00u,       0u,                  0u  /* CommonSharedMemory */,               39u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_c01e7a1d] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU18_5aed4d59_Rx/PduRSrcPdu_c01e7a1d] */
  { /*    23 */      0x00u,       0u,                  0u  /* CommonSharedMemory */,               25u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_83c4d48c] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU19_d765b0bb_Rx/PduRSrcPdu_83c4d48c] */
  { /*    24 */      0x00u,       0u,                  0u  /* CommonSharedMemory */,               51u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_f7a62982] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropdTCSignalIPdu38_4bda4dd7_Rx/PduRSrcPdu_f7a62982] */
  { /*    25 */      0x00u,       0u,                  0u  /* CommonSharedMemory */,               48u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_f2322b88] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VddmBcmPropdTCSignalIPDU01_857b2e99_Rx/PduRSrcPdu_f2322b88] */
  { /*    26 */      0x00u,       0u,                  0u  /* CommonSharedMemory */,               10u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_21f2d8e6] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VddmPropSignalIPdu26_893fed53_Rx/PduRSrcPdu_21f2d8e6] */
  { /*    27 */      0x00u,       2u,                  0u  /* CommonSharedMemory */,               23u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_63335c9b] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EtcToAllJ1979OBDDiagDcmIpdu11_b7ab7660_Rx/PduRSrcPdu_63335c9b] */
  { /*    28 */      0x00u,       2u,                  0u  /* CommonSharedMemory */,               22u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_62791526] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EtcToIemJ1979OBDDiagDcmIpdu11_ac95f359_Rx/PduRSrcPdu_62791526] */
  { /*    29 */      0x00u,       2u,                  0u  /* CommonSharedMemory */,                0u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu]          */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/UudtDcmRx1/PduRSrcPdu] */
  { /*    30 */      0x00u,       2u,                  0u  /* CommonSharedMemory */,                6u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_1]        */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/UudtDcmRx2/PduRSrcPdu_1] */
  { /*    31 */      0x00u,       2u,                  0u  /* CommonSharedMemory */,                9u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_2]        */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/UudtDcmRx3/PduRSrcPdu_2] */
  { /*    32 */      0x00u,       2u,                  0u  /* CommonSharedMemory */,               18u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_3ccfd7a6] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VgmToAllFuncDiagDcmIpdu_030e2fcd_Rx/PduRSrcPdu_3ccfd7a6] */
  { /*    33 */      0x00u,       2u,                  0u  /* CommonSharedMemory */,               50u,                                                    PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_f62b73a4] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VgmToIemDiagDcmIpdu_81f41e2d_Rx/PduRSrcPdu_f62b73a4] */
  { /*    34 */      0x01u,       3u,                  0u  /* CommonSharedMemory */,               21u,                          ComConf_ComIPdu_IemEduPropSignalIPdu01_3346005e_Tx },  /* [PduRSrcPdu: PduRSrcPdu_5ecec422] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemEduPropSignalIPdu01_3346005e_Tx/PduRSrcPdu_5ecec422] */
  { /*    35 */      0x01u,       3u,                  0u  /* CommonSharedMemory */,               52u,                          ComConf_ComIPdu_IemEduPropSignalIPdu02_aa4f51e4_Tx },  /* [PduRSrcPdu: PduRSrcPdu_f9d732b4] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemEduPropSignalIPdu02_aa4f51e4_Tx/PduRSrcPdu_f9d732b4] */
  { /*    36 */      0x01u,       3u,                  0u  /* CommonSharedMemory */,                4u,                             ComConf_ComIPdu_IemPropSignalIPdu01_21049770_Tx },  /* [PduRSrcPdu: PduRSrcPdu_0bf0194b] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu01_21049770_Tx/PduRSrcPdu_0bf0194b] */
  { /*    37 */      0x01u,       3u,                  0u  /* CommonSharedMemory */,               30u,                             ComConf_ComIPdu_IemPropSignalIPdu02_b80dc6ca_Tx },  /* [PduRSrcPdu: PduRSrcPdu_956c143d] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu02_b80dc6ca_Tx/PduRSrcPdu_956c143d] */
  { /*    38 */      0x01u,       3u,                  0u  /* CommonSharedMemory */,               11u,                             ComConf_ComIPdu_IemPropSignalIPdu03_cf0af65c_Tx },  /* [PduRSrcPdu: PduRSrcPdu_292b77a0] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu03_cf0af65c_Tx/PduRSrcPdu_292b77a0] */
  { /*    39 */      0x01u,       3u,                  0u  /* CommonSharedMemory */,               20u,                             ComConf_ComIPdu_IemPropSignalIPdu04_516e63ff_Tx },  /* [PduRSrcPdu: PduRSrcPdu_53beb1f3] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu04_516e63ff_Tx/PduRSrcPdu_53beb1f3] */
  { /*    40 */      0x01u,       3u,                  0u  /* CommonSharedMemory */,                3u,                             ComConf_ComIPdu_IemPropSignalIPdu06_bf6002d3_Tx },  /* [PduRSrcPdu: PduRSrcPdu_0af6e6e3] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu06_bf6002d3_Tx/PduRSrcPdu_0af6e6e3] */
  { /*    41 */      0x01u,       3u,                  0u  /* CommonSharedMemory */,               31u,                             ComConf_ComIPdu_IemPropSignalIPdu07_c8673245_Tx },  /* [PduRSrcPdu: PduRSrcPdu_9766d5ce] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu07_c8673245_Tx/PduRSrcPdu_9766d5ce] */
  { /*    42 */      0x01u,       3u,                  0u  /* CommonSharedMemory */,                7u,                             ComConf_ComIPdu_IemPropSignalIPdu08_58d82fd4_Tx },  /* [PduRSrcPdu: PduRSrcPdu_145e853b] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu08_58d82fd4_Tx/PduRSrcPdu_145e853b] */
  { /*    43 */      0x01u,       3u,                  0u  /* CommonSharedMemory */,               12u,                             ComConf_ComIPdu_IemPropSignalIPdu09_2fdf1f42_Tx },  /* [PduRSrcPdu: PduRSrcPdu_2b1294b8] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu09_2fdf1f42_Tx/PduRSrcPdu_2b1294b8] */
  { /*    44 */      0x01u,       3u,                  0u  /* CommonSharedMemory */,               36u,                             ComConf_ComIPdu_IemPropSignalIPdu12_a116f78b_Tx },  /* [PduRSrcPdu: PduRSrcPdu_a9fef54e] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu12_a116f78b_Tx/PduRSrcPdu_a9fef54e] */
  { /*    45 */      0x01u,       3u,                  0u  /* CommonSharedMemory */,               38u,                             ComConf_ComIPdu_IemPropSignalIPdu14_487552be_Tx },  /* [PduRSrcPdu: PduRSrcPdu_acf6831c] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu14_487552be_Tx/PduRSrcPdu_acf6831c] */
  { /*    46 */      0x01u,       3u,                  0u  /* CommonSharedMemory */,               17u,                             ComConf_ComIPdu_IemPropSignalIPdu16_a67b3392_Tx },  /* [PduRSrcPdu: PduRSrcPdu_35fca203] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu16_a67b3392_Tx/PduRSrcPdu_35fca203] */
  { /*    47 */      0x00u,       4u,                  0u  /* CommonSharedMemory */,               24u, DcmConf_DcmDslProtocolTx_IemToEtcJ1979OBDDiagDcmIpdu11_da239b2d_Tx_c7a1943e },  /* [PduRSrcPdu: PduRSrcPdu_75b2e816] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemToEtcJ1979OBDDiagDcmIpdu11_da239b2d_Tx/PduRSrcPdu_75b2e816] */
  { /*    48 */      0x00u,       4u,                  0u  /* CommonSharedMemory */,               41u,          DcmConf_DcmDslProtocolTx_IemToEtcUudtDcmIpdu1_a0db6d78_Tx_c0b1ca64 },  /* [PduRSrcPdu: PduRSrcPdu_c6a1321b] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemToEtcUudtDcmIpdu1_a0db6d78_Tx/PduRSrcPdu_c6a1321b] */
  { /*    49 */      0x00u,       4u,                  0u  /* CommonSharedMemory */,                8u,          DcmConf_DcmDslProtocolTx_IemToEtcUudtDcmIpdu2_39d23cc2_Tx_19898c33 },  /* [PduRSrcPdu: PduRSrcPdu_1f99744c] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemToEtcUudtDcmIpdu2_39d23cc2_Tx/PduRSrcPdu_1f99744c] */
    /* Index    MaskedBits  MmRomIdx  PartitionIndexOfCsl                            RmDestRomStartIdx  SrcHnd                                                                             Comment                                       Referable Keys */
  { /*    50 */      0x00u,       4u,                  0u  /* CommonSharedMemory */,               44u,          DcmConf_DcmDslProtocolTx_IemToEtcUudtDcmIpdu3_4ed50c54_Tx_e71950c0 },  /* [PduRSrcPdu: PduRSrcPdu_e109a8bf] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemToEtcUudtDcmIpdu3_4ed50c54_Tx/PduRSrcPdu_e109a8bf] */
  { /*    51 */      0x00u,       4u,                  0u  /* CommonSharedMemory */,               34u,           DcmConf_DcmDslProtocolTx_IemToVgmDiagDcmIpdu_ce8379a0_Tx_00a03790 },  /* [PduRSrcPdu: PduRSrcPdu_a6ed57d5] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemToVgmDiagDcmIpdu_ce8379a0_Tx/PduRSrcPdu_a6ed57d5] */
  { /*    52 */      0x02u,       3u,                  0u  /* CommonSharedMemory */,               15u,                                   ComConf_ComIPdu_PropulsionCAN_EiraIpdu_Tx }   /* [PduRSrcPdu: PduRSrcPdu_3]        */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PropulsionCAN_EiraUserData/PduRSrcPdu_3] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmTransmitFctPtr
**********************************************************************************************************************/
/** 
  \var    PduR_RmTransmitFctPtr
  \brief  Internal routing manager Transmit functions.
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_RmTransmitFctPtrType, PDUR_CONST) PduR_RmTransmitFctPtr[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     RmTransmitFctPtr                  Referable Keys */
  /*     0 */ PduR_RmIf_RoutePdu           ,  /* [PduR_RmIf_RoutePdu] */
  /*     1 */ PduR_RmTp_Transmit_MultiDest    /* [PduR_RmTp_Transmit_MultiDest] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RxIf2Dest
**********************************************************************************************************************/
/** 
  \var    PduR_RxIf2Dest
  \brief  This table contains all routing information to perform the Rx handling of an interface routing. Used in the &lt;LLIf&gt;_RxIndication
  \details
  Element                Description
  PartitionIndexOfCsl
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_RxIf2DestType, PDUR_CONST) PduR_RxIf2Dest[27] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PartitionIndexOfCsl                                  Referable Keys */
  { /*     0 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/BecmPropSignalIpdu01_e4f1b6c7_Rx/PduRSrcPdu_d978c2f8] */
  { /*     1 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/BecmPropSignalIpdu02_a919b6a0_Rx/PduRSrcPdu_03540ad7] */
  { /*     2 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/BecmPropSignalIpdu03_24914b42_Rx/PduRSrcPdu_2fbd4436] */
  { /*     3 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/BecmPropSignalIpdu15_f1c84025_Rx/PduRSrcPdu_97fbab59] */
  { /*     4 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/CddObcPropSignalIPdu01_1ee0577a_Rx/PduRSrcPdu_9b6ba7e6] */
  { /*     5 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ECMPropSignalIPDU02_2a2da2a9_Rx/PduRSrcPdu_c52842d9] */
  { /*     6 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ECMPropSignalIPDU04_b1fda267_Rx/PduRSrcPdu_e135b2fa] */
  { /*     7 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ECMPropSignalIPDU05_3c755f85_Rx/PduRSrcPdu_916b682c] */
  { /*     8 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ECMPropSignalIPDU06_719d5fe2_Rx/PduRSrcPdu_2d833a1c] */
  { /*     9 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EcmPropSignalIPDU08_f2c9e4fc_Rx/PduRSrcPdu_cd8794a7] */
  { /*    10 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EcmPropSignalIPDU11_86a9e821_Rx/PduRSrcPdu_019d6fbe] */
  { /*    11 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EcmPropSignalIPDU28_6fdbf3ae_Rx/PduRSrcPdu_332380ac] */
  { /*    12 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EcmPropSignalIPdu24_045785fe_Rx/PduRSrcPdu_0c4be5f2] */
  { /*    13 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EcmPropSignalIPdu25_89df781c_Rx/PduRSrcPdu_87cbdfdf] */
  { /*    14 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PropulsionCAN_33157db4_Rx_d0a6735a_Rx/PduRSrcPdu_f30b45d0] */
  { /*    15 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/SrsPropSignalIPdu02_30ca6a16_Rx/PduRSrcPdu_e6b4c0ad] */
  { /*    16 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU05_753dbccf_Rx/PduRSrcPdu_8adb95b0] */
  { /*    17 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU06_38d5bca8_Rx/PduRSrcPdu_ac9bf55a] */
  { /*    18 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU08_146446f0_Rx/PduRSrcPdu_eff178fd] */
  { /*    19 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU11_60044a2d_Rx/PduRSrcPdu_3ed696a1] */
  { /*    20 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU16_765cb701_Rx/PduRSrcPdu_86801b79] */
  { /*    21 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU17_fbd44ae3_Rx/PduRSrcPdu_a83bf697] */
  { /*    22 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU18_5aed4d59_Rx/PduRSrcPdu_c01e7a1d] */
  { /*    23 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropSignalIPDU19_d765b0bb_Rx/PduRSrcPdu_83c4d48c] */
  { /*    24 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VDDMPropdTCSignalIPdu38_4bda4dd7_Rx/PduRSrcPdu_f7a62982] */
  { /*    25 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VddmBcmPropdTCSignalIPDU01_857b2e99_Rx/PduRSrcPdu_f2322b88] */
  { /*    26 */                  0u  /* CommonSharedMemory */ }   /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VddmPropSignalIPdu26_893fed53_Rx/PduRSrcPdu_21f2d8e6] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RxTp2Dest
**********************************************************************************************************************/
/** 
  \var    PduR_RxTp2Dest
  \brief  This table contains all routing information to perform the Rx handling of a Tp Routing. Used in the PduR_&lt;LLTp&gt;_StartOfReception, PduR_&lt;LLTp&gt;_CopyRxData and PduR_&lt;LLTp&gt;_RxIndication.
  \details
  Element                Description
  PartitionIndexOfCsl
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_RxTp2DestType, PDUR_CONST) PduR_RxTp2Dest[7] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PartitionIndexOfCsl                                  Referable Keys */
  { /*     0 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EtcToAllJ1979OBDDiagDcmIpdu11_b7ab7660_Rx/PduRSrcPdu_63335c9b] */
  { /*     1 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EtcToIemJ1979OBDDiagDcmIpdu11_ac95f359_Rx/PduRSrcPdu_62791526] */
  { /*     2 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/UudtDcmRx1/PduRSrcPdu] */
  { /*     3 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/UudtDcmRx2/PduRSrcPdu_1] */
  { /*     4 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/UudtDcmRx3/PduRSrcPdu_2] */
  { /*     5 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VgmToAllFuncDiagDcmIpdu_030e2fcd_Rx/PduRSrcPdu_3ccfd7a6] */
  { /*     6 */                  0u  /* CommonSharedMemory */ }   /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VgmToIemDiagDcmIpdu_81f41e2d_Rx/PduRSrcPdu_f62b73a4] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_Tx2Lo
**********************************************************************************************************************/
/** 
  \var    PduR_Tx2Lo
  \brief  Contains all information to route a Pdu from a upper layer to a lower layer module, or to cancel a transmission
  \details
  Element                Description
  PartitionIndexOfCsl
  RmTransmitFctPtrIdx    the index of the 1:1 relation pointing to PduR_RmTransmitFctPtr
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_Tx2LoType, PDUR_CONST) PduR_Tx2Lo[19] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PartitionIndexOfCsl                            RmTransmitFctPtrIdx        Referable Keys */
  { /*     0 */                  0u  /* CommonSharedMemory */,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemEduPropSignalIPdu01_3346005e_Tx/PduRSrcPdu_5ecec422] */
  { /*     1 */                  0u  /* CommonSharedMemory */,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemEduPropSignalIPdu02_aa4f51e4_Tx/PduRSrcPdu_f9d732b4] */
  { /*     2 */                  0u  /* CommonSharedMemory */,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu01_21049770_Tx/PduRSrcPdu_0bf0194b] */
  { /*     3 */                  0u  /* CommonSharedMemory */,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu02_b80dc6ca_Tx/PduRSrcPdu_956c143d] */
  { /*     4 */                  0u  /* CommonSharedMemory */,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu03_cf0af65c_Tx/PduRSrcPdu_292b77a0] */
  { /*     5 */                  0u  /* CommonSharedMemory */,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu04_516e63ff_Tx/PduRSrcPdu_53beb1f3] */
  { /*     6 */                  0u  /* CommonSharedMemory */,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu06_bf6002d3_Tx/PduRSrcPdu_0af6e6e3] */
  { /*     7 */                  0u  /* CommonSharedMemory */,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu07_c8673245_Tx/PduRSrcPdu_9766d5ce] */
  { /*     8 */                  0u  /* CommonSharedMemory */,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu08_58d82fd4_Tx/PduRSrcPdu_145e853b] */
  { /*     9 */                  0u  /* CommonSharedMemory */,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu09_2fdf1f42_Tx/PduRSrcPdu_2b1294b8] */
  { /*    10 */                  0u  /* CommonSharedMemory */,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu12_a116f78b_Tx/PduRSrcPdu_a9fef54e] */
  { /*    11 */                  0u  /* CommonSharedMemory */,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu14_487552be_Tx/PduRSrcPdu_acf6831c] */
  { /*    12 */                  0u  /* CommonSharedMemory */,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemPropSignalIPdu16_a67b3392_Tx/PduRSrcPdu_35fca203] */
  { /*    13 */                  0u  /* CommonSharedMemory */,                  1u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemToEtcJ1979OBDDiagDcmIpdu11_da239b2d_Tx/PduRSrcPdu_75b2e816] */
  { /*    14 */                  0u  /* CommonSharedMemory */,                  1u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemToEtcUudtDcmIpdu1_a0db6d78_Tx/PduRSrcPdu_c6a1321b] */
  { /*    15 */                  0u  /* CommonSharedMemory */,                  1u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemToEtcUudtDcmIpdu2_39d23cc2_Tx/PduRSrcPdu_1f99744c] */
  { /*    16 */                  0u  /* CommonSharedMemory */,                  1u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemToEtcUudtDcmIpdu3_4ed50c54_Tx/PduRSrcPdu_e109a8bf] */
  { /*    17 */                  0u  /* CommonSharedMemory */,                  1u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IemToVgmDiagDcmIpdu_ce8379a0_Tx/PduRSrcPdu_a6ed57d5] */
  { /*    18 */                  0u  /* CommonSharedMemory */,                  0u }   /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PropulsionCAN_EiraUserData/PduRSrcPdu_3] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TxIf2Up
**********************************************************************************************************************/
/** 
  \var    PduR_TxIf2Up
  \brief  This table contains all routing information to perform the Tx handling of an interface routing. Used in the &lt;LLIf&gt;_TriggerTransmit and &lt;LLIf&gt;_TxConfirmation
  \details
  Element                Description
  TxConfirmationUsed     True, if any of the source PduRDestPdus uses a TxConfirmation.
  PartitionIndexOfCsl
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_TxIf2UpType, PDUR_CONST) PduR_TxIf2Up[14] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxConfirmationUsed  PartitionIndexOfCsl                                  Referable Keys */
  { /*     0 */               TRUE,                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemEduPropSignalIPdu01_a3cd4ce7_Tx] */
  { /*     1 */               TRUE,                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemEduPropSignalIPdu02_ee254c80_Tx] */
  { /*     2 */               TRUE,                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemPropSignalIPdu01_1988e981_Tx] */
  { /*     3 */               TRUE,                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemPropSignalIPdu02_5460e9e6_Tx] */
  { /*     4 */               TRUE,                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemPropSignalIPdu03_d9e81404_Tx] */
  { /*     5 */               TRUE,                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemPropSignalIPdu04_cfb0e928_Tx] */
  { /*     6 */               TRUE,                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemPropSignalIPdu06_0fd014ad_Tx] */
  { /*     7 */               TRUE,                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemPropSignalIPdu07_8258e94f_Tx] */
  { /*     8 */               TRUE,                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemPropSignalIPdu08_2361eef5_Tx] */
  { /*     9 */               TRUE,                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemPropSignalIPdu09_aee91317_Tx] */
  { /*    10 */               TRUE,                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemPropSignalIPdu12_1ae9e24f_Tx] */
  { /*    11 */               TRUE,                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemPropSignalIPdu14_8139e281_Tx] */
  { /*    12 */               TRUE,                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemPropSignalIPdu16_41591f04_Tx] */
  { /*    13 */              FALSE,                  0u  /* CommonSharedMemory */ }   /* [/ActiveEcuC/EcuC/EcucPduCollection/PropulsionCAN_EiraUserData_Tx] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TxTp2Src
**********************************************************************************************************************/
/** 
  \var    PduR_TxTp2Src
  \brief  This table contains all routing information to perform the Tx handling of a transport protocol routing, Used in the &lt;LoTp&gt;_CopyTxData and &lt;LoTp&gt;_TxConfirmation
  \details
  Element                Description
  PartitionIndexOfCsl
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_TxTp2SrcType, PDUR_CONST) PduR_TxTp2Src[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PartitionIndexOfCsl                                  Referable Keys */
  { /*     0 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemToEtcJ1979OBDDiagDcmIpdu11_525ada58_Tx] */
  { /*     1 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemToEtcUudtDcmIpdu1_4ae85965_Tx] */
  { /*     2 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemToEtcUudtDcmIpdu2_07005902_Tx] */
  { /*     3 */                  0u  /* CommonSharedMemory */ },  /* [/ActiveEcuC/EcuC/EcucPduCollection/IemToEtcUudtDcmIpdu3_8a88a4e0_Tx] */
  { /*     4 */                  0u  /* CommonSharedMemory */ }   /* [/ActiveEcuC/EcuC/EcucPduCollection/IemToVgmDiagDcmIpdu_411ec11e_Tx] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_Initialized
**********************************************************************************************************************/
/** 
  \var    PduR_Initialized
  \brief  Initialization state of PduR. TRUE, if PduR_Init() has been called, else FALSE
*/ 
#define PDUR_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(PduR_InitializedType, PDUR_VAR_ZERO_INIT) PduR_Initialized = FALSE;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define PDUR_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_PCPartitionConfig
**********************************************************************************************************************/
/** 
  \var    PduR_PCPartitionConfig
  \details
  Element        Description
  Initialized    the pointer to PduR_Initialized
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_PCPartitionConfigType, PDUR_CONST) PduR_PCPartitionConfig[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  { /* Index: 0 Keys: [] */
      (&(PduR_Initialized))  /**< the pointer to PduR_Initialized */
  }
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/


#define PDUR_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "PduR_MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_MemMap */

#if(PDUR_USE_INIT_POINTER == STD_ON)
P2CONST(PduR_PBConfigType, PDUR_VAR_ZERO_INIT, PDUR_PBCFG) PduR_ConfigDataPtr = (const PduR_PBConfigType *) NULL_PTR;
#endif

#define PDUR_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "PduR_MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_MemMap */

#define PDUR_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "PduR_MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_MemMap */

VAR(boolean, PDUR_VAR_NOINIT) PduR_PreInitialized;

#define PDUR_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "PduR_MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_MemMap */
  
/**********************************************************************************************************************
 * LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/
#define PDUR_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "PduR_MemMap.h"

/* Exclusive Area Wrapper functions */

/**********************************************************************************************************************
 * PduR_SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0
 *********************************************************************************************************************/
/*!
 * \internal
 * -  enter the EA  
 * \endinternal
 *********************************************************************************************************************/
static FUNC(void, PDUR_CODE) PduR_SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0(void)
{
  SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();
}


/**********************************************************************************************************************
 * PduR_SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0
 *********************************************************************************************************************/
/*!
 * \internal
 * -  exit the EA  
 * \endinternal
 *********************************************************************************************************************/
static FUNC(void, PDUR_CODE) PduR_SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0(void)
{
  SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();
}


/* Upper Layer Interface APIs */

/**********************************************************************************************************************
 * PduR_ComTransmit
 *********************************************************************************************************************/
/*!
 * \internal
 * - call upper layer Transmit function. 
 * \endinternal
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_ComTransmit(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info) /* COV_PDUR_WRAPPER_FUNC */
{
  Std_ReturnType retVal = E_NOT_OK;        /* PRQA S 2981 */ /* MD_MSR_RetVal */
  
#if (PDUR_TX2LO == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_UpTransmit(id, info); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_TX, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */

  return retVal;
}


/**********************************************************************************************************************
 * PduR_DcmTransmit
 *********************************************************************************************************************/
/*!
 * \internal
 * - call upper layer Transmit function. 
 * \endinternal
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_DcmTransmit(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info) /* COV_PDUR_WRAPPER_FUNC */
{
  Std_ReturnType retVal = E_NOT_OK;        /* PRQA S 2981 */ /* MD_MSR_RetVal */
  
#if (PDUR_TX2LO == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_UpTransmit(id, info); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_TX, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */

  return retVal;
}


/* Communication Interface APIs */

/**********************************************************************************************************************
 * PduR_CanIfRxIndication
 *********************************************************************************************************************/
/*!
 * \internal
 * -  call internal general IfRxIndication function.  
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_CanIfRxIndication(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info) /* COV_PDUR_WRAPPER_FUNC */
{
#if (PDUR_RXIF2DEST == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  PduR_LoIfRxIndication(RxPduId, info);  /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_IFRXIND, PDUR_E_PDU_ID_INVALID);
#endif
  PDUR_DUMMY_STATEMENT(RxPduId);        /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   		/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
}


/**********************************************************************************************************************
 * PduR_CanIfTxConfirmation
 *********************************************************************************************************************/
/*!
 * \internal
 * - call internal general communication interface TxConfirmation function.
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_CanIfTxConfirmation(PduIdType TxPduId) /* COV_PDUR_WRAPPER_FUNC */
{
#if (PDUR_TXCONFIRMATIONUSEDOFTXIF2UP == STD_ON)
  PduR_LoIfTxConfirmation(TxPduId);
#endif
  PDUR_DUMMY_STATEMENT(TxPduId);        /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
}



/**********************************************************************************************************************
 * PduR_CanNmRxIndication
 *********************************************************************************************************************/
/*!
 * \internal
 * -  call internal general IfRxIndication function.  
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_CanNmRxIndication(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info) /* COV_PDUR_WRAPPER_FUNC */
{
#if (PDUR_RXIF2DEST == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  PduR_LoIfRxIndication(RxPduId, info);  /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_IFRXIND, PDUR_E_PDU_ID_INVALID);
#endif
  PDUR_DUMMY_STATEMENT(RxPduId);        /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   		/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
}



/**********************************************************************************************************************
 * PduR_CanNmTriggerTransmit
 *********************************************************************************************************************/
/*!
 * \internal
 * - call internal general TriggerTransmit function.  
 * \endinternal
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_CanNmTriggerTransmit(PduIdType TxPduId, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)
{
  return PduR_LoIfTriggerTransmit(TxPduId, info); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
}


/* Transport Protocol APIs */

/**********************************************************************************************************************
 * PduR_CanTpStartOfReception
 *********************************************************************************************************************/
 /*!
 * \internal
 * - call transport protocoll StartOfReception function.  
 * \endinternal
 *********************************************************************************************************************/
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_CanTpStartOfReception(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, PduLengthType TpSduLength, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr) /* COV_PDUR_WRAPPER_FUNC */
{
  BufReq_ReturnType retVal = BUFREQ_E_NOT_OK;        /* PRQA S 2981 */ /* MD_MSR_RetVal */

#if (PDUR_RXTP2DEST == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_LoTpStartOfReception(id, info, TpSduLength, bufferSizePtr); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_SOR, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     		/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   		/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(TpSduLength);    /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(bufferSizePtr);  /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */

  return retVal;
}


/**********************************************************************************************************************
 * PduR_CanTpCopyRxData
 *********************************************************************************************************************/
/*!
 * \internal
 * - call internal general CopyRxData.
 * \endinternal
 *********************************************************************************************************************/
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_CanTpCopyRxData(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr) /* COV_PDUR_WRAPPER_FUNC */
{
  BufReq_ReturnType retVal = BUFREQ_E_NOT_OK;        /* PRQA S 2981 */ /* MD_MSR_RetVal */
  
#if (PDUR_RXTP2DEST == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_LoTpCopyRxData(id, info, bufferSizePtr); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_CPYRX, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     		/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);  			/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(bufferSizePtr);  /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  
  return retVal;
}


/**********************************************************************************************************************
 * PduR_CanTpCopyTxData
 *********************************************************************************************************************/
/*!
 * \internal
 * - call internal general CopyTxData.
 * \endinternal
 *********************************************************************************************************************/
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_CanTpCopyTxData(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, P2VAR(RetryInfoType, AUTOMATIC, PDUR_APPL_DATA) retry, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) availableDataPtr) /* COV_PDUR_WRAPPER_FUNC */
{
  BufReq_ReturnType retVal = BUFREQ_E_NOT_OK;        /* PRQA S 2981 */ /* MD_MSR_RetVal */
  
#if(PDUR_TXTP2SRC == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_LoTpCopyTxData(id, info, retry, availableDataPtr); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_CPYTX, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     				/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);  					/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(retry);  				/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(availableDataPtr);       /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  
  return retVal;
}


/**********************************************************************************************************************
 * PduR_CanTpRxIndication
 *********************************************************************************************************************/
/*!
 * \internal
 * - call Tp RxIndication function.
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_CanTpRxIndication(PduIdType id, Std_ReturnType result) /* COV_PDUR_WRAPPER_FUNC */
{
#if (PDUR_RXTP2DEST == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  PduR_LoTpRxIndication(id, result);
#else
  PduR_Det_ReportError(PDUR_FCT_TPRXIND, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
}


/**********************************************************************************************************************
 * PduR_CanTpTxConfirmation
 *********************************************************************************************************************/
/*!
 * \internal
 * - call Tp TxConfirmation function 
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_CanTpTxConfirmation(PduIdType id, Std_ReturnType result) /* COV_PDUR_WRAPPER_FUNC */
{
#if (PDUR_TXTP2SRC == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  PduR_LoTpTxConfirmation(id, result);
#else
  PduR_Det_ReportError(PDUR_FCT_TPTXCFM, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
}


/* CancelReceive global without UseTag API */

/* ChangeParameter global without UseTag  API */

/* Communication Interface / Transport Protocol APIs */

/* Communication Interface / Transport Protocol APIs */

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/


#define PDUR_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "PduR_MemMap.h"

/* SBSW_JUSTIFICATION_BEGIN

  \ID SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ID_AND_PTR
    \DESCRIPTION    The API is called with an Id and a pointer.
                    The API call is forwarded using a function pointer which is read using ComStackLib macros.
                    
    \COUNTERMEASURE \N The function pointer is read using the passed Id (and ComStackLib macros). 
                       The Id is a SNV provided by the lower layer. 
                       It is checked at runtime if it is in the valid range.
                       The pointer is provided by the lower layer and is assumed to be valid. It is passed as is to the corresponding function. 

  \ID SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ID_ONLY
    \DESCRIPTION    The API is called with an Id.
                    The API call is forwarded using a function pointer which is read using ComStackLib macros.
                    
    \COUNTERMEASURE \R The function pointer is read using the passed Id (and ComStackLib macros). 
                       The Id is a SNV provided by the lower layer. 
                       It is checked at runtime if it is in the valid range.
                       
  \ID SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY
    \DESCRIPTION    The API call is forwarded to an internal function.
    \COUNTERMEASURE \N The parameter are checked in the called function.

 SBSW_JUSTIFICATION_END */
 
 /* COV_JUSTIFICATION_BEGIN
 
  \ID COV_PDUR_WRAPPER_FUNC
    \ACCEPT X
    \REASON Each neighbouring module call the same internal function. The call is covered by an other module. 
    
  \ID COV_PDUR_RX_OR_TX_ONLY_CONFIG
    \ACCEPT TX
    \REASON The API is mandatory if this Bsw module exists. In case of Rx or Tx only configs the API call is not forwarded to the internal function. 
 
 COV_JUSTIFICATION_END */
 

/**********************************************************************************************************************
 * END OF FILE: PduR_Lcfg.c
 *********************************************************************************************************************/

