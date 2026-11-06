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
 *            Module: BswM
 *           Program: MSR_Vector_SLP4
 *          Customer: Aptiv (China) Technology Company Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397 
 *    License Scope : The usage is restricted to CBD2000642_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: BswM_Lcfg.c
 *   Generation Time: 2026-11-06 09:19:26
 *           Project: IEM_TC387_BRS - Version 1
 *          Delivery: CBD2000642_D01
 *      Tool Version: DaVinci Configurator  5.22.45 SP3
 *
 *
 *********************************************************************************************************************/

#define BSWM_LCFG_SOURCE

/* -----------------------------------------------------------------------------
    &&&~ MISRA JUSTIFICATION
 ----------------------------------------------------------------------------- */
/* PRQA S 0785, 0786 EOF */ /* MD_CSL_DistinctIdentifiers */

/* -----------------------------------------------------------------------------
    &&&~ INCLUDE
 ----------------------------------------------------------------------------- */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
#include "BswM.h"
#include "BswM_Private_Cfg.h"
#include "SchM_BswM.h"

#if !defined (BSWM_LOCAL)
# define BSWM_LOCAL static
#endif

#if !defined (BSWM_LOCAL_INLINE) /* COV_BSWM_LOCAL_INLINE */
# define BSWM_LOCAL_INLINE LOCAL_INLINE
#endif



#define BSWM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ LOCAL FUNCTION DECLARATIONS
 ----------------------------------------------------------------------------- */

/**********************************************************************************************************************
 *  BswM_UpdateRuleStates()
 **********************************************************************************************************************/
/*!
 * \brief       Updates the state of a rule.
 * \details     Set rule state of passed ruleId to passed state.
 * \param[in]   ruleId         Id of the rule to update.
 * \param[in]   state          New state of the rule.
 * \param[in]   partitionIdx   Current partition context.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_UpdateRuleStates(BswM_SizeOfRuleStatesType ruleId, 
                                                              BswM_RuleStatesType state,
                                                              BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);


/*! \addtogroup    BswMGeneratedFunctions BswM Generated Functions
 * \{
 */
/* PRQA S 0779 FUNCTIONDECLARATIONS */ /* MD_MSR_Rule5.2_0779 */

/**********************************************************************************************************************
 *  Init
 *********************************************************************************************************************/
/*! \defgroup    Init
 * \{
 */
/**********************************************************************************************************************
 *  BswM_InitGenVarAndInitAL_BSWM_SINGLEPARTITION
 *********************************************************************************************************************/
/*!
 * \brief       Initializes BswM.
 * \details     Part of the BswM_Init. Initializes all generated variables and executes action lists for initialization.
 * \pre         -
 * \reentrant   FALSE
 * \synchronous TRUE
 * \note        May only be called by BswM_Init.
 */
