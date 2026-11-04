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
 *            Module: CanTrcv
 *           Program: MSR_Vector_SLP4
 *          Customer: Aptiv (China) Technology Company Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397 
 *    License Scope : The usage is restricted to CBD2000642_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: CanTrcv_30_Tja1145_Cfg.c
 *   Generation Time: 2026-11-03 13:59:00
 *           Project: IEM_TC387_BRS - Version 1
 *          Delivery: CBD2000642_D01
 *      Tool Version: DaVinci Configurator  5.22.45 SP3
 *
 *
 *********************************************************************************************************************/


/* PRQA S 0777 EOF */ /* MD_MSR_Rule5.1 */
/* PRQA S 0779 EOF */ /* MD_MSR_Rule5.2 */

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "CanTrcv_30_Tja1145.h"

/**********************************************************************************************************************
  VERSION DEFINES (Adapted with: ESCAN00086365)
**********************************************************************************************************************/
#if (DRVTRANS_CAN_30_TJA1145_GENTOOL_CFG5_MAJOR_VERSION != 0x03u)
# error "CanTrcv_30_30_Tja1145_Cfg.c : Incompatible DRVTRANS_30_TJA1145_GENTOOL_CFG5_MAJOR_VERSION in generated File!"
#endif

#if (DRVTRANS_CAN_30_TJA1145_GENTOOL_CFG5_MINOR_VERSION != 0x04u)
# error "CanTrcv_30_30_Tja1145_Cfg.c : Incompatible DRVTRANS_30_TJA1145_GENTOOL_CFG5_MINOR_VERSION in generated File!"
#endif

#if (DRVTRANS_CAN_30_TJA1145_GENTOOL_CFG5_PATCH_VERSION != 0x00u)
# error "CanTrcv_30_30_Tja1145_Cfg.c : Incompatible DRVTRANS_30_TJA1145_GENTOOL_CFG5_PATCH_VERSION in generated File!"
#endif


/**********************************************************************************************************************
    ADDITIONAL (HW SPECIFIC)
**********************************************************************************************************************/




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
  CanTrcv_30_Tja1145_ChannelUsed
