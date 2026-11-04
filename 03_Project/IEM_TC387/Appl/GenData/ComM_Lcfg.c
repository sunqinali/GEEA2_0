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
 *            Module: ComM
 *           Program: MSR_Vector_SLP4
 *          Customer: Aptiv (China) Technology Company Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Aurix 2G/TC397 B-Step
 *    License Scope : The usage is restricted to CBD1900078_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: ComM_Lcfg.c
 *   Generation Time: 2026-10-30 12:35:14
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


#define CCL_ASR_COMM_LCFG_MODULE

/**********************************************************************************************************************
   LOCAL MISRA / PCLINT JUSTIFICATION
**********************************************************************************************************************/
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0779 EOF */ /* MD_MSR_5.1_779 */
/* PRQA S 0777 EOF */ /* MD_MSR_5.1_777 */
/* PRQA S 3453 EOF */ /* MD_MSR_19.7    */

/* -----------------------------------------------------------------------------
    &&&~ INCLUDES
 ----------------------------------------------------------------------------- */

#include "ComM_Private_Cfg.h"
#include "CanSM_ComM.h"
#include "CanSM.h"


#include "Det.h"
#include "Rte_ComM.h"

#if defined( COMM_LOCAL )
#else
# define COMM_LOCAL static
#endif

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
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
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  ComM_Pnc
**********************************************************************************************************************/
/** 
  \var    ComM_Pnc
  \brief  Contains PreCompile configuration parameters of partial networks
  \details
  Element      Description
  ClearMask    Clear mask for the partial network related signals (EIRA, ERA)
  PncId        System ID of the partial network
  SetMask      Set mask for the partial network related signals (EIRA, ERA)
*/ 
#define COMM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(ComM_PncType, COMM_CONST) ComM_Pnc[10] = {
    /* Index    ClearMask  PncId  SetMask */
  { /*     0 */     0xFEu,   16u,   0x01u },
  { /*     1 */     0xFEu,   24u,   0x01u },
  { /*     2 */     0xFDu,   25u,   0x02u },
  { /*     3 */     0xFBu,   26u,   0x04u },
  { /*     4 */     0xF7u,   27u,   0x08u },
  { /*     5 */     0xDFu,   29u,   0x20u },
  { /*     6 */     0xBFu,   30u,   0x40u },
  { /*     7 */     0xFDu,   33u,   0x02u },
  { /*     8 */     0xF7u,   35u,   0x08u },
  { /*     9 */     0x7Fu,   39u,   0x80u }
};
#define COMM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  ComM_PncPb
**********************************************************************************************************************/
/** 
  \var    ComM_PncPb
  \brief  Contains PostBuild configuration parameters of partial networks
  \details
  Element                      Description
  PncChannelMappingEndIdx      the end index of the 0:n relation pointing to ComM_PncChannelMapping
  PncChannelMappingStartIdx    the start index of the 0:n relation pointing to ComM_PncChannelMapping
  PncSignalIndEndIdx           the end index of the 0:n relation pointing to ComM_PncSignalInd
  PncSignalIndStartIdx         the start index of the 0:n relation pointing to ComM_PncSignalInd
  SignalByteIndex              Byte index in the partial network related signals (EIRA, ERA)
  UserReqPncFullComEndIdx      the end index of the 1:n relation pointing to ComM_UserReqPncFullCom
  UserReqPncFullComStartIdx    the start index of the 1:n relation pointing to ComM_UserReqPncFullCom
*/ 
#define COMM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(ComM_PncPbType, COMM_CONST) ComM_PncPb[10] = {
    /* Index    PncChannelMappingEndIdx  PncChannelMappingStartIdx  PncSignalIndEndIdx  PncSignalIndStartIdx  SignalByteIndex  UserReqPncFullComEndIdx  UserReqPncFullComStartIdx        Referable Keys */
  { /*     0 */                      1u,                        0u,                 1u,                   0u,              0u,                      1u,                        0u },  /* [/ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_ddf4896d, ComMChannel_0] */
  { /*     1 */                      2u,                        1u,                 2u,                   1u,              1u,                      2u,                        1u },  /* [/ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_18d7bb82, ComMChannel_0] */
  { /*     2 */                      3u,                        2u,                 3u,                   2u,              1u,                      3u,                        2u },  /* [/ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_6fd08b14, ComMChannel_0] */
  { /*     3 */                      4u,                        3u,                 4u,                   3u,              1u,                      4u,                        3u },  /* [/ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_f6d9daae, ComMChannel_0] */
  { /*     4 */                      5u,                        4u,                 5u,                   4u,              1u,                      5u,                        4u },  /* [/ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_81deea38, ComMChannel_0] */
  { /*     5 */                      6u,                        5u,                 6u,                   5u,              1u,                      6u,                        5u },  /* [/ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_6666c73f, ComMChannel_0] */
  { /*     6 */                      7u,                        6u,                 7u,                   6u,              1u,                      7u,                        6u },  /* [/ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_06a14eda, ComMChannel_0] */
  { /*     7 */                      8u,                        7u,                 8u,                   7u,              2u,                      8u,                        7u },  /* [/ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_9fa81f60, ComMChannel_0] */
  { /*     8 */                      9u,                        8u,                 9u,                   8u,              2u,                      9u,                        8u },  /* [/ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_76cbba55, ComMChannel_0] */
  { /*     9 */                     10u,                        9u,                10u,                   9u,              2u,                     10u,                        9u }   /* [/ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_7f7df67e, ComMChannel_0] */
};
#define COMM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  ComM_PncPbInd
**********************************************************************************************************************/
/** 
  \var    ComM_PncPbInd
  \brief  the indexes of the 1:1 sorted relation pointing to ComM_PncPb
*/ 
#define COMM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(ComM_PncPbIndType, COMM_CONST) ComM_PncPbInd[10] = {
  /* Index    PncPbInd      Referable Keys */
  /*     0 */       0u,  /* [ComMChannel_0] */
  /*     1 */       1u,  /* [ComMChannel_0] */
  /*     2 */       2u,  /* [ComMChannel_0] */
  /*     3 */       3u,  /* [ComMChannel_0] */
  /*     4 */       4u,  /* [ComMChannel_0] */
  /*     5 */       5u,  /* [ComMChannel_0] */
  /*     6 */       6u,  /* [ComMChannel_0] */
  /*     7 */       7u,  /* [ComMChannel_0] */
  /*     8 */       8u,  /* [ComMChannel_0] */
  /*     9 */       9u   /* [ComMChannel_0] */
};
#define COMM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  ComM_PncSignal
**********************************************************************************************************************/
/** 
  \var    ComM_PncSignal
  \brief  Information about partial network signals (EIRA, ERA)
  \details
  Element                    Description
  ChannelIdx                 the index of the 0:1 relation pointing to ComM_Channel
  PncSignalValuesEndIdx      the end index of the 0:n relation pointing to ComM_PncSignalValues
  PncSignalValuesStartIdx    the start index of the 0:n relation pointing to ComM_PncSignalValues
  Type                       Partial network signal type
*/ 
#define COMM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(ComM_PncSignalType, COMM_CONST) ComM_PncSignal[2] = {
    /* Index    ChannelIdx                     PncSignalValuesEndIdx  PncSignalValuesStartIdx  Type                                Referable Keys */
  { /*     0 */ COMM_NO_CHANNELIDXOFPNCSIGNAL,                    6u,                      0u, COMM_EIRA_RX_TYPEOFPNCSIGNAL },  /* [ComM_ComConf_ComSignal_PropulsionCAN_db9c2837_Rx] */
  { /*     1 */                            0u,                   12u,                      6u, COMM_EIRA_TX_TYPEOFPNCSIGNAL }   /* [ComM_ComConf_ComSignal_PropulsionCAN_EiraSignal_Tx, /ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_ddf4896d, /ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_18d7bb82, /ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_6fd08b14, /ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_f6d9daae, /ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_81deea38, /ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_6666c73f, /ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_06a14eda, /ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_9fa81f60, /ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_76cbba55, /ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_7f7df67e] */
};
#define COMM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  ComM_User
**********************************************************************************************************************/
/** 
  \var    ComM_User
  \brief  Information about ComM users
  \details
  Element                    Description
  PncUser                    decides if a user is a partial network user or a direct channel user
  UserByteMaskEndIdx         the end index of the 0:n relation pointing to ComM_UserByteMask
  UserByteMaskStartIdx       the start index of the 0:n relation pointing to ComM_UserByteMask
  UserPncByteMaskEndIdx      the end index of the 0:n relation pointing to ComM_UserPncByteMask
  UserPncByteMaskStartIdx    the start index of the 0:n relation pointing to ComM_UserPncByteMask
*/ 
#define COMM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(ComM_UserType, COMM_CONST) ComM_User[2] = {
    /* Index    PncUser  UserByteMaskEndIdx  UserByteMaskStartIdx  UserPncByteMaskEndIdx                UserPncByteMaskStartIdx                      Comment */
  { /*     0 */   FALSE,                 1u,                   0u, COMM_NO_USERPNCBYTEMASKENDIDXOFUSER, COMM_NO_USERPNCBYTEMASKSTARTIDXOFUSER },  /* [PropulsionCAN_IEM_04f8de22] */
  { /*     1 */    TRUE,                 2u,                   1u,                                 10u,                                    0u }   /* [PropulsionCAN_IEM_78c1505e] */
};
#define COMM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  ComM_UserByteMask
**********************************************************************************************************************/
/** 
  \var    ComM_UserByteMask
  \brief  Each user has N entries in this array (N = # channels attached to this user, directly or through PNC). Each entry describes a Byte Position and a Mask for storing/clearing the user request in UserReqFullCom
  \details
  Element      Description
  ClearMask    Clear-mask for clearing the bit which corresponds to this user
  SetMask      Set-mask for setting the bit which corresponds to this user
*/ 
#define COMM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(ComM_UserByteMaskType, COMM_CONST) ComM_UserByteMask[2] = {
    /* Index    ClearMask  SetMask        Referable Keys */
  { /*     0 */     0xFEu,   0x01u },  /* [/ActiveEcuC/ComM/ComMConfigSet/PropulsionCAN_IEM_04f8de22] */
  { /*     1 */     0xFDu,   0x02u }   /* [/ActiveEcuC/ComM/ComMConfigSet/PropulsionCAN_IEM_78c1505e] */
};
#define COMM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  ComM_UserPncByteMask
**********************************************************************************************************************/
/** 
  \var    ComM_UserPncByteMask
  \brief  Each partial network user has N entries in this array (N = # pncs attached to this user). Each entry describes a Byte Position and a Mask for storing/clearing the user request in UserReqPncFullCom
  \details
  Element                 Description
  PncID                   System Id of the partial network which is requested by this entry
  UserReqPncFullComIdx    the index of the 1:1 relation pointing to ComM_UserReqPncFullCom
*/ 
#define COMM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(ComM_UserPncByteMaskType, COMM_CONST) ComM_UserPncByteMask[10] = {
    /* Index    PncID  UserReqPncFullComIdx        Referable Keys */
  { /*     0 */   29u,                   5u },  /* [/ActiveEcuC/ComM/ComMConfigSet/PropulsionCAN_IEM_78c1505e] */
  { /*     1 */   30u,                   6u },  /* [/ActiveEcuC/ComM/ComMConfigSet/PropulsionCAN_IEM_78c1505e] */
  { /*     2 */   26u,                   3u },  /* [/ActiveEcuC/ComM/ComMConfigSet/PropulsionCAN_IEM_78c1505e] */
  { /*     3 */   25u,                   2u },  /* [/ActiveEcuC/ComM/ComMConfigSet/PropulsionCAN_IEM_78c1505e] */
  { /*     4 */   39u,                   9u },  /* [/ActiveEcuC/ComM/ComMConfigSet/PropulsionCAN_IEM_78c1505e] */
  { /*     5 */   16u,                   0u },  /* [/ActiveEcuC/ComM/ComMConfigSet/PropulsionCAN_IEM_78c1505e] */
  { /*     6 */   24u,                   1u },  /* [/ActiveEcuC/ComM/ComMConfigSet/PropulsionCAN_IEM_78c1505e] */
  { /*     7 */   33u,                   7u },  /* [/ActiveEcuC/ComM/ComMConfigSet/PropulsionCAN_IEM_78c1505e] */
  { /*     8 */   35u,                   8u },  /* [/ActiveEcuC/ComM/ComMConfigSet/PropulsionCAN_IEM_78c1505e] */
  { /*     9 */   27u,                   4u }   /* [/ActiveEcuC/ComM/ComMConfigSet/PropulsionCAN_IEM_78c1505e] */
};
#define COMM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  ComM_ActivePncComMode
**********************************************************************************************************************/
/** 
  \var    ComM_ActivePncComMode
  \brief  stores the current partial network state
*/ 
#define COMM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(ComM_PncModeType, COMM_VAR_NOINIT) ComM_ActivePncComMode[10];
#define COMM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  ComM_BusPncComModeReq
**********************************************************************************************************************/
/** 
  \var    ComM_BusPncComModeReq
  \brief  Stores the partial network state requested by external requests
*/ 
#define COMM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(ComM_PncModeType, COMM_VAR_NOINIT) ComM_BusPncComModeReq[10];
#define COMM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  ComM_DcmRequestActive
**********************************************************************************************************************/
/** 
  \var    ComM_DcmRequestActive
  \brief  Status of Dcm active diagnostic request, TRUE if requested, FALSE otherwise
*/ 
#define COMM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(ComM_DcmRequestActiveUType, COMM_VAR_NOINIT) ComM_DcmRequestActive;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [ComMChannel_0] */

