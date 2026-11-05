# RTE 未连接端口清单（阶段 5）

来源：`Appl/GenData/Rte_OsApplication.c` 中返回 `RTE_E_UNCONNECTED` 的 `Rte_Call_*`。
生成脚本：`Tasking/_gen_rte_unconnected_inventory.py`（RTE 再生后重跑）。

**合计：807**

## 分类统计

| 类别 | 数量 | 说明 |
|------|------|------|
| `Dcm_DID_DataServices` | 757 | CDD 导入的大量 DID，待应用 SWC / 分批接线 |
| `other` | 33 | 其余 |
| `Dcm_Routine` | 15 | 例程 0x31，待应用 |
| `Mode` | 2 | 模式切换 |

## 阶段 5 约定

- **不静默**：本清单随 RTE 再生更新；未列名的 UNCONNECTED 视为遗漏。
- **优先接线**：平台观测 DID（F120/E103）、例程/安全按项目排期。
- **完整 COM↔SWC 映射**属 Developer 应用壳，不挡到板 smoke。

## Dcm_Routine（15）

- `Rte_Call_Dcm_RoutineServices_P_Lock_RequestResults`
- `Rte_Call_Dcm_RoutineServices_P_Lock_Start`
- `Rte_Call_Dcm_RoutineServices_P_Lock_Stop`
- `Rte_Call_Dcm_RoutineServices_Routine_Reserved_1_RequestResults`
- `Rte_Call_Dcm_RoutineServices_Routine_Reserved_1_Start`
- `Rte_Call_Dcm_RoutineServices_Routine_Reserved_1_Stop`
- `Rte_Call_Dcm_RoutineServices_Routine_Reserved_2_RequestResults`
- `Rte_Call_Dcm_RoutineServices_Routine_Reserved_2_Start`
- `Rte_Call_Dcm_RoutineServices_Routine_Reserved_2_Stop`
- `Rte_Call_Dcm_RoutineServices_Routine_Reserved_3_RequestResults`
- `Rte_Call_Dcm_RoutineServices_Routine_Reserved_3_Start`
- `Rte_Call_Dcm_RoutineServices_Routine_Reserved_3_Stop`
- `Rte_Call_Dcm_RoutineServices_Starter_Generator_Position_Sensors_Calibration_RequestResults`
- `Rte_Call_Dcm_RoutineServices_Starter_Generator_Position_Sensors_Calibration_Start`
- `Rte_Call_Dcm_RoutineServices_Starter_Generator_Position_Sensors_Calibration_Stop`

## other（33）

- `Rte_Call_DemMaster_0_CBInitEvt_PS_5V_Fault_InitMonitorForEvent`
- `Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_H_Ser_ReadData`
- `Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_Hu_ReadData`
- `Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_Hv_ReadData`
- `Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_Hw_ReadData`
- `Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_L_Ser_ReadData`
- `Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_Lu_ReadData`
- `Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_Lv_ReadData`
- `Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_Lw_ReadData`
- `Rte_Call_DemMaster_0_CBReadData_DID_0xeed1_EED1_0_ReadData`
- `Rte_Call_DemMaster_0_CBReadData_DID_0xeed1_EED1_1_ReadData`
- `Rte_Call_DemMaster_0_CBReadData_DID_0xeed1_EED1_2_ReadData`
- `Rte_Call_DemMaster_0_CBReadData_DID_0xeed1_EED1_3_ReadData`
- `Rte_Call_DemMaster_0_CBReadData_DID_0xeed5_EED5_Safety_Torque_Quality_factor_ReadData`
- `Rte_Call_DemMaster_0_CBReadData_DTCStatusindicator30_DTCStatusindicator30_ReadData`
- `Rte_Call_DemMaster_0_CBReadData_DTCTimeStamp20_DTCTimeStamp20_ReadData`
- `Rte_Call_DemMaster_0_CBReadData_DTCTimeStamp21_DTCTimeStamp21_ReadData`
- `Rte_Call_DemSatellite_0_CBReadData_DID_0xe333_2002_H_Ser_ReadData`
- `Rte_Call_DemSatellite_0_CBReadData_DID_0xe333_2002_Hu_ReadData`
- `Rte_Call_DemSatellite_0_CBReadData_DID_0xe333_2002_Hv_ReadData`
- `Rte_Call_DemSatellite_0_CBReadData_DID_0xe333_2002_Hw_ReadData`
- `Rte_Call_DemSatellite_0_CBReadData_DID_0xe333_2002_L_Ser_ReadData`
- `Rte_Call_DemSatellite_0_CBReadData_DID_0xe333_2002_Lu_ReadData`
- `Rte_Call_DemSatellite_0_CBReadData_DID_0xe333_2002_Lv_ReadData`
- `Rte_Call_DemSatellite_0_CBReadData_DID_0xe333_2002_Lw_ReadData`
- `Rte_Call_DemSatellite_0_CBReadData_DID_0xeed1_EED1_0_ReadData`
- `Rte_Call_DemSatellite_0_CBReadData_DID_0xeed1_EED1_1_ReadData`
- `Rte_Call_DemSatellite_0_CBReadData_DID_0xeed1_EED1_2_ReadData`
- `Rte_Call_DemSatellite_0_CBReadData_DID_0xeed1_EED1_3_ReadData`
- `Rte_Call_DemSatellite_0_CBReadData_DID_0xeed5_EED5_Safety_Torque_Quality_factor_ReadData`
- `Rte_Call_DemSatellite_0_CBReadData_DTCStatusindicator30_DTCStatusindicator30_ReadData`
- `Rte_Call_DemSatellite_0_CBReadData_DTCTimeStamp20_DTCTimeStamp20_ReadData`
- `Rte_Call_DemSatellite_0_CBReadData_DTCTimeStamp21_DTCTimeStamp21_ReadData`

## Dcm_DID_DataServices（仅列 DID 前缀抽样）

- `0xD005` × 170 ops
- `0xF126` × 90 ops
- `0xF12F` × 42 ops
- `0xD211` × 40 ops
- `0xE333` × 24 ops
- `0xED20` × 22 ops
- `0xEDA0` × 22 ops
- `0xF1AF` × 18 ops
- `0xEED1` × 8 ops
- `0xE331` × 6 ops
- `0xF12E` × 6 ops
- `0xF1AE` × 6 ops
- `0xEED2` × 4 ops
- `0xD003` × 4 ops
- `0xDD00` × 4 ops
- `0xDD01` × 4 ops
- `0xDD02` × 4 ops
- `0xDD0A` × 4 ops
- `0xDD0C` × 4 ops
- `0xE300` × 4 ops
- `0xE301` × 4 ops
- `0xE303` × 4 ops
- `0xE304` × 4 ops
- `0xE305` × 4 ops
- `0xE306` × 4 ops
- `0xE307` × 4 ops
- `0xE308` × 4 ops
- `0xE309` × 4 ops
- `0xE310` × 4 ops
- `0xE311` × 4 ops
- `0xE312` × 4 ops
- `0xE313` × 4 ops
- `0xE314` × 4 ops
- `0xE315` × 4 ops
- `0xE319` × 4 ops
- `0xE320` × 4 ops
- `0xE324` × 4 ops
- `0xE335` × 4 ops
- `0xE336` × 4 ops
- `0xE337` × 4 ops
- … 共 94 个 DID 前缀
