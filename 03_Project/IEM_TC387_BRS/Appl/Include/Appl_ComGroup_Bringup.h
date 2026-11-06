/**********************************************************************************************************************
 * Appl_ComGroup_Bringup.h — selected Com signal-group RX observation (pre-RTE shell)
 *
 * Full group ports in Appl_ComShell need Developer/RTE regen. Until then, sample a few
 * high-value RX groups via Com_ReceiveSignalGroup + Com_ReceiveSignal (same pattern as CarConfig).
 *********************************************************************************************************************/
#ifndef APPL_COMGROUP_BRINGUP_H
#define APPL_COMGROUP_BRINGUP_H

#include "Std_Types.h"

extern volatile uint16 Appl_ComGroup_SampleCnt;
extern volatile uint16 Appl_ComGroup_OkCnt;
extern volatile uint8 Appl_ComGroup_AnyOk;

/* igVehSpdLgt @ CAN 0x76 */
extern volatile uint16 Appl_ComGroup_VehSpdLgtA;
extern volatile uint8 Appl_ComGroup_VehSpdLgtQf;
extern volatile uint8 Appl_ComGroup_VehSpdLgtCntr;
extern volatile Std_ReturnType Appl_ComGroup_VehSpdRet;

/* igVehModMngtGlbSafe1 @ CAN 0x56 */
extern volatile uint8 Appl_ComGroup_UsgModSts;
extern volatile uint8 Appl_ComGroup_CarModSts1;
extern volatile uint8 Appl_ComGroup_VehModCntr;
extern volatile Std_ReturnType Appl_ComGroup_VehModRet;

/* igWhlMotSysTqAllwd @ CAN 0x84 */
extern volatile uint8 Appl_ComGroup_TqAllwd;
extern volatile uint8 Appl_ComGroup_TqAllwdCntr;
extern volatile Std_ReturnType Appl_ComGroup_TqAllwdRet;

void Appl_ComGroup_Bringup_OnSample(void);

#endif /* APPL_COMGROUP_BRINGUP_H */