#define COMM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  ComM_PncPSleepTimer
**********************************************************************************************************************/
/** 
  \var    ComM_PncPSleepTimer
  \brief  partial network prepare sleep timer
*/ 
#define COMM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(ComM_PncPSleepTimerType, COMM_VAR_NOINIT) ComM_PncPSleepTimer[10];
#define COMM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  ComM_PncSignalValues
**********************************************************************************************************************/
#define COMM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(ComM_PncSignalValuesUType, COMM_VAR_NOINIT) ComM_PncSignalValues;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [ComM_ComConf_ComSignal_PropulsionCAN_db9c2837_Rx] */
  /*     1 */  /* [ComM_ComConf_ComSignal_PropulsionCAN_db9c2837_Rx] */
  /*     2 */  /* [ComM_ComConf_ComSignal_PropulsionCAN_db9c2837_Rx] */
  /*     3 */  /* [ComM_ComConf_ComSignal_PropulsionCAN_db9c2837_Rx] */
  /*     4 */  /* [ComM_ComConf_ComSignal_PropulsionCAN_db9c2837_Rx] */
  /*     5 */  /* [ComM_ComConf_ComSignal_PropulsionCAN_db9c2837_Rx] */
  /*     6 */  /* [ComM_ComConf_ComSignal_PropulsionCAN_EiraSignal_Tx] */
  /*     7 */  /* [ComM_ComConf_ComSignal_PropulsionCAN_EiraSignal_Tx] */
  /*     8 */  /* [ComM_ComConf_ComSignal_PropulsionCAN_EiraSignal_Tx] */
  /*     9 */  /* [ComM_ComConf_ComSignal_PropulsionCAN_EiraSignal_Tx] */
  /*    10 */  /* [ComM_ComConf_ComSignal_PropulsionCAN_EiraSignal_Tx] */
  /*    11 */  /* [ComM_ComConf_ComSignal_PropulsionCAN_EiraSignal_Tx] */

