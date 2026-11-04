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
 *            Module: Dcm
 *           Program: MSR_Vector_SLP4
 *          Customer: Aptiv (China) Technology Company Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Aurix 2G/TC397 B-Step
 *    License Scope : The usage is restricted to CBD1900078_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Dcm_Lcfg.c
 *   Generation Time: 2026-10-30 12:46:33
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



#define DCM_LCFG_SOURCE
/* ----------------------------------------------
 ~&&&   Includes
---------------------------------------------- */
                                                                                                                                                     /* PRQA S 0857, 0828 EOF */ /* MD_MSR_1.1_857, MD_MSR_1.1_828 */
#include "Dcm.h"
#include "Rte_Dcm.h"
#include "Det.h"
#include "Dcm_Int.h"
#include "PduR_Dcm.h"
#include "ComM_Dcm.h"
/* ----------------------------------------------
 ~&&&   Defines
---------------------------------------------- */
#if (DCM_DIDMGR_NVM_READ_ENABLED == STD_ON) || \
    (DCM_DIDMGR_NVM_WRITE_ENABLED == STD_ON)
# if defined(NVM_VENDOR_ID)
#  if (NVM_VENDOR_ID == 30u)
/* Only Vector NvM supports this feature up to now */
#   define Dcm_GetDcmNvMBlockId(blockId)                             (uint16)(NvM_GetDcmBlockId(blockId))                                            /* PRQA S 3453 */ /* QAC 7.0:  A function could probably be used instead of this function-like macro */ /* Macro is more efficient! */
#  endif
# endif

/* Default NvM handle offset */
# if !defined(Dcm_GetDcmNvMBlockId)
#  define Dcm_GetDcmNvMBlockId(blockId)                              (uint16)(blockId)                                                               /* PRQA S 3453 */ /* QAC 7.0:  A function could probably be used instead of this function-like macro */ /* Macro is more efficient! */
# endif
#endif
/* ----------------------------------------------
 ~&&&   Call-back function declarations
---------------------------------------------- */
#define DCM_START_SEC_CALLOUT_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/***********************************************************************************************************************
 *  Dcm_RidMgr_0206_Start()
***********************************************************************************************************************/
/*! \brief         Wraps RIDs execution interface.
 *  \details       Converts uint8 arrays to other signal types required by the RID execution interface and vice versa.
 *  \param[in]     OpStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier
 *  \param[in,out] DataLength         IN: Concrete length of the dynamic request signal
 *                                    OUT: Concrete length of the dynamic response Signal
 *  \param[out]    ErrorCode          Negative response code
 *  \return        E_OK               The operation is finished
 *  \return        DCM_E_PENDING      The operation is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  Forces a RCR-RP response
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        E_NOT_OK           The operation has failed. A concrete NRC shall be set, otherwise the DCM sends NRC
 *                                    0x22
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0206_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_3065_Start()
***********************************************************************************************************************/
/*! \brief         Wraps RIDs execution interface.
 *  \details       Converts uint8 arrays to other signal types required by the RID execution interface and vice versa.
 *  \param[in]     OpStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier
 *  \param[in,out] DataLength         IN: Concrete length of the dynamic request signal
 *                                    OUT: Concrete length of the dynamic response Signal
 *  \param[out]    ErrorCode          Negative response code
 *  \return        E_OK               The operation is finished
 *  \return        DCM_E_PENDING      The operation is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  Forces a RCR-RP response
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        E_NOT_OK           The operation has failed. A concrete NRC shall be set, otherwise the DCM sends NRC
 *                                    0x22
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_3065_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_3065_RequestResults()
***********************************************************************************************************************/
/*! \brief         Wraps RIDs execution interface.
 *  \details       Converts uint8 arrays to other signal types required by the RID execution interface and vice versa.
 *  \param[in]     OpStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier
 *  \param[in,out] DataLength         IN: Concrete length of the dynamic request signal
 *                                    OUT: Concrete length of the dynamic response Signal
 *  \param[out]    ErrorCode          Negative response code
 *  \return        E_OK               The operation is finished
 *  \return        DCM_E_PENDING      The operation is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  Forces a RCR-RP response
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        E_NOT_OK           The operation has failed. A concrete NRC shall be set, otherwise the DCM sends NRC
 *                                    0x22
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_3065_RequestResults(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_4001_RequestResults()
***********************************************************************************************************************/
/*! \brief         Wraps RIDs execution interface.
 *  \details       Converts uint8 arrays to other signal types required by the RID execution interface and vice versa.
 *  \param[in]     OpStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier
 *  \param[in,out] DataLength         IN: Concrete length of the dynamic request signal
 *                                    OUT: Concrete length of the dynamic response Signal
 *  \param[out]    ErrorCode          Negative response code
 *  \return        E_OK               The operation is finished
 *  \return        DCM_E_PENDING      The operation is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  Forces a RCR-RP response
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        E_NOT_OK           The operation has failed. A concrete NRC shall be set, otherwise the DCM sends NRC
 *                                    0x22
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_4001_RequestResults(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_400D_Start()
***********************************************************************************************************************/
/*! \brief         Wraps RIDs execution interface.
 *  \details       Converts uint8 arrays to other signal types required by the RID execution interface and vice versa.
 *  \param[in]     OpStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier
 *  \param[in,out] DataLength         IN: Concrete length of the dynamic request signal
 *                                    OUT: Concrete length of the dynamic response Signal
 *  \param[out]    ErrorCode          Negative response code
 *  \return        E_OK               The operation is finished
 *  \return        DCM_E_PENDING      The operation is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  Forces a RCR-RP response
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        E_NOT_OK           The operation has failed. A concrete NRC shall be set, otherwise the DCM sends NRC
 *                                    0x22
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_400D_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_400D_RequestResults()
***********************************************************************************************************************/
/*! \brief         Wraps RIDs execution interface.
 *  \details       Converts uint8 arrays to other signal types required by the RID execution interface and vice versa.
 *  \param[in]     OpStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier
 *  \param[in,out] DataLength         IN: Concrete length of the dynamic request signal
 *                                    OUT: Concrete length of the dynamic response Signal
 *  \param[out]    ErrorCode          Negative response code
 *  \return        E_OK               The operation is finished
 *  \return        DCM_E_PENDING      The operation is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  Forces a RCR-RP response
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        E_NOT_OK           The operation has failed. A concrete NRC shall be set, otherwise the DCM sends NRC
 *                                    0x22
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_400D_RequestResults(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_400E_Start()
***********************************************************************************************************************/
/*! \brief         Wraps RIDs execution interface.
 *  \details       Converts uint8 arrays to other signal types required by the RID execution interface and vice versa.
 *  \param[in]     OpStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier
 *  \param[in,out] DataLength         IN: Concrete length of the dynamic request signal
 *                                    OUT: Concrete length of the dynamic response Signal
 *  \param[out]    ErrorCode          Negative response code
 *  \return        E_OK               The operation is finished
 *  \return        DCM_E_PENDING      The operation is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  Forces a RCR-RP response
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        E_NOT_OK           The operation has failed. A concrete NRC shall be set, otherwise the DCM sends NRC
 *                                    0x22
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_400E_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_400E_RequestResults()
***********************************************************************************************************************/
/*! \brief         Wraps RIDs execution interface.
 *  \details       Converts uint8 arrays to other signal types required by the RID execution interface and vice versa.
 *  \param[in]     OpStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier
 *  \param[in,out] DataLength         IN: Concrete length of the dynamic request signal
 *                                    OUT: Concrete length of the dynamic response Signal
 *  \param[out]    ErrorCode          Negative response code
 *  \return        E_OK               The operation is finished
 *  \return        DCM_E_PENDING      The operation is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  Forces a RCR-RP response
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        E_NOT_OK           The operation has failed. A concrete NRC shall be set, otherwise the DCM sends NRC
 *                                    0x22
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_400E_RequestResults(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_400F_Start()
***********************************************************************************************************************/
/*! \brief         Wraps RIDs execution interface.
 *  \details       Converts uint8 arrays to other signal types required by the RID execution interface and vice versa.
 *  \param[in]     OpStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier
 *  \param[in,out] DataLength         IN: Concrete length of the dynamic request signal
 *                                    OUT: Concrete length of the dynamic response Signal
 *  \param[out]    ErrorCode          Negative response code
 *  \return        E_OK               The operation is finished
 *  \return        DCM_E_PENDING      The operation is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  Forces a RCR-RP response
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        E_NOT_OK           The operation has failed. A concrete NRC shall be set, otherwise the DCM sends NRC
 *                                    0x22
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_400F_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_400F_RequestResults()
***********************************************************************************************************************/
/*! \brief         Wraps RIDs execution interface.
 *  \details       Converts uint8 arrays to other signal types required by the RID execution interface and vice versa.
 *  \param[in]     OpStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier
 *  \param[in,out] DataLength         IN: Concrete length of the dynamic request signal
 *                                    OUT: Concrete length of the dynamic response Signal
 *  \param[out]    ErrorCode          Negative response code
 *  \return        E_OK               The operation is finished
 *  \return        DCM_E_PENDING      The operation is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  Forces a RCR-RP response
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        E_NOT_OK           The operation has failed. A concrete NRC shall be set, otherwise the DCM sends NRC
 *                                    0x22
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_400F_RequestResults(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_ServiceNoPostProcessor()
***********************************************************************************************************************/
/*! \brief         Dummy post-processor
 *  \details       This post-processor is called for diagnostic services which do not require any post processing.
 *  \param[in]     status  The post-processing status
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(void, DCM_CALLOUT_CODE) Dcm_ServiceNoPostProcessor(Dcm_ConfirmationStatusType status);
/***********************************************************************************************************************
 *  Dcm_ServiceNoUpdater()
***********************************************************************************************************************/
/*! \brief         Realizes a dummy paged buffer updater.
 *  \details       This function is never called.
 *  \param[in]     opStatus      The operation status
 *  \param[in,out] pDataContext  Pointer to the data context
 *  \param[out]    ErrorCode     Negative response code
 *  \return        DCM_E_NOT_OK  Operation failed. Take the NRC from ErrorCode. Do not call again
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_ServiceNoUpdater(Dcm_OpStatusType opStatus, Dcm_DiagDataContextPtrType pDataContext, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_ServiceNoCancel()
***********************************************************************************************************************/
/*! \brief         Dummy service cancellation.
 *  \details       -
 *  \param[in,out] pDataContext  Pointer to the data context
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(void, DCM_CALLOUT_CODE) Dcm_ServiceNoCancel(Dcm_DiagDataContextPtrType pDataContext);
#define DCM_STOP_SEC_CALLOUT_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/* ----------------------------------------------
 ~&&&   Uninitialized RAM 8-Bit
---------------------------------------------- */
#define DCM_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/*! DCM protocol descriptor */
DCM_LOCAL VAR(Dcm_MsgItemType, DCM_VAR_NOINIT) Dcm_CfgNetBuffer_000[4095];
#define DCM_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/* ----------------------------------------------
 ~&&&   ROM 8-Bit
