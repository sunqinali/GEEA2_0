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
Std_ReturnType TSC_Appl_ComShell_Rte_Read_DCChrgnHndlSts_DCChrgnHndlSts(uint8 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_DrvgCyc_DrvgCyc(uint8 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_GearLvrIndcn_GearLvrIndcn(uint8 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_HvBattSoc_HvBattSoc(uint16 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_HvBattUDc_HvBattUDc(uint16 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_HvBattUDynMaxLim_HvBattUDynMaxLim(uint16 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_HvBattUDynMinLim_HvBattUDynMinLim(uint16 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_OnBdChrgrHndlSts1_OnBdChrgrHndlSts1(uint8 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_PLockParkReq_PLockParkReq(uint8 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_PrpsnFbLimnIndcn_PrpsnFbLimnIndcn(uint8 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_RearHeatModEnad_RearHeatModEnad(uint8 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_RearHeatPwrAllwd_RearHeatPwrAllwd(uint8 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_SpdRotlForWhlsAtAxleRe_SpdRotlForWhlsAtAxleRe(uint16 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_WhlMotSysActvDampgModReq_WhlMotSysActvDampgModReq(uint8 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_WhlMotSysModReq_WhlMotSysModReq(uint8 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_WhlMotSysPwrLimMax_WhlMotSysPwrLimMax(uint16 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_WhlMotSysPwrLimMin_WhlMotSysPwrLimMin(uint16 *data);
Std_ReturnType TSC_Appl_ComShell_Rte_Read_WhlMotSysTqReq_WhlMotSysTqReq(uint16 *data);

/** Sender receiver - explicit write services */
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
Std_ReturnType TSC_Appl_ComShell_Rte_Write_WhlMotSysUdc_WhlMotSysUdc(uint16 data);