#define COMM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  ComM_UserReqFullCom
**********************************************************************************************************************/
/** 
  \var    ComM_UserReqFullCom
  \brief  RAM array used to store user requests for channels as bitmasks. Each channel 'owns' 1..n bytes in this array, depending on the number of users assigned to it.
*/ 
#define COMM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(ComM_UserReqFullComType, COMM_VAR_NOINIT) ComM_UserReqFullCom[1];
  /* Index        Referable Keys  */
  /*     0 */  /* [ComMChannel_0, Channel0_To_User0, Channel0_To_User1] */

#define COMM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  ComM_UserReqPncFullCom
**********************************************************************************************************************/
/** 
  \var    ComM_UserReqPncFullCom
  \brief  RAM array used to store user requests for PNCs as bitmasks. Each PNC 'owns' 1..n bytes in this array, depending on the number of users assigned to it.
*/ 
#define COMM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(ComM_UserReqPncFullComType, COMM_VAR_NOINIT) ComM_UserReqPncFullCom[10];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_ddf4896d, Pnc16_To_User1] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_18d7bb82, Pnc24_To_User1] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_6fd08b14, Pnc25_To_User1] */
  /*     3 */  /* [/ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_f6d9daae, Pnc26_To_User1] */
  /*     4 */  /* [/ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_81deea38, Pnc27_To_User1] */
  /*     5 */  /* [/ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_6666c73f, Pnc29_To_User1] */
  /*     6 */  /* [/ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_06a14eda, Pnc30_To_User1] */
  /*     7 */  /* [/ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_9fa81f60, Pnc33_To_User1] */
  /*     8 */  /* [/ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_76cbba55, Pnc35_To_User1] */
  /*     9 */  /* [/ActiveEcuC/ComM/ComMConfigSet/System_MAPPING_7f7df67e, Pnc39_To_User1] */

