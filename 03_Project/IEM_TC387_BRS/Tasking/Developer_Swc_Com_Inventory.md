# Developer SWC ↔ COM 清单（阶段5）

## 现状

- `Config/Developer`：`IEM` 组合 = `IEMHOST` + `IEMDTCS`（仅端口壳，无原子 runnable）
- IEMHOST：P-Port **27** / R-Port **34**
- `SystemExtract`：已有 IEM 端口 → SystemSignal / SignalGroup 的 DATA-MAPPING
- `FlatExtract` COMPOSITIONTYPE：原先只有 BSW Service SWC；本补丁加入最小应用壳 `Appl_ComShell`
- ECU Projects `ECU_Composition`：空（未同步 System Extract 应用到 Flat）

## 壳 `Appl_ComShell`（v0.5，41 路标量 = 全部 SystemExtract 标量）

| 方向 | Port | SystemSignal |
|------|------|--------------|
| RX | CarTiGlb | CarTiGlb |
| RX | BkpOfDstTrvld | BkpOfDstTrvld |
| RX | WhlMotSysModReq | WhlMotSysModReq |
| RX | WhlMotSysTqReq | WhlMotSysTqReq |
| RX | CooltTSigForDtElec | CooltTSigForDtElec |
| RX | CooltFlowForDtElec | CooltFlowForDtElec |
| RX | SpdRotlForWhlsAtAxleRe | SpdRotlForWhlsAtAxleRe |
| RX | WhlMotSysPwrLimMax | WhlMotSysPwrLimMax |
| RX | WhlMotSysPwrLimMin | WhlMotSysPwrLimMin |
| TX | WhlMotSysModSts | WhlMotSysModSts |
| TX | WhlMotSysSpdAct | WhlMotSysSpdAct |
| TX | WhlMotSysUdc | WhlMotSysUdc |
| TX | WhlMotSysMotT | WhlMotSysMotT |
| TX | WhlMotSysInvrT | WhlMotSysInvrT |
| TX | WhlMotSysCooltT | WhlMotSysCooltT |
| TX | WhlMotSysIdc | WhlMotSysIdc |
| TX | WhlMotSysLimnIndcn | WhlMotSysLimnIndcn |
| TX | WhlMotSysCoolgReq | WhlMotSysCoolgReq |
| TX | WhlMotSysErrIndcnReq | WhlMotSysErrIndcnReq |
| RX | DCChrgnHndlSts | DCChrgnHndlSts |
| RX | DrvgCyc | DrvgCyc |
| RX | GearLvrIndcn | GearLvrIndcn |
| RX | HvBattSoc | HvBattSoc |
| RX | HvBattUDc | HvBattUDc |
| RX | HvBattUDynMaxLim | HvBattUDynMaxLim |
| RX | HvBattUDynMinLim | HvBattUDynMinLim |
| TX | ImobEngSts2 | ImobEngSts2 |
| RX | OnBdChrgrHndlSts1 | OnBdChrgrHndlSts1 |
| TX | PLockFltIndcRe | PLockFltIndcRe |
| TX | PLockFltLvlRe | PLockFltLvlRe |
| RX | PLockParkReq | PLockParkReq |
| TX | PLockParkStsRe | PLockParkStsRe |
| RX | PrpsnFbLimnIndcn | PrpsnFbLimnIndcn |
| RX | RearHeatModEnad | RearHeatModEnad |
| RX | RearHeatPwrAllwd | RearHeatPwrAllwd |
| TX | WhlMotClrRdyReq | WhlMotClrRdyReq |
| TX | WhlMotCooltFlowMinReq | WhlMotCooltFlowMinReq |
| RX | WhlMotSysActvDampgModReq | WhlMotSysActvDampgModReq |
| TX | WhlMotSysHeatFdBck | WhlMotSysHeatFdBck |
| TX | WhlMotSysHeatPwrAct | WhlMotSysHeatPwrAct |
| TX | WhlMotSysHeatPwrMax | WhlMotSysHeatPwrMax |

- RX **22** / TX **19**

## SystemExtract 组映射（仍未进壳）— 23 = 14 RX + 9 TX

| 方向 | Com SignalGroup | 现状 |
|------|-----------------|------|
| RX | CrashStsSafe / EngSt1WdSts / EscVariantToDmc / HvSysRlySts / PtTqAtAxleMaxReq / StcStsToDmc / VehModMngtGlbSafe1 / VehMtnSt / VehSpdLgt / WhlMotSysTqAllwd | **0538 Com 直读 Cntr** |
| RX | ImobEngMgrReq2 / VehBattU | 无 Cntr；未进 HitMask |
| RX | VehCfgPrm / VehCfgPrmExt | **CarConfig 直连**（0539/053E CCP+NvM） |
| TX | DmcStsRearToEsc / WhlMotSysSpdActSafe / WhlMotSysTqEst | **053F Com 直发 Cntr**（Trace `0x110`/`0x189`/`0x4C`） |
| TX | IEMTestFr1..3 / IemGeneric / ImobEngChk2 / WhlMotSysTqAvl | 待 RTE 组壳（无/非 Cntr） |

**0538**：10 路 Cntr HitMask；脚本 `ZCANPRO_IEM_ComGroup_Smoke.py`。  
**0539/053E**：CCP demo + T8 NvM。  
**标量 TX**：**已板测**（2026-11-07 Trace `0x51C`/`0x4C`/`0x60`… + ComShell_TxSmoke ALL PASS）。  
组端口进 `Appl_ComShell` 仍需 **Developer/RTE regen**（勿与标量 v0.5 混淆）。

## 运行时（已 amk）

- Rte：`Rte_Read_*` / `Rte_Write_*` → Com；Step 在 **`Task_Bsw_10ms`**
- 观测：`Appl_ComShell_*` 与 `RxOkCnt`/`TxOkCnt`
- `generate_regen25_comshell_v05`：0 Fatal / 0 Errors；ELF `Tasking/Debug/IEM_TC387_BRS.elf`

## 后续

1. Developer：9 TX + 剩余 RX 组进 `Appl_ComShell`（VehCfg 可继续直连）
2. 正式 CCP DB 替换 demo 白名单
3. T3 / T5 / T7 仪测（见 `BoardArrival_T1_T8.md`）
