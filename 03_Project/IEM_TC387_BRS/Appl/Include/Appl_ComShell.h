#ifndef APPL_COMSHELL_H
#define APPL_COMSHELL_H

#include "Std_Types.h"
#include "Rte_Type.h"

/*! Appl_ComShell v0.6 — 22+12 RX / 19+9 TX (scalars+groups, VehCfg excluded) */
void Appl_ComShell_Init(void);
void Appl_ComShell_Step(void);

extern volatile uint8 Appl_ComShell_InitDone;
extern volatile uint16 Appl_ComShell_StepCnt;
extern volatile uint16 Appl_ComShell_RxOkCnt;
extern volatile uint16 Appl_ComShell_TxOkCnt;
extern volatile uint16 Appl_ComShell_GrpRxOkCnt;
extern volatile uint16 Appl_ComShell_GrpTxOkCnt;

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

extern volatile CrashStsSafe_1 Appl_ComShell_CrashStsSafe;
extern volatile uint8 Appl_ComShell_CrashStsSafe_Cntr;
extern volatile EngSt1WdSts_1 Appl_ComShell_EngSt1WdSts;
extern volatile uint8 Appl_ComShell_EngSt1WdSts_Cntr;
extern volatile EscVariantToDmc_1 Appl_ComShell_EscVariantToDmc;
extern volatile uint8 Appl_ComShell_EscVariantToDmc_Cntr;
extern volatile HvSysRlySts_1 Appl_ComShell_HvSysRlySts;
extern volatile uint8 Appl_ComShell_HvSysRlySts_Cntr;
extern volatile PtTqAtAxleReq_1 Appl_ComShell_PtTqAtAxleMaxReq;
extern volatile uint8 Appl_ComShell_PtTqAtAxleMaxReq_Cntr;
extern volatile StcStsToDmc_1 Appl_ComShell_StcStsToDmc;
extern volatile uint8 Appl_ComShell_StcStsToDmc_Cntr;
extern volatile VehModMngtGlbSafe1_2 Appl_ComShell_VehModMngtGlbSafe1;
extern volatile uint8 Appl_ComShell_VehModMngtGlbSafe1_Cntr;
extern volatile VehMtnStSafe1_2 Appl_ComShell_VehMtnSt;
extern volatile uint8 Appl_ComShell_VehMtnSt_Cntr;
extern volatile VehSpdLgtSafe1_3 Appl_ComShell_VehSpdLgt;
extern volatile uint8 Appl_ComShell_VehSpdLgt_Cntr;
extern volatile WhlMotSysTqAllwd_3 Appl_ComShell_WhlMotSysTqAllwd;
extern volatile uint8 Appl_ComShell_WhlMotSysTqAllwd_Cntr;
extern volatile ImobEngMgrReq_2 Appl_ComShell_ImobEngMgrReq2;
extern volatile SysU_4 Appl_ComShell_VehBattU;
extern volatile DmcStsToEsc_1 Appl_ComShell_DmcStsRearToEsc;
extern volatile uint8 Appl_ComShell_DmcStsRearToEsc_Cntr;
extern volatile SpdSgnSafe_1 Appl_ComShell_WhlMotSysSpdActSafe;
extern volatile uint8 Appl_ComShell_WhlMotSysSpdActSafe_Cntr;
extern volatile IsgTqActSafe2_4 Appl_ComShell_WhlMotSysTqEst;
extern volatile uint8 Appl_ComShell_WhlMotSysTqEst_Cntr;
extern volatile DevDataTyp64_2 Appl_ComShell_IEMTestFr1;
extern volatile DevDataTyp64_2 Appl_ComShell_IEMTestFr2;
extern volatile DevDataTyp64_2 Appl_ComShell_IEMTestFr3;
extern volatile ElecDrvGen_4 Appl_ComShell_IemGeneric;
extern volatile ImobEngChk_2 Appl_ComShell_ImobEngChk2;
extern volatile WhlMotSysTqAvl_2 Appl_ComShell_WhlMotSysTqAvl;

#endif /* APPL_COMSHELL_H */