---------------------------------------------- */
#define DCM_START_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/*! TxPduId to DCM connection map */
CONST(Dcm_NetConnRefMemType, DCM_CONST) Dcm_CfgNetTxPduInfo[5]=
{
    4u
  , 1u
  , 2u
  , 3u
  , 0u
};
/*! Map of DCM relevant network handles */
CONST(Dcm_CfgNetNetIdRefMemType, DCM_CONST) Dcm_CfgNetConnComMChannelMap[1]=
{
    0u
};
/*! Look up table of DCM service identifiers */
CONST(uint8, DCM_CONST) Dcm_CfgDiagSvcIdLookUpTable[10]=
{
   9u
  ,0x10u
  ,0x11u
  ,0x14u
  ,0x19u
  ,0x22u
  ,0x27u
  ,0x2Eu
  ,0x31u
  ,0x3Eu
};
/*! Service 0x10 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc10SubFuncLookUpTable[4]=
{
   3u
  ,0x01u
  ,0x02u
  ,0x03u
};
/*! Service 0x11 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc11SubFuncLookUpTable[2]=
{
   1u
  ,0x01u
};
/*! Service 0x19 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc19SubFuncLookUpTable[6]=
{
   5u
  ,0x02u
  ,0x03u
  ,0x04u
  ,0x06u
  ,0x0Au
};
/*! Service 0x27 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc27SubFuncLookUpTable[5]=
{
   4u
  ,0x05u
  ,0x06u
  ,0x11u
  ,0x12u
};
/*! Service 0x3E look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc3ESubFuncLookUpTable[2]=
{
   1u
  ,0x00u
};
#define DCM_STOP_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/* ----------------------------------------------
 ~&&&   ROM 16-Bit
---------------------------------------------- */
#define DCM_START_SEC_CONST_16
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/*! DID look up table  */
CONST(uint16, DCM_CONST) Dcm_CfgDidMgrDidLookUpTable[97]=
{
   96u
  ,0x40DFu
  ,0xD003u
  ,0xD005u
  ,0xD03Au
  ,0xD09Au
  ,0xD0B5u
  ,0xD12Fu
  ,0xD134u
  ,0xD211u
  ,0xDD00u
  ,0xDD01u
  ,0xDD02u
  ,0xDD0Au
  ,0xDD0Cu
  ,0xE103u
  ,0xE300u
  ,0xE301u
  ,0xE303u
  ,0xE304u
  ,0xE305u
  ,0xE306u
  ,0xE307u
  ,0xE308u
  ,0xE309u
  ,0xE310u
  ,0xE311u
  ,0xE312u
  ,0xE313u
  ,0xE314u
  ,0xE315u
  ,0xE319u
  ,0xE320u
  ,0xE324u
  ,0xE331u
  ,0xE333u
  ,0xE335u
  ,0xE336u
  ,0xE337u
  ,0xE338u
  ,0xE339u
  ,0xE341u
  ,0xE346u
  ,0xE347u
  ,0xE348u
  ,0xE349u
  ,0xE350u
  ,0xE353u
  ,0xE357u
  ,0xE358u
  ,0xE363u
  ,0xE364u
  ,0xED20u
  ,0xEDA0u
  ,0xEE9Au
  ,0xEE9Cu
  ,0xEE9Du
  ,0xEE9Eu
  ,0xEE9Fu
  ,0xEEB2u
  ,0xEEB5u
  ,0xEEB6u
  ,0xEEB7u
  ,0xEEB8u
  ,0xEEBDu
  ,0xEEBEu
  ,0xEEBFu
  ,0xEEC3u
  ,0xEEC4u
  ,0xEEC5u
  ,0xEED1u
  ,0xEED2u
  ,0xEED3u
  ,0xEED4u
  ,0xEED5u
  ,0xEEFDu
  ,0xEF0Au
  ,0xEF1Bu
  ,0xEF1Cu
  ,0xEF1Du
  ,0xF120u
  ,0xF121u
  ,0xF125u
  ,0xF126u
  ,0xF12Au
  ,0xF12Bu
  ,0xF12Eu
  ,0xF12Fu
  ,0xF186u
  ,0xF18Cu
  ,0xF1A0u
  ,0xF1A1u
  ,0xF1A5u
  ,0xF1AAu
  ,0xF1ABu
  ,0xF1AEu
  ,0xF1AFu
};
/*! RID look up table  */
CONST(uint16, DCM_CONST) Dcm_CfgRidMgrRidLookUpTable[7]=
{
   6u
  ,0x0206u
  ,0x3065u
  ,0x4001u
  ,0x400Du
  ,0x400Eu
  ,0x400Fu
};
#define DCM_STOP_SEC_CONST_16
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/* ----------------------------------------------
 ~&&&   ROM of unspecified size
---------------------------------------------- */
#define DCM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/*! DCM buffer descriptor */
CONST(Dcm_CfgNetBufferInfoType, DCM_CONST) Dcm_CfgNetBufferInfo[1]=
{
   { Dcm_CfgNetBuffer_000,4095u}
};
/*! RxPduId map */
CONST(Dcm_CfgNetRxPduInfoType, DCM_CONST) Dcm_CfgNetRxPduInfo[7]=
{
   { TRUE, 4u}
  ,{ FALSE, 4u}
  ,{ TRUE, 1u}
  ,{ FALSE, 1u}
  ,{ FALSE, 2u}
  ,{ FALSE, 3u}
  ,{ FALSE, 0u}
};
/*! DCM connection descriptor */
CONST(Dcm_CfgNetConnectionInfoType, DCM_CONST) Dcm_CfgNetConnectionInfo[5]=
{
   { 0x0080u,PduRConf_PduRSrcPdu_PduRSrcPdu_1f99744c, 0u,0u}
  ,{ 0x0080u,PduRConf_PduRSrcPdu_PduRSrcPdu_75b2e816, 0u,0u}
  ,{ 0x0080u,PduRConf_PduRSrcPdu_PduRSrcPdu_e109a8bf, 0u,0u}
  ,{ 0x0080u,PduRConf_PduRSrcPdu_PduRSrcPdu_c6a1321b, 0u,0u}
  ,{ 0x0080u,PduRConf_PduRSrcPdu_PduRSrcPdu_a6ed57d5, 0u,0u}
};
/*! DCM protocol descriptor */
CONST(Dcm_CfgNetProtocolInfoType, DCM_CONST) Dcm_CfgNetProtocolInfo[1]=
{
   { {    0u,   0u},4095u, 3u,TRUE,0u}
};
/*! Map of all relevant for DCM network handles */
CONST(NetworkHandleType, DCM_CONST) Dcm_CfgNetAllComMChannelMap[1]=
{
   ComMConf_ComMChannel_PropulsionCAN_IEM_19020f5a
};
/*! Look up table of DCM relevant network handles */
CONST(NetworkHandleType, DCM_CONST) Dcm_CfgNetNetworkHandleLookUpTable[2]=
{
   1u
  ,ComMConf_ComMChannel_PropulsionCAN_IEM_19020f5a
};
/*! Diagnostic service execution conditions */
CONST(Dcm_CfgStatePreconditionInfoType, DCM_CONST) Dcm_CfgStatePreconditions[6]=
{
   { { 0x07u,0x07u}}
  ,{ { 0x05u,0x07u}}
  ,{ { 0x04u,0x07u}}
  ,{ { 0x04u,0x04u}}
  ,{ { 0x04u,0x02u}}
  ,{ { 0x01u,0x07u}}
};
/*! Session state properties */
CONST(Dcm_CfgStateSessionInfoType, DCM_CONST) Dcm_CfgStateSessionInfo[3]=
{
   { {    5u, 500u},RTE_MODE_DcmDiagnosticSessionControl_DEFAULT_SESSION,0x01u}
  ,{ {    5u, 500u},RTE_MODE_DcmDiagnosticSessionControl_PROGRAMMING_SESSION,0x02u}
  ,{ {    5u, 500u},RTE_MODE_DcmDiagnosticSessionControl_EXTENDED_SESSION,0x03u}
};
/*! Security Access state properties */
CONST(Dcm_CfgStateSecurityInfoType, DCM_CONST) Dcm_CfgStateSecurityInfo[2]=
{
   { 1000u, 3u,0x03u} /* SecLvl: CommonUnlock_Level_3 */
  ,{ 1000u, 3u,0x09u} /* SecLvl: ImmoUnlocked_Level_4 */
};
/*! DID properties */
CONST(Dcm_CfgDidMgrDidInfoType, DCM_CONST) Dcm_CfgDidMgrDidInfo[96]=
{
   {   32u,  32u,  32u,   0u,0x03u} /* DID: 0x40DF */
  ,{    2u,   2u,   2u,   2u,0x01u} /* DID: 0xD003 */
  ,{  250u, 250u, 250u,   3u,0x01u} /* DID: 0xD005 */
  ,{   32u,  32u,  32u,   4u,0x01u} /* DID: 0xD03A */
  ,{    1u,   1u,   1u,   5u,0x03u} /* DID: 0xD09A */
  ,{    3u,   3u,   3u,   7u,0x01u} /* DID: 0xD0B5 */
  ,{    5u,   5u,   5u,   8u,0x03u} /* DID: 0xD12F */
  ,{    1u,   1u,   1u,  10u,0x01u} /* DID: 0xD134 */
  ,{   50u,  50u,  50u,  11u,0x01u} /* DID: 0xD211 */
  ,{    4u,   4u,   4u,  12u,0x01u} /* DID: 0xDD00 */
  ,{    3u,   3u,   3u,  13u,0x01u} /* DID: 0xDD01 */
  ,{    1u,   1u,   1u,  14u,0x01u} /* DID: 0xDD02 */
  ,{    1u,   1u,   1u,  15u,0x01u} /* DID: 0xDD0A */
  ,{    1u,   1u,   1u,  16u,0x01u} /* DID: 0xDD0C */
  ,{   31u,  31u,  31u,  17u,0x01u} /* DID: 0xE103 */
  ,{    2u,   2u,   2u,  18u,0x01u} /* DID: 0xE300 */
  ,{    2u,   2u,   2u,  19u,0x01u} /* DID: 0xE301 */
  ,{    2u,   2u,   2u,  20u,0x01u} /* DID: 0xE303 */
  ,{    2u,   2u,   2u,  21u,0x01u} /* DID: 0xE304 */
  ,{    1u,   1u,   1u,  22u,0x01u} /* DID: 0xE305 */
  ,{    1u,   1u,   1u,  23u,0x01u} /* DID: 0xE306 */
  ,{    1u,   1u,   1u,  24u,0x01u} /* DID: 0xE307 */
  ,{    2u,   2u,   2u,  25u,0x01u} /* DID: 0xE308 */
  ,{    1u,   1u,   1u,  26u,0x01u} /* DID: 0xE309 */
  ,{    1u,   1u,   1u,  27u,0x01u} /* DID: 0xE310 */
  ,{    1u,   1u,   1u,  28u,0x01u} /* DID: 0xE311 */
  ,{    2u,   2u,   2u,  29u,0x01u} /* DID: 0xE312 */
  ,{    1u,   1u,   1u,  30u,0x01u} /* DID: 0xE313 */
  ,{    2u,   2u,   2u,  31u,0x01u} /* DID: 0xE314 */
  ,{    2u,   2u,   2u,  32u,0x01u} /* DID: 0xE315 */
  ,{    1u,   1u,   1u,  33u,0x01u} /* DID: 0xE319 */
  ,{    1u,   1u,   1u,  34u,0x01u} /* DID: 0xE320 */
  ,{    1u,   1u,   1u,  35u,0x01u} /* DID: 0xE324 */
  ,{   24u,  24u,  24u,  36u,0x01u} /* DID: 0xE331 */
  ,{    8u,   8u,   8u,  37u,0x03u} /* DID: 0xE333 */
  ,{    2u,   2u,   2u,  39u,0x01u} /* DID: 0xE335 */
  ,{    2u,   2u,   2u,  40u,0x01u} /* DID: 0xE336 */
  ,{    2u,   2u,   2u,  41u,0x01u} /* DID: 0xE337 */
  ,{    2u,   2u,   2u,  42u,0x01u} /* DID: 0xE338 */
  ,{    2u,   2u,   2u,  43u,0x01u} /* DID: 0xE339 */
  ,{    2u,   2u,   2u,  44u,0x01u} /* DID: 0xE341 */
  ,{    1u,   1u,   1u,  45u,0x01u} /* DID: 0xE346 */
  ,{    1u,   1u,   1u,  46u,0x01u} /* DID: 0xE347 */
  ,{    1u,   1u,   1u,  47u,0x01u} /* DID: 0xE348 */
  ,{    1u,   1u,   1u,  48u,0x01u} /* DID: 0xE349 */
  ,{    1u,   1u,   1u,  49u,0x01u} /* DID: 0xE350 */
  ,{    2u,   2u,   2u,  50u,0x01u} /* DID: 0xE353 */
  ,{    1u,   1u,   1u,  51u,0x01u} /* DID: 0xE357 */
  ,{    2u,   2u,   2u,  52u,0x01u} /* DID: 0xE358 */
  ,{    1u,   1u,   1u,  53u,0x01u} /* DID: 0xE363 */
  ,{    1u,   1u,   1u,  54u,0x01u} /* DID: 0xE364 */
  ,{   47u,  47u,  47u,  55u,0x01u} /* DID: 0xED20 */
  ,{   43u,  43u,  43u,  56u,0x01u} /* DID: 0xEDA0 */
  ,{    1u,   1u,   1u,  57u,0x01u} /* DID: 0xEE9A */
  ,{    2u,   2u,   2u,  58u,0x01u} /* DID: 0xEE9C */
  ,{    2u,   2u,   2u,  59u,0x01u} /* DID: 0xEE9D */
  ,{    2u,   2u,   2u,  60u,0x01u} /* DID: 0xEE9E */
  ,{    1u,   1u,   1u,  61u,0x01u} /* DID: 0xEE9F */
  ,{    2u,   2u,   2u,  62u,0x01u} /* DID: 0xEEB2 */
  ,{    2u,   2u,   2u,  63u,0x01u} /* DID: 0xEEB5 */
  ,{    2u,   2u,   2u,  64u,0x01u} /* DID: 0xEEB6 */
  ,{    2u,   2u,   2u,  65u,0x01u} /* DID: 0xEEB7 */
  ,{    2u,   2u,   2u,  66u,0x01u} /* DID: 0xEEB8 */
  ,{    4u,   4u,   4u,  67u,0x03u} /* DID: 0xEEBD */
  ,{    1u,   1u,   1u,  69u,0x01u} /* DID: 0xEEBE */
  ,{    1u,   1u,   1u,  70u,0x01u} /* DID: 0xEEBF */
  ,{    1u,   1u,   1u,  71u,0x01u} /* DID: 0xEEC3 */
  ,{    1u,   1u,   1u,  72u,0x01u} /* DID: 0xEEC4 */
  ,{    1u,   1u,   1u,  73u,0x01u} /* DID: 0xEEC5 */
  ,{    4u,   4u,   4u,  74u,0x01u} /* DID: 0xEED1 */
  ,{    2u,   2u,   2u,  75u,0x01u} /* DID: 0xEED2 */
  ,{    2u,   2u,   2u,  76u,0x01u} /* DID: 0xEED3 */
  ,{    1u,   1u,   1u,  77u,0x01u} /* DID: 0xEED4 */
  ,{    1u,   1u,   1u,  78u,0x01u} /* DID: 0xEED5 */
  ,{   24u,  24u,  24u,  79u,0x01u} /* DID: 0xEEFD */
  ,{    1u,   1u,   1u,  80u,0x01u} /* DID: 0xEF0A */
  ,{    2u,   2u,   2u,  81u,0x03u} /* DID: 0xEF1B */
  ,{   40u,  40u,  40u,  83u,0x03u} /* DID: 0xEF1C */
  ,{    2u,   2u,   2u,  85u,0x03u} /* DID: 0xEF1D */
  ,{    7u,   7u,   7u,  87u,0x01u} /* DID: 0xF120 */
  ,{    7u,   7u,   7u,  88u,0x01u} /* DID: 0xF121 */
  ,{    7u,   7u,   7u,  89u,0x01u} /* DID: 0xF125 */
  ,{   51u,  51u,  51u,  90u,0x01u} /* DID: 0xF126 */
  ,{    7u,   7u,   7u,  91u,0x01u} /* DID: 0xF12A */
  ,{    7u,   7u,   7u,  92u,0x01u} /* DID: 0xF12B */
  ,{    8u,   8u,   8u,  93u,0x01u} /* DID: 0xF12E */
  ,{   71u,  71u,  71u,  94u,0x01u} /* DID: 0xF12F */
  ,{    1u,   1u,   1u,  95u,0x01u} /* DID: 0xF186 */
  ,{    4u,   4u,   4u,  96u,0x01u} /* DID: 0xF18C */
  ,{    8u,   8u,   8u,  97u,0x01u} /* DID: 0xF1A0 */
  ,{    8u,   8u,   8u,  98u,0x01u} /* DID: 0xF1A1 */
  ,{    8u,   8u,   8u,  99u,0x01u} /* DID: 0xF1A5 */
  ,{    8u,   8u,   8u, 100u,0x01u} /* DID: 0xF1AA */
  ,{    8u,   8u,   8u, 101u,0x01u} /* DID: 0xF1AB */
  ,{    9u,   9u,   9u, 102u,0x01u} /* DID: 0xF1AE */
  ,{   33u,  33u,  33u, 103u,0x01u} /* DID: 0xF1AF */
};
/*! DID operation properties */
CONST(Dcm_CfgDidMgrDidOpInfoType, DCM_CONST) Dcm_CfgDidMgrDidOpInfo[104]=
{
   {    3u,   0u,0x05u} /* DID: 0x40DF */
  ,{    3u,   2u,0x01u} /* DID: 0x40DF */
  ,{    1u,   3u,0x05u} /* DID: 0xD003 */
  ,{    1u,   5u,0x05u} /* DID: 0xD005 */
  ,{    1u,   7u,0x05u} /* DID: 0xD03A */
  ,{    1u,   9u,0x05u} /* DID: 0xD09A */
  ,{    4u,  11u,0x01u} /* DID: 0xD09A */
  ,{    1u,  12u,0x05u} /* DID: 0xD0B5 */
  ,{    3u,  14u,0x05u} /* DID: 0xD12F */
  ,{    3u,  16u,0x01u} /* DID: 0xD12F */
  ,{    1u,  17u,0x05u} /* DID: 0xD134 */
  ,{    1u,  19u,0x05u} /* DID: 0xD211 */
  ,{    1u,  21u,0x05u} /* DID: 0xDD00 */
  ,{    1u,  23u,0x05u} /* DID: 0xDD01 */
  ,{    1u,  25u,0x05u} /* DID: 0xDD02 */
  ,{    1u,  27u,0x05u} /* DID: 0xDD0A */
  ,{    1u,  29u,0x05u} /* DID: 0xDD0C */
  ,{    1u,  31u,0x05u} /* DID: 0xE103 */
  ,{    1u,  33u,0x05u} /* DID: 0xE300 */
  ,{    1u,  35u,0x05u} /* DID: 0xE301 */
  ,{    1u,  37u,0x05u} /* DID: 0xE303 */
  ,{    1u,  39u,0x05u} /* DID: 0xE304 */
  ,{    1u,  41u,0x05u} /* DID: 0xE305 */
  ,{    1u,  43u,0x05u} /* DID: 0xE306 */
  ,{    1u,  45u,0x05u} /* DID: 0xE307 */
  ,{    1u,  47u,0x05u} /* DID: 0xE308 */
  ,{    1u,  49u,0x05u} /* DID: 0xE309 */
  ,{    1u,  51u,0x05u} /* DID: 0xE310 */
  ,{    1u,  53u,0x05u} /* DID: 0xE311 */
  ,{    1u,  55u,0x05u} /* DID: 0xE312 */
  ,{    1u,  57u,0x05u} /* DID: 0xE313 */
  ,{    1u,  59u,0x05u} /* DID: 0xE314 */
  ,{    1u,  61u,0x05u} /* DID: 0xE315 */
  ,{    1u,  63u,0x05u} /* DID: 0xE319 */
  ,{    1u,  65u,0x05u} /* DID: 0xE320 */
  ,{    1u,  67u,0x05u} /* DID: 0xE324 */
  ,{    1u,  69u,0x05u} /* DID: 0xE331 */
  ,{    0u,  71u,0x05u} /* DID: 0xE333 */
  ,{    2u,  73u,0x01u} /* DID: 0xE333 */
  ,{    1u,  74u,0x05u} /* DID: 0xE335 */
  ,{    1u,  76u,0x05u} /* DID: 0xE336 */
  ,{    1u,  78u,0x05u} /* DID: 0xE337 */
  ,{    1u,  80u,0x05u} /* DID: 0xE338 */
  ,{    1u,  82u,0x05u} /* DID: 0xE339 */
  ,{    1u,  84u,0x05u} /* DID: 0xE341 */
  ,{    1u,  86u,0x05u} /* DID: 0xE346 */
  ,{    1u,  88u,0x05u} /* DID: 0xE347 */
  ,{    1u,  90u,0x05u} /* DID: 0xE348 */
  ,{    1u,  92u,0x05u} /* DID: 0xE349 */
  ,{    1u,  94u,0x05u} /* DID: 0xE350 */
  ,{    1u,  96u,0x05u} /* DID: 0xE353 */
  ,{    1u,  98u,0x05u} /* DID: 0xE357 */
  ,{    1u, 100u,0x05u} /* DID: 0xE358 */
  ,{    1u, 102u,0x05u} /* DID: 0xE363 */
  ,{    1u, 104u,0x05u} /* DID: 0xE364 */
  ,{    1u, 106u,0x05u} /* DID: 0xED20 */
  ,{    1u, 108u,0x05u} /* DID: 0xEDA0 */
  ,{    1u, 110u,0x05u} /* DID: 0xEE9A */
  ,{    1u, 112u,0x05u} /* DID: 0xEE9C */
  ,{    1u, 114u,0x05u} /* DID: 0xEE9D */
  ,{    1u, 116u,0x05u} /* DID: 0xEE9E */
  ,{    1u, 118u,0x05u} /* DID: 0xEE9F */
  ,{    1u, 120u,0x05u} /* DID: 0xEEB2 */
  ,{    1u, 122u,0x05u} /* DID: 0xEEB5 */
  ,{    1u, 124u,0x05u} /* DID: 0xEEB6 */
  ,{    1u, 126u,0x05u} /* DID: 0xEEB7 */
  ,{    1u, 128u,0x05u} /* DID: 0xEEB8 */
  ,{    1u, 130u,0x05u} /* DID: 0xEEBD */
  ,{    4u, 132u,0x01u} /* DID: 0xEEBD */
  ,{    1u, 133u,0x05u} /* DID: 0xEEBE */
  ,{    1u, 135u,0x05u} /* DID: 0xEEBF */
  ,{    1u, 137u,0x05u} /* DID: 0xEEC3 */
  ,{    1u, 139u,0x05u} /* DID: 0xEEC4 */
  ,{    1u, 141u,0x05u} /* DID: 0xEEC5 */
  ,{    0u, 143u,0x05u} /* DID: 0xEED1 */
  ,{    0u, 145u,0x05u} /* DID: 0xEED2 */
  ,{    0u, 147u,0x05u} /* DID: 0xEED3 */
  ,{    0u, 149u,0x05u} /* DID: 0xEED4 */
  ,{    0u, 151u,0x05u} /* DID: 0xEED5 */
  ,{    1u, 153u,0x05u} /* DID: 0xEEFD */
  ,{    0u, 155u,0x05u} /* DID: 0xEF0A */
  ,{    0u, 157u,0x05u} /* DID: 0xEF1B */
  ,{    4u, 159u,0x01u} /* DID: 0xEF1B */
  ,{    0u, 160u,0x05u} /* DID: 0xEF1C */
  ,{    4u, 162u,0x01u} /* DID: 0xEF1C */
  ,{    0u, 163u,0x05u} /* DID: 0xEF1D */
  ,{    4u, 165u,0x01u} /* DID: 0xEF1D */
  ,{    1u, 166u,0x05u} /* DID: 0xF120 */
  ,{    1u, 168u,0x05u} /* DID: 0xF121 */
  ,{    1u, 170u,0x05u} /* DID: 0xF125 */
  ,{    1u, 172u,0x05u} /* DID: 0xF126 */
  ,{    1u, 174u,0x05u} /* DID: 0xF12A */
  ,{    1u, 176u,0x05u} /* DID: 0xF12B */
  ,{    1u, 178u,0x05u} /* DID: 0xF12E */
  ,{    1u, 180u,0x05u} /* DID: 0xF12F */
  ,{    1u, 182u,0x05u} /* DID: 0xF186 */
  ,{    1u, 184u,0x05u} /* DID: 0xF18C */
  ,{    1u, 186u,0x05u} /* DID: 0xF1A0 */
  ,{    1u, 188u,0x05u} /* DID: 0xF1A1 */
  ,{    1u, 190u,0x05u} /* DID: 0xF1A5 */
  ,{    1u, 192u,0x05u} /* DID: 0xF1AA */
  ,{    1u, 194u,0x05u} /* DID: 0xF1AB */
  ,{    1u, 196u,0x05u} /* DID: 0xF1AE */
  ,{    1u, 198u,0x05u} /* DID: 0xF1AF */
};
/*! DID operation classes */
CONST(Dcm_CfgDidMgrDidOpClassInfoType, DCM_CONST) Dcm_CfgDidMgrDidOpClassInfo[201]=
{
   {  0u}
  ,{  1u}
  ,{  2u}
  ,{  3u}
  ,{  4u}
  ,{  5u}
  ,{ 90u}
  ,{ 175u}
  ,{ 176u}
  ,{ 177u}
  ,{ 178u}
  ,{ 179u}
  ,{ 180u}
  ,{ 181u}
  ,{ 182u}
  ,{ 183u}
  ,{ 184u}
  ,{ 185u}
  ,{ 186u}
  ,{ 187u}
  ,{ 207u}
  ,{ 227u}
  ,{ 228u}
  ,{ 229u}
  ,{ 230u}
  ,{ 231u}
  ,{ 232u}
  ,{ 233u}
  ,{ 234u}
  ,{ 235u}
  ,{ 236u}
  ,{ 237u}
  ,{ 258u}
  ,{ 279u}
  ,{ 280u}
  ,{ 281u}
  ,{ 282u}
  ,{ 283u}
  ,{ 284u}
  ,{ 285u}
  ,{ 286u}
  ,{ 287u}
  ,{ 288u}
  ,{ 289u}
  ,{ 290u}
  ,{ 291u}
  ,{ 292u}
  ,{ 293u}
  ,{ 294u}
  ,{ 295u}
  ,{ 296u}
  ,{ 297u}
  ,{ 298u}
  ,{ 299u}
  ,{ 300u}
  ,{ 301u}
  ,{ 302u}
  ,{ 303u}
  ,{ 304u}
  ,{ 305u}
  ,{ 306u}
  ,{ 307u}
  ,{ 308u}
  ,{ 309u}
  ,{ 310u}
  ,{ 311u}
  ,{ 312u}
  ,{ 313u}
  ,{ 314u}
  ,{ 315u}
  ,{ 318u}
  ,{ 321u}
  ,{ 329u}
  ,{ 337u}
  ,{ 345u}
  ,{ 346u}
  ,{ 347u}
  ,{ 348u}
  ,{ 349u}
  ,{ 350u}
  ,{ 351u}
  ,{ 352u}
  ,{ 353u}
  ,{ 354u}
  ,{ 355u}
  ,{ 356u}
  ,{ 357u}
  ,{ 358u}
  ,{ 359u}
  ,{ 360u}
  ,{ 361u}
  ,{ 362u}
  ,{ 363u}
  ,{ 364u}
  ,{ 365u}
  ,{ 366u}
  ,{ 367u}
  ,{ 368u}
  ,{ 369u}
  ,{ 370u}
  ,{ 371u}
  ,{ 372u}
  ,{ 373u}
  ,{ 374u}
  ,{ 375u}
  ,{ 376u}
  ,{ 377u}
  ,{ 388u}
  ,{ 399u}
  ,{ 410u}
  ,{ 421u}
  ,{ 422u}
  ,{ 423u}
  ,{ 424u}
  ,{ 425u}
  ,{ 426u}
  ,{ 427u}
  ,{ 428u}
  ,{ 429u}
  ,{ 430u}
  ,{ 431u}
  ,{ 432u}
  ,{ 433u}
  ,{ 434u}
  ,{ 435u}
  ,{ 436u}
  ,{ 437u}
  ,{ 438u}
  ,{ 439u}
  ,{ 440u}
  ,{ 441u}
  ,{ 442u}
  ,{ 443u}
  ,{ 444u}
  ,{ 445u}
  ,{ 446u}
  ,{ 447u}
  ,{ 448u}
  ,{ 449u}
  ,{ 450u}
  ,{ 451u}
  ,{ 452u}
  ,{ 453u}
  ,{ 454u}
  ,{ 458u}
  ,{ 462u}
  ,{ 463u}
  ,{ 464u}
  ,{ 465u}
  ,{ 466u}
  ,{ 467u}
  ,{ 468u}
  ,{ 469u}
  ,{ 470u}
  ,{ 471u}
  ,{ 472u}
  ,{ 473u}
  ,{ 474u}
  ,{ 475u}
  ,{ 476u}
  ,{ 477u}
  ,{ 478u}
  ,{ 479u}
  ,{ 480u}
  ,{ 481u}
  ,{ 482u}
  ,{ 483u}
  ,{ 485u}
  ,{ 487u}
  ,{ 489u}
  ,{ 491u}
  ,{ 493u}
  ,{ 495u}
  ,{ 540u}
  ,{ 585u}
  ,{ 587u}
  ,{ 589u}
  ,{ 591u}
  ,{ 593u}
  ,{ 596u}
  ,{ 599u}
  ,{ 620u}
  ,{ 641u}
  ,{ 642u}
  ,{ 643u}
  ,{ 644u}
  ,{ 645u}
  ,{ 647u}
  ,{ 649u}
  ,{ 651u}
  ,{ 653u}
  ,{ 655u}
  ,{ 657u}
  ,{ 659u}
  ,{ 661u}
  ,{ 663u}
  ,{ 665u}
  ,{ 668u}
  ,{ 671u}
  ,{ 680u}
  ,{ 689u}
};
/*! DID signal operation classes */
CONST(Dcm_CfgDidMgrSignalOpClassInfoType, DCM_CONST) Dcm_CfgDidMgrSignalOpClassInfo[689]=
{
   { ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_40E0_Secret_Key_Immobilizer_Target_3_DID_40DF_Secret_Key_Immobilizer_Target_2_ReadData)),  32u,  32u,0x0002u} /* DID: 0x40DF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_40E0_Secret_Key_Immobilizer_Target_3_DID_40DF_Secret_Key_Immobilizer_Target_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x40DF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_40E0_Secret_Key_Immobilizer_Target_3_DID_40DF_Secret_Key_Immobilizer_Target_2_WriteData)),  32u,  32u,0x1002u} /* DID: 0x40DF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D003_Vehicle_Speed_DID_D003_Vehicle_Speed_ReadData)),   2u,   2u,0x0002u} /* DID: 0xD003 */   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D003_Vehicle_Speed_DID_D003_Vehicle_Speed_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD003 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_1_1st_System_Global_Time_the_time_when_2A73953F_ReadData)),   4u,   4u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2_1st_Global_time_when_Functionality_Ac_89793B23_ReadData)),   4u,   4u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC24_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC25_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC26_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC27_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC29_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC30_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC35_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC39_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_1st_ReadData)),   7u,   7u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_1st_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735753_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD19A5_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_1st_ReadData)),  22u,  22u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_1th_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_1st_Usage_Mode_when_DID_is_triggered_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_System_Global_Time_the_time_when_th_5058FD8E_ReadData)),   4u,   4u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_Global_time_when_Functionality_Acti_75CD35A0_ReadData)),   4u,   4u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC24_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC25_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC26_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC27_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC29_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC30_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC35_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC39_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_2st_ReadData)),   7u,   7u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_2st_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735B14_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD1D66_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_2st_ReadData)),  22u,  22u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_2th_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_Usage_Mode_when_DID_is_triggered_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_System_Global_Time_the_time_when_th_75ED068F_ReadData)),   4u,   4u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_Global_time_when_Functionality_Acti_A45DA93A_ReadData)),   4u,   4u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC24_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC25_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC26_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC27_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC29_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC30_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC35_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC39_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_3st_ReadData)),   7u,   7u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_3st_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735ED5_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_BF51DF82_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_3st_ReadData)),  22u,  22u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_3th_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_Usage_Mode_when_DID_is_triggered_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_System_Global_Time_the_time_when_th_9B810F90_ReadData)),   4u,   4u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_Global_time_when_Functionality_Acti_F1BD651E_ReadData)),   4u,   4u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC24_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC25_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC26_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC27_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC29_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC30_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC35_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC39_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_4st_ReadData)),   7u,   7u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_4st_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE736296_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD24E8_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_4st_ReadData)),  22u,  22u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_4th_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_Usage_Mode_when_DID_is_triggered_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_System_Global_Time_the_time_when_th_C1151891_ReadData)),   4u,   4u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_Global_time_when_Functionality_Acti_183F5278_ReadData)),   4u,   4u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC24_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC25_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC26_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC27_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC29_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC30_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC35_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC39_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_5st_ReadData)),   7u,   7u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_5st_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE736657_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD28A9_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_5st_ReadData)),  22u,  22u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_5th_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_Usage_Mode_when_DID_is_triggered_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_1_1st_System_Global_Time_the_time_when_2A73953F_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2_1st_Global_time_when_Functionality_Ac_89793B23_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC24_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC25_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC26_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC27_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC29_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC30_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC35_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC39_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_1st_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_1st_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735753_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD19A5_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_1st_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_1th_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_1st_Usage_Mode_when_DID_is_triggered_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_System_Global_Time_the_time_when_th_5058FD8E_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_Global_time_when_Functionality_Acti_75CD35A0_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC24_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC25_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC26_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC27_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC29_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC30_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC35_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC39_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_2st_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_2st_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735B14_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD1D66_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_2st_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_2th_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_Usage_Mode_when_DID_is_triggered_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_System_Global_Time_the_time_when_th_75ED068F_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_Global_time_when_Functionality_Acti_A45DA93A_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC24_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC25_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC26_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC27_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC29_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC30_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC35_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC39_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_3st_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_3st_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735ED5_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_BF51DF82_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_3st_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_3th_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_Usage_Mode_when_DID_is_triggered_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_System_Global_Time_the_time_when_th_9B810F90_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_Global_time_when_Functionality_Acti_F1BD651E_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC24_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC25_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC26_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC27_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC29_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC30_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC35_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC39_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_4st_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_4st_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE736296_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD24E8_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_4st_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_4th_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_Usage_Mode_when_DID_is_triggered_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_System_Global_Time_the_time_when_th_C1151891_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_Global_time_when_Functionality_Acti_183F5278_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC24_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC25_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC26_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC27_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC29_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC30_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC35_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC39_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_5st_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_5st_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE736657_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD28A9_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_5st_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_5th_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_Usage_Mode_when_DID_is_triggered_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D03A_swAuth_Public_Key_CheckSum_DID_D03A_swAuth_Public_Key_CheckSum_ReadData)),  32u,  32u,0x0002u} /* DID: 0xD03A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D03A_swAuth_Public_Key_CheckSum_DID_D03A_swAuth_Public_Key_CheckSum_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD03A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D09A_High_Quiescent_Current_Function_Activation_Deactivation_DID_D09A_High_Quiescent_Current_Function_CD3E51C5_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD09A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D09A_High_Quiescent_Current_Function_Activation_Deactivation_DID_D09A_High_Quiescent_Current_Function_CD3E51C5_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD09A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D09A_High_Quiescent_Current_Function_Activation_Deactivation_DID_D09A_High_Quiescent_Current_Function_CD3E51C5_WriteData)),   1u,   1u,0x1002u} /* DID: 0xD09A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D0B5_SDB_version_SDB_version_ReadData)),   3u,   3u,0x0002u} /* DID: 0xD0B5 */                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D0B5_SDB_version_SDB_version_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD0B5 */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D12F_Security_Constant_Level_11_12_DID_D12F_Security_Constant_Level_1112_ReadData)),   5u,   5u,0x0002u} /* DID: 0xD12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D12F_Security_Constant_Level_11_12_DID_D12F_Security_Constant_Level_1112_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D12F_Security_Constant_Level_11_12_DID_D12F_Security_Constant_Level_1112_WriteData)),   5u,   5u,0x1002u} /* DID: 0xD12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D134_Car_Mode_DID_D134_Car_Mode_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD134 */             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D134_Car_Mode_DID_D134_Car_Mode_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD134 */   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_1_Latest_State_NM_History_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_2_Latest_State_Global_Real_Time_ReadData)),   4u,   4u,0x0002u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_3_2nd_Latest_State_NM_History_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_4_2nd_Latest_State_Global_Real_Time_ReadData)),   4u,   4u,0x0002u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_5_3rd_Latest_State_NM_History_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_6_3rd_Latest_State_Global_Real_Time_ReadData)),   4u,   4u,0x0002u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_7_4th_Latest_State_NM_History_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_8_4th_Latest_State_Global_Real_Time_ReadData)),   4u,   4u,0x0002u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_9_5th_Latest_State_NM_History_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_10_5th_Latest_State_Global_Real_Time_ReadData)),   4u,   4u,0x0002u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_11_6th_Latest_State_NM_History_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_12_6th_Latest_State_Global_Real_Time_ReadData)),   4u,   4u,0x0002u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_13_7th_Latest_State_NM_History_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_14_7th_Latest_State_Global_Real_Time_ReadData)),   4u,   4u,0x0002u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_15_8th_Latest_State_NM_History_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_16_8th_Latest_State_Global_Real_Time_ReadData)),   4u,   4u,0x0002u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_17_9th_Latest_State_NM_History_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_18_9th_Latest_State_Global_Real_Time_ReadData)),   4u,   4u,0x0002u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_19_10th_Latest_State_NM_History_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_20_10th_Latest_State_Global_Real_Time_ReadData)),   4u,   4u,0x0002u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_1_Latest_State_NM_History_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_2_Latest_State_Global_Real_Time_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_3_2nd_Latest_State_NM_History_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_4_2nd_Latest_State_Global_Real_Time_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_5_3rd_Latest_State_NM_History_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_6_3rd_Latest_State_Global_Real_Time_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_7_4th_Latest_State_NM_History_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_8_4th_Latest_State_Global_Real_Time_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_9_5th_Latest_State_NM_History_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_10_5th_Latest_State_Global_Real_Time_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_11_6th_Latest_State_NM_History_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_12_6th_Latest_State_Global_Real_Time_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_13_7th_Latest_State_NM_History_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_14_7th_Latest_State_Global_Real_Time_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_15_8th_Latest_State_NM_History_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_16_8th_Latest_State_Global_Real_Time_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_17_9th_Latest_State_NM_History_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_18_9th_Latest_State_Global_Real_Time_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_19_10th_Latest_State_NM_History_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_20_10th_Latest_State_Global_Real_Time_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD211 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DD00_Global_Real_Time_DID_DD00_Global_Real_Time_ReadData)),   4u,   4u,0x0002u} /* DID: 0xDD00 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DD00_Global_Real_Time_DID_DD00_Global_Real_Time_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xDD00 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DD01_Total_Distance_DID_DD01_Total_Distance_ReadData)),   3u,   3u,0x0002u} /* DID: 0xDD01 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DD01_Total_Distance_DID_DD01_Total_Distance_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xDD01 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DD02_Vehicle_Battery_Voltage_DID_DD02_Vehicle_Battery_Voltage_ReadData)),   1u,   1u,0x0002u} /* DID: 0xDD02 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DD02_Vehicle_Battery_Voltage_DID_DD02_Vehicle_Battery_Voltage_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xDD02 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DD0A_Usage_Mode_DID_DD0A_Usage_Mode_ReadData)),   1u,   1u,0x0002u} /* DID: 0xDD0A */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DD0A_Usage_Mode_DID_DD0A_Usage_Mode_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xDD0A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DD0C_Electric_Power_Level_DID_DD0C_Electric_Power_Level_ReadData)),   1u,   1u,0x0002u} /* DID: 0xDD0C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DD0C_Electric_Power_Level_DID_DD0C_Electric_Power_Level_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xDD0C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_1_Number_of_invalid_car_configuration_parameter_value_7E36D2F5_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_2_1st_parameter_number_of_the_car_configuration_data_C808D86E_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_3_1st_parameter_invalid_value_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_4_2nd_parameter_number_of_the_car_configuration_data_0046C356_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_5_2nd_parameter_invalid_value_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_6_3rd_parameter_number_of_the_car_configuration_data_DA502437_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_7_3rd_parameter_invalid_value_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_8_4th_parameter_number_of_the_car_configuration_data_125EA492_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_9_4th_parameter_invalid_value_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_10_5th_parameter_number_of_the_car_configuration_data_450C8300_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_11_5th_parameter_invalid_value_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_12_6th_parameter_number_of_the_car_configuration_data_E81803DD_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_13_6th_parameter_invalid_value_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_14_7th_parameter_number_of_the_car_configuration_data_8B2384BA_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_15_7th_parameter_invalid_value_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_16_8th_parameter_number_of_the_car_configuration_data_2E2F0597_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_17_8th_parameter_invalid_value_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_18_9th_parameter_number_of_the_car_configuration_data_D13A8674_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_19_9th_parameter_invalid_value_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_20_10th_parameter_number_of_the_car_configuration_dat_86F3B3DF_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_21_10th_parameter_invalid_value_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_1_Number_of_invalid_car_configuration_parameter_value_7E36D2F5_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_2_1st_parameter_number_of_the_car_configuration_data_C808D86E_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_3_1st_parameter_invalid_value_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_4_2nd_parameter_number_of_the_car_configuration_data_0046C356_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_5_2nd_parameter_invalid_value_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_6_3rd_parameter_number_of_the_car_configuration_data_DA502437_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_7_3rd_parameter_invalid_value_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_8_4th_parameter_number_of_the_car_configuration_data_125EA492_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_9_4th_parameter_invalid_value_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_10_5th_parameter_number_of_the_car_configuration_data_450C8300_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_11_5th_parameter_invalid_value_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_12_6th_parameter_number_of_the_car_configuration_data_E81803DD_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_13_6th_parameter_invalid_value_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_14_7th_parameter_number_of_the_car_configuration_data_8B2384BA_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_15_7th_parameter_invalid_value_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_16_8th_parameter_number_of_the_car_configuration_data_2E2F0597_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_17_8th_parameter_invalid_value_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_18_9th_parameter_number_of_the_car_configuration_data_D13A8674_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_19_9th_parameter_invalid_value_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_20_10th_parameter_number_of_the_car_configuration_dat_86F3B3DF_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_21_10th_parameter_invalid_value_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE103 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E300_HVDC_Voltage_DID_E300_HVDC_Voltage_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE300 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E300_HVDC_Voltage_DID_E300_HVDC_Voltage_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE300 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E301_HVDC_Current_DID_E301_HVDC_Current__ReadData)),   2u,   2u,0x0002u} /* DID: 0xE301 */    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E301_HVDC_Current_DID_E301_HVDC_Current__ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE301 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E303_Motor_Speed_DID_E303_Motor_Speed__ReadData)),   2u,   2u,0x0002u} /* DID: 0xE303 */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E303_Motor_Speed_DID_E303_Motor_Speed__ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE303 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E304_Actual_Torque_DID_E304_Actual_Torque_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE304 */   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E304_Actual_Torque_DID_E304_Actual_Torque_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE304 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E305_Inverter_IGBT_Junction_Temp_DID_E305_Inverter_IGBT_Junction_Temp_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE305 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E305_Inverter_IGBT_Junction_Temp_DID_E305_Inverter_IGBT_Junction_Temp_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE305 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E306_Motor_Temperature_DID_E306_Motor_Temperature_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE306 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E306_Motor_Temperature_DID_E306_Motor_Temperature_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE306 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E307_System_Mode_DID_E307_System_Mode_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE307 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E307_System_Mode_DID_E307_System_Mode_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE307 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E308_ECM_Torque_Request_DID_E308_ECM_Torque_Request_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE308 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E308_ECM_Torque_Request_DID_E308_ECM_Torque_Request_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE308 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E309_ECM_Mode_Request_DID_E309_ECM_Mode_Request_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE309 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E309_ECM_Mode_Request_DID_E309_ECM_Mode_Request_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE309 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E310_IEM_MGM_Derating_Status_DID_E310_IEMMGM_Derating_Status_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE310 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E310_IEM_MGM_Derating_Status_DID_E310_IEMMGM_Derating_Status_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE310 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E311_Crash_Status_DID_E311_Crash_Status_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE311 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E311_Crash_Status_DID_E311_Crash_Status_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE311 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E312_Wheel_Speed_DID_E312_Wheel_Speed_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE312 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E312_Wheel_Speed_DID_E312_Wheel_Speed_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE312 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E313_Active_discharge_status_DID_E313_Active_discharge_status_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE313 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E313_Active_discharge_status_DID_E313_Active_discharge_status_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE313 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E314_Available_Torque_maximum_DID_E314_Available_Torque_maximum_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE314 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E314_Available_Torque_maximum_DID_E314_Available_Torque_maximum_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE314 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E315_Available_Torque_minimum_DID_E315_Available_Torque_minimum_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE315 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E315_Available_Torque_minimum_DID_E315_Available_Torque_minimum_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE315 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E319_Torque_Direction_DID_E319_Torque_Direction_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE319 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E319_Torque_Direction_DID_E319_Torque_Direction_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE319 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E320_System_Mode_Mismatch_DID_E320_System_Mode_Mismatch_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE320 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E320_System_Mode_Mismatch_DID_E320_System_Mode_Mismatch_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE320 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E324_Motor_Derating_reason_of_IEM_MGM_DID_E324_Motor_Derating_reason_of_IEMMGM_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE324 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E324_Motor_Derating_reason_of_IEM_MGM_DID_E324_Motor_Derating_reason_of_IEMMGM_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE324 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E331_Software_Version_DID_E331_1_ASW_Software_Version_ReadData)),   8u,   8u,0x0002u} /* DID: 0xE331 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E331_Software_Version_DID_E331_2_BSW_Software_Version_ReadData)),   8u,   8u,0x0002u} /* DID: 0xE331 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E331_Software_Version_DID_E331_3_Calibration_Data_Software_Version_ReadData)),   8u,   8u,0x0002u} /* DID: 0xE331 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E331_Software_Version_DID_E331_1_ASW_Software_Version_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE331 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E331_Software_Version_DID_E331_2_BSW_Software_Version_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE331 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E331_Software_Version_DID_E331_3_Calibration_Data_Software_Version_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE331 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E333_2002_State_2002_Hu_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE333 */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E333_2002_State_2002_Hv_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE333 */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E333_2002_State_2002_Hw_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE333 */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E333_2002_State_2002_Lu_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE333 */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E333_2002_State_2002_Lv_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE333 */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E333_2002_State_2002_Lw_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE333 */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E333_2002_State_2002_H_Ser_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE333 */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E333_2002_State_2002_L_Ser_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE333 */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E333_2002_State_2002_Hu_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE333 */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E333_2002_State_2002_Hv_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE333 */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E333_2002_State_2002_Hw_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE333 */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E333_2002_State_2002_Lu_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE333 */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E333_2002_State_2002_Lv_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE333 */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E333_2002_State_2002_Lw_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE333 */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E333_2002_State_2002_H_Ser_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE333 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E333_2002_State_2002_L_Ser_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE333 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E333_2002_State_2002_Hu_WriteData)),   1u,   1u,0x1002u} /* DID: 0xE333 */                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E333_2002_State_2002_Hv_WriteData)),   1u,   1u,0x1002u} /* DID: 0xE333 */                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E333_2002_State_2002_Hw_WriteData)),   1u,   1u,0x1002u} /* DID: 0xE333 */                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E333_2002_State_2002_Lu_WriteData)),   1u,   1u,0x1002u} /* DID: 0xE333 */                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E333_2002_State_2002_Lv_WriteData)),   1u,   1u,0x1002u} /* DID: 0xE333 */                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E333_2002_State_2002_Lw_WriteData)),   1u,   1u,0x1002u} /* DID: 0xE333 */                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E333_2002_State_2002_H_Ser_WriteData)),   1u,   1u,0x1002u} /* DID: 0xE333 */                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E333_2002_State_2002_L_Ser_WriteData)),   1u,   1u,0x1002u} /* DID: 0xE333 */                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E335_d_axis_current_setpoint_DID_E335_d_axis_current_setpoint_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE335 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E335_d_axis_current_setpoint_DID_E335_d_axis_current_setpoint_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE335 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E336_d_axis_current_feedback_DID_E336_d_axis_current_feedback_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE336 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E336_d_axis_current_feedback_DID_E336_d_axis_current_feedback_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE336 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E337_q_axis_current_setpoint_DID_E337_q_axis_current_setpoint_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE337 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E337_q_axis_current_setpoint_DID_E337_q_axis_current_setpoint_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE337 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E338_q_axis_current_feedback_DID_E338_q_axis_current_feedback_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE338 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E338_q_axis_current_feedback_DID_E338_q_axis_current_feedback_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE338 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E339_d_axis_voltage_DID_E339_d_axis_voltage_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE339 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E339_d_axis_voltage_DID_E339_d_axis_voltage_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE339 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E341_q_axis_voltage_DID_E341_q_axis_voltage_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE341 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E341_q_axis_voltage_DID_E341_q_axis_voltage_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE341 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E346_ECM_Torque_Allowed_Status_DID_E346_ECM_Torque_Allowed_Status_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE346 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E346_ECM_Torque_Allowed_Status_DID_E346_ECM_Torque_Allowed_Status_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE346 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E347_IGBT_Max_Temperature_DID_E347_IGBT_Max_Temperature_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE347 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E347_IGBT_Max_Temperature_DID_E347_IGBT_Max_Temperature_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE347 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E348_Phase_U_PWM_duty_DID_E348_Phase_U_PWM_duty_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE348 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E348_Phase_U_PWM_duty_DID_E348_Phase_U_PWM_duty_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE348 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E349_Phase_V_PWM_duty_DID_E349_Phase_V_PWM_duty_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE349 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E349_Phase_V_PWM_duty_DID_E349_Phase_V_PWM_duty_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE349 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E350_Phase_W_PWM_duty_DID_E350_Phase_W_PWM_duty_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE350 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E350_Phase_W_PWM_duty_DID_E350_Phase_W_PWM_duty_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE350 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E353_Flux_weakening_correction_factor_DID_E353_Flux_weakening_correction_factor_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE353 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E353_Flux_weakening_correction_factor_DID_E353_Flux_weakening_correction_factor_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE353 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E357_Resolve_compensated_angle_DID_E357_Resolve_compensated_angle_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE357 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E357_Resolve_compensated_angle_DID_E357_Resolve_compensated_angle_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE357 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E358_Resolve_angle_DID_E358_Resolve_angle_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE358 */   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E358_Resolve_angle_DID_E358_Resolve_angle_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE358 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E363_Modulation_index_DID_E363_Modulation_index_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE363 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E363_Modulation_index_DID_E363_Modulation_index_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE363 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E364_AURIX_Fault_Indication_DID_E364_AURIX_Fault_Indication_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE364 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_E364_AURIX_Fault_Indication_DID_E364_AURIX_Fault_Indication_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE364 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_ReadData)),   5u,   5u,0x0002u} /* DID: 0xED20 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_ReadData)),   3u,   3u,0x0002u} /* DID: 0xED20 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_001_ReadData)),   5u,   5u,0x0002u} /* DID: 0xED20 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_001_ReadData)),   3u,   3u,0x0002u} /* DID: 0xED20 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_002_ReadData)),   5u,   5u,0x0002u} /* DID: 0xED20 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_002_ReadData)),   3u,   3u,0x0002u} /* DID: 0xED20 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_DID_F18C_ECU_Serial_Number_ReadData)),   4u,   4u,0x0002u} /* DID: 0xED20 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_DID_F1AE_1_Total_number_of_ECU_Software_Part_Numbers_ReadData)),   1u,   1u,0x0002u} /* DID: 0xED20 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_003_ReadData)),   5u,   5u,0x0002u} /* DID: 0xED20 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_003_ReadData)),   3u,   3u,0x0002u} /* DID: 0xED20 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_Reserved_ReadData)),  10u,  10u,0x0002u} /* DID: 0xED20 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xED20 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xED20 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_001_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xED20 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_001_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xED20 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_002_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xED20 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_002_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xED20 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_DID_F18C_ECU_Serial_Number_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xED20 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_DID_F1AE_1_Total_number_of_ECU_Software_Part_Numbers_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xED20 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_003_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xED20 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_003_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xED20 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_Reserved_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xED20 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_F120_Application_Diagnostic_Database_Part_Number_ReadData)),   4u,   4u,0x0002u} /* DID: 0xEDA0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_F120_Application_Diagnostic_Database_Part_Number1_ReadData)),   3u,   3u,0x0002u} /* DID: 0xEDA0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12A_ECU_Delivery_Assembly_Part_Number_1_ReadData)),   4u,   4u,0x0002u} /* DID: 0xEDA0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12A_ECU_Delivery_Assembly_Part_Number1_1_ReadData)),   3u,   3u,0x0002u} /* DID: 0xEDA0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12B_ECU_Delivery_Assembly_Part_Number_ReadData)),   4u,   4u,0x0002u} /* DID: 0xEDA0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12B_ECU_Delivery_Assembly_Part_Number1_ReadData)),   3u,   3u,0x0002u} /* DID: 0xEDA0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F18C_ECU_Serial_Number_ReadData)),   4u,   4u,0x0002u} /* DID: 0xEDA0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12E_1_Total_number_of_ECU_Software_Part_Numbers_ReadData)),   1u,   1u,0x0002u} /* DID: 0xEDA0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_BCD_part_ReadData)),   4u,   4u,0x0002u} /* DID: 0xEDA0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_ASCII_part_ReadData)),   3u,   3u,0x0002u} /* DID: 0xEDA0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_Reserved_ReadData)),  10u,  10u,0x0002u} /* DID: 0xEDA0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_F120_Application_Diagnostic_Database_Part_Number_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEDA0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_F120_Application_Diagnostic_Database_Part_Number1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEDA0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12A_ECU_Delivery_Assembly_Part_Number_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEDA0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12A_ECU_Delivery_Assembly_Part_Number1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEDA0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12B_ECU_Delivery_Assembly_Part_Number_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEDA0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12B_ECU_Delivery_Assembly_Part_Number1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEDA0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F18C_ECU_Serial_Number_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEDA0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12E_1_Total_number_of_ECU_Software_Part_Numbers_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEDA0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_BCD_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEDA0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_ASCII_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEDA0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_Reserved_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEDA0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE9A_Inverter_Coolant_Temperature_DID_EE9A_Inverter_Coolant_Temperature_ReadData)),   1u,   1u,0x0002u} /* DID: 0xEE9A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE9A_Inverter_Coolant_Temperature_DID_EE9A_Inverter_Coolant_Temperature_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEE9A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE9C_Transient_Phase_Current_A_DID_EE9C_Transient_Phase_Current_A_ReadData)),   2u,   2u,0x0002u} /* DID: 0xEE9C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE9C_Transient_Phase_Current_A_DID_EE9C_Transient_Phase_Current_A_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEE9C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE9D_Transient_Phase_Current_B_DID_EE9D_Transient_Phase_Current_B_ReadData)),   2u,   2u,0x0002u} /* DID: 0xEE9D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE9D_Transient_Phase_Current_B_DID_EE9D_Transient_Phase_Current_B_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEE9D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE9E_Transient_Phase_Current_C_DID_EE9E_Transient_Phase_Current_C_ReadData)),   2u,   2u,0x0002u} /* DID: 0xEE9E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE9E_Transient_Phase_Current_C_DID_EE9E_Transient_Phase_Current_C_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEE9E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE9F_Gate_Status_DID_EE9F_Gate_Status_ReadData)),   1u,   1u,0x0002u} /* DID: 0xEE9F */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE9F_Gate_Status_DID_EE9F_Gate_Status_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEE9F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_ReadData)),   2u,   2u,0x0002u} /* DID: 0xEEB2 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEEB2 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EEB5_IEM_MGM_current_torque_DID_EEB5_IEMMGM_current_torque_ReadData)),   2u,   2u,0x0002u} /* DID: 0xEEB5 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EEB5_IEM_MGM_current_torque_DID_EEB5_IEMMGM_current_torque_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEEB5 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EEB6_ECM_Power_Limitation_maximum_DID_EEB6_ECM_Power_Limitation_maximum_ReadData)),   2u,   2u,0x0002u} /* DID: 0xEEB6 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EEB6_ECM_Power_Limitation_maximum_DID_EEB6_ECM_Power_Limitation_maximum_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEEB6 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EEB7_ECM_Power_Limitation_minimum_DID_EEB7_ECM_Power_Limitation_minimum_ReadData)),   2u,   2u,0x0002u} /* DID: 0xEEB7 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EEB7_ECM_Power_Limitation_minimum_DID_EEB7_ECM_Power_Limitation_minimum_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEEB7 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EEB8_HV_voltage_received_from_BECM_DID_EEB8_HV_voltage_received_from_BECM_ReadData)),   2u,   2u,0x0002u} /* DID: 0xEEB8 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EEB8_HV_voltage_received_from_BECM_DID_EEB8_HV_voltage_received_from_BECM_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEEB8 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EEBD_IEM_MGM_rotor_offset_angle_DID_EEBD_IEMMGM_rotor_offset_angle_ReadData)),   4u,   4u,0x0002u} /* DID: 0xEEBD */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EEBD_IEM_MGM_rotor_offset_angle_DID_EEBD_IEMMGM_rotor_offset_angle_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEEBD */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EEBD_IEM_MGM_rotor_offset_angle_DID_EEBD_IEMMGM_rotor_offset_angle_WriteData)),   4u,   4u,0x1002u} /* DID: 0xEEBD */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EEBE_Offset_angle_status_DID_EEBE_Offset_angle_status_ReadData)),   1u,   1u,0x0002u} /* DID: 0xEEBE */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EEBE_Offset_angle_status_DID_EEBE_Offset_angle_status_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEEBE */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EEBF_HV_Main_Relay_Status_DID_EEBF_HV_Main_Relay_Status_ReadData)),   1u,   1u,0x0002u} /* DID: 0xEEBF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EEBF_HV_Main_Relay_Status_DID_EEBF_HV_Main_Relay_Status_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEEBF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EEC3_ECU_power_supply_Voltage_DID_EEC3_ECU_power_supply_Voltage_ReadData)),   1u,   1u,0x0002u} /* DID: 0xEEC3 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EEC3_ECU_power_supply_Voltage_DID_EEC3_ECU_power_supply_Voltage_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEEC3 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EEC4_Charging_Power_Sustain_Relay_CPSR_Voltage_DID_EEC4_Charging_Power_Sustain_RelayCPSR_Voltage_ReadData)),   1u,   1u,0x0002u} /* DID: 0xEEC4 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EEC4_Charging_Power_Sustain_Relay_CPSR_Voltage_DID_EEC4_Charging_Power_Sustain_RelayCPSR_Voltage_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEEC4 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EEC5_ImobEng2_node_status_DID_EEC5_ImobEng2_node_status_ReadData)),   1u,   1u,0x0002u} /* DID: 0xEEC5 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EEC5_ImobEng2_node_status_DID_EEC5_ImobEng2_node_status_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEEC5 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_0_ReadData)),   1u,   1u,0x0002u} /* DID: 0xEED1 */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_1_ReadData)),   1u,   1u,0x0002u} /* DID: 0xEED1 */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_2_ReadData)),   1u,   1u,0x0002u} /* DID: 0xEED1 */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_3_ReadData)),   1u,   1u,0x0002u} /* DID: 0xEED1 */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_0_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEED1 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEED1 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEED1 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_3_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEED1 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_0xEEC7_1_DID_EED2_SaftyTorque_ReadData)),   2u,   2u,0x0002u} /* DID: 0xEED2 */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_0xEEC7_1_DID_EED2_SaftyTorque_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEED2 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EED3_Safety_speed_DID_EED3_Safety_speed_ReadData)),   2u,   2u,0x0002u} /* DID: 0xEED3 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EED3_Safety_speed_DID_EED3_Safety_speed_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEED3 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EED4_Safty_Function_Mode_DID_EED4_Safty_Function_Mode_ReadData)),   1u,   1u,0x0002u} /* DID: 0xEED4 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EED4_Safty_Function_Mode_DID_EED4_Safty_Function_Mode_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEED4 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EED5_Safety_Torque_QF_factor_EED5_Safety_Torque_Quality_factor_ReadData)),   1u,   1u,0x0002u} /* DID: 0xEED5 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EED5_Safety_Torque_QF_factor_EED5_Safety_Torque_Quality_factor_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEED5 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EEFD_Sofware_Project_Version_DID_EEFD_Clutch_Control_Fault_Indication_ReadData)),  24u,  24u,0x0002u} /* DID: 0xEEFD */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EEFD_Sofware_Project_Version_DID_EEFD_Clutch_Control_Fault_Indication_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEEFD */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EF0A_Active_Discharge_Time_DID_EF0A_Active_Discharge_Time_ReadData)),   1u,   1u,0x0002u} /* DID: 0xEF0A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EF0A_Active_Discharge_Time_DID_EF0A_Active_Discharge_Time_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEF0A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EF1B_EOL_config_word_A_DID_EF1B_EOL_config_word_A_ReadData)),   2u,   2u,0x0002u} /* DID: 0xEF1B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EF1B_EOL_config_word_A_DID_EF1B_EOL_config_word_A_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEF1B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EF1B_EOL_config_word_A_DID_EF1B_EOL_config_word_A_WriteData)),   2u,   2u,0x1002u} /* DID: 0xEF1B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EF1C_EOL_config_word_B_DID_EF1C_EOL_config_word_B_ReadData)),  40u,  40u,0x0002u} /* DID: 0xEF1C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EF1C_EOL_config_word_B_DID_EF1C_EOL_config_word_B_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEF1C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EF1C_EOL_config_word_B_DID_EF1C_EOL_config_word_B_WriteData)),  40u,  40u,0x1002u} /* DID: 0xEF1C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EF1D_EOL_config_word_C_DID_EF1D_EOL_config_word_C_ReadData)),   2u,   2u,0x0002u} /* DID: 0xEF1D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EF1D_EOL_config_word_C_DID_EF1D_EOL_config_word_C_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEF1D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EF1D_EOL_config_word_C_DID_EF1D_EOL_config_word_C_WriteData)),   2u,   2u,0x1002u} /* DID: 0xEF1D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Main_ReadData)),   4u,   4u,0x0002u} /* DID: 0xF120 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Variant_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF120 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Main_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF120 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Variant_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF120 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F121_Primary_Bootloader_Diagnostic_Database_Part_Number_BCD_part_ReadData)),   4u,   4u,0x0002u} /* DID: 0xF121 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F121_Primary_Bootloader_Diagnostic_Database_Part_Number_ASCII_part_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF121 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F121_Primary_Bootloader_Diagnostic_Database_Part_Number_BCD_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF121 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F121_Primary_Bootloader_Diagnostic_Database_Part_Number_ASCII_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF121 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F125_Primary_Bootloader_Software_Part_Number_BCD_part_ReadData)),   4u,   4u,0x0002u} /* DID: 0xF125 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F125_Primary_Bootloader_Software_Part_Number_ASCII_part_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF125 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F125_Primary_Bootloader_Software_Part_Number_BCD_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF125 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F125_Primary_Bootloader_Software_Part_Number_ASCII_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF125 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_1_DIAG_CLUSTER_VENDOR_ID_ReadData)),   2u,   2u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_2_DIAG_CLUSTER_SW_MAJOR_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_3_DIAG_CLUSTER_SW_MINOR_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_4_DIAG_CLUSTER_SW_PATCH_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_5_DIAG_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_6_DIAG_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_7_DIAG_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_8_DIAG_CLUSTER_VCC_DEM_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_9_DIAG_CLUSTER_VCC_DCM_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_10_DIAG_CLUSTER_VCC_FIM_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_11_MODEMGMT_CLUSTER_VENDOR_ID_ReadData)),   2u,   2u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_12_MODEMGMT_CLUSTER_SW_MAJOR_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_13_MODEMGMT_CLUSTER_SW_MINOR_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_14_MODEMGMT_CLUSTER_SW_PATCH_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_15_MODEMGMT_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_16_MODEMGMT_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_17_MODEMGMT_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_18_COM_CLUSTER_VENDOR_ID_ReadData)),   2u,   2u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_19_COM_CLUSTER_SW_MAJOR_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_20_COM_CLUSTER_SW_MINOR_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_21_COM_CLUSTER_SW_PATCH_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_22_COM_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_23_COM_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_24_COM_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_25_CAN_CLUSTER_VENDOR_ID_ReadData)),   2u,   2u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_26_CAN_CLUSTER_SW_MAJOR_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_27_CAN_CLUSTER_SW_MINOR_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_28_CAN_CLUSTER_SW_PATCH_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_29_CAN_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_30_CAN_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_31_CAN_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_32_FLEXRAY_CLUSTER_VENDOR_ID_ReadData)),   2u,   2u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_33_FLEXRAY_CLUSTER_SW_MAJOR_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_34_FLEXRAY_CLUSTER_SW_MINOR_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_35_FLEXRAY_CLUSTER_SW_PATCH_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_36_FLEXRAY_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_37_FLEXRAY_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_38_FLEXRAY_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_39_LIN_CLUSTER_VENDOR_ID_ReadData)),   2u,   2u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_40_LIN_CLUSTER_SW_MAJOR_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_41_LIN_CLUSTER_SW_MINOR_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_42_LIN_CLUSTER_SW_PATCH_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_43_LIN_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_44_LIN_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_45_LIN_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_1_DIAG_CLUSTER_VENDOR_ID_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_2_DIAG_CLUSTER_SW_MAJOR_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_3_DIAG_CLUSTER_SW_MINOR_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_4_DIAG_CLUSTER_SW_PATCH_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_5_DIAG_CLUSTER_AR_RELEASE_MAJOR_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_6_DIAG_CLUSTER_AR_RELEASE_MINOR_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_7_DIAG_CLUSTER_AR_RELEASE_REVISION_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_8_DIAG_CLUSTER_VCC_DEM_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_9_DIAG_CLUSTER_VCC_DCM_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_10_DIAG_CLUSTER_VCC_FIM_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_11_MODEMGMT_CLUSTER_VENDOR_ID_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_12_MODEMGMT_CLUSTER_SW_MAJOR_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_13_MODEMGMT_CLUSTER_SW_MINOR_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_14_MODEMGMT_CLUSTER_SW_PATCH_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_15_MODEMGMT_CLUSTER_AR_RELEASE_MAJOR_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_16_MODEMGMT_CLUSTER_AR_RELEASE_MINOR_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_17_MODEMGMT_CLUSTER_AR_RELEASE_REVISION_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_18_COM_CLUSTER_VENDOR_ID_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_19_COM_CLUSTER_SW_MAJOR_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_20_COM_CLUSTER_SW_MINOR_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_21_COM_CLUSTER_SW_PATCH_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_22_COM_CLUSTER_AR_RELEASE_MAJOR_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_23_COM_CLUSTER_AR_RELEASE_MINOR_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_24_COM_CLUSTER_AR_RELEASE_REVISION_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_25_CAN_CLUSTER_VENDOR_ID_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_26_CAN_CLUSTER_SW_MAJOR_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_27_CAN_CLUSTER_SW_MINOR_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_28_CAN_CLUSTER_SW_PATCH_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_29_CAN_CLUSTER_AR_RELEASE_MAJOR_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_30_CAN_CLUSTER_AR_RELEASE_MINOR_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_31_CAN_CLUSTER_AR_RELEASE_REVISION_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_32_FLEXRAY_CLUSTER_VENDOR_ID_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_33_FLEXRAY_CLUSTER_SW_MAJOR_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_34_FLEXRAY_CLUSTER_SW_MINOR_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_35_FLEXRAY_CLUSTER_SW_PATCH_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_36_FLEXRAY_CLUSTER_AR_RELEASE_MAJOR_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_37_FLEXRAY_CLUSTER_AR_RELEASE_MINOR_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_38_FLEXRAY_CLUSTER_AR_RELEASE_REVISION_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_39_LIN_CLUSTER_VENDOR_ID_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_40_LIN_CLUSTER_SW_MAJOR_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_41_LIN_CLUSTER_SW_MINOR_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_42_LIN_CLUSTER_SW_PATCH_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_43_LIN_CLUSTER_AR_RELEASE_MAJOR_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_44_LIN_CLUSTER_AR_RELEASE_MINOR_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_45_LIN_CLUSTER_AR_RELEASE_REVISION_VERSION_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF126 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12A_ECU_Core_Assembly_Part_Number_BCD_part_ReadData)),   4u,   4u,0x0002u} /* DID: 0xF12A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12A_ECU_Core_Assembly_Part_Number_ASCII_part_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF12A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12A_ECU_Core_Assembly_Part_Number_BCD_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF12A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12A_ECU_Core_Assembly_Part_Number_ASCII_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF12A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12B_ECU_Delivery_Assembly_Part_Number_BCD_part_ReadData)),   4u,   4u,0x0002u} /* DID: 0xF12B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12B_ECU_Delivery_Assembly_Part_Number_ASCII_part_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF12B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12B_ECU_Delivery_Assembly_Part_Number_BCD_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF12B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12B_ECU_Delivery_Assembly_Part_Number_ASCII_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF12B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12E_ECU_Software_Part_Numbers_DID_F12E_1_ECU_Software_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF12E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12E_ECU_Software_Part_Numbers_BCD_part_ReadData)),   4u,   4u,0x0002u} /* DID: 0xF12E */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12E_ECU_Software_Part_Numbers_ASCII_part_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF12E */   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12E_ECU_Software_Part_Numbers_DID_F12E_1_ECU_Software_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF12E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12E_ECU_Software_Part_Numbers_BCD_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF12E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12E_ECU_Software_Part_Numbers_ASCII_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF12E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_DID_F12F_1_Total_number_of_ECU_Software_Part_Numbers_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_ReadData)),   4u,   4u,0x0002u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_001_ReadData)),   4u,   4u,0x0002u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_001_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_002_ReadData)),   4u,   4u,0x0002u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_002_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_003_ReadData)),   4u,   4u,0x0002u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_003_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_004_ReadData)),   4u,   4u,0x0002u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_004_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_005_ReadData)),   4u,   4u,0x0002u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_005_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_006_ReadData)),   4u,   4u,0x0002u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_006_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_007_ReadData)),   4u,   4u,0x0002u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_007_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_008_ReadData)),   4u,   4u,0x0002u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_008_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_009_ReadData)),   4u,   4u,0x0002u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_009_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_DID_F12F_1_Total_number_of_ECU_Software_Part_Numbers_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_001_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_001_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_002_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_002_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_003_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_003_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_004_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_004_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_005_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_005_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_006_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_006_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_007_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_007_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_008_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_008_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_009_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_009_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF12F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F186_Active_Diagnostic_Session_DID_F186_Active_Diagnostic_Session_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF186 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F186_Active_Diagnostic_Session_DID_F186_Active_Diagnostic_Session_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF186 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F18C_ECU_Serial_Number_DID_F18C_ECU_Serial_Number_ReadData)),   4u,   4u,0x0002u} /* DID: 0xF18C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F18C_ECU_Serial_Number_DID_F18C_ECU_Serial_Number_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF18C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1A0_Application_Diagnostic_Database_Part_Number_Geely_BCD_part_ReadData)),   5u,   5u,0x0002u} /* DID: 0xF1A0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1A0_Application_Diagnostic_Database_Part_Number_Geely_ASCII_part_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF1A0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1A0_Application_Diagnostic_Database_Part_Number_Geely_BCD_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1A0_Application_Diagnostic_Database_Part_Number_Geely_ASCII_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1A1_Primary_Bootloader_Diagnostic_Database_Part_Number_Geely_BCD_part_ReadData)),   5u,   5u,0x0002u} /* DID: 0xF1A1 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1A1_Primary_Bootloader_Diagnostic_Database_Part_Number_Geely_ASCII_part_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF1A1 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1A1_Primary_Bootloader_Diagnostic_Database_Part_Number_Geely_BCD_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A1 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1A1_Primary_Bootloader_Diagnostic_Database_Part_Number_Geely_ASCII_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A1 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1A5_Primary_Bootloader_Software_Part_Number_Geely_BCD_part_ReadData)),   5u,   5u,0x0002u} /* DID: 0xF1A5 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1A5_Primary_Bootloader_Software_Part_Number_Geely_ASCII_part_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF1A5 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1A5_Primary_Bootloader_Software_Part_Number_Geely_BCD_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A5 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1A5_Primary_Bootloader_Software_Part_Number_Geely_ASCII_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A5 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AA_ECU_Core_Assembly_Part_Number_Geely_BCD_part_ReadData)),   5u,   5u,0x0002u} /* DID: 0xF1AA */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AA_ECU_Core_Assembly_Part_Number_Geely_ASCII_part_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF1AA */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AA_ECU_Core_Assembly_Part_Number_Geely_BCD_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1AA */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AA_ECU_Core_Assembly_Part_Number_Geely_ASCII_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1AA */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AB_ECU_Delivery_Assembly_Part_Number_Geely_BCD_part_ReadData)),   5u,   5u,0x0002u} /* DID: 0xF1AB */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AB_ECU_Delivery_Assembly_Part_Number_Geely_ASCII_part_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF1AB */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AB_ECU_Delivery_Assembly_Part_Number_Geely_BCD_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1AB */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AB_ECU_Delivery_Assembly_Part_Number_Geely_ASCII_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1AB */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_DID_F1AE_1_Total_number_of_ECU_Software_Part_Numbers_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF1AE */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_BCD_part_ReadData)),   5u,   5u,0x0002u} /* DID: 0xF1AE */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_ASCII_part_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF1AE */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_DID_F1AE_1_Total_number_of_ECU_Software_Part_Numbers_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1AE */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_BCD_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1AE */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_ASCII_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1AE */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_DID_F1AF_1_Total_number_of_ECU_Software_Part_Numbers_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF1AF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_ReadData)),   5u,   5u,0x0002u} /* DID: 0xF1AF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF1AF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_001_ReadData)),   5u,   5u,0x0002u} /* DID: 0xF1AF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_001_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF1AF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_002_ReadData)),   5u,   5u,0x0002u} /* DID: 0xF1AF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_002_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF1AF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_003_ReadData)),   5u,   5u,0x0002u} /* DID: 0xF1AF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_003_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF1AF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_DID_F1AF_1_Total_number_of_ECU_Software_Part_Numbers_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1AF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1AF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1AF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_001_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1AF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_001_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1AF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_002_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1AF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_002_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1AF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_003_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1AF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_003_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1AF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! RID properties */
