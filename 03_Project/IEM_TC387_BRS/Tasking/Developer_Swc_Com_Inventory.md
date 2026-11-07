# Developer SWC ↔ COM 清单（阶段5）

## 现状

- `Config/Developer`：`IEM` 组合 = `IEMHOST` + `IEMDTCS`（仅端口壳，无原子 runnable）
- `Appl_ComShell` v0.6：**41** 标量 + **21** 组（VehCfg* 仍 CarConfig 直连）

## 壳标量（v0.5 保留，41）

- RX **22** / TX **19**

## 壳组端口（v0.6，21；VehCfg 除外）

| 方向 | Port | SignalGroup | ADT |
|------|------|-------------|-----|
| RX | CrashStsSafe | CrashStsSafe | CrashStsSafe_1 |
| RX | EngSt1WdSts | EngSt1WdSts | EngSt1WdSts_1 |
| RX | EscVariantToDmc | EscVariantToDmc | EscVariantToDmc_1 |
| RX | HvSysRlySts | HvSysRlySts | HvSysRlySts_1 |
| RX | PtTqAtAxleMaxReq | PtTqAtAxleMaxReq | PtTqAtAxleReq_1 |
| RX | StcStsToDmc | StcStsToDmc | StcStsToDmc_1 |
| RX | VehModMngtGlbSafe1 | VehModMngtGlbSafe1 | VehModMngtGlbSafe1_2 |
| RX | VehMtnSt | VehMtnSt | VehMtnStSafe1_2 |
| RX | VehSpdLgt | VehSpdLgt | VehSpdLgtSafe1_3 |
| RX | WhlMotSysTqAllwd | WhlMotSysTqAllwd | WhlMotSysTqAllwd_3 |
| RX | ImobEngMgrReq2 | ImobEngMgrReq2 | ImobEngMgrReq_2 |
| RX | VehBattU | VehBattU | SysU_4 |
| TX | DmcStsRearToEsc | DmcStsRearToEsc | DmcStsToEsc_1 |
| TX | WhlMotSysSpdActSafe | WhlMotSysSpdActSafe | SpdSgnSafe_1 |
| TX | WhlMotSysTqEst | WhlMotSysTqEst | IsgTqActSafe2_4 |
| TX | IEMTestFr1 | IEMTestFr1 | DevDataTyp64_2 |
| TX | IEMTestFr2 | IEMTestFr2 | DevDataTyp64_2 |
| TX | IEMTestFr3 | IEMTestFr3 | DevDataTyp64_2 |
| TX | IemGeneric | IemGeneric | ElecDrvGen_4 |
| TX | ImobEngChk2 | ImobEngChk2 | ImobEngChk_2 |
| TX | WhlMotSysTqAvl | WhlMotSysTqAvl | WhlMotSysTqAvl_2 |

## 观测

- 标量：`Appl_ComShell_*` / `RxOkCnt` / `TxOkCnt`
- 组：`Appl_ComShell_<Port>` 整包 + `Appl_ComShell_<Port>_Cntr`（有 Cntr 时）
- `GrpRxOkCnt` / `GrpTxOkCnt`

## 板测（2026-11-07，`0x260B0541`）

- `ZCANPRO_IEM_ComGroup_Smoke`：**ALL PASS**（28 cycles）
- UDE：`HitMask=0x3FF`；`GrpRxOkCnt` 上升；`VehSpdLgt_Cntr` 壳与 Com 直读一致；`DmcStsRearToEsc_Cntr` 活；Bringup Ok

## 后续

1. 正式 CCP DB（CCdB→CSV）
2. T3 / T5 仪测
