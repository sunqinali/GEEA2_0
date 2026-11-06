# IEM TC387 多核底层开发计划

范围：按 `01_Requirements` 中的 IEM SDB / CDD，落实 `Base Tech SWRS-IEM-V02-GEEA2.0` 对通信、诊断、网络管理和 ECU 平台的底层要求。工具为 DaVinci Configurator、DaVinci Developer。本阶段只做 AUTOSAR 底层和可编译的多核骨架，不实现电机控制算法，也不把 GEEA4.0 IGM2 需求并入本工程。

**进度快照（2026-11-06）— 板测主线恢复**

| 项 | 状态 |
| --- | --- |
| 当前主工程 | `03_Project/IEM_TC387_BRS`（Tasking + vBRS），SIP **CBD2000642** |
| 基线工程 | `03_Project/IEM_TC387`（CBD1900078）仍保留作对照，不再作为 bring-up 主线 |
| 板测固件 | **`0x260B052E`**：`Bringup_Ok=1` / `StackOk=1` / `InitPhase=9` / `StartOsMask=0xF`（UDE2022） |
| 无板完成 | 4 核 OS/EcuM、MCAL 通信最小集、CanTrcv TJA1145、Can 栈观测、Com IPDU 启动、BswM EnterRun/ProgReset、DET/Smoke、NvM/Fee/Fls、**DemUseNvm** |
| TLF Wdg | **暂停**：053A 路径曾触发 PORST\|STBYR 复位环；维持 Port **TSTM HIGH**，不启用 `Wdg_30_TLF35584` 正式喂狗 |
| BswM vs Appl | **模式/请求走 BswM**（EnterRun / PduGroupSwitch / ProgReset）；**观测/Smoke 留 Appl**；不把整套 bring-up 改成 BswM |
| 当前停点 | **D + 诊断冒烟已过**（ZCANPRO：`3E`/`10`/`22 F120`/`22 E103`）；下一站组信号/CCP / T2 细项 |
| 阶段 4 SW（2026-11-04） | ProgConditions；CanSM BusOff→Dem；CarConfig/E103；**CarConfig 状态 NvM**；DemUseNvm；EcuM ReadAll/WriteAll；0x34→NRC11 |
| 阶段 5 标量（2026-11-05） | `Appl_ComShell` v0.5：**41** 路 SystemExtract 标量（22 RX + 19 TX）；组信号/CCP 仍开 |
| 详档 | `03_Project/IEM_TC387_BRS/README.md` |

## 1. 输入与工具

| 项 | 结论 |
| --- | --- |
| ECU | IEM，Inverter ERAD Module，GEEA2.0 |
| 系统描述 | `01_Requirements/SDB/ZSDB12010901_IEM_220823_AR-4.2.2_Unflattened_Com.arxml`、`..._Swc.arxml`，AUTOSAR 4.2.2 |
| 网络数据库 | `01_Requirements/SDB/IEM.dbc`，节点 IEM，仅 CAN |
| 诊断 | `01_Requirements/cdd/IEM_20R1_Diagnostic_1.0.2_20210531.cdd`，由 CANdela 9.1 迁到 11.0.102 |
| Base Tech | `01_Requirements/Base Tech SWRS-IEM-V02-GEEA2.0.pdf`，V02，2018-12-19 |
| SIP（基线） | CBD1900078 D01，`C:\Vector\CBD1900078_D01_Tricore`，Configurator 5.18.09 |
| SIP（当前 bring-up） | **CBD2000642 D00/D01**，`C:\Vector\CBD2000642_D00_Tricore`，Configurator **5.22.45** |
| Developer | DaVinci Developer 4.7，`C:\Program Files (x86)\Vector DaVinci Developer 4.7` |
| MCAL | SIP `ThirdParty\Mcal_Tc3xx`，Infineon MC-ISAR AS4.2.2 TC3xx，经 Tresos Proxy 接入 Configurator |
| 编译器 | Tasking TriCore v6.3.1，`C:\TASKING\TriCore_v631`（BRS 工程用 `amk`，非 MakeSupport） |
| CAN 收发器 | TJA1145AT/FD（原理图 U600），模块 `CanTrcv_30_Tja1145`，QSPI3 CHANNEL8 |
| SBC / 看门狗 | TLF35584，模块 `Wdg_30_TLF35584`，QSPI4，5 MHz |
| 硬件 | `01_Requirements/sch_jf_ctrl_20250801.pdf`，`01_Requirements/jf_ctrl_TC387_MCAL_Config_All.xlsx` |
| 晶振 | 20 MHz，原理图 Y500 |
| 工具衍生型号 | DaVinci / tresos 按 SIP 的 TC397 建工程。SIP 许可覆盖 TC387 |
| OS | 只开 4 核，Core 0–Core 3。不创建、不启动 Core 4/5。原理图 HWCFG2 在 4 核及以上为下拉 |