BSWM_LOCAL FUNC(void, BSWM_CODE) BswM_InitGenVarAndInitAL_BSWM_SINGLEPARTITION(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
/*! \} */ /* End of group Init */

/**********************************************************************************************************************
 *  BswMActionListFunctions
 *********************************************************************************************************************/
/*! \defgroup    BswMActionListFunctions
 * \{
 */

/*!
 * \{
 * \brief       Execute actions of action list.
 * \details     Generated function which depends on the configuration. Executes the actions of the action list in the
 *              configured order.
 * \return      E_OK      Action list was completely executed.
 * \return      E_NOT_OK  Action list was aborted because an action failed.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_EnterRun(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_ProgReset(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
/*! \} */ /* End of sharing description for BswMActionListFunctions */
/*! \} */ /* End of group BswMActionListFunctions */

/**********************************************************************************************************************
 *  BswMRuleFunctions
 *********************************************************************************************************************/
/*! \defgroup    BswMRuleFunctions
 * \{
 */

/*!
 * \{
 * \brief       Arbitrates the configured rule.
 * \details     Generated function which depends on the configuration. Arbitrates the rule and returns the action list
 *              which shall be executed.
 * \return      ID of action list to execute (BSWM_NO_ACTIONLIST if no ActionList shall be executed)
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_RULE_EnterRun(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_RULE_ProgReset(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
/*! \} */ /* End of sharing description for BswMRuleFunctions */
/*! \} */ /* End of group BswMRuleFunctions */
/* PRQA L:FUNCTIONDECLARATIONS */
/*! \} */ /* End of group BswMGeneratedFunctions */

#define BSWM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"


/* -----------------------------------------------------------------------------
    &&&~ LOCAL VARIABLE DECLARATIONS
 ----------------------------------------------------------------------------- */

/* PRQA S 0779 VARIABLEDECLARATIONS */ /* MD_MSR_Rule5.2_0779 */ 


#define BSWM_START_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"

VAR(uint8, BSWM_VAR_NOINIT) BswM_PduGroupControlInvocation;

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"


#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"

/* PRQA S 3218 3 */ /* MD_BswM_3218 */
VAR(Com_IpduGroupVector, BSWM_VAR_NOINIT) BswM_ComIPduGroupReinitState;
VAR(Com_IpduGroupVector, BSWM_VAR_NOINIT) BswM_ComRxIPduGroupDMState;

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"

/* PRQA L:VARIABLEDECLARATIONS */

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA PROTOTYPES
**********************************************************************************************************************/



/**********************************************************************************************************************
 *  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA
**********************************************************************************************************************/


/* PRQA S 0310 GLOBALDATADECLARATIONS */ /* MD_BSWM_0310 */ 
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  BswM_ActionLists
**********************************************************************************************************************/
/** 
  \var    BswM_ActionLists
  \details
  Element    Description
  FctPtr     Pointer to the array list function.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(BswM_ActionListsType, BSWM_CONST) BswM_ActionLists[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    FctPtr                              Comment                   Referable Keys */
  { /*     0 */ BswM_ActionList_AL_EnterRun  },  /* [Priority: 0] */  /* [AL_AL_EnterRun] */
  { /*     1 */ BswM_ActionList_AL_ProgReset }   /* [Priority: 0] */  /* [AL_AL_ProgReset] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_InitGenVarAndInitAL
**********************************************************************************************************************/
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(BswM_InitGenVarAndInitALType, BSWM_CONST) BswM_InitGenVarAndInitAL[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     InitGenVarAndInitAL                            */
  /*     0 */ BswM_InitGenVarAndInitAL_BSWM_SINGLEPARTITION 
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_PartitionIdentifiers
**********************************************************************************************************************/
/** 
  \var    BswM_PartitionIdentifiers
  \brief  the partition contex in Config
  \details
  Element                 Description
  PartitionSNV        
  PCPartitionConfigIdx    the index of the 1:1 relation pointing to BswM_PCPartitionConfig
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(BswM_PartitionIdentifiersType, BSWM_CONST) BswM_PartitionIdentifiers[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PartitionSNV          PCPartitionConfigIdx */
  { /*     0 */ BSWM_SINGLEPARTITION,                   0u }
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_Rules
**********************************************************************************************************************/
/** 
  \var    BswM_Rules
  \details
  Element          Description
  Id               External id of rule.
  RuleStatesIdx    the index of the 1:1 relation pointing to BswM_RuleStates
  FctPtr           Pointer to the rule function which does the arbitration.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(BswM_RulesType, BSWM_CONST) BswM_Rules[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Id  RuleStatesIdx  FctPtr                          Referable Keys */
  { /*     0 */ 0u,            0u, BswM_Rule_RULE_EnterRun  },  /* [R_RULE_EnterRun, MRP_MRP_EcuMIndication] */
  { /*     1 */ 1u,            1u, BswM_Rule_RULE_ProgReset }   /* [R_RULE_ProgReset, MRP_MRP_DcmApplicationUpdated] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ActionListQueue
**********************************************************************************************************************/
/** 
  \var    BswM_ActionListQueue
  \brief  Variable to store action lists which shall be executed.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_ActionListQueueUType, BSWM_VAR_NOINIT) BswM_ActionListQueue;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [AL_AL_EnterRun] */
  /*     1 */  /* [AL_AL_ProgReset] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_DcmApplUpdateState
**********************************************************************************************************************/
/** 
  \var    BswM_DcmApplUpdateState
  \brief  Variable to store the current mode of the BswMDcmApplicationUpdatedIndication mode request port.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_DcmApplUpdateStateType, BSWM_VAR_NOINIT) BswM_DcmApplUpdateState;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_EcuMModeState
**********************************************************************************************************************/
/** 
  \var    BswM_EcuMModeState
  \brief  Variable to store the current mode of the BswMEcuMIndication mode request port.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_EcuMModeStateType, BSWM_VAR_NOINIT) BswM_EcuMModeState;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ForcedActionListPriority
**********************************************************************************************************************/
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_ForcedActionListPriorityType, BSWM_VAR_NOINIT) BswM_ForcedActionListPriority;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_Initialized
**********************************************************************************************************************/
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_InitializedType, BSWM_VAR_NOINIT) BswM_Initialized;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ModeRequestQueue
**********************************************************************************************************************/
/** 
  \var    BswM_ModeRequestQueue
  \brief  Variable to store an immediate mode request which must be queued because of a current active arbitration.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_ModeRequestQueueType, BSWM_VAR_NOINIT) BswM_ModeRequestQueue[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [MRP_MRP_DcmApplicationUpdated, DCM_APPL_UPDATE_0] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_QueueSemaphore
**********************************************************************************************************************/
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_QueueSemaphoreType, BSWM_VAR_NOINIT) BswM_QueueSemaphore;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_QueueWritten
**********************************************************************************************************************/
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_QueueWrittenType, BSWM_VAR_NOINIT) BswM_QueueWritten;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_RuleStates
**********************************************************************************************************************/
/** 
  \var    BswM_RuleStates
  \brief  Stores the last execution state of the rule.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_RuleStatesUType, BSWM_VAR_NOINIT) BswM_RuleStates;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [R_RULE_EnterRun] */
  /*     1 */  /* [R_RULE_ProgReset] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/* PRQA L:GLOBALDATADECLARATIONS */