CONST(Dcm_CfgRidMgrRidInfoType, DCM_CONST) Dcm_CfgRidMgrRidInfo[6]=
{
   {    0u,   5u,0x01u, 0u} /* RID: 0x0206 */
  ,{    1u,   4u,0x07u, 0u} /* RID: 0x3065 */
  ,{    4u,   4u,0x07u, 0u} /* RID: 0x4001 */
  ,{    7u,   4u,0x07u, 0u} /* RID: 0x400D */
  ,{   10u,   4u,0x07u, 0u} /* RID: 0x400E */
  ,{   13u,   2u,0x07u, 0u} /* RID: 0x400F */
};
/*! RID operation properties */
CONST(Dcm_CfgRidMgrOpInfoType, DCM_CONST) Dcm_CfgRidMgrOpInfo[16]=
{
   { ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0206_Start)),   0u,   0u,   2u,   2u, 9u} /* RID: 0x0206 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_3065_Start)),   1u,   1u,   1u,   1u, 9u} /* RID: 0x3065 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_P_Lock_Stop)),   0u,   0u,   1u,   1u, 3u} /* RID: 0x3065 */                                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_3065_RequestResults)),   0u,   0u,   2u,   2u, 9u} /* RID: 0x3065 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Starter_Generator_Position_Sensors_Calibration_Start)),   0u,   0u,   1u,   1u, 3u} /* RID: 0x4001 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Starter_Generator_Position_Sensors_Calibration_Stop)),   0u,   0u,   1u,   1u, 3u} /* RID: 0x4001 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_4001_RequestResults)),   0u,   0u,   3u,   3u, 9u} /* RID: 0x4001 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_400D_Start)),   3u,   3u,   3u,   3u, 9u} /* RID: 0x400D */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_Reserved_1_Stop)),   0u,   0u,   1u,   1u, 3u} /* RID: 0x400D */                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_400D_RequestResults)),   0u,   0u,   3u,   3u, 9u} /* RID: 0x400D */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_400E_Start)),   3u,   3u,   3u,   3u, 9u} /* RID: 0x400E */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_Reserved_2_Stop)),   0u,   0u,   1u,   1u, 3u} /* RID: 0x400E */                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_400E_RequestResults)),   0u,   0u,   3u,   3u, 9u} /* RID: 0x400E */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_400F_Start)),   3u,   3u,   3u,   3u, 9u} /* RID: 0x400F */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_Reserved_3_Stop)),   0u,   0u,   1u,   1u, 3u} /* RID: 0x400F */                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_400F_RequestResults)),   0u,   0u,   3u,   3u, 9u} /* RID: 0x400F */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! DCM service initializers */