不纳入本工程的需求目录：

- `01_Requirements/GEEA4.0/` 是 IGM2 / P770 的信息安全、功能安全、功能层、诊断和 VMM，目录内没有与当前 SDB/CDD 对应的系统描述。
- 软件下载主体在 Bootloader。本机另有 `C:\Vector\CBD2200332_D02_FBL`，作为后续独立工程，不放进应用 DPA。

## 2. 从 SDB / CDD / Base Tech 抽出的配置约束

通信（SDB 与 Base Tech 一致）：

- 只有 PropulsionCAN，波特率 500 kbit/s，经典 CAN。提取中 CAN FD 全部为 false。
- IEM 发送 19 帧，其余为接收。NM 发送 ID `0x51C`（十进制 1308），与 Base Tech 中 IEM / Propulsion CAN 的 NM ID 一致。
- 接收 NM 滤波 `0x500`–`0x53F`（1280–1343），对应需求 1657。
- 物理诊断响应 `0x637`（1591，`IemToVddmPropDiagResFrame`）。OBD 响应 `0x7EB`（2027）。Base Tech 诊断地址：ECU `0x1637`，11 bit `0x737`；OBD 为 `7E3/7EB` 和 `0x18DA11F1 / 0x18DAF111`。
- 周期 UUDT：`0x6F0`、`0x6F1`、`0x6F2`（1776–1778）。
- 提取中没有 `END-TO-END-PROTECTION` 和 Secured I-PDU。信号组 69 个，校验和 / 计数器按 COM 信号组处理，不单开 E2E 模块。
- SWC 提取：组合体端口 P 56 / R 75，Sender-Receiver 接口 64 个，没有独立 Application SWC 类型。Developer 里先建应用壳并完成端口到 COM 的连接。

Base Tech 对底层时序和平台的硬要求：

- 需求 1672：AUTOSAR 4.2.2。SDB 与 SIP 的 SLP4 一致。
- 需求 1670 / 1671：CAN 通信栈周期 5.0 ms，抖动小于 1 ms。
- 需求 1673：从上电到具备完整诊断能力不超过 2.5 s。
- CAN：500 kbit/s、单次采样、采样点约 75%–86%；优先用晶振直供 CAN 时钟（需求 401）；复位期间不得把总线拉成显性（需求 396）；驱动层避免发送优先级反转（需求 1632 附近）。
- DoCAN：按 Base Tech 第 4.3.3 节配置 BS、STmin、N_WFTmax 和 N_As/Ar/Bs/Br/Cs/Cr。数值在配置阶段从该节和 CDD 的时序参数核对，不在计划里先写死。
- Car Configuration 订阅：接收 `VehCfgPrm` / `VehCfgPrmExt`，合法 CCP 存 NvM，支持 DID `0xE103`，非法配置报 DTC **`E300-56`**（CDD `COM_CarConfigErr` / DemUdsDTC `0xE30056`；旧稿误写 U2300-56）。
- 诊断服务在 CDD 中可见的包括读/写 DID、例程 Start/Stop/RequestResults、SecurityAccess、TesterPresent、ControlDTCSetting、读/清 DTC、RequestDownload。编程下载放在 FBL；应用侧保留进编程会话和复位交接。
- 需求 1625：Job1 时 Flash、RAM、NVRAM 和 CPU 余量 30%。本阶段只预留，不作为当前出口条件。
- 售后刷写时间表给 IEM 3 min；工厂表为 0。刷写不在应用工程内实现。

