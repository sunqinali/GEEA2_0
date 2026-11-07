# CCP 白名单（CCdB 导入）

正式 **Car Configuration Database（CCdB）** 到位后按下列步骤替换 demo 表。

## 灌表步骤

1. 从 CCdB 导出 **IEM 订阅** 的 CCP#、合法取值范围（1 字节；Base Tech：`0x00` / `0xFF` **非法**）
2. 覆盖 `Appl_CarConfig_CcpTable.csv`（保留表头）
3. `python Tasking/gen_ccp_table.py` → 生成 `Appl/Source/Appl_CarConfig_CcpTable.c`
4. `cd Tasking/Debug && amk all`；刷机后 `FwStamp` 递增（灌表后应 bump）
5. 跑 `ZCANPRO_IEM_CarConfig_Smoke.py`：合法值 → `FaultCount=0` / `ValidateOkCnt`↑；非法 `0xFF` → E103/`FaultCount`≥1

## CSV 列

| 列 | 必填 | 说明 |
| --- | --- | --- |
| `ccpNumber` | 是 | CCP#；映射 `(BlkID-1)*7 + bytePos`（bytePos 1..7 = VehCfg Posn2..8） |
| `minVal` | 是 | 合法下限（含）；可用 `0xNN` |
| `maxVal` | 是 | 合法上限（含） |
| `vcpBlockId` | 建议 | 文档用；生成器当前可不消费 |
| `vcpBytePos` | 建议 | 1..7；文档用 |
| `name` | 否 | 注释进 `.c` |

## 验收（UDE）

| 变量 | 合法 burst 后 | 非法 CCP#1=`0xFF` 后 |
| --- | --- | --- |
| `Appl_CarConfig_State` | 1 Valid | 2 Error（或保持故障） |
| `Appl_CarConfig_FaultCount` | 0 | ≥1 |
| `Appl_CarConfig_ValidateOkCnt` | 上升 | — |
| DID `0xE103` | 空/0 | 含非法 CCP# |

## 现状

当前 CSV 为 bring-up **demo**（CCP#1..7，BlkID=1，`min=0x01`/`max=0x7F`），与既有 `CarConfig_Smoke` 一致。  
**阻塞：** 仓库内尚无正式 CCdB 文件；拿到导出后直接替换 CSV 即可，无需改 Bringup 逻辑。
