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
 *              File: Com_Cbk.h
 *   Generation Time: 2026-10-30 22:11:23
 *           Project: IEM_TC387_BRS - Version 1
 *          Delivery: CBD2000642_D01
 *      Tool Version: DaVinci Configurator  5.22.45 SP3
 *
 *
 *********************************************************************************************************************/


#if !defined (COM_CBK_H)
# define COM_CBK_H

/**********************************************************************************************************************
  MISRA / PClint JUSTIFICATIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "Com_Cot.h"

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/



/**
 * \defgroup ComHandleIdsComRxPdu Handle IDs of handle space ComRxPdu.
 * \brief Rx Pdus
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComIPdu_BecmPropSignalIpdu01_7a983997_Rx              0u
#define ComConf_ComIPdu_BecmPropSignalIpdu02_e391682d_Rx              1u
#define ComConf_ComIPdu_BecmPropSignalIpdu03_949658bb_Rx              2u
#define ComConf_ComIPdu_BecmPropSignalIpdu15_64eecccf_Rx              3u
#define ComConf_ComIPdu_CddObcPropSignalIPdu01_003f0830_Rx            4u
#define ComConf_ComIPdu_ECMPropSignalIPDU02_bd22093c_Rx               5u
#define ComConf_ComIPdu_ECMPropSignalIPDU04_5441ac09_Rx               6u
#define ComConf_ComIPdu_ECMPropSignalIPDU05_23469c9f_Rx               7u
#define ComConf_ComIPdu_ECMPropSignalIPDU06_ba4fcd25_Rx               8u
#define ComConf_ComIPdu_EcmPropSignalIPDU08_2e126ae8_Rx               9u
#define ComConf_ComIPdu_EcmPropSignalIPDU11_4ed5e30d_Rx               10u
#define ComConf_ComIPdu_EcmPropSignalIPDU28_1c24086a_Rx               11u
#define ComConf_ComIPdu_EcmPropSignalIPdu24_8dedad9f_Rx               12u
#define ComConf_ComIPdu_EcmPropSignalIPdu25_faea9d09_Rx               13u
#define ComConf_ComIPdu_PropulsionCAN_33157db4_Rx                     14u
#define ComConf_ComIPdu_SrsPropSignalIPdu02_4fa2d123_Rx               15u
#define ComConf_ComIPdu_VDDMPropSignalIPDU05_e9cd0dca_Rx              16u
#define ComConf_ComIPdu_VDDMPropSignalIPDU06_70c45c70_Rx              17u
#define ComConf_ComIPdu_VDDMPropSignalIPDU08_977c7177_Rx              18u
#define ComConf_ComIPdu_VDDMPropSignalIPDU11_f7bbf892_Rx              19u
#define ComConf_ComIPdu_VDDMPropSignalIPDU16_69df6d31_Rx              20u
#define ComConf_ComIPdu_VDDMPropSignalIPDU17_1ed85da7_Rx              21u
#define ComConf_ComIPdu_VDDMPropSignalIPDU18_8e674036_Rx              22u
#define ComConf_ComIPdu_VDDMPropSignalIPDU19_f96070a0_Rx              23u
#define ComConf_ComIPdu_VDDMPropdTCSignalIPdu38_808bfd3f_Rx           24u
#define ComConf_ComIPdu_VddmBcmPropdTCSignalIPDU01_886bd56f_Rx        25u
#define ComConf_ComIPdu_VddmPropSignalIPdu26_8fec2bf2_Rx              26u
/**\} */

/**
 * \defgroup ComHandleIdsComTxPdu Handle IDs of handle space ComTxPdu.
 * \brief Tx Pdus
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComIPdu_IemEduPropSignalIPdu01_3346005e_Tx            0u
#define ComConf_ComIPdu_IemEduPropSignalIPdu02_aa4f51e4_Tx            1u
#define ComConf_ComIPdu_IemPropSignalIPdu01_21049770_Tx               2u
#define ComConf_ComIPdu_IemPropSignalIPdu02_b80dc6ca_Tx               3u
#define ComConf_ComIPdu_IemPropSignalIPdu03_cf0af65c_Tx               4u
#define ComConf_ComIPdu_IemPropSignalIPdu04_516e63ff_Tx               5u
#define ComConf_ComIPdu_IemPropSignalIPdu06_bf6002d3_Tx               6u
#define ComConf_ComIPdu_IemPropSignalIPdu07_c8673245_Tx               7u
#define ComConf_ComIPdu_IemPropSignalIPdu08_58d82fd4_Tx               8u
#define ComConf_ComIPdu_IemPropSignalIPdu09_2fdf1f42_Tx               9u
#define ComConf_ComIPdu_IemPropSignalIPdu12_a116f78b_Tx               10u
#define ComConf_ComIPdu_IemPropSignalIPdu14_487552be_Tx               11u
#define ComConf_ComIPdu_IemPropSignalIPdu16_a67b3392_Tx               12u
#define ComConf_ComIPdu_PropulsionCAN_EiraIpdu_Tx                     13u
/**\} */