#define COMM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */




/* -----------------------------------------------------------------------------
    &&&~ GLOBAL DATA ROM
 ----------------------------------------------------------------------------- */

#define COMM_START_SEC_CONST_UNSPECIFIED
 /* PRQA S 5087 1 */ /* MD_MSR_19.1 */ 
#include "MemMap.h"

CONST(ComM_InhibitionStatusType, COMM_CONST) ComM_ECUGroupClassInit = 0x0;


#define COMM_STOP_SEC_CONST_UNSPECIFIED
 /* PRQA S 5087 1 */ /* MD_MSR_19.1 */ 
#include "MemMap.h"


/* -----------------------------------------------------------------------------
    &&&~ INTERNAL DATA RAM
 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
    &&&~ GLOBAL DATA RAM
 ----------------------------------------------------------------------------- */

#define COMM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ GLOBAL FUNCTION PROTOTYPES
 ----------------------------------------------------------------------------- */

/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_0
*********************************************************************************************************************/
/*!
 * \internal
 * - #10 Call the ComM_MainFunction() for the corresponding channel.
 * \endinternal
 */
FUNC(void, COMM_CODE) ComM_MainFunction_0(void)
{
  /* ----- Development Error Checks ------------------------------------- */
  /* Not needed, ComM_MainFunction() performs an initialization check. */

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Call the ComM_MainFunction() for the corresponding channel. */
  ComM_MainFunction((NetworkHandleType)0 );
}