## 3. 已确认项与仍待硬件的项

已确认：

1. Developer 使用 4.7。阶段 0 的出口包含用 4.7 打开同一 DPA。
2. 编译器使用本机 Tasking v6.3.1。SIP 交付说明写的是 V6.2r2，按已确认的 v6.3.1 配置工程。
3. CAN 收发器使用 TJA1145。jf_ctrl 上已贴装的是 U600 `TJA1145AT/FD`，**接在 ACAN**（MCU `CANATXD_P32_3` / `CANARXD_P32_2`，`M_CAN3` / RxSel_b）。SPI 为 QSPI3。DCAN（P11.0/P11.7）对应 U606，板级 DNS。收发器网络管理包括 Normal / Standby / Sleep、CAN 唤醒和选择性唤醒，唤醒范围覆盖 NM ID `0x500`–`0x53F`。
4. 新建工程基于 TC397。SIP 许可覆盖 TC387。OS 只开 Core 0–Core 3，BSW 全部放在 Core 0。不配置 Core 4 和 Core 5。原理图 HWCFG2 在 4 核及以上为下拉。
5. 本阶段不做 FBL。应用只留 `ProgRequest` 标志和复位原因，供以后的 PBL/SBL 读取。**BRS 已落实**：BswM `AL_ProgReset` → `Appl_BswM_ProgRequest()`（`Appl_ProgRequestFlag`）+ EcuM SelectReset/GoDown。
6. 外部看门狗用板上的 TLF35584，SIP 模块 `Wdg_30_TLF35584`。
7. **ENCAN / NSTBCAN（2026-11 板级 bring-up 决策）**：MCU 页把 P32.5/P32.4 标为 `ENDRVPS`/`NOCPCLRX`，HSI 旧名又写 ENCAN/NSTBCAN。BRS 到板前按 HSI 将 **P32.5/P32.4 配成 OUT HIGH**，便于 TJA1145 外围若实际需要使能脚时先通。若板上这两脚确实只接电机侧，到板后改为低/输入并回写本表。

仍待确认：

1. 波特率。SDB 的 PropulsionCAN 是 500 kbit/s 经典 CAN。HSI 曾把 ACAN 写成 1 Mbps，但 **U600 TJA1145=ACAN 物理口**；本阶段 PropulsionCAN 走 ACAN/TJA1145，按 SDB **500 kbit/s**。若台架要求 1 Mbps 再改 baud（勿与 DNS 的 DCAN/P11 混淆）。
2. P32.5/P32.4 最终是否为收发器使能（见上条决策 7），以板级原理图走线实测为准。

核划分（工程基于 TC397，只启用 Core 0–Core 3）：

| 核 | 角色 | 本阶段内容 |
| --- | --- | --- |
| Core 0，主核 | BSW | EcuM Master、BswM、5 ms COM、Can 中断、CanNm/CanSM/ComM、Dcm、Dem、NvM |
| Core 1 | 预留快环 | 只启动并同步，空闲任务。PWM/ADC 中断以后再绑 |
| Core 2 | 应用周期任务 | 10 ms / 100 ms 占位 runnable，接 RTE |
| Core 3 | 监控 | WdgM 从核监督占位，空闲任务 |

BSW 全部放在 Core 0，避免第一版就做跨核 COM 和跨核 Dcm。

## 4. 工程落点

不往 SIP 目录里写工程。SIP 自带 tresos workspace 里已有 `Platform_tc387a_2_0`，那是 MCAL 供应目录，不作为产品工程。

**当前主线（bring-up / 无板已冻结）**