CONST(Dcm_DiagSvcInitFuncType, DCM_CONST) Dcm_CfgDiagSvcInitializers[2]=
{
   Dcm_Service27Init
  ,NULL_PTR /* end marker */
};
/*! DCM service properties */
CONST(Dcm_CfgDiagServiceInfoType, DCM_CONST) Dcm_CfgDiagServiceInfo[10]=
{
   { Dcm_Service10Processor,0x01u, 1u,   1u,   2u, 0u, 0u} /* SID: 0x10 */
  ,{ Dcm_Service11Processor,0x01u, 1u,   3u,   4u, 0u, 0u} /* SID: 0x11 */
  ,{ Dcm_Service14Processor,0x00u, 3u,   0u,   0u, 0u, 0u} /* SID: 0x14 */
  ,{ Dcm_Service19Processor,0x01u, 1u,   5u,   0u, 2u, 0u} /* SID: 0x19 */
  ,{ Dcm_Service22Processor,0x00u, 2u,   0u,   0u, 0u, 0u} /* SID: 0x22 */
  ,{ Dcm_Service27Processor,0x03u, 1u,   6u,   0u, 0u, 0u} /* SID: 0x27 */
  ,{ Dcm_Service2EProcessor,0x00u, 3u,   0u,   0u, 0u, 0u} /* SID: 0x2E */
  ,{ Dcm_Service31Processor,0x01u, 3u,   0u,   0u, 0u, 0u} /* SID: 0x31 */
  ,{ Dcm_Service3EProcessor,0x01u, 1u,   0u,   0u, 0u, 0u} /* SID: 0x3E */
  ,{ Dcm_RepeaterDeadEnd,0x00u, 0u,   0u,   0u, 0u, 0u} /* Dcm_RepeaterDeadEnd */
};
/*! Indirection from diag service info to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgDiagSvcIdExecPrecondTable[9]=
{
      0u /* SID: 0x10 */
  ,   0u /* SID: 0x11 */
  ,   1u /* SID: 0x14 */
  ,   1u /* SID: 0x19 */
  ,   0u /* SID: 0x22 */
  ,   2u /* SID: 0x27 */
  ,   2u /* SID: 0x2E */
  ,   1u /* SID: 0x31 */
  ,   0u /* SID: 0x3E */
};
/*! DCM service post processors */
CONST(Dcm_DiagSvcConfirmationFuncType, DCM_CONST) Dcm_CfgDiagSvcPostProcessors[7]=
{
   Dcm_ServiceNoPostProcessor
  ,Dcm_Service10PostProcessor
  ,Dcm_Service10FastPostProcessor
  ,Dcm_Service11PostProcessor
  ,Dcm_Service11FastPostProcessor
  ,Dcm_Service19PostProcessor
  ,Dcm_Service27PostProcessor
};
/*! DCM service paged buffer updater */
CONST(Dcm_DiagSvcUpdateFuncType, DCM_CONST) Dcm_CfgDiagSvcUpdaters[3]=
{
   Dcm_ServiceNoUpdater
  ,Dcm_PagedBufferDataPadding
  ,Dcm_Service19Updater
};
/*! DCM service paged buffer canceller */
CONST(Dcm_DiagSvcCancelFuncType, DCM_CONST) Dcm_CfgDiagSvcCancellers[1]=
{
   Dcm_ServiceNoCancel
};
/*! Service 0x10 sub-service properties table  */
CONST(Dcm_CfgSvc10SubFuncInfoType, DCM_CONST) Dcm_CfgSvc10SubFuncInfo[3]=
{
   { { 50u, 500u}} /* Session ID: 0x01 */
  ,{ { 50u, 500u}} /* Session ID: 0x02 */
  ,{ { 50u, 500u}} /* Session ID: 0x03 */
};
/*! Indirection from service 0x10 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc10SubFuncExecPrecondTable[3]=
{
      0u /* Session ID: 0x01 */
  ,   0u /* Session ID: 0x02 */
  ,   1u /* Session ID: 0x03 */
};
/*! Service 0x11 sub-service properties table  */
CONST(Dcm_CfgSvc11SubFuncInfoType, DCM_CONST) Dcm_CfgSvc11SubFuncInfo[1]=
{
   { Dcm_Service11_01Processor} /* SF: 0x01 */
};
/*! Indirection from service 0x11 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc11SubFuncExecPrecondTable[1]=
{
      0u /* SF: 0x01 */
};
/*! Service 0x19 sub-service properties table  */
CONST(Dcm_CfgSvc19SubFuncInfoType, DCM_CONST) Dcm_CfgSvc19SubFuncInfo[5]=
{
   { Dcm_Service19_02Processor, 2u} /* SF: 0x02 */
  ,{ Dcm_Service19_03Processor, 1u} /* SF: 0x03 */
  ,{ Dcm_Service19_04Processor, 5u} /* SF: 0x04 */
  ,{ Dcm_Service19_06Processor, 5u} /* SF: 0x06 */
  ,{ Dcm_Service19_0AProcessor, 1u} /* SF: 0x0A */
};
/*! Indirection from service 0x19 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc19SubFuncExecPrecondTable[5]=
{
      1u /* SF: 0x02 */
  ,   1u /* SF: 0x03 */
  ,   1u /* SF: 0x04 */
  ,   1u /* SF: 0x06 */
  ,   1u /* SF: 0x0A */
};
/*! Service 0x27 sub-service properties table  */
CONST(Dcm_CfgSvc27SubFuncInfoType, DCM_CONST) Dcm_CfgSvc27SubFuncInfo[4]=
{
   { Dcm_Service27SeedProcessor,   1u} /* SF: 0x05 */                                                                                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ Dcm_Service27KeyProcessor,   4u} /* SF: 0x06 */                                                                                                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ Dcm_Service27SeedProcessor,   1u} /* SF: 0x11 */                                                                                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ Dcm_Service27KeyProcessor,   4u} /* SF: 0x12 */                                                                                                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! Service 0x27 security level properties table  */