/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
#define COM_START_SEC_CODE
#include "MemMap.h"    /* PRQA S 5087 1 */ /*MD_MSR_MemMap */
/**********************************************************************************************************************
  Com_RxIndication
**********************************************************************************************************************/
/** \brief        This function is called by the lower layer after an I-PDU has been received.
    \param[in]    RxPduId      ID of AUTOSAR COM I-PDU that has been received. Identifies the data that has been received.
                               Range: 0..(maximum number of I-PDU IDs received by AUTOSAR COM) - 1
    \param[in]    PduInfoPtr   Payload information of the received I-PDU (pointer to data and data length).
    \return       none
    \context      The function can be called on interrupt and task level. It is not allowed to use CAT1 interrupts with Rte (BSW00326]). Due to this, the interrupt context shall be configured to a CAT2 interrupt if an Rte is used.
    \synchronous  TRUE
    \reentrant    TRUE, for different Handles
    \trace        SPEC-2737026
    \note         The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_RxIndication(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);

/**********************************************************************************************************************
  Com_TxConfirmation
**********************************************************************************************************************/
/** \brief        This function is called by the lower layer after the PDU has been transmitted on the network.
                  A confirmation that is received for an I-PDU that does not require a confirmation is silently discarded.
    \param[in]    TxPduId   ID of AUTOSAR COM I-PDU that has been transmitted.
                            Range: 0..(maximum number of I-PDU IDs transmitted by AUTOSAR COM) - 1
    \return       none
    \context      The function can be called on interrupt and task level. It is not allowed to use CAT1 interrupts with Rte (BSW00326]). Due to this, the interrupt context shall be configured to a CAT2 interrupt if an Rte is used.
    \synchronous  TRUE
    \reentrant    TRUE, for different Handles
    \trace        SPEC-2737028
    \note         The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_TxConfirmation(PduIdType TxPduId);

/**********************************************************************************************************************
  Com_TriggerTransmit
**********************************************************************************************************************/
/** \brief          This function is called by the lower layer when an AUTOSAR COM I-PDU shall be transmitted.
                    Within this function, AUTOSAR COM shall copy the contents of its I-PDU transmit buffer
                    to the L-PDU buffer given by SduPtr.
                    Use case:
                    This function is used e.g. by the LIN Master for sending out a LIN frame. In this case, the trigger transmit
                    can be initiated by the Master schedule table itself or a received LIN header.
                    This function is also used by the FlexRay Interface for requesting PDUs to be sent in static part
                    (synchronous to the FlexRay global time). Once the I-PDU has been successfully sent by the lower layer
                    (PDU-Router), the lower layer must call Com_TxConfirmation().
    \param[in]      TxPduId       ID of AUTOSAR COM I-PDU that is requested to be transmitted by AUTOSAR COM.
    \param[in,out]  PduInfoPtr    Contains a pointer to a buffer (SduDataPtr) where the SDU
                                  data shall be copied to, and the available buffer size in SduLengh.
                                  On return, the service will indicate the length of the copied SDU
                                  data in SduLength.
    \return         E_OK          SDU has been copied and SduLength indicates the number of copied bytes.
    \return         E_NOT_OK      No data has been copied, because
                                  Com is not initialized
                                  or TxPduId is not valid
                                  or PduInfoPtr is NULL_PTR
                                  or SduDataPtr is NULL_PTR
                                  or SduLength is too small.
    \context        TASK|ISR2
    \synchronous    TRUE
    \reentrant      TRUE, for different Handles
    \trace          SPEC-2737022, SPEC-2737023, SPEC-2737024
    \note           The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(Std_ReturnType, COM_CODE) Com_TriggerTransmit(PduIdType TxPduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_VAR) PduInfoPtr);


#define COM_STOP_SEC_CODE
#include "MemMap.h"    /* PRQA S 5087 1 */ /* MD_MSR_MemMap */

#endif  /* COM_CBK_H */
/**********************************************************************************************************************
  END OF FILE: Com_Cbk.h
**********************************************************************************************************************/