```
03_Project/IEM_TC387_BRS/     SIP CBD2000642 · Tasking amk · vBRS
  Appl/          启动、callout、Smoke/CanStack/Com bring-up、ProgRequest
  Config/        DaVinci .dpa 与 ECUC
  Tasking/       Eclipse/amk 工程、AfterGenerate、BoardArrival_Watchlist
  README.md      状态与到板清单入口
```

**基线对照（CBD1900078，保留）**

```
03_Project/IEM_TC387/
  Appl/ Config/ McAl/ Doc/
```

DaVinci 工程名以 BRS 为准：`IEM_TC387_BRS`，ECU Instance 选提取中的 `IEM`。衍生型号仍为 TC397。OS、启动代码和链接脚本只包含 Core 0–Core 3；Core4/5 段在 LSL 中映射到 LMU 占位，不启动。

## 5. 分阶段工作

### 阶段 0：工程骨架 — **已完成**

基线：`IEM_TC387` + CBD1900078。Bring-up 主线迁到 `IEM_TC387_BRS` + CBD2000642（配置/生成器版本升级，需求基线不变）。

导入两份 ARXML，选择 ECU `IEM`，只保留 PropulsionCAN。导入 CDD。Developer 4.7 打开同一 DPA。

出口：DPA 能打开，系统描述无 ECU 选错，Developer 4.7 能看到 IEM 端口。**已达成。**

### 阶段 1：多核 OS、EcuM、BswM — **SW 已完成（抖动/时序待板测）**

- OS：只建 Core 0–Core 3；BRS `ECUM_NUMBER_OF_CORES=4`，`EcuM_StartOS` StartCore(1..3)。
- 任务：`Task_Com_5ms`、`Task_Bsw_10ms`（Core 0）；`Task_Appl_10ms` / `100ms`（Core 2）。**注意**：BSW 观测采样放 Core0（`Spi_MainFunction_Handling` 旁路），勿在 Core2 调 BSW API。
- EcuM：DriverInitOne 含 Mcu→Port→Spi→CanTrcv→Can→CanIf→CanSM→ComM…；Com_Init 后启动 IPDU 组。
- BswM：`AL_EnterRun` = Allow + ComM FULL + `BswMPduGroupSwitch` + DM；`AL_ProgReset` = `Appl_BswM_ProgRequest()` + SelectReset + GoDown。
- 启动预算 / 0x3E < 2.5 s：配置已铺，**到板用 T2 验证**。

出口：四核 Idle + 5 ms 抖动 < 1 ms — **软件可跑，出口测量待板。**

### 阶段 2：MCAL 最小集 — **通信/SPI/Port 已完成；TLF 慢狗与 Fls 细项待收紧**

引脚以 **原理图 sch_jf_ctrl** 为准（HSI 旧注 “DCAN/TJA1145” 已证伪）；BRS Port 已配 **ACAN/TJA1145 P32.3/P32.2** + QSPI3 CHANNEL8（CS P10.5）+ EN/NSTB 见 §3 决策 7。

- Mcu / Can：500 kbit/s 经典 CAN，关 FD；控制器 **M_CAN3 @ 0xF0208F00**，`CanIOPort=b_001`。
- PropulsionCAN：TX **P32.3 ALT5** / RX **P32.2**；QSPI3：CS P10.5 SLSO8，SCLK/MOSI/MISO 按 Port ECUC。
- P00.8 双 CS 不启用。
- QSPI4 / TLF35584：**板测暂停**。SPI/GPT 路径曾验证过，但放狗前复位环未闭环；当前固件不链 Wdg bring-up，**TSTM 保持 HIGH**。正式喂狗另开任务，不挡通信/诊断出口。
- Adc / Pwm / Icu / Dsadc：仍不启用。

出口：MCAL 生成通过，总线隐性 — **生成/链接已过；总线隐性/CANoe 待台架。**

### 阶段 3：通信栈 — **无板 SW 完成；CANoe 出口待板**

`Can` → `CanIf` → `CanTp` / `CanNm` → `PduR` → `Com` / `Dcm`，旁路 `CanSM`、`ComM`、`Nm`。

