# 台架 T1–T8 清单（阶段 6）

ACAN / TJA1145 / 500 kbit/s。固件建议 ≥ `0x260B0539`。

| ID | 内容 | 方法 | 现状 |
| --- | --- | --- | --- |
| T1 | 四核启动 | UDE：`Appl_Os_StartOsMask==0xF`；`Appl_Core2_Tick100ms` 递增 | 板测已见 Core2 tick |
| T2 | `0x3E` &lt; 2.5 s | UDE：`Appl_Diag_ReadyApproxMs`（≈500）；脚本 `ZCANPRO_IEM_Bench_T246.py` | ≈500 ms 已过 |
| T3 | 500k / 复位非显性 | 示波器 / CANoe；复位时勿 ACK 显性 | 待台架仪 |
| T4 | NM `0x51C`；RX `0x500`–`0x53F` | Trace 见 `0x51C`；UDE `Appl_Can_NmOk`；Bench 脚本提示 | TX 已见；RX 范围待记 |
| T5 | 5 ms 抖动 &lt; 1 ms | OS 测量 / Pin toggle；带诊断负载复测 | 待台架仪 |
| T6 | 物理 + OBD 各一条正响应 | Phys `0x737/0x637`；OBD `0x7E3/0x7EB` — `ZCANPRO_IEM_Bench_T246.py` | 物理已过；OBD 待本脚本 |
| T7 | BusOff 后重发 NM | 短路/工具造 BusOff → `0x51C` 恢复 | 待台架 |
| T8 | NvM 掉电再读 | CarConfig State/BlkID 或 Fee；掉电前后 `NvMRam` | 壳已有；掉电测待做 |

脚本索引：

- `ZCANPRO_IEM_Diag_Smoke.py` — 物理 UDS
- `ZCANPRO_IEM_CarConfig_Smoke.py` — CCP / E103
- `ZCANPRO_IEM_ComGroup_Smoke.py` — 10 路 Cntr
- `ZCANPRO_IEM_Bench_T246.py` — T2/T4 提示 + T6 物理/OBD