**********************************************************************************************************************/
#define CANTRCV_30_TJA1145_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTrcv_30_Tja1145_ChannelUsedType, CANTRCV_30_TJA1145_CONST) CanTrcv_30_Tja1145_ChannelUsed[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     ChannelUsed  */
  /*     0 */         TRUE
};
#define CANTRCV_30_TJA1145_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTrcv_30_Tja1145_PnCfg
**********************************************************************************************************************/
/** 
  \var    CanTrcv_30_Tja1145_PnCfg
  \details
  Element         Description
  Baudrate        Baudrate register
  CanId0          CAN identifier register 0 [Std: don't care, Ext: ID07..ID00]
  CanId1          CAN identifier register 1 [Std: don't care, Ext: ID15..ID08]
  CanId2          CAN identifier register 2 [Std: ID05..ID00: Ext: ID23..ID16]
  CanId3          CAN identifier register 3 [Std: ID10..ID06, Ext: ID28..ID24]
  CanIdMask0      CAN identifier mask register 0 [Std: don't care, Ext: ID07..ID00]
  CanIdMask1      CAN identifier mask register 1 [Std: don't care, Ext: ID15..ID08]
  CanIdMask2      CAN identifier mask register 2 [Std: ID05..ID00: Ext: ID23..ID16]
  CanIdMask3      CAN identifier mask register 3 [Std: ID10..ID06, Ext: ID28..ID24]
  FrameControl    Frame control register (IDE, PNMD, DLC)
*/ 
#define CANTRCV_30_TJA1145_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTrcv_30_Tja1145_PnCfgType, CANTRCV_30_TJA1145_CONST) CanTrcv_30_Tja1145_PnCfg[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Baudrate                       CanId0                                CanId1  CanId2  CanId3  CanIdMask0                             CanIdMask1  CanIdMask2  CanIdMask3  FrameControl */
  { /*     0 */       5u  /* (=500 KBit/s) */,  0x00u  /* (CanId = 0x00000000uL) */,  0x00u,  0x00u,  0x00u,      0x00u  /* (MASK=0x00000000uL) */,      0x00u,      0x00u,      0x00u,        0x48u }
};
#define CANTRCV_30_TJA1145_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTrcv_30_Tja1145_PnEnabled
**********************************************************************************************************************/
#define CANTRCV_30_TJA1145_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTrcv_30_Tja1145_PnEnabledType, CANTRCV_30_TJA1145_CONST) CanTrcv_30_Tja1145_PnEnabled[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     PnEnabled  */
  /*     0 */      FALSE
};
#define CANTRCV_30_TJA1145_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTrcv_30_Tja1145_PnPayloadCfg
**********************************************************************************************************************/
/** 
  \var    CanTrcv_30_Tja1145_PnPayloadCfg
  \details
  Element      Description
  DataMask0    Data mask register 0
  DataMask1    Data mask register 1
  DataMask2    Data mask register 2
  DataMask3    Data mask register 3
  DataMask4    Data mask register 4
  DataMask5    Data mask register 5
  DataMask6    Data mask register 6
  DataMask7    Data mask register 7
*/ 
#define CANTRCV_30_TJA1145_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTrcv_30_Tja1145_PnPayloadCfgType, CANTRCV_30_TJA1145_CONST) CanTrcv_30_Tja1145_PnPayloadCfg[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    DataMask0  DataMask1  DataMask2  DataMask3  DataMask4  DataMask5  DataMask6  DataMask7 */
  { /*     0 */     0x00u,     0x00u,     0x00u,     0x00u,     0x00u,     0x00u,     0x00u,     0x00u }
};
#define CANTRCV_30_TJA1145_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTrcv_30_Tja1145_SpiChannelCfg
**********************************************************************************************************************/
/** 
  \var    CanTrcv_30_Tja1145_SpiChannelCfg
  \details
  Element                 Description
  CanTrcvSpiChRWData_0
  CanTrcvSpiChRWData_1
  CanTrcvSpiChRWData_2
  CanTrcvSpiChRWData_3
*/ 
#define CANTRCV_30_TJA1145_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTrcv_30_Tja1145_SpiChannelCfgType, CANTRCV_30_TJA1145_CONST) CanTrcv_30_Tja1145_SpiChannelCfg[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    CanTrcvSpiChRWData_0                        CanTrcvSpiChRWData_1                        CanTrcvSpiChRWData_2                        CanTrcvSpiChRWData_3                       */
  { /*     0 */ SpiConf_SpiChannel_SpiChannel_TJA1145_REG0, SpiConf_SpiChannel_SpiChannel_TJA1145_REG1, SpiConf_SpiChannel_SpiChannel_TJA1145_REG2, SpiConf_SpiChannel_SpiChannel_TJA1145_REG3 }
};
#define CANTRCV_30_TJA1145_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTrcv_30_Tja1145_SpiSequenceCfg
**********************************************************************************************************************/
/** 
  \var    CanTrcv_30_Tja1145_SpiSequenceCfg
  \details
  Element                   Description
  CanTrcvSeqRWDataLarge 
  CanTrcvSeqRWDataMedium
  CanTrcvSeqRWDataNormal
*/ 
#define CANTRCV_30_TJA1145_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTrcv_30_Tja1145_SpiSequenceCfgType, CANTRCV_30_TJA1145_CONST) CanTrcv_30_Tja1145_SpiSequenceCfg[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    CanTrcvSeqRWDataLarge                      CanTrcvSeqRWDataMedium                     CanTrcvSeqRWDataNormal                    */
  { /*     0 */ SpiConf_SpiSequence_SpiSequence_TJA1145_L, SpiConf_SpiSequence_SpiSequence_TJA1145_M, SpiConf_SpiSequence_SpiSequence_TJA1145_N }
};
#define CANTRCV_30_TJA1145_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTrcv_30_Tja1145_WakeupByBusUsed
**********************************************************************************************************************/
#define CANTRCV_30_TJA1145_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTrcv_30_Tja1145_WakeupByBusUsedType, CANTRCV_30_TJA1145_CONST) CanTrcv_30_Tja1145_WakeupByBusUsed[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     WakeupByBusUsed  */
  /*     0 */            FALSE
};
#define CANTRCV_30_TJA1145_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTrcv_30_Tja1145_WakeupSource
**********************************************************************************************************************/
#define CANTRCV_30_TJA1145_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTrcv_30_Tja1145_WakeupSourceType, CANTRCV_30_TJA1145_CONST) CanTrcv_30_Tja1145_WakeupSource[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     WakeupSource  */
  /*     0 */         0x01u
};
#define CANTRCV_30_TJA1145_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTrcv_30_Tja1145_WuSrcPor
**********************************************************************************************************************/
#define CANTRCV_30_TJA1145_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTrcv_30_Tja1145_WuSrcPorType, CANTRCV_30_TJA1145_CONST) CanTrcv_30_Tja1145_WuSrcPor[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     WuSrcPor  */
  /*     0 */     0x01u
};
#define CANTRCV_30_TJA1145_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTrcv_30_Tja1145_WuSrcSyserr
**********************************************************************************************************************/
#define CANTRCV_30_TJA1145_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTrcv_30_Tja1145_WuSrcSyserrType, CANTRCV_30_TJA1145_CONST) CanTrcv_30_Tja1145_WuSrcSyserr[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     WuSrcSyserr  */
  /*     0 */        0x10u
};
#define CANTRCV_30_TJA1145_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/