/*********************************************************************************************************************
  FUNCTION: ComM_RequestBusSMMode
*********************************************************************************************************************/
/*!
 * \internal
 * - #10 Request the communication mode from the corresponding BusSM.
 * \endinternal
 */
FUNC(void, COMM_CODE) ComM_RequestBusSMMode(NetworkHandleType Channel, ComM_ModeType ComMode)
{
  /* ----- Local Variables ---------------------------------------------- */
  Std_ReturnType retVal;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Request the communication mode from the corresponding BusSM. */
  retVal = CanSM_RequestComMode(Channel, ComMode);
  
  /* ----- Development Error Report --------------------------------------- */
  if (retVal != E_OK)
  {
    (void)Det_ReportError( COMM_MODULE_ID, COMM_INSTANCE_ID_DET, COMM_SID_MAINFUNCTION, COMM_E_ERROR_IN_PROV_SERVICE );
  }
} /* PRQA S 6030 */ /* MD_MSR_STCYC */


/*********************************************************************************************************************
  FUNCTION: ComM_GetCurrentBusSMMode
*********************************************************************************************************************/
/*!
 * \internal
 * - #10 Query the current communication mode from the corresponding BusSM.
 * \endinternal
 */
FUNC(void, COMM_CODE) ComM_GetCurrentBusSMMode(NetworkHandleType Channel, P2VAR(ComM_ModeType, AUTOMATIC, AUTOMATIC) ComMode)
{
  /* ----- Local Variables ---------------------------------------------- */
  Std_ReturnType retVal;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Query the current communication mode from the corresponding BusSM. */
  retVal = CanSM_GetCurrentComMode(Channel, ComMode); /* SBSW_COMM_CALL_BUSSM_GET_CURRENT_COMMODE */

  /* ----- Development Error Report --------------------------------------- */
  if (retVal != E_OK)
  {
    (void)Det_ReportError( COMM_MODULE_ID, COMM_INSTANCE_ID_DET, COMM_SID_GETCURRENTCOMMODE, COMM_E_ERROR_IN_PROV_SERVICE );
  }
} /* PRQA S 6030 */ /* MD_MSR_STCYC */