CONST(Dcm_CfgSvc27SecLevelInfoType, DCM_CONST) Dcm_CfgSvc27SecLevelInfo[2]=
{
   { ((Dcm_Svc27GetSeedFuncType)(Rte_Call_SecurityAccess_CommonUnlock_Level_3_GetSeed)),Rte_Call_SecurityAccess_CommonUnlock_Level_3_CompareKey,   3u, 0u} /* SecLvl: CommonUnlock_Level_3 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_Svc27GetSeedFuncType)(Rte_Call_SecurityAccess_ImmoUnlocked_Level_4_GetSeed)),Rte_Call_SecurityAccess_ImmoUnlocked_Level_4_CompareKey,   3u, 0u} /* SecLvl: ImmoUnlocked_Level_4 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! Indirection from service 0x27 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc27SubFuncExecPrecondTable[4]=
{
      2u /* SF: 0x05 */
  ,   2u /* SF: 0x06 */
  ,   2u /* SF: 0x11 */
  ,   2u /* SF: 0x12 */
};
/*! Indirection from service 0x3E sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc3ESubFuncExecPrecondTable[1]=
{
      0u /* SF: 0x00 */
};
#define DCM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/* ----------------------------------------------
 ~&&&   Module call-out implementations
---------------------------------------------- */
#define DCM_START_SEC_CALLOUT_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/***********************************************************************************************************************
 *  Dcm_RidMgr_0206_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0206_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_Check_programming_pre_conditions_Start(OpStatus
                                                                        , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                     /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                        , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                     /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                        , ErrorCode
                                                                        );                                                                           /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_3065_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_3065_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInIn_P_Lock_State_Request;

  dataInIn_P_Lock_State_Request = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_P_Lock_Start(dataInIn_P_Lock_State_Request
                                              , OpStatus
                                              , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                                               /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                              , ErrorCode
                                              );                                                                                                     /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_3065_RequestResults()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_3065_RequestResults(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_P_Lock_RequestResults(OpStatus
                                                       , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                                      /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                       , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                                      /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                       , ErrorCode
                                                       );                                                                                            /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_4001_RequestResults()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_4001_RequestResults(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint16 dataOutOut_RID_4001_RequestResult_Pr_3_Calibration_result;
  Std_ReturnType stdReturn;

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  stdReturn = Rte_Call_RoutineServices_Starter_Generator_Position_Sensors_Calibration_RequestResults(OpStatus
                                                                                                    , Dcm_DiagGetResDataRel(pMsgContext, 0u)         /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                                                    , &dataOutOut_RID_4001_RequestResult_Pr_3_Calibration_result
                                                                                                    , ErrorCode
                                                                                                    );                                               /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
  if (E_OK == stdReturn)
  {
    {
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 1u, Dcm_UtiGetHiByte(dataOutOut_RID_4001_RequestResult_Pr_3_Calibration_result));                       /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 2u, Dcm_UtiGetLoByte(dataOutOut_RID_4001_RequestResult_Pr_3_Calibration_result));                       /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
    }
  }
  return stdReturn;
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_400D_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_400D_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInIn_InputData1;
  uint8 dataInIn_InputData2;
  uint8 dataInIn_InputData3;

  dataInIn_InputData1 = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));
  dataInIn_InputData2 = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 1u)));
  dataInIn_InputData3 = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 2u)));

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_Routine_Reserved_1_Start(dataInIn_InputData1
                                                          , dataInIn_InputData2
                                                          , dataInIn_InputData3
                                                          , OpStatus
                                                          , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                                   /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                          , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                                   /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                          , Dcm_DiagGetResDataRel(pMsgContext, 2u)                                                   /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                          , ErrorCode
                                                          );                                                                                         /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_400D_RequestResults()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_400D_RequestResults(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_Routine_Reserved_1_RequestResults(OpStatus
                                                                   , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                          /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                   , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                          /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                   , Dcm_DiagGetResDataRel(pMsgContext, 2u)                                          /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                   , ErrorCode
                                                                   );                                                                                /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_400E_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_400E_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInIn_InputData1;
  uint8 dataInIn_InputData2;
  uint8 dataInIn_InputData3;

  dataInIn_InputData1 = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));
  dataInIn_InputData2 = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 1u)));
  dataInIn_InputData3 = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 2u)));

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_Routine_Reserved_2_Start(dataInIn_InputData1
                                                          , dataInIn_InputData2
                                                          , dataInIn_InputData3
                                                          , OpStatus
                                                          , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                                   /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                          , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                                   /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                          , Dcm_DiagGetResDataRel(pMsgContext, 2u)                                                   /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                          , ErrorCode
                                                          );                                                                                         /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_400E_RequestResults()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_400E_RequestResults(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_Routine_Reserved_2_RequestResults(OpStatus
                                                                   , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                          /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                   , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                          /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                   , Dcm_DiagGetResDataRel(pMsgContext, 2u)                                          /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                   , ErrorCode
                                                                   );                                                                                /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_400F_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_400F_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInIn_InputData1;
  uint8 dataInIn_InputData2;
  uint8 dataInIn_InputData3;

  dataInIn_InputData1 = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));
  dataInIn_InputData2 = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 1u)));
  dataInIn_InputData3 = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 2u)));

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_Routine_Reserved_3_Start(dataInIn_InputData1
                                                          , dataInIn_InputData2
                                                          , dataInIn_InputData3
                                                          , OpStatus
                                                          , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                                   /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                          , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                                   /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                          , Dcm_DiagGetResDataRel(pMsgContext, 2u)                                                   /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                          , ErrorCode
                                                          );                                                                                         /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_400F_RequestResults()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_400F_RequestResults(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_Routine_Reserved_3_RequestResults(OpStatus
                                                                   , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                          /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                   , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                          /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                   , Dcm_DiagGetResDataRel(pMsgContext, 2u)                                          /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                   , ErrorCode
                                                                   );                                                                                /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_ServiceNoPostProcessor()
***********************************************************************************************************************/
/* Implements CDD Dcm_ServiceNoPostProcessor() */
DCM_LOCAL FUNC(void, DCM_CALLOUT_CODE) Dcm_ServiceNoPostProcessor(Dcm_ConfirmationStatusType status)
{
  DCM_IGNORE_UNREF_PARAM(status);                                                                                                                    /* PRQA S 3112 */ /* MD_Dcm_3112 */
}
/***********************************************************************************************************************
 *  Dcm_ServiceNoUpdater()
***********************************************************************************************************************/
/* Implements CDD Dcm_ServiceNoUpdater() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_ServiceNoUpdater(Dcm_OpStatusType opStatus, Dcm_DiagDataContextPtrType pDataContext, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  DCM_IGNORE_UNREF_PARAM(opStatus);                                                                                                                  /* PRQA S 3112 */ /* MD_Dcm_3112 */
  DCM_IGNORE_UNREF_PARAM(pDataContext);                                                                                                              /* PRQA S 3112 */ /* MD_Dcm_3112 */
  DCM_IGNORE_UNREF_PARAM(ErrorCode);                                                                                                                 /* PRQA S 3112 */ /* MD_Dcm_3112 */
  return E_NOT_OK;
}
/***********************************************************************************************************************
 *  Dcm_ServiceNoCancel()
***********************************************************************************************************************/
/* Implements CDD Dcm_ServiceNoCancel() */
DCM_LOCAL FUNC(void, DCM_CALLOUT_CODE) Dcm_ServiceNoCancel(Dcm_DiagDataContextPtrType pDataContext)                                                  /* PRQA S 3673 */ /* MD_Dcm_Design_3673 */
{
  DCM_IGNORE_UNREF_PARAM(pDataContext);                                                                                                              /* PRQA S 3112 */ /* MD_Dcm_3112 */
  /* nothing to do */
}
#define DCM_STOP_SEC_CALLOUT_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/* ********************************************************************************************************************
 * END OF FILE: Dcm_Lcfg.c
 * ******************************************************************************************************************** */