- 提取生成已用；`CanTrcv_30_Tja1145` 已接入 CanIf/CanSM，MainFunction @ `Task_Com_5ms`。
- Com IPDU：`Com_Init` 后 + BswM EnterRun 双路径启动 Rx/Tx MPG + base SPG + ReceptionDM（PNC SPG 不停）。
- 应用观测：`Appl_CanStack_Status`、`Appl_Com_Bringup`、`Appl_CanTrcv_Smoke`、`Appl_Bringup_Ok`。
- 选择性唤醒 PN、BusOff 细调、信号组 checksum callout：**可选后续**，不挡到板 smoke。

出口：CANoe 见 NM `0x51C` + 周期帧 + RTE 非初值 — **待板 + CANoe。**

### 阶段 4：诊断、DEM、NvM — **配置已导入；板级/会话出口未闭环**

- 用 CDD 导入 Dcm/Dem。会话按 CDD：Default、Extended、Programming。Programming 的下载服务（RequestDownload 等）在应用 Dcm 中拒绝或只做会话切换，真正的传输在 FBL。
- 物理寻址与 OBD 寻址同时保留：应用诊断走 PropulsionCAN 上的物理请求/响应，OBD 走 `7E3/7EB`。功能寻址按 CDD。
- P2Server / P2*Server 用 CDD 中的会话定时，不另造一套。
- Dem：操作周期、使能条件、DTC 状态位按 Base Tech 4.5 节。第一批只接平台 DTC：BusOff、电压（有 ADC 之后）、Car Configuration `U2300-56`。快照记录按 CDD。
- NvM：DEM 主存储、CCP 有效值和 CarConfig 状态（Bulk / Valid）。ReadAll 在启动路径上，写失败不得挡住 2.5 s 诊断就绪；诊断就绪的定义是能响应 `0x10` / `0x22` / `0x3E`，不是所有 DID 都已有应用数据。
- DID `0xE103` 按 Base Tech 表做最多 10 个错误 CCP。CCP 清单（IEM 实际订阅哪些号）需求里没有释放版列表，先做成可配置表，表内容待 Car Config 数据库。

出口：CANdela 或 CANoe 对 Default 会话做 `0x3E`、`0x10`、`0x22`（至少一条平台 DID）、`0x19`。编程下载返回明确的负响应，而不是超时。  
**无板侧：** `0x22 F120/E103` 已有数据；`0x34`→NRC11；RID `0x0206` 有明确正响应；`0x27` CompareKey 明确失败。  
**板级：** Fee IDLE + `NvM_ReadAllDone=1` + Dem/Dcm deferred 完成（`Appl_NvM_DemDeferred→0`）；会话/`0x3E`<2.5s（T2）仍待 CANoe。

### 阶段 5：RTE 与应用壳 — **标量 SWC↔COM 已闭合（组信号/CCP 仍开）**

Developer 中：

- 应用 SWC 壳，把系统提取端口映射到 COM 信号。未实现的发送信号保持提取初值，QF 初值为 1（无有效数据），直到应用写入。
- CarConfig 订阅 SWC：解析 BlockID，做 Bulk → Valid，合法值写 NvM（状态壳已有；CCP 值待 DB）。
- 运行实体只挂到 Core 0 的 10 ms / 100 ms，或 Core 2 的对应任务。跨核数据用 RTE IOC，本阶段不手写共享内存。
- 生成 RTE，与 Configurator 的 OS task mapping 一致。

出口：RTE 生成 0 error。未连接端口有清单，不留静默未连接。  
**进度：** `Appl_ComShell` v0.5 已映射 SystemExtract **全部 41 路标量**（22 RX + 19 TX，`Task_Bsw_10ms`）；`generate_regen25_comshell_v05` 0 Fatal/0 Errors；amk ELF OK。组信号 23 路未进壳（`VehCfgPrm` BlkID 仍由 CarConfig 直连 Com）。未连接清单约 807；`0xF120`/`0xE103`、RID `0x0206`、Security L3/L4 已由 Appl 接管。

