# 台架 T1–T8 清单（阶段 6）

ACAN / TJA1145 / 500 kbit/s。固件建议 ≥ `0x260B0539`。

| ID | 内容 | 方法 | 现状 |
| --- | --- | --- | --- |
| T1 | 四核启动 | UDE：`Appl_Os_StartOsMask==0xF`；`Appl_Core2_Tick100ms` 递增 | **已过**（Core2 tick） |
| T2 | `0x3E` &lt; 2.5 s | UDE：`Appl_Diag_ReadyApproxMs`≈500；`Bench_T246` phys `0x3E` | **已过** |
| T3 | 500k / 复位非显性 | 示波器 / CANoe；复位时勿 ACK 显性 | 待台架仪 |
| T4 | NM `0x51C`；RX `0x500`–`0x53F` | Trace `0x51C`；UDE `Appl_Can_NmOk`；Bench 脚本提示 | **TX/脚本过**；RX 注入可选 |
| T5 | 5 ms 抖动 &lt; 1 ms | OS 测量 / Pin toggle；带诊断负载复测 | 待台架仪 |
| T6 | 物理 + OBD 各一条正响应 | Phys `0x737/0x637`；OBD `0x7E3/0x7EB` — `Bench_T246` | **已过**（2026-11-06） |
| T7 | BusOff 后重发 NM | 短路/工具造 BusOff → `0x51C` 恢复 | 待台架 |
| T8 | NvM 掉电再读 | CarConfig State/BlkID；掉电前后 `NvMRam` / `NvMLoaded` | 壳已有；掉电测待做 |

## T8 掉电步骤（FwStamp ≥ `0x260B053B`）

1. 若上一轮 CCP bad 留下 ERROR：UDE 调 `Appl_CarConfig_ClearFaults()`  
2. 跑 `ZCANPRO_IEM_CarConfig_Smoke` 的 **good** 段（或只 TX 合法 0x235），确认 `State=1` `LastBlkId=1`  
3. UDE：`Appl_NvM_T8_WriteReq = 1` → 等 `Appl_NvM_WriteAllDone=1`（`T8_WriteReq` 自清）  
4. **断电再上电**（或系统复位，勿仅软断点继续）  
5. 验收：`Appl_CarConfig_NvMLoaded=1`，`State`/`LastBlkId` 与掉电前一致，`NvMRam[0]==0xCC`

脚本索引：

- `ZCANPRO_IEM_Diag_Smoke.py` — 物理 UDS
- `ZCANPRO_IEM_CarConfig_Smoke.py` — CCP / E103
- `ZCANPRO_IEM_ComGroup_Smoke.py` — 10 路 Cntr
- `ZCANPRO_IEM_Bench_T246.py` — T2/T4 提示 + T6 物理/OBD
