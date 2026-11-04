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
 *  Ordered Derivat.: Aurix 2G/TC397 B-Step
 *    License Scope : The usage is restricted to CBD1900078_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: BswM_Cfg.h
 *   Generation Time: 2026-10-30 12:31:05
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


#if !defined(BSWM_CFG_H)
#define BSWM_CFG_H

/* -----------------------------------------------------------------------------
    &&&~ INCLUDE
 ----------------------------------------------------------------------------- */
#include "Std_Types.h"
#include "ComStack_Types.h" 
#include "BswM_ComM.h"
#include "BswM_CanSM.h"
#include "BswM_Dcm.h"
#include "BswM_EcuM.h"


/* -----------------------------------------------------------------------------
    &&&~ GENERAL DEFINES
 ----------------------------------------------------------------------------- */
#ifndef BSWM_USE_DUMMY_STATEMENT
#define BSWM_USE_DUMMY_STATEMENT STD_ON /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef BSWM_DUMMY_STATEMENT
#define BSWM_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef BSWM_DUMMY_STATEMENT_CONST
#define BSWM_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef BSWM_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define BSWM_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef BSWM_ATOMIC_VARIABLE_ACCESS
#define BSWM_ATOMIC_VARIABLE_ACCESS 32u /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef BSWM_PROCESSOR_TC397_STEPB
#define BSWM_PROCESSOR_TC397_STEPB
#endif
#ifndef BSWM_COMP_TASKING
#define BSWM_COMP_TASKING
#endif
#ifndef BSWM_GEN_GENERATOR_MSR
#define BSWM_GEN_GENERATOR_MSR
#endif
#ifndef BSWM_CPUTYPE_BITORDER_LSB2MSB
#define BSWM_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/vSet/vSetPlatform/vSetBitOrder */
#endif
#ifndef BSWM_CONFIGURATION_VARIANT_PRECOMPILE
#define BSWM_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef BSWM_CONFIGURATION_VARIANT_LINKTIME
#define BSWM_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef BSWM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define BSWM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef BSWM_CONFIGURATION_VARIANT
#define BSWM_CONFIGURATION_VARIANT BSWM_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef BSWM_POSTBUILD_VARIANT_SUPPORT
#define BSWM_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


#if !defined (BSWM_DUMMY_STATEMENT)
# define BSWM_DUMMY_STATEMENT(statement) (void)statement
#endif

/* -----------------------------------------------------------------------------
    &&&~ CONFIGURATION DEFINES
 ----------------------------------------------------------------------------- */

/* START of Checksum include for */
/* START of Checksum include for - SysService_Asr4BswMCfg5PrecompileCRC */

#define BSWM_DEV_ERROR_DETECT                STD_ON
#define BSWM_DEV_ERROR_REPORT                STD_ON
#define BSWM_MODE_CHECK                      STD_ON
#define BSWM_ENABLE_CANSM                    STD_ON
#define BSWM_ENABLE_FRSM                     STD_OFF
#define BSWM_ENABLE_LINSM                    STD_OFF
#define BSWM_ENABLE_ETHIF                    STD_OFF
#define BSWM_ENABLE_ETHSM                    STD_OFF
#define BSWM_ENABLE_LINTP                    STD_OFF
#define BSWM_ENABLE_DCM                      STD_ON
#define BSWM_ENABLE_NVM                      STD_OFF
#define BSWM_ENABLE_ECUM                     STD_ON
#define BSWM_ENABLE_COMM                     STD_ON
#define BSWM_ENABLE_J1939DCM                 STD_OFF
#define BSWM_ENABLE_J1939NM                  STD_OFF
#define BSWM_ENABLE_SD                       STD_OFF
#define BSWM_ENABLE_NM                       STD_OFF
#define BSWM_ENABLE_PDUR                     STD_OFF
#define BSWM_ENABLE_WDGM                     STD_OFF
#define BSWM_ENABLE_RULE_CONTROL             STD_OFF
#define BSWM_VERSION_INFO_API                STD_OFF
#define BSWM_COMM_PNC_SUPPORT                STD_ON
#define BSWM_COMM_INITIATE_RESET             STD_OFF
#define BSWM_CHANNEL_COUNT                   1u
#define BSWM_WAKEUP_SOURCE_COUNT             6u
#define BSWM_IPDU_GROUP_CONTROL              STD_OFF
#define BSWM_ECUM_MODE_HANDLING              STD_ON
#define BSWM_MULTIPARTITION                  STD_OFF



/* END of Checksum include for - SysService_Asr4BswMCfg5PrecompileCRC */

/* END of Checksum include for */

/* -----------------------------------------------------------------------------
    &&&~ RULE DEFINES
 ----------------------------------------------------------------------------- */
#define BswMConf_BswMRule_RULE_EnterRun (0) 
#define BswMConf_BswMRule_RULE_ProgReset (1) 


/* -----------------------------------------------------------------------------
    &&&~ GENERIC DEFINES
 ----------------------------------------------------------------------------- */



/* -----------------------------------------------------------------------------
    &&&~ TIMER DEFINES
 ----------------------------------------------------------------------------- */


/* -----------------------------------------------------------------------------
    &&&~ TYPEDEF
 ----------------------------------------------------------------------------- */

typedef uint8 BswM_UserDomainType; /* user domain: CanSM, LinSM... */