#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"




VAR(boolean, BSWM_VAR_NOINIT) BswM_PreInitialized;
#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"


#define BSWM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ FUNCTIONS
 ----------------------------------------------------------------------------- */
 
/**********************************************************************************************************************
 *  BswM_ExecuteIpduGroupControl()
 **********************************************************************************************************************/
FUNC(void, BSWM_CODE) BswM_ExecuteIpduGroupControl(void)
{
  Com_IpduGroupVector ipduGroupReinitState;
  Com_IpduGroupVector dmState;
  uint16 iCnt;
  uint8 controlInvocation = BSWM_GROUPCONTROL_IDLE;

  SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  if(BswM_PduGroupControlInvocation != BSWM_GROUPCONTROL_IDLE)
  {
    if((BswM_PduGroupControlInvocation & BSWM_GROUPCONTROL_REINIT) != 0u)
    {
      iCnt = BSWM_IPDUGROUPVECTORSIZE;
      while(iCnt-- > (uint16)0x0000) /* PRQA S 3440 */ /* MD_BswM_3440 */
      {
        ipduGroupReinitState[iCnt] = BswM_ComIPduGroupReinitState[iCnt]; /* SBSW_BSWM_SETIPDUGROUPVECTOR */
      }
    }
    /* Check if also PDU control actions without reinitialization flag were performed.
     * If yes, execute them too and update BswM_ComIPduGroupReinitState */
    if((BswM_PduGroupControlInvocation & BSWM_GROUPCONTROL_DM) != 0u)
    {
      iCnt = BSWM_IPDUGROUPVECTORSIZE;
      while(iCnt-- > (uint16)0x0000) /* PRQA S 3440 */ /* MD_BswM_3440 */
      {
        dmState[iCnt] = BswM_ComRxIPduGroupDMState[iCnt]; /* SBSW_BSWM_SETIPDUGROUPVECTOR */
      }
    }
    controlInvocation = BswM_PduGroupControlInvocation;
    BswM_PduGroupControlInvocation = BSWM_GROUPCONTROL_IDLE;
  }
  SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  if(controlInvocation != BSWM_GROUPCONTROL_IDLE)
  {
    if((controlInvocation & BSWM_GROUPCONTROL_REINIT) != 0u)
    {
      Com_IpduGroupControl(ipduGroupReinitState, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
    }
    if((controlInvocation & BSWM_GROUPCONTROL_DM) != 0u)
    {
      Com_ReceptionDMControl(dmState); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
    }
  }
} /* PRQA S 6010, 6030 */ /* MD_MSR_STPTH, MD_MSR_STCYC */


/**********************************************************************************************************************
 *  BswM_UpdateRuleStates()
 **********************************************************************************************************************/
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_UpdateRuleStates(BswM_SizeOfRuleStatesType ruleId, 
                                                                   BswM_RuleStatesType state,
                                                                   BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  if (ruleId < BswM_GetSizeOfRuleStates(partitionIdx))
  {
    BswM_SetRuleStates(ruleId, state, partitionIdx); /* SBSW_BSWM_SETRULESTATE */
  }
  
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
}


/**********************************************************************************************************************
 *  BswM_InitGenVarAndInitAL_BSWM_SINGLEPARTITION
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(void, BSWM_CODE) BswM_InitGenVarAndInitAL_BSWM_SINGLEPARTITION(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{

  BswM_PduGroupControlInvocation = BSWM_GROUPCONTROL_IDLE;

  /* PRQA S 3109 COMCLEARIPDU */ /* MD_BswM_3109 */
  Com_ClearIpduGroupVector(BswM_ComIPduGroupReinitState); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  Com_ClearIpduGroupVector(BswM_ComRxIPduGroupDMState); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMCLEARIPDU */
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
}

