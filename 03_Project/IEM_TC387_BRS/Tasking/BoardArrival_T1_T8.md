# 台架 T1–T8 清单（阶段 6）

ACAN / TJA1145 / 500 kbit/s。固件建议 ≥ `0x260B053C`。

| ID | 内容 | 方法 | 现状 |
| --- | --- | --- | --- |
| T1 | 四核启动 | UDE：`Appl_Os_StartOsMask==0xF`；`Appl_Core2_Tick100ms` 递增 | **已过**（Core2 tick） |
| T2 | `0x3E` &lt; 2.5 s | UDE：`Appl_Diag_ReadyApproxMs`≈500；`Bench_T246` phys `0x3E` | **已过** |
| T3 | 500k / 复位非显性 | 示波器 / CANoe；复位时勿 ACK 显性 | 待台架仪 |
| T4 | NM `0x51C`；RX `0x500`–`0x53F` | Trace `0x51C`；UDE `Appl_Can_NmOk`；Bench 脚本提示 | **TX/脚本过**；RX 注入可选 |
| T5 | 5 ms 抖动 &lt; 1 ms | OS 测量 / Pin toggle；带诊断负载复测 | 待台架仪 |
| T6 | 物理 + OBD 各一条正响应 | Phys `0x737/0x637`；OBD `0x7E3/0x7EB` — `Bench_T246` | **已过**（2026-11-06） |
| T7 | BusOff 后重发 NM | 见下方 T7 规程；Watch `Appl_Can_BusOffCnt` | **放过**（到板初期 ACAN/NM 恢复路径已验；不重做短接） |
| T8 | NvM 掉电再读 | 见下方完整规程 | **已过**（053E：WriteAll 异步 + 掉电 `NvMLoaded=1`） |

---

## T8 完整测试描述 — CarConfig 状态 NvM 掉电保持

### 目的

验证 CarConfig 状态壳经 Fee/NvM **WriteAll 落盘**后，**断电再上电**仍能经 ReadAll 恢复：`magic / State / BlkID` 与写前一致（对应阶段 6 T8 / Base Tech CCP·DEM 存储出口）。

### 固件与工具

| 项 | 要求 |
| --- | --- |
| FwStamp | **`0x260B053C`**（`ClearFaultsReq` + `T8_WriteReq`） |
| 调试器 | UDE + Watch（改变量，**不需要 Call Function**） |
| 总线 | ZCANPRO ACAN **500 kbit/s** |
| 脚本（可选） | `Tasking/ZCANPRO_IEM_CarConfig_Smoke.py`（会先 good 再 bad；bad 后须清故障） |

### UDE Watch 清单（本测必加）

| 变量 | 含义 |
| --- | --- |
| `Appl_Os_FwStamp` | 必须为 `0x260B053C` |
| `Appl_CarConfig_State` | 0=Bulk 1=Valid 2=Error |
| `Appl_CarConfig_LastBlkId` | VehCfgPrm BlockID |
| `Appl_CarConfig_FaultCount` | E103 故障条数 |
| `Appl_CarConfig_NvMRam[0..3]` | `[0]=0xCC magic` `[1]=State` `[2]=BlkID` `[3]=FaultCount` |
| `Appl_CarConfig_NvMLoaded` | ReadAll 后 magic 有效则为 1 |
| `Appl_CarConfig_ClearFaultsReq` | **写 1** → 清故障后自清 0 |
| `Appl_NvM_T8_WriteReq` | **写 1** → 异步 WriteAll；忙时保持 1，完成自清 0 |
| `Appl_NvM_T8_Phase` | 0 idle / 1 WriteAll pending |
| `Appl_NvM_T8_PollCnt` | pending 期间递增（10 ms/次）；完成时停 |
| `Appl_NvM_WriteAllDone` | MultiBlock 结束为 1 |
| `Appl_NvM_WriteAllTimedOut` | 必须保持 0（≥053E 才跨周期等 Fee） |
| `Appl_NvM_MultiBlockResult` | NvM 多块结果（非 PENDING） |
| `Appl_NvM_ReadAllDone` | 上电后应为 1 |
| `Appl_Bringup_Ok` | 应为 1 |

### 前置条件

1. 刷入 `0x260B053C`，UDE 连接，目标运行中。  
2. `Appl_Bringup_Ok=1`，`Appl_NvM_ReadAllDone=1`，`Appl_Diag_ReadyApproxMs` 已有值（约 500）。  
3. ACAN 能 TX/RX（可先跑任意 smoke 确认）。

### 步骤

#### A. 准备合法 CarConfig 状态（VALID）

**方式 1（推荐，若刚跑完完整 CarConfig smoke 且 `State=2`）** — 固件 ≥ `0x260B053D`

1. Watch 写 **`Appl_CarConfig_ClearFaultsReq = 1`**  
2. 约 100 ms 内：`ClearFaultsReq→0`，`SuppressFault→1`，`State=1`，`FaultCount=0`，`NvMRam=CC 01 01 00`  
3. （可选）再 TX 一帧合法 `0x235`；收到 good 后 `SuppressFault→0`  
4. **勿在 State=2 时直接 T8_WriteReq**

