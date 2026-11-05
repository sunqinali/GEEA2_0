#ifndef APPL_COMSHELL_H
#define APPL_COMSHELL_H

#include "Std_Types.h"

/*! Appl_ComShell v0.5 — 22 RX + 19 TX primitives via Rte↔COM (all SystemExtract scalars) */
void Appl_ComShell_Init(void);
void Appl_ComShell_Step(void);

extern volatile uint8 Appl_ComShell_InitDone;
extern volatile uint16 Appl_ComShell_StepCnt;
extern volatile uint16 Appl_ComShell_RxOkCnt;
extern volatile uint16 Appl_ComShell_TxOkCnt;

extern volatile uint32 Appl_ComShell_CarTiGlb;
extern volatile uint32 Appl_ComShell_BkpOfDstTrvld;
extern volatile uint8 Appl_ComShell_ModReq;
extern volatile uint16 Appl_ComShell_TqReq;
extern volatile uint16 Appl_ComShell_CooltTSig;
extern volatile uint16 Appl_ComShell_CooltFlow;
extern volatile uint16 Appl_ComShell_SpdRotlRe;
extern volatile uint16 Appl_ComShell_PwrLimMax;
extern volatile uint16 Appl_ComShell_PwrLimMin;
extern volatile uint8 Appl_ComShell_ModSts;
extern volatile sint16 Appl_ComShell_SpdAct;
extern volatile uint16 Appl_ComShell_Udc;
extern volatile uint8 Appl_ComShell_MotT;
extern volatile uint8 Appl_ComShell_InvrT;
extern volatile uint8 Appl_ComShell_CooltT;
extern volatile uint16 Appl_ComShell_Idc;
extern volatile uint16 Appl_ComShell_LimnIndcn;
extern volatile uint8 Appl_ComShell_CoolgReq;
extern volatile uint8 Appl_ComShell_ErrIndcnReq;
extern volatile uint8 Appl_ComShell_DCChrgnHndlSts;
extern volatile uint8 Appl_ComShell_DrvgCyc;
extern volatile uint8 Appl_ComShell_GearLvrIndcn;
extern volatile uint16 Appl_ComShell_HvBattSoc;
extern volatile uint16 Appl_ComShell_HvBattUDc;
extern volatile uint16 Appl_ComShell_HvBattUDynMaxLim;
extern volatile uint16 Appl_ComShell_HvBattUDynMinLim;
extern volatile uint8 Appl_ComShell_ImobEngSts2;
extern volatile uint8 Appl_ComShell_OnBdChrgrHndlSts1;
extern volatile uint8 Appl_ComShell_PLockFltIndcRe;
extern volatile uint8 Appl_ComShell_PLockFltLvlRe;
extern volatile uint8 Appl_ComShell_PLockParkReq;
extern volatile uint8 Appl_ComShell_PLockParkStsRe;
extern volatile uint8 Appl_ComShell_PrpsnFbLimnIndcn;
extern volatile uint8 Appl_ComShell_RearHeatModEnad;
extern volatile uint8 Appl_ComShell_RearHeatPwrAllwd;
extern volatile uint8 Appl_ComShell_ClrRdyReq;
extern volatile uint16 Appl_ComShell_CooltFlowMinReq;
extern volatile uint8 Appl_ComShell_ActvDampgModReq;
extern volatile uint8 Appl_ComShell_HeatFdBck;
extern volatile uint8 Appl_ComShell_HeatPwrAct;
extern volatile uint8 Appl_ComShell_HeatPwrMax;

#endif /* APPL_COMSHELL_H */