/* It is possible to configure any user number from 0 to 65535 */
typedef uint16 BswM_UserType;
typedef uint16 BswM_ModeType;
typedef uint8 BswM_HandleType;
typedef P2FUNC (void, BSWM_CODE, BswM_InitActionFuncType)(void);
typedef P2FUNC (BswM_HandleType, BSWM_CODE, BswM_RuleTableFctPtrType)(void);
typedef P2FUNC (Std_ReturnType, BSWM_CODE, BswM_ActionListFuncType)(void);

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  BswMPCDataSwitches  BswM Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define BSWM_ACTIONLISTPRIORITYQUEUE                                  STD_OFF  /**< Deactivateable: 'BswM_ActionListPriorityQueue' Reason: 'Action List Queue Search Algorithm is not equal to PRIORITY_QUEUE' */
#define BSWM_ACTIONLISTQUEUE                                          STD_ON
#define BSWM_ACTIONLISTS                                              STD_ON
#define BSWM_FCTPTROFACTIONLISTS                                      STD_ON
#define BSWM_PARTITIONOFACTIONLISTS                                   STD_OFF  /**< Deactivateable: 'BswM_ActionLists.Partition' Reason: 'No partitions configured.' */
#define BSWM_CANSMCHANNELMAPPING                                      STD_OFF  /**< Deactivateable: 'BswM_CanSMChannelMapping' Reason: 'No Mode Request for BswMCanSMIndication configured.' */
#define BSWM_EXTERNALIDOFCANSMCHANNELMAPPING                          STD_OFF  /**< Deactivateable: 'BswM_CanSMChannelMapping.ExternalId' Reason: 'No Mode Request for BswMCanSMIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFCANSMCHANNELMAPPING                 STD_OFF  /**< Deactivateable: 'BswM_CanSMChannelMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMCanSMIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFCANSMCHANNELMAPPING               STD_OFF  /**< Deactivateable: 'BswM_CanSMChannelMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMCanSMIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFCANSMCHANNELMAPPING                   STD_OFF  /**< Deactivateable: 'BswM_CanSMChannelMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMCanSMIndication configured.' */
#define BSWM_INITVALUEOFCANSMCHANNELMAPPING                           STD_OFF  /**< Deactivateable: 'BswM_CanSMChannelMapping.InitValue' Reason: 'No Mode Request for BswMCanSMIndication configured.' */
#define BSWM_PARTITIONIDOFCANSMCHANNELMAPPING                         STD_OFF  /**< Deactivateable: 'BswM_CanSMChannelMapping.PartitionId' Reason: 'No Mode Request for BswMCanSMIndication configured.' */
#define BSWM_CANSMCHANNELSTATE                                        STD_OFF  /**< Deactivateable: 'BswM_CanSMChannelState' Reason: 'No Mode Request for BswMCanSMIndication configured.' */
#define BSWM_COMMCHANNELMAPPING                                       STD_OFF  /**< Deactivateable: 'BswM_ComMChannelMapping' Reason: 'No Mode Request for BswMComMIndication configured.' */
#define BSWM_EXTERNALIDOFCOMMCHANNELMAPPING                           STD_OFF  /**< Deactivateable: 'BswM_ComMChannelMapping.ExternalId' Reason: 'No Mode Request for BswMComMIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFCOMMCHANNELMAPPING                  STD_OFF  /**< Deactivateable: 'BswM_ComMChannelMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMComMIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFCOMMCHANNELMAPPING                STD_OFF  /**< Deactivateable: 'BswM_ComMChannelMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMComMIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFCOMMCHANNELMAPPING                    STD_OFF  /**< Deactivateable: 'BswM_ComMChannelMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMComMIndication configured.' */
#define BSWM_INITVALUEOFCOMMCHANNELMAPPING                            STD_OFF  /**< Deactivateable: 'BswM_ComMChannelMapping.InitValue' Reason: 'No Mode Request for BswMComMIndication configured.' */
#define BSWM_PARTITIONIDOFCOMMCHANNELMAPPING                          STD_OFF  /**< Deactivateable: 'BswM_ComMChannelMapping.PartitionId' Reason: 'No Mode Request for BswMComMIndication configured.' */
#define BSWM_COMMCHANNELSTATE                                         STD_OFF  /**< Deactivateable: 'BswM_ComMChannelState' Reason: 'No Mode Request for BswMComMIndication configured.' */
#define BSWM_COMMINITIATERESETMAPPING                                 STD_OFF  /**< Deactivateable: 'BswM_ComMInitiateResetMapping' Reason: 'No Mode Request for BswMComMInitiateReset configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFCOMMINITIATERESETMAPPING            STD_OFF  /**< Deactivateable: 'BswM_ComMInitiateResetMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMComMInitiateReset configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFCOMMINITIATERESETMAPPING          STD_OFF  /**< Deactivateable: 'BswM_ComMInitiateResetMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMComMInitiateReset configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFCOMMINITIATERESETMAPPING              STD_OFF  /**< Deactivateable: 'BswM_ComMInitiateResetMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMComMInitiateReset configured.' */
#define BSWM_INITVALUEOFCOMMINITIATERESETMAPPING                      STD_OFF  /**< Deactivateable: 'BswM_ComMInitiateResetMapping.InitValue' Reason: 'No Mode Request for BswMComMInitiateReset configured.' */
#define BSWM_PARTITIONIDOFCOMMINITIATERESETMAPPING                    STD_OFF  /**< Deactivateable: 'BswM_ComMInitiateResetMapping.PartitionId' Reason: 'No Mode Request for BswMComMInitiateReset configured.' */
#define BSWM_COMMINITIATERESETSTATE                                   STD_OFF  /**< Deactivateable: 'BswM_ComMInitiateResetState' Reason: 'No Mode Request for BswMComMInitiateReset configured.' */
#define BSWM_COMMPNCMAPPING                                           STD_OFF  /**< Deactivateable: 'BswM_ComMPncMapping' Reason: 'No Mode Request for BswMComMPncRequest configured.' */
#define BSWM_EXTERNALIDOFCOMMPNCMAPPING                               STD_OFF  /**< Deactivateable: 'BswM_ComMPncMapping.ExternalId' Reason: 'No Mode Request for BswMComMPncRequest configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFCOMMPNCMAPPING                      STD_OFF  /**< Deactivateable: 'BswM_ComMPncMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMComMPncRequest configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFCOMMPNCMAPPING                    STD_OFF  /**< Deactivateable: 'BswM_ComMPncMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMComMPncRequest configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFCOMMPNCMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_ComMPncMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMComMPncRequest configured.' */
#define BSWM_INITVALUEOFCOMMPNCMAPPING                                STD_OFF  /**< Deactivateable: 'BswM_ComMPncMapping.InitValue' Reason: 'No Mode Request for BswMComMPncRequest configured.' */
#define BSWM_PARTITIONIDOFCOMMPNCMAPPING                              STD_OFF  /**< Deactivateable: 'BswM_ComMPncMapping.PartitionId' Reason: 'No Mode Request for BswMComMPncRequest configured.' */
#define BSWM_COMMPNCSTATE                                             STD_OFF  /**< Deactivateable: 'BswM_ComMPncState' Reason: 'No Mode Request for BswMComMPncRequest configured.' */
#define BSWM_DCMAPPLUPDATEMAPPING                                     STD_ON
#define BSWM_IMMEDIATEUSERENDIDXOFDCMAPPLUPDATEMAPPING                STD_ON
#define BSWM_IMMEDIATEUSERSTARTIDXOFDCMAPPLUPDATEMAPPING              STD_ON
#define BSWM_IMMEDIATEUSERUSEDOFDCMAPPLUPDATEMAPPING                  STD_ON
#define BSWM_INITVALUEOFDCMAPPLUPDATEMAPPING                          STD_ON
#define BSWM_PARTITIONIDOFDCMAPPLUPDATEMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_DcmApplUpdateMapping.PartitionId' Reason: 'No partitions configured.' */
#define BSWM_DCMAPPLUPDATESTATE                                       STD_ON
#define BSWM_DCMCOMMAPPING                                            STD_OFF  /**< Deactivateable: 'BswM_DcmComMapping' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' */
#define BSWM_EXTERNALIDOFDCMCOMMAPPING                                STD_OFF  /**< Deactivateable: 'BswM_DcmComMapping.ExternalId' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFDCMCOMMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_DcmComMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFDCMCOMMAPPING                     STD_OFF  /**< Deactivateable: 'BswM_DcmComMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFDCMCOMMAPPING                         STD_OFF  /**< Deactivateable: 'BswM_DcmComMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' */
#define BSWM_INITVALUEOFDCMCOMMAPPING                                 STD_OFF  /**< Deactivateable: 'BswM_DcmComMapping.InitValue' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' */
#define BSWM_PARTITIONIDOFDCMCOMMAPPING                               STD_OFF  /**< Deactivateable: 'BswM_DcmComMapping.PartitionId' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' */
#define BSWM_DCMCOMSTATE                                              STD_OFF  /**< Deactivateable: 'BswM_DcmComState' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' */
#define BSWM_DEFERREDRULES                                            STD_ON
#define BSWM_RULESIDXOFDEFERREDRULES                                  STD_ON
#define BSWM_ECUMMODEMAPPING                                          STD_ON
#define BSWM_IMMEDIATEUSERENDIDXOFECUMMODEMAPPING                     STD_OFF  /**< Deactivateable: 'BswM_EcuMModeMapping.ImmediateUserEndIdx' Reason: 'the optional indirection is deactivated because ImmediateUserUsedOfEcuMModeMapping is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFECUMMODEMAPPING                   STD_OFF  /**< Deactivateable: 'BswM_EcuMModeMapping.ImmediateUserStartIdx' Reason: 'the optional indirection is deactivated because ImmediateUserUsedOfEcuMModeMapping is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define BSWM_IMMEDIATEUSERUSEDOFECUMMODEMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_EcuMModeMapping.ImmediateUserUsed' Reason: 'the optional indirection is deactivated because ImmediateUserUsedOfEcuMModeMapping is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define BSWM_INITVALUEOFECUMMODEMAPPING                               STD_ON
#define BSWM_PARTITIONIDOFECUMMODEMAPPING                             STD_OFF  /**< Deactivateable: 'BswM_EcuMModeMapping.PartitionId' Reason: 'No partitions configured.' */
#define BSWM_ECUMMODESTATE                                            STD_ON
#define BSWM_ECUMRUNREQUESTMAPPING                                    STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestMapping' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' */
#define BSWM_EXTERNALIDOFECUMRUNREQUESTMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestMapping.ExternalId' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFECUMRUNREQUESTMAPPING               STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFECUMRUNREQUESTMAPPING             STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFECUMRUNREQUESTMAPPING                 STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' */
#define BSWM_INITVALUEOFECUMRUNREQUESTMAPPING                         STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestMapping.InitValue' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' */
#define BSWM_PARTITIONIDOFECUMRUNREQUESTMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestMapping.PartitionId' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' */
#define BSWM_ECUMRUNREQUESTSTATE                                      STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestState' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' */
#define BSWM_ECUMWAKEUPMAPPING                                        STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupMapping' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' */
#define BSWM_EXTERNALIDOFECUMWAKEUPMAPPING                            STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupMapping.ExternalId' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFECUMWAKEUPMAPPING                   STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFECUMWAKEUPMAPPING                 STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFECUMWAKEUPMAPPING                     STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' */
#define BSWM_INITVALUEOFECUMWAKEUPMAPPING                             STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupMapping.InitValue' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' */
#define BSWM_PARTITIONIDOFECUMWAKEUPMAPPING                           STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupMapping.PartitionId' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' */
#define BSWM_ECUMWAKEUPSTATE                                          STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupState' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' */
#define BSWM_ETHIFPORTMAPPING                                         STD_OFF  /**< Deactivateable: 'BswM_EthIfPortMapping' Reason: 'No Mode Request for BswMEthIfPortGroupLinkStateChg configured.' */
#define BSWM_EXTERNALIDOFETHIFPORTMAPPING                             STD_OFF  /**< Deactivateable: 'BswM_EthIfPortMapping.ExternalId' Reason: 'No Mode Request for BswMEthIfPortGroupLinkStateChg configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFETHIFPORTMAPPING                    STD_OFF  /**< Deactivateable: 'BswM_EthIfPortMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMEthIfPortGroupLinkStateChg configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFETHIFPORTMAPPING                  STD_OFF  /**< Deactivateable: 'BswM_EthIfPortMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMEthIfPortGroupLinkStateChg configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFETHIFPORTMAPPING                      STD_OFF  /**< Deactivateable: 'BswM_EthIfPortMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMEthIfPortGroupLinkStateChg configured.' */
#define BSWM_INITVALUEOFETHIFPORTMAPPING                              STD_OFF  /**< Deactivateable: 'BswM_EthIfPortMapping.InitValue' Reason: 'No Mode Request for BswMEthIfPortGroupLinkStateChg configured.' */
#define BSWM_PARTITIONIDOFETHIFPORTMAPPING                            STD_OFF  /**< Deactivateable: 'BswM_EthIfPortMapping.PartitionId' Reason: 'No Mode Request for BswMEthIfPortGroupLinkStateChg configured.' */
#define BSWM_ETHIFPORTSTATE                                           STD_OFF  /**< Deactivateable: 'BswM_EthIfPortState' Reason: 'No Mode Request for BswMEthIfPortGroupLinkStateChg configured.' */
#define BSWM_ETHSMMAPPING                                             STD_OFF  /**< Deactivateable: 'BswM_EthSMMapping' Reason: 'No Mode Request for BswMEthSMIndication configured.' */
#define BSWM_EXTERNALIDOFETHSMMAPPING                                 STD_OFF  /**< Deactivateable: 'BswM_EthSMMapping.ExternalId' Reason: 'No Mode Request for BswMEthSMIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFETHSMMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_EthSMMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMEthSMIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFETHSMMAPPING                      STD_OFF  /**< Deactivateable: 'BswM_EthSMMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMEthSMIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFETHSMMAPPING                          STD_OFF  /**< Deactivateable: 'BswM_EthSMMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMEthSMIndication configured.' */
#define BSWM_INITVALUEOFETHSMMAPPING                                  STD_OFF  /**< Deactivateable: 'BswM_EthSMMapping.InitValue' Reason: 'No Mode Request for BswMEthSMIndication configured.' */
#define BSWM_PARTITIONIDOFETHSMMAPPING                                STD_OFF  /**< Deactivateable: 'BswM_EthSMMapping.PartitionId' Reason: 'No Mode Request for BswMEthSMIndication configured.' */
#define BSWM_ETHSMSTATE                                               STD_OFF  /**< Deactivateable: 'BswM_EthSMState' Reason: 'No Mode Request for BswMEthSMIndication configured.' */
#define BSWM_FINALMAGICNUMBER                                         STD_OFF  /**< Deactivateable: 'BswM_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define BSWM_FORCEDACTIONLISTPRIORITY                                 STD_ON
#define BSWM_FRSMMAPPING                                              STD_OFF  /**< Deactivateable: 'BswM_FrSMMapping' Reason: 'No Mode Request for BswMFrSMIndication configured.' */
#define BSWM_EXTERNALIDOFFRSMMAPPING                                  STD_OFF  /**< Deactivateable: 'BswM_FrSMMapping.ExternalId' Reason: 'No Mode Request for BswMFrSMIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFFRSMMAPPING                         STD_OFF  /**< Deactivateable: 'BswM_FrSMMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMFrSMIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFFRSMMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_FrSMMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMFrSMIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFFRSMMAPPING                           STD_OFF  /**< Deactivateable: 'BswM_FrSMMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMFrSMIndication configured.' */
#define BSWM_INITVALUEOFFRSMMAPPING                                   STD_OFF  /**< Deactivateable: 'BswM_FrSMMapping.InitValue' Reason: 'No Mode Request for BswMFrSMIndication configured.' */
#define BSWM_PARTITIONIDOFFRSMMAPPING                                 STD_OFF  /**< Deactivateable: 'BswM_FrSMMapping.PartitionId' Reason: 'No Mode Request for BswMFrSMIndication configured.' */
#define BSWM_FRSMSTATE                                                STD_OFF  /**< Deactivateable: 'BswM_FrSMState' Reason: 'No Mode Request for BswMFrSMIndication configured.' */
#define BSWM_GENERICMAPPING                                           STD_OFF  /**< Deactivateable: 'BswM_GenericMapping' Reason: 'No Mode Request for BswMGenericRequest configured.' */
#define BSWM_EXTERNALIDOFGENERICMAPPING                               STD_OFF  /**< Deactivateable: 'BswM_GenericMapping.ExternalId' Reason: 'No Mode Request for BswMGenericRequest configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFGENERICMAPPING                      STD_OFF  /**< Deactivateable: 'BswM_GenericMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMGenericRequest configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFGENERICMAPPING                    STD_OFF  /**< Deactivateable: 'BswM_GenericMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMGenericRequest configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFGENERICMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_GenericMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMGenericRequest configured.' */
#define BSWM_INITVALUEOFGENERICMAPPING                                STD_OFF  /**< Deactivateable: 'BswM_GenericMapping.InitValue' Reason: 'No Mode Request for BswMGenericRequest configured.' */
#define BSWM_PARTITIONIDOFGENERICMAPPING                              STD_OFF  /**< Deactivateable: 'BswM_GenericMapping.PartitionId' Reason: 'No Mode Request for BswMGenericRequest configured.' */
#define BSWM_GENERICSTATE                                             STD_OFF  /**< Deactivateable: 'BswM_GenericState' Reason: 'No Mode Request for BswMGenericRequest configured.' */
#define BSWM_IMMEDIATEUSER                                            STD_ON
#define BSWM_FORCEDOFIMMEDIATEUSER                                    STD_ON
#define BSWM_MASKEDBITSOFIMMEDIATEUSER                                STD_ON
#define BSWM_ONINITOFIMMEDIATEUSER                                    STD_OFF  /**< Deactivateable: 'BswM_ImmediateUser.OnInit' Reason: 'the value of BswM_OnInitOfImmediateUser is always 'false' due to this, the array is deactivated.' */
#define BSWM_PARTITIONOFIMMEDIATEUSER                                 STD_OFF  /**< Deactivateable: 'BswM_ImmediateUser.Partition' Reason: 'No partitions configured.' */
#define BSWM_RULESINDENDIDXOFIMMEDIATEUSER                            STD_ON
#define BSWM_RULESINDSTARTIDXOFIMMEDIATEUSER                          STD_ON
#define BSWM_RULESINDUSEDOFIMMEDIATEUSER                              STD_ON
#define BSWM_INITDATAHASHCODE                                         STD_OFF  /**< Deactivateable: 'BswM_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define BSWM_INITIALIZED                                              STD_ON
#define BSWM_J1939DCMMAPPING                                          STD_OFF  /**< Deactivateable: 'BswM_J1939DcmMapping' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFJ1939DCMMAPPING                     STD_OFF  /**< Deactivateable: 'BswM_J1939DcmMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFJ1939DCMMAPPING                   STD_OFF  /**< Deactivateable: 'BswM_J1939DcmMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFJ1939DCMMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_J1939DcmMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' */
#define BSWM_INITVALUEOFJ1939DCMMAPPING                               STD_OFF  /**< Deactivateable: 'BswM_J1939DcmMapping.InitValue' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' */
#define BSWM_PARTITIONIDOFJ1939DCMMAPPING                             STD_OFF  /**< Deactivateable: 'BswM_J1939DcmMapping.PartitionId' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' */
#define BSWM_J1939DCMSTATE                                            STD_OFF  /**< Deactivateable: 'BswM_J1939DcmState' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' */
#define BSWM_J1939NMMAPPING                                           STD_OFF  /**< Deactivateable: 'BswM_J1939NmMapping' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' */
#define BSWM_EXTERNALIDOFJ1939NMMAPPING                               STD_OFF  /**< Deactivateable: 'BswM_J1939NmMapping.ExternalId' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFJ1939NMMAPPING                      STD_OFF  /**< Deactivateable: 'BswM_J1939NmMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFJ1939NMMAPPING                    STD_OFF  /**< Deactivateable: 'BswM_J1939NmMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFJ1939NMMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_J1939NmMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' */
#define BSWM_INITVALUEOFJ1939NMMAPPING                                STD_OFF  /**< Deactivateable: 'BswM_J1939NmMapping.InitValue' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' */
#define BSWM_PARTITIONIDOFJ1939NMMAPPING                              STD_OFF  /**< Deactivateable: 'BswM_J1939NmMapping.PartitionId' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' */
#define BSWM_J1939NMSTATE                                             STD_OFF  /**< Deactivateable: 'BswM_J1939NmState' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' */
#define BSWM_LINSMMAPPING                                             STD_OFF  /**< Deactivateable: 'BswM_LinSMMapping' Reason: 'No Mode Request for BswMLinSMIndication configured.' */
#define BSWM_EXTERNALIDOFLINSMMAPPING                                 STD_OFF  /**< Deactivateable: 'BswM_LinSMMapping.ExternalId' Reason: 'No Mode Request for BswMLinSMIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFLINSMMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_LinSMMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMLinSMIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFLINSMMAPPING                      STD_OFF  /**< Deactivateable: 'BswM_LinSMMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMLinSMIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFLINSMMAPPING                          STD_OFF  /**< Deactivateable: 'BswM_LinSMMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMLinSMIndication configured.' */
#define BSWM_INITVALUEOFLINSMMAPPING                                  STD_OFF  /**< Deactivateable: 'BswM_LinSMMapping.InitValue' Reason: 'No Mode Request for BswMLinSMIndication configured.' */
#define BSWM_PARTITIONIDOFLINSMMAPPING                                STD_OFF  /**< Deactivateable: 'BswM_LinSMMapping.PartitionId' Reason: 'No Mode Request for BswMLinSMIndication configured.' */
#define BSWM_LINSMSTATE                                               STD_OFF  /**< Deactivateable: 'BswM_LinSMState' Reason: 'No Mode Request for BswMLinSMIndication configured.' */
#define BSWM_LINSCHEDULEENDMAPPING                                    STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndMapping' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' */
#define BSWM_EXTERNALIDOFLINSCHEDULEENDMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndMapping.ExternalId' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFLINSCHEDULEENDMAPPING               STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFLINSCHEDULEENDMAPPING             STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFLINSCHEDULEENDMAPPING                 STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' */
#define BSWM_INITVALUEOFLINSCHEDULEENDMAPPING                         STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndMapping.InitValue' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' */
#define BSWM_PARTITIONIDOFLINSCHEDULEENDMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndMapping.PartitionId' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' */
#define BSWM_LINSCHEDULEENDSTATE                                      STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndState' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' */
#define BSWM_LINSCHEDULEMAPPING                                       STD_OFF  /**< Deactivateable: 'BswM_LinScheduleMapping' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' */
#define BSWM_EXTERNALIDOFLINSCHEDULEMAPPING                           STD_OFF  /**< Deactivateable: 'BswM_LinScheduleMapping.ExternalId' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFLINSCHEDULEMAPPING                  STD_OFF  /**< Deactivateable: 'BswM_LinScheduleMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFLINSCHEDULEMAPPING                STD_OFF  /**< Deactivateable: 'BswM_LinScheduleMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFLINSCHEDULEMAPPING                    STD_OFF  /**< Deactivateable: 'BswM_LinScheduleMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' */
#define BSWM_INITVALUEOFLINSCHEDULEMAPPING                            STD_OFF  /**< Deactivateable: 'BswM_LinScheduleMapping.InitValue' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' */
#define BSWM_PARTITIONIDOFLINSCHEDULEMAPPING                          STD_OFF  /**< Deactivateable: 'BswM_LinScheduleMapping.PartitionId' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' */
#define BSWM_LINSCHEDULESTATE                                         STD_OFF  /**< Deactivateable: 'BswM_LinScheduleState' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' */
#define BSWM_LINTPMAPPING                                             STD_OFF  /**< Deactivateable: 'BswM_LinTPMapping' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' */
#define BSWM_EXTERNALIDOFLINTPMAPPING                                 STD_OFF  /**< Deactivateable: 'BswM_LinTPMapping.ExternalId' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFLINTPMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_LinTPMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFLINTPMAPPING                      STD_OFF  /**< Deactivateable: 'BswM_LinTPMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFLINTPMAPPING                          STD_OFF  /**< Deactivateable: 'BswM_LinTPMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' */
#define BSWM_INITVALUEOFLINTPMAPPING                                  STD_OFF  /**< Deactivateable: 'BswM_LinTPMapping.InitValue' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' */
#define BSWM_PARTITIONIDOFLINTPMAPPING                                STD_OFF  /**< Deactivateable: 'BswM_LinTPMapping.PartitionId' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' */
#define BSWM_LINTPSTATE                                               STD_OFF  /**< Deactivateable: 'BswM_LinTPState' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' */
#define BSWM_MODENOTIFICATIONMAPPING                                  STD_OFF  /**< Deactivateable: 'BswM_ModeNotificationMapping' Reason: 'No Mode Request for BswMSwcModeNotification configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFMODENOTIFICATIONMAPPING             STD_OFF  /**< Deactivateable: 'BswM_ModeNotificationMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMSwcModeNotification configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFMODENOTIFICATIONMAPPING           STD_OFF  /**< Deactivateable: 'BswM_ModeNotificationMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMSwcModeNotification configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFMODENOTIFICATIONMAPPING               STD_OFF  /**< Deactivateable: 'BswM_ModeNotificationMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMSwcModeNotification configured.' */
#define BSWM_PARTITIONIDOFMODENOTIFICATIONMAPPING                     STD_OFF  /**< Deactivateable: 'BswM_ModeNotificationMapping.PartitionId' Reason: 'No Mode Request for BswMSwcModeNotification configured.' */
#define BSWM_MODEREQUESTMAPPING                                       STD_OFF  /**< Deactivateable: 'BswM_ModeRequestMapping' Reason: 'No Mode Request for BswMSwcModeRequest configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFMODEREQUESTMAPPING                  STD_OFF  /**< Deactivateable: 'BswM_ModeRequestMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMSwcModeRequest configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFMODEREQUESTMAPPING                STD_OFF  /**< Deactivateable: 'BswM_ModeRequestMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMSwcModeRequest configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFMODEREQUESTMAPPING                    STD_OFF  /**< Deactivateable: 'BswM_ModeRequestMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMSwcModeRequest configured.' */
#define BSWM_PARTITIONIDOFMODEREQUESTMAPPING                          STD_OFF  /**< Deactivateable: 'BswM_ModeRequestMapping.PartitionId' Reason: 'No Mode Request for BswMSwcModeRequest configured.' */
#define BSWM_MODEREQUESTQUEUE                                         STD_ON
#define BSWM_NMMAPPING                                                STD_OFF  /**< Deactivateable: 'BswM_NmMapping' Reason: 'No Mode Request for BswMNmIndication configured.' */
#define BSWM_EXTERNALIDOFNMMAPPING                                    STD_OFF  /**< Deactivateable: 'BswM_NmMapping.ExternalId' Reason: 'No Mode Request for BswMNmIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFNMMAPPING                           STD_OFF  /**< Deactivateable: 'BswM_NmMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMNmIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFNMMAPPING                         STD_OFF  /**< Deactivateable: 'BswM_NmMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMNmIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFNMMAPPING                             STD_OFF  /**< Deactivateable: 'BswM_NmMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMNmIndication configured.' */
#define BSWM_INITVALUEOFNMMAPPING                                     STD_OFF  /**< Deactivateable: 'BswM_NmMapping.InitValue' Reason: 'No Mode Request for BswMNmIndication configured.' */
#define BSWM_PARTITIONIDOFNMMAPPING                                   STD_OFF  /**< Deactivateable: 'BswM_NmMapping.PartitionId' Reason: 'No Mode Request for BswMNmIndication configured.' */
#define BSWM_NMSTATE                                                  STD_OFF  /**< Deactivateable: 'BswM_NmState' Reason: 'No Mode Request for BswMNmIndication configured.' */
#define BSWM_NVMBLOCKMAPPING                                          STD_OFF  /**< Deactivateable: 'BswM_NvMBlockMapping' Reason: 'No Mode Request for BswMNvMRequest configured.' */
#define BSWM_EXTERNALIDOFNVMBLOCKMAPPING                              STD_OFF  /**< Deactivateable: 'BswM_NvMBlockMapping.ExternalId' Reason: 'No Mode Request for BswMNvMRequest configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFNVMBLOCKMAPPING                     STD_OFF  /**< Deactivateable: 'BswM_NvMBlockMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMNvMRequest configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFNVMBLOCKMAPPING                   STD_OFF  /**< Deactivateable: 'BswM_NvMBlockMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMNvMRequest configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFNVMBLOCKMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_NvMBlockMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMNvMRequest configured.' */
#define BSWM_INITVALUEOFNVMBLOCKMAPPING                               STD_OFF  /**< Deactivateable: 'BswM_NvMBlockMapping.InitValue' Reason: 'No Mode Request for BswMNvMRequest configured.' */
#define BSWM_PARTITIONIDOFNVMBLOCKMAPPING                             STD_OFF  /**< Deactivateable: 'BswM_NvMBlockMapping.PartitionId' Reason: 'No Mode Request for BswMNvMRequest configured.' */
#define BSWM_NVMBLOCKSTATE                                            STD_OFF  /**< Deactivateable: 'BswM_NvMBlockState' Reason: 'No Mode Request for BswMNvMRequest configured.' */
#define BSWM_NVMJOBMAPPING                                            STD_OFF  /**< Deactivateable: 'BswM_NvMJobMapping' Reason: 'No Mode Request for BswMNvMJobModeIndication configured.' */
#define BSWM_EXTERNALIDOFNVMJOBMAPPING                                STD_OFF  /**< Deactivateable: 'BswM_NvMJobMapping.ExternalId' Reason: 'No Mode Request for BswMNvMJobModeIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFNVMJOBMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_NvMJobMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMNvMJobModeIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFNVMJOBMAPPING                     STD_OFF  /**< Deactivateable: 'BswM_NvMJobMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMNvMJobModeIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFNVMJOBMAPPING                         STD_OFF  /**< Deactivateable: 'BswM_NvMJobMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMNvMJobModeIndication configured.' */
#define BSWM_INITVALUEOFNVMJOBMAPPING                                 STD_OFF  /**< Deactivateable: 'BswM_NvMJobMapping.InitValue' Reason: 'No Mode Request for BswMNvMJobModeIndication configured.' */
#define BSWM_PARTITIONIDOFNVMJOBMAPPING                               STD_OFF  /**< Deactivateable: 'BswM_NvMJobMapping.PartitionId' Reason: 'No Mode Request for BswMNvMJobModeIndication configured.' */
#define BSWM_NVMJOBSTATE                                              STD_OFF  /**< Deactivateable: 'BswM_NvMJobState' Reason: 'No Mode Request for BswMNvMJobModeIndication configured.' */
#define BSWM_PDURRXINDICATIONMAPPING                                  STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMapping' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_EXTERNALIDOFPDURRXINDICATIONMAPPING                      STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMapping.ExternalId' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFPDURRXINDICATIONMAPPING             STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFPDURRXINDICATIONMAPPING           STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFPDURRXINDICATIONMAPPING               STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_INITVALUEOFPDURRXINDICATIONMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMapping.InitValue' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_PARTITIONIDOFPDURRXINDICATIONMAPPING                     STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMapping.PartitionId' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_PDURRXINDICATIONSTATEIDXOFPDURRXINDICATIONMAPPING        STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMapping.PduRRxIndicationStateIdx' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_PDURRXINDICATIONSTATE                                    STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationState' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_PDURTPRXINDICATIONMAPPING                                STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMapping' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_EXTERNALIDOFPDURTPRXINDICATIONMAPPING                    STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMapping.ExternalId' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFPDURTPRXINDICATIONMAPPING           STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFPDURTPRXINDICATIONMAPPING         STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFPDURTPRXINDICATIONMAPPING             STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_INITVALUEOFPDURTPRXINDICATIONMAPPING                     STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMapping.InitValue' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_PARTITIONIDOFPDURTPRXINDICATIONMAPPING                   STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMapping.PartitionId' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_PDURTPRXINDICATIONSTATEIDXOFPDURTPRXINDICATIONMAPPING    STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMapping.PduRTpRxIndicationStateIdx' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_PDURTPRXINDICATIONSTATE                                  STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationState' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_PDURTPSTARTOFRECEPTIONMAPPING                            STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMapping' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_EXTERNALIDOFPDURTPSTARTOFRECEPTIONMAPPING                STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMapping.ExternalId' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFPDURTPSTARTOFRECEPTIONMAPPING       STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFPDURTPSTARTOFRECEPTIONMAPPING     STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFPDURTPSTARTOFRECEPTIONMAPPING         STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_INITVALUEOFPDURTPSTARTOFRECEPTIONMAPPING                 STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMapping.InitValue' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_PARTITIONIDOFPDURTPSTARTOFRECEPTIONMAPPING               STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMapping.PartitionId' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_PDURTPSTARTOFRECEPTIONSTATEIDXOFPDURTPSTARTOFRECEPTIONMAPPING STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMapping.PduRTpStartOfReceptionStateIdx' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_PDURTPSTARTOFRECEPTIONSTATE                              STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionState' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_PDURTPTXCONFIRMATIONMAPPING                              STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMapping' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_EXTERNALIDOFPDURTPTXCONFIRMATIONMAPPING                  STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMapping.ExternalId' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFPDURTPTXCONFIRMATIONMAPPING         STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFPDURTPTXCONFIRMATIONMAPPING       STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFPDURTPTXCONFIRMATIONMAPPING           STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_INITVALUEOFPDURTPTXCONFIRMATIONMAPPING                   STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMapping.InitValue' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_PARTITIONIDOFPDURTPTXCONFIRMATIONMAPPING                 STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMapping.PartitionId' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_PDURTPTXCONFIRMATIONSTATEIDXOFPDURTPTXCONFIRMATIONMAPPING STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMapping.PduRTpTxConfirmationStateIdx' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_PDURTPTXCONFIRMATIONSTATE                                STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationState' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_PDURTRANSMITMAPPING                                      STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMapping' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_EXTERNALIDOFPDURTRANSMITMAPPING                          STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMapping.ExternalId' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFPDURTRANSMITMAPPING                 STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFPDURTRANSMITMAPPING               STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFPDURTRANSMITMAPPING                   STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_INITVALUEOFPDURTRANSMITMAPPING                           STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMapping.InitValue' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_PARTITIONIDOFPDURTRANSMITMAPPING                         STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMapping.PartitionId' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_PDURTRANSMITSTATEIDXOFPDURTRANSMITMAPPING                STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMapping.PduRTransmitStateIdx' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_PDURTRANSMITSTATE                                        STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitState' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_PDURTXCONFIRMATIONMAPPING                                STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMapping' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_EXTERNALIDOFPDURTXCONFIRMATIONMAPPING                    STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMapping.ExternalId' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFPDURTXCONFIRMATIONMAPPING           STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFPDURTXCONFIRMATIONMAPPING         STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFPDURTXCONFIRMATIONMAPPING             STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_INITVALUEOFPDURTXCONFIRMATIONMAPPING                     STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMapping.InitValue' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_PARTITIONIDOFPDURTXCONFIRMATIONMAPPING                   STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMapping.PartitionId' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_PDURTXCONFIRMATIONSTATEIDXOFPDURTXCONFIRMATIONMAPPING    STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMapping.PduRTxConfirmationStateIdx' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_PDURTXCONFIRMATIONSTATE                                  STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationState' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_QUEUESEMAPHORE                                           STD_ON
#define BSWM_QUEUEWRITTEN                                             STD_ON
#define BSWM_RULESTATES                                               STD_ON
#define BSWM_RULES                                                    STD_ON
#define BSWM_FCTPTROFRULES                                            STD_ON
#define BSWM_IDOFRULES                                                STD_ON
#define BSWM_INITOFRULES                                              STD_ON
#define BSWM_RULESIND                                                 STD_ON
#define BSWM_RULESOFCONFIG                                            STD_ON
#define BSWM_DEFERREDRULESENDIDXOFRULESOFCONFIG                       STD_ON
#define BSWM_DEFERREDRULESSTARTIDXOFRULESOFCONFIG                     STD_ON
#define BSWM_DEFERREDRULESUSEDOFRULESOFCONFIG                         STD_ON
#define BSWM_INITACTIONSOFRULESOFCONFIG                               STD_OFF  /**< Deactivateable: 'BswM_RulesOfConfig.InitActions' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define BSWM_MASKEDBITSOFRULESOFCONFIG                                STD_ON
#define BSWM_PARTITIONOFRULESOFCONFIG                                 STD_OFF  /**< Deactivateable: 'BswM_RulesOfConfig.Partition' Reason: 'No partitions configured.' */
#define BSWM_RULESENDIDXOFRULESOFCONFIG                               STD_ON
#define BSWM_RULESSTARTIDXOFRULESOFCONFIG                             STD_ON
#define BSWM_RULESUSEDOFRULESOFCONFIG                                 STD_ON
#define BSWM_SDCLIENTSERVICEMAPPING                                   STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceMapping' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' */
#define BSWM_EXTERNALIDOFSDCLIENTSERVICEMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceMapping.ExternalId' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFSDCLIENTSERVICEMAPPING              STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFSDCLIENTSERVICEMAPPING            STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFSDCLIENTSERVICEMAPPING                STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' */
#define BSWM_INITVALUEOFSDCLIENTSERVICEMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceMapping.InitValue' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' */
#define BSWM_PARTITIONIDOFSDCLIENTSERVICEMAPPING                      STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceMapping.PartitionId' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' */
#define BSWM_SDCLIENTSERVICESTATE                                     STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceState' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' */
#define BSWM_SDCONSUMEDEVENTMAPPING                                   STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventMapping' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' */
#define BSWM_EXTERNALIDOFSDCONSUMEDEVENTMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventMapping.ExternalId' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFSDCONSUMEDEVENTMAPPING              STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFSDCONSUMEDEVENTMAPPING            STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFSDCONSUMEDEVENTMAPPING                STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' */
#define BSWM_INITVALUEOFSDCONSUMEDEVENTMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventMapping.InitValue' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' */
#define BSWM_PARTITIONIDOFSDCONSUMEDEVENTMAPPING                      STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventMapping.PartitionId' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' */
#define BSWM_SDCONSUMEDEVENTSTATE                                     STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventState' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' */
#define BSWM_SDEVENTHANDLERMAPPING                                    STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerMapping' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' */
#define BSWM_EXTERNALIDOFSDEVENTHANDLERMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerMapping.ExternalId' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFSDEVENTHANDLERMAPPING               STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFSDEVENTHANDLERMAPPING             STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFSDEVENTHANDLERMAPPING                 STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' */
#define BSWM_INITVALUEOFSDEVENTHANDLERMAPPING                         STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerMapping.InitValue' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' */
#define BSWM_PARTITIONIDOFSDEVENTHANDLERMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerMapping.PartitionId' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' */
#define BSWM_SDEVENTHANDLERSTATE                                      STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerState' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' */
#define BSWM_SIZEOFACTIONLISTQUEUE                                    STD_ON
#define BSWM_SIZEOFACTIONLISTS                                        STD_ON
#define BSWM_SIZEOFDCMAPPLUPDATEMAPPING                               STD_ON
#define BSWM_SIZEOFDEFERREDRULES                                      STD_ON
#define BSWM_SIZEOFECUMMODEMAPPING                                    STD_ON
#define BSWM_SIZEOFFORCEDACTIONLISTPRIORITY                           STD_ON
#define BSWM_SIZEOFIMMEDIATEUSER                                      STD_ON
#define BSWM_SIZEOFINITIALIZED                                        STD_ON
#define BSWM_SIZEOFMODEREQUESTQUEUE                                   STD_ON
#define BSWM_SIZEOFQUEUESEMAPHORE                                     STD_ON
#define BSWM_SIZEOFQUEUEWRITTEN                                       STD_ON
#define BSWM_SIZEOFRULESTATES                                         STD_ON
#define BSWM_SIZEOFRULES                                              STD_ON
#define BSWM_SIZEOFRULESIND                                           STD_ON
#define BSWM_SIZEOFRULESOFCONFIG                                      STD_ON
#define BSWM_TIMERSTATE                                               STD_OFF  /**< Deactivateable: 'BswM_TimerState' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define BSWM_TIMERVALUE                                               STD_OFF  /**< Deactivateable: 'BswM_TimerValue' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define BSWM_WDGMMAPPING                                              STD_OFF  /**< Deactivateable: 'BswM_WdgMMapping' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' */
#define BSWM_EXTERNALIDOFWDGMMAPPING                                  STD_OFF  /**< Deactivateable: 'BswM_WdgMMapping.ExternalId' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFWDGMMAPPING                         STD_OFF  /**< Deactivateable: 'BswM_WdgMMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFWDGMMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_WdgMMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFWDGMMAPPING                           STD_OFF  /**< Deactivateable: 'BswM_WdgMMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' */
#define BSWM_INITVALUEOFWDGMMAPPING                                   STD_OFF  /**< Deactivateable: 'BswM_WdgMMapping.InitValue' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' */
#define BSWM_PARTITIONIDOFWDGMMAPPING                                 STD_OFF  /**< Deactivateable: 'BswM_WdgMMapping.PartitionId' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' */
#define BSWM_WDGMSTATE                                                STD_OFF  /**< Deactivateable: 'BswM_WdgMState' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' */
#define BSWM_PCCONFIG                                                 STD_ON
#define BSWM_ACTIONLISTQUEUEOFPCCONFIG                                STD_ON
#define BSWM_ACTIONLISTSOFPCCONFIG                                    STD_ON
#define BSWM_DCMAPPLUPDATEMAPPINGOFPCCONFIG                           STD_ON
#define BSWM_DCMAPPLUPDATESTATEOFPCCONFIG                             STD_ON
#define BSWM_DEFERREDRULESOFPCCONFIG                                  STD_ON
#define BSWM_ECUMMODEMAPPINGOFPCCONFIG                                STD_ON
#define BSWM_ECUMMODESTATEOFPCCONFIG                                  STD_ON
#define BSWM_FINALMAGICNUMBEROFPCCONFIG                               STD_OFF  /**< Deactivateable: 'BswM_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define BSWM_FORCEDACTIONLISTPRIORITYOFPCCONFIG                       STD_ON
#define BSWM_IMMEDIATEUSEROFPCCONFIG                                  STD_ON
#define BSWM_INITDATAHASHCODEOFPCCONFIG                               STD_OFF  /**< Deactivateable: 'BswM_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define BSWM_INITIALIZEDOFPCCONFIG                                    STD_ON
#define BSWM_MODEREQUESTQUEUEOFPCCONFIG                               STD_ON
#define BSWM_QUEUESEMAPHOREOFPCCONFIG                                 STD_ON
#define BSWM_QUEUEWRITTENOFPCCONFIG                                   STD_ON
#define BSWM_RULESTATESOFPCCONFIG                                     STD_ON
#define BSWM_RULESINDOFPCCONFIG                                       STD_ON
#define BSWM_RULESOFCONFIGOFPCCONFIG                                  STD_ON
#define BSWM_RULESOFPCCONFIG                                          STD_ON
#define BSWM_SIZEOFACTIONLISTQUEUEOFPCCONFIG                          STD_ON
#define BSWM_SIZEOFACTIONLISTSOFPCCONFIG                              STD_ON
#define BSWM_SIZEOFDCMAPPLUPDATEMAPPINGOFPCCONFIG                     STD_ON
#define BSWM_SIZEOFDEFERREDRULESOFPCCONFIG                            STD_ON
#define BSWM_SIZEOFECUMMODEMAPPINGOFPCCONFIG                          STD_ON
#define BSWM_SIZEOFFORCEDACTIONLISTPRIORITYOFPCCONFIG                 STD_ON
#define BSWM_SIZEOFIMMEDIATEUSEROFPCCONFIG                            STD_ON
#define BSWM_SIZEOFINITIALIZEDOFPCCONFIG                              STD_ON
#define BSWM_SIZEOFMODEREQUESTQUEUEOFPCCONFIG                         STD_ON
#define BSWM_SIZEOFQUEUESEMAPHOREOFPCCONFIG                           STD_ON
#define BSWM_SIZEOFQUEUEWRITTENOFPCCONFIG                             STD_ON
#define BSWM_SIZEOFRULESTATESOFPCCONFIG                               STD_ON
#define BSWM_SIZEOFRULESINDOFPCCONFIG                                 STD_ON
#define BSWM_SIZEOFRULESOFCONFIGOFPCCONFIG                            STD_ON
#define BSWM_SIZEOFRULESOFPCCONFIG                                    STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCMinNumericValueDefines  BswM Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define BSWM_MIN_ACTIONLISTQUEUE                                      0u
#define BSWM_MIN_DCMAPPLUPDATESTATE                                   0u
#define BSWM_MIN_ECUMMODESTATE                                        0u
#define BSWM_MIN_FORCEDACTIONLISTPRIORITY                             0u
#define BSWM_MIN_MODEREQUESTQUEUE                                     0u
#define BSWM_MIN_QUEUESEMAPHORE                                       0u
#define BSWM_MIN_RULESTATES                                           0u
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCMaxNumericValueDefines  BswM Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define BSWM_MAX_ACTIONLISTQUEUE                                      255u
#define BSWM_MAX_DCMAPPLUPDATESTATE                                   255u
#define BSWM_MAX_ECUMMODESTATE                                        255u
#define BSWM_MAX_FORCEDACTIONLISTPRIORITY                             255u
#define BSWM_MAX_MODEREQUESTQUEUE                                     255u
#define BSWM_MAX_QUEUESEMAPHORE                                       255u
#define BSWM_MAX_RULESTATES                                           255u
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCNoReferenceDefines  BswM No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define BSWM_NO_IMMEDIATEUSERENDIDXOFDCMAPPLUPDATEMAPPING             255u
#define BSWM_NO_IMMEDIATEUSERSTARTIDXOFDCMAPPLUPDATEMAPPING           255u
#define BSWM_NO_RULESINDENDIDXOFIMMEDIATEUSER                         255u
#define BSWM_NO_RULESINDSTARTIDXOFIMMEDIATEUSER                       255u
#define BSWM_NO_IDOFRULES                                             255u
#define BSWM_NO_RULESIND                                              255u
#define BSWM_NO_DEFERREDRULESENDIDXOFRULESOFCONFIG                    255u
#define BSWM_NO_DEFERREDRULESSTARTIDXOFRULESOFCONFIG                  255u
#define BSWM_NO_RULESENDIDXOFRULESOFCONFIG                            255u
#define BSWM_NO_RULESSTARTIDXOFRULESOFCONFIG                          255u
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCMaskedBitDefines  BswM Masked Bit Defines (PRE_COMPILE)
  \brief  These defines are masks to extract packed boolean data.
  \{
*/ 
#define BSWM_FORCEDOFIMMEDIATEUSER_MASK                               0x02u
#define BSWM_RULESINDUSEDOFIMMEDIATEUSER_MASK                         0x01u
#define BSWM_DEFERREDRULESUSEDOFRULESOFCONFIG_MASK                    0x02u
#define BSWM_RULESUSEDOFRULESOFCONFIG_MASK                            0x01u
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCIsReducedToDefineDefines  BswM Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define BSWM_ISDEF_FCTPTROFACTIONLISTS                                STD_OFF
#define BSWM_ISDEF_IMMEDIATEUSERENDIDXOFDCMAPPLUPDATEMAPPING          STD_ON
#define BSWM_ISDEF_IMMEDIATEUSERSTARTIDXOFDCMAPPLUPDATEMAPPING        STD_ON
#define BSWM_ISDEF_IMMEDIATEUSERUSEDOFDCMAPPLUPDATEMAPPING            STD_ON
#define BSWM_ISDEF_INITVALUEOFDCMAPPLUPDATEMAPPING                    STD_ON
#define BSWM_ISDEF_RULESIDXOFDEFERREDRULES                            STD_ON
#define BSWM_ISDEF_INITVALUEOFECUMMODEMAPPING                         STD_ON
#define BSWM_ISDEF_FORCEDOFIMMEDIATEUSER                              STD_ON
#define BSWM_ISDEF_MASKEDBITSOFIMMEDIATEUSER                          STD_ON
#define BSWM_ISDEF_RULESINDENDIDXOFIMMEDIATEUSER                      STD_ON
#define BSWM_ISDEF_RULESINDSTARTIDXOFIMMEDIATEUSER                    STD_ON
#define BSWM_ISDEF_RULESINDUSEDOFIMMEDIATEUSER                        STD_ON
#define BSWM_ISDEF_FCTPTROFRULES                                      STD_OFF
#define BSWM_ISDEF_IDOFRULES                                          STD_OFF
#define BSWM_ISDEF_INITOFRULES                                        STD_ON
#define BSWM_ISDEF_RULESIND                                           STD_ON
#define BSWM_ISDEF_DEFERREDRULESENDIDXOFRULESOFCONFIG                 STD_ON
#define BSWM_ISDEF_DEFERREDRULESSTARTIDXOFRULESOFCONFIG               STD_ON
#define BSWM_ISDEF_DEFERREDRULESUSEDOFRULESOFCONFIG                   STD_ON
#define BSWM_ISDEF_MASKEDBITSOFRULESOFCONFIG                          STD_ON
#define BSWM_ISDEF_RULESENDIDXOFRULESOFCONFIG                         STD_ON
#define BSWM_ISDEF_RULESSTARTIDXOFRULESOFCONFIG                       STD_ON
#define BSWM_ISDEF_RULESUSEDOFRULESOFCONFIG                           STD_ON
#define BSWM_ISDEF_ACTIONLISTQUEUEOFPCCONFIG                          STD_ON
#define BSWM_ISDEF_ACTIONLISTSOFPCCONFIG                              STD_ON
#define BSWM_ISDEF_DCMAPPLUPDATEMAPPINGOFPCCONFIG                     STD_ON
#define BSWM_ISDEF_DCMAPPLUPDATESTATEOFPCCONFIG                       STD_ON
#define BSWM_ISDEF_DEFERREDRULESOFPCCONFIG                            STD_ON
#define BSWM_ISDEF_ECUMMODEMAPPINGOFPCCONFIG                          STD_ON
#define BSWM_ISDEF_ECUMMODESTATEOFPCCONFIG                            STD_ON
#define BSWM_ISDEF_FORCEDACTIONLISTPRIORITYOFPCCONFIG                 STD_ON
#define BSWM_ISDEF_IMMEDIATEUSEROFPCCONFIG                            STD_ON
#define BSWM_ISDEF_INITIALIZEDOFPCCONFIG                              STD_ON
#define BSWM_ISDEF_MODEREQUESTQUEUEOFPCCONFIG                         STD_ON
#define BSWM_ISDEF_QUEUESEMAPHOREOFPCCONFIG                           STD_ON
#define BSWM_ISDEF_QUEUEWRITTENOFPCCONFIG                             STD_ON
#define BSWM_ISDEF_RULESTATESOFPCCONFIG                               STD_ON
#define BSWM_ISDEF_RULESINDOFPCCONFIG                                 STD_ON
#define BSWM_ISDEF_RULESOFCONFIGOFPCCONFIG                            STD_ON
#define BSWM_ISDEF_RULESOFPCCONFIG                                    STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCEqualsAlwaysToDefines  BswM Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define BSWM_EQ2_FCTPTROFACTIONLISTS                                  
#define BSWM_EQ2_IMMEDIATEUSERENDIDXOFDCMAPPLUPDATEMAPPING            1u
#define BSWM_EQ2_IMMEDIATEUSERSTARTIDXOFDCMAPPLUPDATEMAPPING          0u
#define BSWM_EQ2_IMMEDIATEUSERUSEDOFDCMAPPLUPDATEMAPPING              TRUE
#define BSWM_EQ2_INITVALUEOFDCMAPPLUPDATEMAPPING                      FALSE
#define BSWM_EQ2_RULESIDXOFDEFERREDRULES                              0u
#define BSWM_EQ2_INITVALUEOFECUMMODEMAPPING                           ECUM_STATE_STARTUP
#define BSWM_EQ2_FORCEDOFIMMEDIATEUSER                                TRUE
#define BSWM_EQ2_MASKEDBITSOFIMMEDIATEUSER                            0x03u
#define BSWM_EQ2_RULESINDENDIDXOFIMMEDIATEUSER                        1u
#define BSWM_EQ2_RULESINDSTARTIDXOFIMMEDIATEUSER                      0u
#define BSWM_EQ2_RULESINDUSEDOFIMMEDIATEUSER                          TRUE
#define BSWM_EQ2_FCTPTROFRULES                                        
#define BSWM_EQ2_IDOFRULES                                            
#define BSWM_EQ2_INITOFRULES                                          BSWM_FALSE
#define BSWM_EQ2_RULESIND                                             1u
#define BSWM_EQ2_DEFERREDRULESENDIDXOFRULESOFCONFIG                   1u
#define BSWM_EQ2_DEFERREDRULESSTARTIDXOFRULESOFCONFIG                 0u
#define BSWM_EQ2_DEFERREDRULESUSEDOFRULESOFCONFIG                     TRUE
#define BSWM_EQ2_MASKEDBITSOFRULESOFCONFIG                            0x03u
#define BSWM_EQ2_RULESENDIDXOFRULESOFCONFIG                           2u
#define BSWM_EQ2_RULESSTARTIDXOFRULESOFCONFIG                         0u
#define BSWM_EQ2_RULESUSEDOFRULESOFCONFIG                             TRUE
#define BSWM_EQ2_ACTIONLISTQUEUEOFPCCONFIG                            BswM_ActionListQueue.raw
#define BSWM_EQ2_ACTIONLISTSOFPCCONFIG                                BswM_ActionLists
#define BSWM_EQ2_DCMAPPLUPDATEMAPPINGOFPCCONFIG                       BswM_DcmApplUpdateMapping
#define BSWM_EQ2_DCMAPPLUPDATESTATEOFPCCONFIG                         BswM_DcmApplUpdateState
#define BSWM_EQ2_DEFERREDRULESOFPCCONFIG                              BswM_DeferredRules
#define BSWM_EQ2_ECUMMODEMAPPINGOFPCCONFIG                            BswM_EcuMModeMapping
#define BSWM_EQ2_ECUMMODESTATEOFPCCONFIG                              BswM_EcuMModeState
#define BSWM_EQ2_FORCEDACTIONLISTPRIORITYOFPCCONFIG                   BswM_ForcedActionListPriority
#define BSWM_EQ2_IMMEDIATEUSEROFPCCONFIG                              BswM_ImmediateUser
#define BSWM_EQ2_INITIALIZEDOFPCCONFIG                                BswM_Initialized
#define BSWM_EQ2_MODEREQUESTQUEUEOFPCCONFIG                           BswM_ModeRequestQueue
#define BSWM_EQ2_QUEUESEMAPHOREOFPCCONFIG                             BswM_QueueSemaphore
#define BSWM_EQ2_QUEUEWRITTENOFPCCONFIG                               BswM_QueueWritten
#define BSWM_EQ2_RULESTATESOFPCCONFIG                                 BswM_RuleStates
#define BSWM_EQ2_RULESINDOFPCCONFIG                                   BswM_RulesInd
#define BSWM_EQ2_RULESOFCONFIGOFPCCONFIG                              BswM_RulesOfConfig
#define BSWM_EQ2_RULESOFPCCONFIG                                      BswM_Rules
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCSymbolicInitializationPointers  BswM Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define BswM_Config_Ptr                                               NULL_PTR  /**< symbolic identifier which shall be used to initialize 'BswM' */
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCInitializationSymbols  BswM Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define BswM_Config                                                   NULL_PTR  /**< symbolic identifier which could be used to initialize 'BswM */
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCGeneral  BswM General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define BSWM_CHECK_INIT_POINTER                                       STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define BSWM_FINAL_MAGIC_NUMBER                                       0x2A1Eu  /**< the precompile constant to validate the size of the initialization structure at initialization time of BswM */
#define BSWM_INDIVIDUAL_POSTBUILD                                     STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'BswM' is not configured to be postbuild capable. */
#define BSWM_INIT_DATA                                                BSWM_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define BSWM_INIT_DATA_HASH_CODE                                      -1519484662L  /**< the precompile constant to validate the initialization structure at initialization time of BswM with a hashcode. The seed value is '0x2A1Eu' */
#define BSWM_USE_ECUM_BSW_ERROR_HOOK                                  STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define BSWM_USE_INIT_POINTER                                         STD_OFF  /**< STD_ON if the init pointer BswM shall be used. */
/** 
  \}
*/ 


#define BSWM_PARTITIONIDOFTIMERMAPPING                                STD_OFF
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  BswMPBDataSwitches  BswM Data Switches  (POST_BUILD)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define BSWM_PBCONFIG                                                 STD_OFF  /**< Deactivateable: 'BswM_PBConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define BSWM_LTCONFIGIDXOFPBCONFIG                                    STD_OFF  /**< Deactivateable: 'BswM_PBConfig.LTConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define BSWM_PCCONFIGIDXOFPBCONFIG                                    STD_OFF  /**< Deactivateable: 'BswM_PBConfig.PCConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
/** 
  \}
*/ 



/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/* PRQA S 0639, 0779 PRECOMPILEGLOBALDATATYPES */ /* MD_MSR_1.1_639, MD_BswM_0779 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  BswMPCIterableTypes  BswM Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate BswM_ActionLists */
typedef uint8_least BswM_ActionListsIterType;

/**   \brief  type used to iterate BswM_DcmApplUpdateMapping */
typedef uint8_least BswM_DcmApplUpdateMappingIterType;

/**   \brief  type used to iterate BswM_DeferredRules */
typedef uint8_least BswM_DeferredRulesIterType;

/**   \brief  type used to iterate BswM_EcuMModeMapping */
typedef uint8_least BswM_EcuMModeMappingIterType;

/**   \brief  type used to iterate BswM_ForcedActionListPriority */
typedef uint8_least BswM_ForcedActionListPriorityIterType;

/**   \brief  type used to iterate BswM_ImmediateUser */
typedef uint8_least BswM_ImmediateUserIterType;

/**   \brief  type used to iterate BswM_Initialized */
typedef uint8_least BswM_InitializedIterType;

/**   \brief  type used to iterate BswM_QueueSemaphore */
typedef uint8_least BswM_QueueSemaphoreIterType;

/**   \brief  type used to iterate BswM_QueueWritten */
typedef uint8_least BswM_QueueWrittenIterType;

/**   \brief  type used to iterate BswM_Rules */
typedef uint8_least BswM_RulesIterType;

/**   \brief  type used to iterate BswM_RulesInd */
typedef uint8_least BswM_RulesIndIterType;

/**   \brief  type used to iterate BswM_RulesOfConfig */
typedef uint8_least BswM_RulesOfConfigIterType;

/** 
  \}
*/ 

/** 
  \defgroup  BswMPCIterableTypesWithSizeRelations  BswM Iterable Types With Size Relations (PRE_COMPILE)
  \brief  These type definitions are used to iterate over a VAR based array with the same iterator as the related CONST array.
  \{
*/ 
/**   \brief  type used to iterate BswM_ActionListQueue */
typedef BswM_ActionListsIterType BswM_ActionListQueueIterType;

/**   \brief  type used to iterate BswM_ModeRequestQueue */
typedef BswM_ImmediateUserIterType BswM_ModeRequestQueueIterType;

/**   \brief  type used to iterate BswM_RuleStates */
typedef BswM_RulesIterType BswM_RuleStatesIterType;

/** 
  \}
*/ 

/** 
  \defgroup  BswMPCValueTypes  BswM Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for BswM_ActionListQueue */
typedef uint8 BswM_ActionListQueueType;

/**   \brief  value based type definition for BswM_ImmediateUserEndIdxOfDcmApplUpdateMapping */
typedef uint8 BswM_ImmediateUserEndIdxOfDcmApplUpdateMappingType;

/**   \brief  value based type definition for BswM_ImmediateUserStartIdxOfDcmApplUpdateMapping */
typedef uint8 BswM_ImmediateUserStartIdxOfDcmApplUpdateMappingType;

/**   \brief  value based type definition for BswM_ImmediateUserUsedOfDcmApplUpdateMapping */
typedef boolean BswM_ImmediateUserUsedOfDcmApplUpdateMappingType;

/**   \brief  value based type definition for BswM_InitValueOfDcmApplUpdateMapping */
typedef uint8 BswM_InitValueOfDcmApplUpdateMappingType;

/**   \brief  value based type definition for BswM_DcmApplUpdateState */
typedef uint8 BswM_DcmApplUpdateStateType;

/**   \brief  value based type definition for BswM_RulesIdxOfDeferredRules */
typedef uint8 BswM_RulesIdxOfDeferredRulesType;

/**   \brief  value based type definition for BswM_InitValueOfEcuMModeMapping */
typedef uint8 BswM_InitValueOfEcuMModeMappingType;

/**   \brief  value based type definition for BswM_EcuMModeState */
typedef uint8 BswM_EcuMModeStateType;

/**   \brief  value based type definition for BswM_ForcedActionListPriority */
typedef uint8 BswM_ForcedActionListPriorityType;

/**   \brief  value based type definition for BswM_ForcedOfImmediateUser */
typedef boolean BswM_ForcedOfImmediateUserType;

/**   \brief  value based type definition for BswM_MaskedBitsOfImmediateUser */
typedef uint8 BswM_MaskedBitsOfImmediateUserType;

/**   \brief  value based type definition for BswM_RulesIndEndIdxOfImmediateUser */
typedef uint8 BswM_RulesIndEndIdxOfImmediateUserType;

/**   \brief  value based type definition for BswM_RulesIndStartIdxOfImmediateUser */
typedef uint8 BswM_RulesIndStartIdxOfImmediateUserType;

/**   \brief  value based type definition for BswM_RulesIndUsedOfImmediateUser */
typedef boolean BswM_RulesIndUsedOfImmediateUserType;

/**   \brief  value based type definition for BswM_Initialized */
typedef boolean BswM_InitializedType;

/**   \brief  value based type definition for BswM_ModeRequestQueue */
typedef uint8 BswM_ModeRequestQueueType;

/**   \brief  value based type definition for BswM_QueueSemaphore */
typedef uint8 BswM_QueueSemaphoreType;

/**   \brief  value based type definition for BswM_QueueWritten */
typedef boolean BswM_QueueWrittenType;

/**   \brief  value based type definition for BswM_RuleStates */
typedef uint8 BswM_RuleStatesType;

/**   \brief  value based type definition for BswM_IdOfRules */
typedef uint8 BswM_IdOfRulesType;

/**   \brief  value based type definition for BswM_InitOfRules */
typedef uint8 BswM_InitOfRulesType;

/**   \brief  value based type definition for BswM_RulesInd */
typedef uint8 BswM_RulesIndType;

/**   \brief  value based type definition for BswM_DeferredRulesEndIdxOfRulesOfConfig */
typedef uint8 BswM_DeferredRulesEndIdxOfRulesOfConfigType;

/**   \brief  value based type definition for BswM_DeferredRulesStartIdxOfRulesOfConfig */
typedef uint8 BswM_DeferredRulesStartIdxOfRulesOfConfigType;

/**   \brief  value based type definition for BswM_DeferredRulesUsedOfRulesOfConfig */
typedef boolean BswM_DeferredRulesUsedOfRulesOfConfigType;

/**   \brief  value based type definition for BswM_MaskedBitsOfRulesOfConfig */
typedef uint8 BswM_MaskedBitsOfRulesOfConfigType;

/**   \brief  value based type definition for BswM_RulesEndIdxOfRulesOfConfig */
typedef uint8 BswM_RulesEndIdxOfRulesOfConfigType;

/**   \brief  value based type definition for BswM_RulesStartIdxOfRulesOfConfig */
typedef uint8 BswM_RulesStartIdxOfRulesOfConfigType;

/**   \brief  value based type definition for BswM_RulesUsedOfRulesOfConfig */
typedef boolean BswM_RulesUsedOfRulesOfConfigType;

/**   \brief  value based type definition for BswM_SizeOfActionListQueue */
typedef uint8 BswM_SizeOfActionListQueueType;

/**   \brief  value based type definition for BswM_SizeOfActionLists */
typedef uint8 BswM_SizeOfActionListsType;

/**   \brief  value based type definition for BswM_SizeOfDcmApplUpdateMapping */
typedef uint8 BswM_SizeOfDcmApplUpdateMappingType;

/**   \brief  value based type definition for BswM_SizeOfDeferredRules */
typedef uint8 BswM_SizeOfDeferredRulesType;

/**   \brief  value based type definition for BswM_SizeOfEcuMModeMapping */
typedef uint8 BswM_SizeOfEcuMModeMappingType;

/**   \brief  value based type definition for BswM_SizeOfForcedActionListPriority */
typedef uint8 BswM_SizeOfForcedActionListPriorityType;

/**   \brief  value based type definition for BswM_SizeOfImmediateUser */
typedef uint8 BswM_SizeOfImmediateUserType;

/**   \brief  value based type definition for BswM_SizeOfInitialized */
typedef uint8 BswM_SizeOfInitializedType;

/**   \brief  value based type definition for BswM_SizeOfModeRequestQueue */
typedef uint8 BswM_SizeOfModeRequestQueueType;

/**   \brief  value based type definition for BswM_SizeOfQueueSemaphore */
typedef uint8 BswM_SizeOfQueueSemaphoreType;

/**   \brief  value based type definition for BswM_SizeOfQueueWritten */
typedef uint8 BswM_SizeOfQueueWrittenType;

/**   \brief  value based type definition for BswM_SizeOfRuleStates */
typedef uint8 BswM_SizeOfRuleStatesType;

/**   \brief  value based type definition for BswM_SizeOfRules */
typedef uint8 BswM_SizeOfRulesType;

/**   \brief  value based type definition for BswM_SizeOfRulesInd */
typedef uint8 BswM_SizeOfRulesIndType;

/**   \brief  value based type definition for BswM_SizeOfRulesOfConfig */
typedef uint8 BswM_SizeOfRulesOfConfigType;

/** 
  \}
*/ 

/** 
  \defgroup  BswMPCStructTypes  BswM Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in BswM_ActionLists */
typedef struct sBswM_ActionListsType
{
  BswM_ActionListFuncType FctPtrOfActionLists;  /**< Pointer to the array list function. */
} BswM_ActionListsType;

/**   \brief  type used in BswM_DcmApplUpdateMapping */
typedef struct sBswM_DcmApplUpdateMappingType
{
  uint8 BswM_DcmApplUpdateMappingNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} BswM_DcmApplUpdateMappingType;

/**   \brief  type used in BswM_DeferredRules */
typedef struct sBswM_DeferredRulesType
{
  uint8 BswM_DeferredRulesNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} BswM_DeferredRulesType;

/**   \brief  type used in BswM_EcuMModeMapping */
typedef struct sBswM_EcuMModeMappingType
{
  uint8 BswM_EcuMModeMappingNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} BswM_EcuMModeMappingType;

/**   \brief  type used in BswM_ImmediateUser */
typedef struct sBswM_ImmediateUserType
{
  uint8 BswM_ImmediateUserNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} BswM_ImmediateUserType;

/**   \brief  type used in BswM_Rules */
typedef struct sBswM_RulesType
{
  BswM_IdOfRulesType IdOfRules;  /**< External id of rule. */
  BswM_RuleTableFctPtrType FctPtrOfRules;  /**< Pointer to the rule function which does the arbitration. */
} BswM_RulesType;

/**   \brief  type used in BswM_RulesOfConfig */
typedef struct sBswM_RulesOfConfigType
{
  uint8 BswM_RulesOfConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} BswM_RulesOfConfigType;

/** 
  \}
*/ 

/** 
  \defgroup  BswMPCSymbolicStructTypes  BswM Symbolic Struct Types (PRE_COMPILE)
  \brief  These structs are used in unions to have a symbol based data representation style.
  \{
*/ 
/**   \brief  type to be used as symbolic data element access to BswM_ActionListQueue */
typedef struct sBswM_ActionListQueueStructTag
{
  BswM_ActionListQueueType AL_AL_EnterRun[1];
  BswM_ActionListQueueType AL_AL_ProgReset[1];
} sBswM_ActionListQueueStructType;

/** 
  \}
*/ 

/** 
  \defgroup  BswMPCUnionIndexAndSymbolTypes  BswM Union Index And Symbol Types (PRE_COMPILE)
  \brief  These unions are used to access arrays in an index and symbol based style.
  \{
*/ 
/**   \brief  type to access BswM_ActionListQueue in an index and symbol based style. */
typedef union uBswM_ActionListQueueTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  BswM_ActionListQueueType raw[2];
  sBswM_ActionListQueueStructType str;
} uBswM_ActionListQueueType;

/** 
  \}
*/ 

/** 
  \defgroup  BswMPCRootValueTypes  BswM Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in BswM_PCConfig */
typedef struct sBswM_PCConfigType
{
  uint8 BswM_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} BswM_PCConfigType;

typedef BswM_PCConfigType BswM_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 


/* PRQA L:PRECOMPILEGLOBALDATATYPES */

/* PRQA S 0639, 0779 POSTBUILDGLOBALDATATYPES */ /* MD_MSR_1.1_639, MD_BswM_0779 */ 
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/* PRQA L:POSTBUILDGLOBALDATATYPES */

/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/* PRQA S 3451 EXTERNDECLARATIONS */ /* MD_BswM_3451 */ 

/* PRQA L:EXTERNDECLARATIONS */




/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
#define BSWM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
&&&~ USER CALLOUT DECLARATIONS
----------------------------------------------------------------------------- */
/* PRQA S 0777 CALLOUTDECLARATIONS */ /* MD_BswM_0779 */ 
/* PRQA L:CALLOUTDECLARATIONS */

#define BSWM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#endif /* BSWM_CFG_H */

