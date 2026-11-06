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

## SystemExtract 组映射（仍未进壳）

共 **23** 条组信号（含 `VehCfgPrm` / `VehCfgPrmExt`）。CarConfig BlkID 已由 `Appl_CarConfig_Bringup` 直接 `Com_ReceiveSignalGroup`；CCP 值表待 DB。

**0536 直读观测（非 RTE 壳）**：`Appl_ComGroup_Bringup` 采样 `igVehSpdLgt` / `igVehModMngtGlbSafe1` / `igWhlMotSysTqAllwd`；脚本 `ZCANPRO_IEM_ComGroup_Smoke.py`。其余组端口进 `Appl_ComShell` 仍需 Developer/RTE regen。

## 运行时（已 amk）

- Rte：`Rte_Read_*` / `Rte_Write_*` → Com；Step 在 **`Task_Bsw_10ms`**
- 观测：`Appl_ComShell_*` 与 `RxOkCnt`/`TxOkCnt`
- `generate_regen25_comshell_v05`：0 Fatal / 0 Errors；ELF `Tasking/Debug/IEM_TC387_BRS.elf`

## 后续

1. 组信号（`VehCfgPrm` 等）进壳或保持 CarConfig 直连
2. 板测 RX/TX；CCP DB / T1–T8 等板
