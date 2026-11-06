/**********************************************************************************************************************
 * Appl_ComGroup_Bringup.h — all Com RX signal-groups with E2E Cntr (pre-RTE shell)
 *
 * VehCfgPrm/Ext stay in Appl_CarConfig. Imob/VehBatt have no Cntr — not in HitMask.
 *********************************************************************************************************************/
#ifndef APPL_COMGROUP_BRINGUP_H
#define APPL_COMGROUP_BRINGUP_H

#include "Std_Types.h"

#define APPL_COMGROUP_RX_N ((uint8)10u)

/* HitMask bits (expect 0x3FF after full smoke): */
#define APPL_COMGROUP_BIT_Crash   ((uint16)(1u << 0))
#define APPL_COMGROUP_BIT_EngSt1  ((uint16)(1u << 1))
#define APPL_COMGROUP_BIT_EscVar  ((uint16)(1u << 2))
#define APPL_COMGROUP_BIT_HvRly   ((uint16)(1u << 3))
#define APPL_COMGROUP_BIT_PtTq    ((uint16)(1u << 4))
#define APPL_COMGROUP_BIT_Stc     ((uint16)(1u << 5))
#define APPL_COMGROUP_BIT_VehMod  ((uint16)(1u << 6))
#define APPL_COMGROUP_BIT_VehMtn  ((uint16)(1u << 7))
#define APPL_COMGROUP_BIT_VehSpd  ((uint16)(1u << 8))
#define APPL_COMGROUP_BIT_TqAllwd ((uint16)(1u << 9))
#define APPL_COMGROUP_HIT_ALL     ((uint16)0x03FFu)

extern volatile uint16 Appl_ComGroup_SampleCnt;
extern volatile uint16 Appl_ComGroup_OkCnt;
extern volatile uint8 Appl_ComGroup_AnyOk;
extern volatile uint16 Appl_ComGroup_HitMask; /* sticky: bit set after first cntr change */
extern volatile uint8 Appl_ComGroup_Cntr[APPL_COMGROUP_RX_N];
extern volatile Std_ReturnType Appl_ComGroup_GrpRet[APPL_COMGROUP_RX_N];

/* Compat aliases (0536 watches) */
extern volatile uint8 Appl_ComGroup_VehSpdLgtCntr;
extern volatile uint8 Appl_ComGroup_VehModCntr;
extern volatile uint8 Appl_ComGroup_TqAllwdCntr;

void Appl_ComGroup_Bringup_OnSample(void);

#endif /* APPL_COMGROUP_BRINGUP_H */