# if (COMM_EXISTS_EIRA_TX_TYPEOFPNCSIGNAL == STD_ON)
/*********************************************************************************************************************
  FUNCTION: ComM_ExecuteComSendSignal
*********************************************************************************************************************/
/*!
 * \internal
 * - #10 Call Com_SendSignal() for the given internal signal id, which is mapped to a Com signal id.
 * \endinternal
 */
FUNC(void, COMM_CODE) ComM_ExecuteComSendSignal(ComM_SizeOfPncSignalType InternalSignalId, const uint8 *SignalDataTx)
{
  /* #10 Call Com_SendSignal() for the given internal signal id, which is mapped to a Com signal id. */
  switch (InternalSignalId)
  {
  case 1:
    (void)Com_SendSignal(ComConf_ComSignal_PropulsionCAN_EiraSignal_Tx, SignalDataTx); /* SBSW_COMM_CALL_WITH_PTR_TO_CONST */
    break;
  default: /* COV_COMM_MISRA */
    /* Nothing to do */
    break;
  }
}
# endif


/*********************************************************************************************************************
  FUNCTION: ComM_ComCbk_PropulsionCAN_db9c2837_Rx
*********************************************************************************************************************/
/*!
 * \internal
 * - #10 Notification that an EIRA_RX or ERA signal data has changed. 
 *       Receive the data of the corresponding signal and trigger signal data processing.
 * \endinternal
 */
FUNC(void, COMM_CODE) ComM_ComCbk_PropulsionCAN_db9c2837_Rx(void)
{
  uint8 EiraOrEraValuesRx[COMM_PNC_SIGNAL_LENGTH] = {0};

 /* - #10 Notification that an EIRA_RX or ERA signal data has changed. 
  *       Receive the data of the corresponding signal and trigger signal data processing. */
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_PropulsionCAN_db9c2837_Rx, &EiraOrEraValuesRx[0]); /* SBSW_COMM_CALL_COM_RECEIVE_SIGNAL */
    
    ComM_PncProcessRxSignalEira(0, &EiraOrEraValuesRx[0]); /* SBSW_COMM_CALL_WITH_PTR_TO_CONST */
  }
}


#define COMM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