/**********************************************************************************************************************
 *  BswMActionListFunctions
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  BswM_ActionList_AL_EnterRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_EnterRun(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  ComM_CommunicationAllowed(ComMConf_ComMChannel_PropulsionCAN_IEM_19020f5a, TRUE);
  (void)ComM_RequestComMode(ComMConf_ComMUser_PropulsionCAN_IEM_04f8de22, COMM_FULL_COMMUNICATION);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_RxMPG_PropulsionCAN_aad5aa75, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduReinitGroup(ComConf_ComIPduGroup_RxMPG_PropulsionCAN_aad5aa75, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_RxMPG_PropulsionCAN_aad5aa75, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_RxSPG_PropulsionCAN_fca0cb9e, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduReinitGroup(ComConf_ComIPduGroup_RxSPG_PropulsionCAN_fca0cb9e, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_RxSPG_PropulsionCAN_fca0cb9e, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_TxMPG_PropulsionCAN_3709a166, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduReinitGroup(ComConf_ComIPduGroup_TxMPG_PropulsionCAN_3709a166, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_TxMPG_PropulsionCAN_3709a166, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_TxSPG_PropulsionCAN_617cc08d, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduReinitGroup(ComConf_ComIPduGroup_TxSPG_PropulsionCAN_617cc08d, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_TxSPG_PropulsionCAN_617cc08d, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_REINIT);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_RxMPG_PropulsionCAN_aad5aa75, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_RxSPG_PropulsionCAN_fca0cb9e, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkDmControlInvocation();
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_ProgReset
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_ProgReset(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Appl_BswM_ProgRequest();
  /*lint -restore */
  (void)EcuM_SelectShutdownTarget(ECUM_STATE_RESET, EcuMConf_EcuMResetMode_ECUM_RESET_MCU);
  (void)EcuM_GoDown(BSWM_MODULE_ID);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswMRuleFunctions
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  BswM_Rule_RULE_EnterRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_RULE_EnterRun(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  /* Evaluate logical expression EXP_EcuM_RUN. */
  if(BswM_GetEcuMModeState(0u) == ECUM_STATE_RUN)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_RULE_EnterRun, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_RULE_EnterRun, BSWM_TRUE, partitionIdx);
      /* Return triggered action list BswM_ActionList_AL_EnterRun. */
      retVal = BSWM_ID_AL_AL_EnterRun;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_RULE_EnterRun, BSWM_FALSE, partitionIdx);
    /* No false action list configured. */
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_RULE_ProgReset
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_RULE_ProgReset(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  /* Evaluate logical expression EXP_DcmApplicationUpdated. */
  if(BswM_GetDcmApplUpdateState(0u) == TRUE)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_RULE_ProgReset, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_RULE_ProgReset, BSWM_TRUE, partitionIdx);
      /* Return triggered action list BswM_ActionList_AL_ProgReset. */
      retVal = BSWM_ID_AL_AL_ProgReset;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_RULE_ProgReset, BSWM_FALSE, partitionIdx);
    /* No false action list configured. */
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}


#define BSWM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"