**方式 2（干净上电、尚无 BlkID）**

1. ZCANPRO 只发合法帧（不要跑到 bad 段），例如周期 TX：  
   - `0x235`：`01 10 20 30 40 50 60 70`  
   - `0x236`：`02 11 22 33 44 55 66 77`  
2. 验收：`LastBlkId=1`，`LastExtBlkId=2`，`State=1`，`PassedOnce=1`，`NvMRam[0]=0xCC`，`[1]=0x01`

> 若完整跑 `ZCANPRO_IEM_CarConfig_Smoke.py`，脚本末尾会进入 **ERROR**（`State=2`，`NvMRam=CC 02 01 01`）。**必须先做方式 1**，再进入步骤 B。不要把 ERROR 当作 T8 写盘目标（本测要证 VALID 保持）。

#### B. 触发 NvM WriteAll（落盘）— 固件 ≥ `0x260B053E`

1. 确认当前：`State=1`，`LastBlkId=1`，`NvMRam[0..3] = CC 01 01 00`  
2. Watch 写 **`Appl_NvM_T8_WriteReq = 1`**  
3. 观察：`T8_Phase=1`，`T8_PollCnt` 上升（Fee 写可能数秒）  
4. 完成时：  
   - `T8_WriteReq` → `0`，`T8_Phase` → `0`  
   - `WriteAllDone` → `1`  
   - `WriteAllTimedOut` → **必须为 0**  
5. 记录：`NvMRam` 仍为 `CC 01 01 00`

#### C. 断电再上电

1. **断开板子供电**（真正掉电；不要只停调试会话或仅 CPU Halt）。  
2. 再上电，UDE 重新连接 / 下载符号（若需要），确认 `FwStamp=0x260B053C`。  
3. 等待 `Appl_NvM_ReadAllDone=1`（Fee GC 完成后）。

#### D. 掉电后验收

| 检查项 | 期望 |
| --- | --- |
| `Appl_CarConfig_NvMLoaded` | **1** |
| `Appl_CarConfig_NvMRam[0]` | **`0xCC`** |
| `Appl_CarConfig_NvMRam[1]` | **`0x01`**（VALID） |
| `Appl_CarConfig_NvMRam[2]` | **`0x01`**（BlkID） |
| `Appl_CarConfig_NvMRam[3]` | **`0x00`** |
| `Appl_CarConfig_State` | **1** |
| `Appl_CarConfig_LastBlkId` | **1** |
| `Appl_CarConfig_PassedOnce` | **1**（LoadFromNvM 在 VALID+BlkID 时置位） |

### 通过准则

- 步骤 B WriteAll 成功（`WriteAllDone=1`，无 timeout）。  
- 步骤 D：`NvMLoaded=1` 且 `NvMRam` / `State` / `LastBlkId` 与步骤 B 写前一致。  

任一不满足 → T8 **FAIL**。

### 失败时优先看

| 现象 | 可能原因 |
| --- | --- |
| `T8_WriteReq` 一直为 1 | `ReadAllDone` 未完成 / Background 未跑；确认系统在跑 |
| `WriteAllTimedOut=1` | Fee/Fls 忙或阻塞；看 `Appl_NvM_FeeStatus` |
| 掉电后 `NvMLoaded=0`、`NvMRam` 全 0 | WriteAll 未真正写入 Fee，或掉电过早；重做 B 后稍等再断电 |
| 掉电后 `State=2` | 写盘时仍是 ERROR；重做 A 清故障后再 B |

### NvMRam 字节含义（便于对照）

```
[0] magic     0xCC = 有效壳
[1] State     0 Bulk / 1 Valid / 2 Error
[2] LastBlkId VehCfgPrm BlockID
[3] FaultCount E103 条数镜像（故障表本身在 RAM，本壳只存计数）
```

---

## T7 规程（BusOff → NM 恢复）— 需人为扰总线

1. 正常：Trace 见 `0x51C`；`Appl_Can_NmOk=1`；`Appl_Can_BusOffCnt` 稳定  
2. 短接 CAN_H–CAN_L（或拔掉终端）约 1–2 s → `Appl_Can_BusOffCnt` 应升高，`Appl_Dem_BusOffActive` 可能为 1  
3. 恢复接线 → 数秒内 Trace 再出现 `0x51C`；`NmOk` 回到 1  
4. PASS：BusOff 计数曾增加且 NM 恢复发送  

## 脚本索引

- `ZCANPRO_IEM_Diag_Smoke.py` — 物理 UDS  
- `ZCANPRO_IEM_CarConfig_Smoke.py` — CCP / E103（T8 前若跑完需 ClearFaultsReq）  
- `ZCANPRO_IEM_ComGroup_Smoke.py` — 10 路 Cntr  
- `ZCANPRO_IEM_Bench_T246.py` — T2/T4 提示 + T6 物理/OBD  
- `ZCANPRO_IEM_ComShell_TxSmoke.py` — 标量壳 TX 存活（`0x51C`/`0x4C` + `TxOkCnt`）  