### 阶段 6：构建与基础测试 — **编译链接已完成；台架 T1–T8 待板**

- BRS 使用 Tasking v6.3.1 + `amk`（非 SIP MakeSupport）。衍生型号 TC397，不启动 Core 4/5。
- 测试只覆盖底层，用 CANoe + 调试器：

| 编号 | 内容 | 对应要求 |
| --- | --- | --- |
| T1 | 四核启动，从核不死等 | 多核 EcuM |
| T2 | 上电到 `0x3E` 正响应 < 2.5 s | 1673 |
| T3 | 500 kbit/s，采样点，复位时总线非显性 | CAN 数据链路 |
| T4 | NM `0x51C` 发送，`0x500`–`0x53F` 接收 | 1657 |
| T5 | 5 ms COM 任务抖动 < 1 ms（带诊断请求时复测） | 1670 / 1671 |
| T6 | 物理诊断与 OBD 各一条正响应 | CDD + 地址表 |
| T7 | BusOff 恢复后重新发 NM | BusOff |
| T8 | 写一条 NvM，掉电再读 | CCP / DEM 存储 |

## 6. 需求追溯（第一版只追底层）

| Base Tech | 实现位置 |
| --- | --- |
| 1672 AUTOSAR 4.2.2 | SDB 原样导入，不用 4.3/R20 系统描述 |
| 1670 / 1671 COM 5 ms ± 1 ms | `Task_Com_5ms` 独占 COM 主函数 |
| 1673 启动 2.5 s | EcuM 启动链 + NvM 超时 |
| 1657 CAN NM | CanNm ID 与提取一致；TJA1145 选择性唤醒覆盖 0x500–0x53F |
| CAN 500 kbit/s、单采样、采样点 | ACAN / TJA1145 / P32.2–3（M_CAN3），20 MHz 晶振，采样点 80% |
| 396 复位不拉显性 | Port 复位电平 + Can 初始化顺序 |
| DoCAN 时序 | CanTp，对照 4.3.3 和 CDD |
| UDS 会话 / DID / DTC | Dcm + Dem，数据来自 CDD |
| Car Config 订阅、0xE103、E300-56 | 应用壳 + Dem；BlkID/状态 NvM 壳 + E103；合法 CCP 值表仍待 DB |
| SWDL / PBL / SBL | 不做，只留交接标志 |
| QF 语义 | 应用，COM 只搬运 |
| 30% 资源余量 | 链接后记录，不挡阶段 6 |

## 7. 建议顺序和停点

| 停点 | 内容 | 状态 |
| --- | --- | --- |
| A | 阶段 0–1：DPA + 四核空工程可编 | **已完成**（现主线 BRS） |
| B | 阶段 2–3：MCAL 通信最小集 + CanTrcv/Can 栈无板可观测 | **已完成**（`generate_regen11_bswm` / ELF） |
| C | **到板 smoke**：`Appl_Bringup_Ok`、SPI/Trcv、CanIf ONLINE、Fee/NvM ReadAll | **已完成（052E 板测确认；TSTM 旁路狗）** |
| D | 阶段 3 出口：CANoe/ZCANPRO NM `0x51C` + 周期帧；T1/T3–T5/T7 | **已完成（2026-11-06 ZCANPRO：TX+RX）** |
| E | 阶段 4–5：诊断交接/Dem/CarConfig 壳 → NvM/Fee | **物理诊断冒烟已过**（2026-11-06：`3E`/`10 01|03`/`22 F120|E103`）；组信号/CCP / 完整 T2 仍开 |
| F | 阶段 6：完整台架 T1–T8 记录 | 挂起（等台架） |
| G | TLF 正式喂狗（先 feed 再放 TSTM） | **暂停**，不挡 D/E |

ZCANPRO/CANoe 接 **ACAN**（U600 TJA1145）；波特率先按 SDB **500 kbit/s**。Generate 后执行 `IEM_TC387_BRS/Tasking/AfterGenerate.bat`（LSL + BswM callout 补丁 + CanTrcv Tasking 接线恢复 + amk）。
