/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *             File:  TSC_Appl_ComShell.h
 *           Config:  IEM_TC387_BRS.dpa
 *      ECU-Project:  IEM_TC387_BRS
 *
 *        Generator:  MICROSAR RTE Generator Version 4.23.0
 *                    RTE Core Version 1.23.0
 *          License:  CBD2000642
 *
 *      Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Sender receiver - explicit read services */
Std_ReturnType TSC_Appl_ComShell_Rte_Read_BkpOfDstTrvld_BkpOfDstTrvld(uint32 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_CarTiGlb_CarTiGlb(uint32 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_CooltFlowForDtElec_CooltFlowForDtElec(uint16 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_CooltTSigForDtElec_CooltTSigForDtElec(uint16 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_CrashStsSafe_CrashStsSafe(CrashStsSafe_1 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_DCChrgnHndlSts_DCChrgnHndlSts(uint8 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_DrvgCyc_DrvgCyc(uint8 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_EngSt1WdSts_EngSt1WdSts(EngSt1WdSts_1 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_EscVariantToDmc_EscVariantToDmc(EscVariantToDmc_1 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_GearLvrIndcn_GearLvrIndcn(uint8 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_HvBattSoc_HvBattSoc(uint16 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_HvBattUDc_HvBattUDc(uint16 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_HvBattUDynMaxLim_HvBattUDynMaxLim(uint16 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_HvBattUDynMinLim_HvBattUDynMinLim(uint16 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_HvSysRlySts_HvSysRlySts(HvSysRlySts_1 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_ImobEngMgrReq2_ImobEngMgrReq2(ImobEngMgrReq_2 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_OnBdChrgrHndlSts1_OnBdChrgrHndlSts1(uint8 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_PLockParkReq_PLockParkReq(uint8 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_PrpsnFbLimnIndcn_PrpsnFbLimnIndcn(uint8 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_PtTqAtAxleMaxReq_PtTqAtAxleMaxReq(PtTqAtAxleReq_1 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_RearHeatModEnad_RearHeatModEnad(uint8 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_RearHeatPwrAllwd_RearHeatPwrAllwd(uint8 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_SpdRotlForWhlsAtAxleRe_SpdRotlForWhlsAtAxleRe(uint16 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_StcStsToDmc_StcStsToDmc(StcStsToDmc_1 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_VehBattU_VehBattU(SysU_4 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_VehModMngtGlbSafe1_VehModMngtGlbSafe1(VehModMngtGlbSafe1_2 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_VehMtnSt_VehMtnSt(VehMtnStSafe1_2 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_VehSpdLgt_VehSpdLgt(VehSpdLgtSafe1_3 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_WhlMotSysActvDampgModReq_WhlMotSysActvDampgModReq(uint8 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_WhlMotSysModReq_WhlMotSysModReq(uint8 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_WhlMotSysPwrLimMax_WhlMotSysPwrLimMax(uint16 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_WhlMotSysPwrLimMin_WhlMotSysPwrLimMin(uint16 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_WhlMotSysTqAllwd_WhlMotSysTqAllwd(WhlMotSysTqAllwd_3 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_WhlMotSysTqReq_WhlMotSysTqReq(uint16 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_Appl_ComShell_Rte_Write_DmcStsRearToEsc_DmcStsRearToEsc(const DmcStsToEsc_1 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Write_IEMTestFr1_IEMTestFr1(const DevDataTyp64_2 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Write_IEMTestFr2_IEMTestFr2(const DevDataTyp64_2 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Write_IEMTestFr3_IEMTestFr3(const DevDataTyp64_2 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Write_IemGeneric_IemGeneric(const ElecDrvGen_4 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Write_ImobEngChk2_ImobEngChk2(const ImobEngChk_2 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Write_ImobEngSts2_ImobEngSts2(uint8 data);
Std_ReturnType TSC_Appl_ComShell_Rte_Write_PLockFltIndcRe_PLockFltIndcRe(uint8 data);
Std_ReturnType TSC_Appl_ComShell_Rte_Write_PLockFltLvlRe_PLockFltLvlRe(uint8 data);
Std_ReturnType TSC_Appl_ComShell_Rte_Write_PLockParkStsRe_PLockParkStsRe(uint8 data);
Std_ReturnType TSC_Appl_ComShell_Rte_Write_WhlMotClrRdyReq_WhlMotClrRdyReq(uint8 data);
Std_ReturnType TSC_Appl_ComShell_Rte_Write_WhlMotCooltFlowMinReq_WhlMotCooltFlowMinReq(uint16 data);
Std_ReturnType TSC_Appl_ComShell_Rte_Write_WhlMotSysCoolgReq_WhlMotSysCoolgReq(uint8 data);
Std_ReturnType TSC_Appl_ComShell_Rte_Write_WhlMotSysCooltT_WhlMotSysCooltT(uint8 data);
Std_ReturnType TSC_Appl_ComShell_Rte_Write_WhlMotSysErrIndcnReq_WhlMotSysErrIndcnReq(uint8 data);
Std_ReturnType TSC_Appl_ComShell_Rte_Write_WhlMotSysHeatFdBck_WhlMotSysHeatFdBck(uint8 data);
Std_ReturnType TSC_Appl_ComShell_Rte_Write_WhlMotSysHeatPwrAct_WhlMotSysHeatPwrAct(uint8 data);
Std_ReturnType TSC_Appl_ComShell_Rte_Write_WhlMotSysHeatPwrMax_WhlMotSysHeatPwrMax(uint8 data);
Std_ReturnType TSC_Appl_ComShell_Rte_Write_WhlMotSysIdc_WhlMotSysIdc(uint16 data);
Std_ReturnType TSC_Appl_ComShell_Rte_Write_WhlMotSysInvrT_WhlMotSysInvrT(uint8 data);
Std_ReturnType TSC_Appl_ComShell_Rte_Write_WhlMotSysLimnIndcn_WhlMotSysLimnIndcn(uint16 data);
Std_ReturnType TSC_Appl_ComShell_Rte_Write_WhlMotSysModSts_WhlMotSysModSts(uint8 data);
Std_ReturnType TSC_Appl_ComShell_Rte_Write_WhlMotSysMotT_WhlMotSysMotT(uint8 data);
Std_ReturnType TSC_Appl_ComShell_Rte_Write_WhlMotSysSpdAct_WhlMotSysSpdAct(sint16 data);
Std_ReturnType TSC_Appl_ComShell_Rte_Write_WhlMotSysSpdActSafe_WhlMotSysSpdActSafe(const SpdSgnSafe_1 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Write_WhlMotSysTqAvl_WhlMotSysTqAvl(const WhlMotSysTqAvl_2 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Write_WhlMotSysTqEst_WhlMotSysTqEst(const IsgTqActSafe2_4 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Write_WhlMotSysUdc_WhlMotSysUdc(uint16 data);




