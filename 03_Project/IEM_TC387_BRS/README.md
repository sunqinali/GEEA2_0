# IEM_TC387_BRS

Tasking / BRS bring-up for TC387 (DaVinci SIP derivative remains TC397).  
Delivery: **CBD2000642** · Tool: **DaVinci Configurator 5.22.45** · Compiler: **Tasking TriCore 6.3.1** (`amk`).

## Status (2026-11-04) — DemUseNvm + NvM stack amk green

Latest no-board ELF: **amk + Appl_ComShell v0.5**（`Tasking/Debug/IEM_TC387_BRS.elf`）。SWC↔COM **41 路**标量（22 RX + 19 TX，SystemExtract 标量全覆盖）；清单 `Tasking/Developer_Swc_Com_Inventory.md`。

| Item | State |
|------|--------|
| 4-core board override | OK (`BrsCfg_BoardOverride.h`) |
| CanTrcv_30_Tja1145 + MainFunction @ `Task_Com_5ms` | OK |
| Port ENCAN/NSTB P32.5/P32.4 OUT HIGH | OK |
| SPI QSPI3 sync / CHANNEL8 / mode1 / 2 MHz / 8-bit MSB | OK (offline check PASS) |
| CanTrcv DET + Det log(8) + `Appl_Det_ErrorHook` | OK |
| Smoke auto AfterInit + DeferredTick | OK |
| Can stack + CanNm sample | OK @ Core0 (~100 ms) |
| `Appl_Bringup_Ok` aggregate | OK (Stack∧Smoke∧Sample) |
| Com I-PDU start | BswM `AL_EnterRun` → `ACT_ComIpduStart` (`BswMPduGroupSwitch` → `Com_IpduGroupControl`) |
| CanIf PDU mode in StackOk | ONLINE required |
| BswM ProgReset | `AL_ProgReset` → `Appl_BswM_ProgRequest()` + SelectReset + GoDown |
| Core2 heartbeat / 4-core EcuM | `Appl_Core2_Tick100ms`; `ECUM_NUMBER_OF_CORES=4` |
| After Generate / watchlist | `Tasking\AfterGenerate.bat`, `BoardArrival_Watchlist.txt` |
| Offline gate | PASS (`_offline_tja_check.py`) |
| **NvM Rte** | OK — `NvM_swc` + `NvM_EcuSwComposition` / `Timer_NvM_MainFunction` → `Task_Bsw_10ms` **None** (+ BSW map) |
| **NvM Tasking** | OK — `BSW_NvM`/`MemIf`/`Crc`, `MCAL_Fee`/`Fls`, GenData cfg; LSL aliases via `PatchVlinkGenAliases.ps1` |
| **DemUseNvm** | OK — Admin/Status/Primary0–7 → Fee/NvM; `DEM_CFG_USE_NVM=STD_ON`; `NvMCfgCbkIncludeList=Dem_Cbk.h` |
| **NvM startup** | OK — `Appl_NvM_InitStackAndReadAll` in `EcuM_AL_DriverInitOne`; `Appl_NvM_WriteAllSync` in `EcuM_OnGoOffOne` (timed poll) |
| **ELF** | `Tasking/Debug/IEM_TC387_BRS.elf` |

## Build (Tasking, not MakeSupport)

```bat
cd Tasking\Debug
set PATH=C:\TASKING\TriCore_v631\ctc\bin;%PATH%
amk all
```

IDE: `Tasking\Open_Tasking_IDE.bat` (needs Java 8; JDK 25 breaks Eclipse start).

After every DaVinci **Generate** (LSL + restore wiring + offline check + amk):

```bat
Tasking\AfterGenerate.bat
```

## CanTrcv_30_Tja1145 notes

### SIP / config
- Component: `C:\Vector\CBD2000642_D00_Tricore\Components\CanTrcv_30_Tja1145\` (ported by `../scripts/PortCanTrcv_Tja1145_ToCbd20.ps1`)
- Activate / SPI / CanIf Trcv: `../scripts/ActivateCanTrcvTja1145.dvgroovy` (+ `CleanupCanTrcvChannel.dvgroovy`, `FixSpiIds.dvgroovy` if SPI IDs drift)

### Tasking project wiring (Eclipse may overwrite)
- `.project` link: `BSW_CanTrcv` → `...\CanTrcv_30_Tja1145\Implementation`
- `.cproject` include: `BSW_CanTrcv`
- `Debug\makefile` + `Debug\BSW_CanTrcv\subdir.mk`
- `Debug\GenData\subdir.mk`: `CanTrcv_30_Tja1145_Cfg.c` / `_PBcfg.c`
- `Debug\Source\subdir.mk`: `Appl_CanTrcv_Smoke.c`, `Appl_Det_ErrorHook.c`

**Restore after Eclipse regen:** `python Tasking\_restore_cantrcv_tasking.py` then `amk all`.

### Appl compatibility (keep across regen)
| File | Purpose |
|------|---------|
| `Appl/Include/MemMap.h` | `CANTRCV_30_TJA1145_*` MemMap sections (cloned from GENERICCAN) |
| `Appl/Include/Compiler_Cfg.h` | `CANTRCV_30_TJA1145_*` memory classes; `CanTrcv_SpiDataType`→`Spi_DataBufferType`; `E_PENDING` |
| `Appl/Include/BrsCfg_BoardOverride.h` | Force 4 cores + CAN/PLL |

`E_PENDING` and `Spi_DataType` are needed because Vector `Std_Types` dropped `E_PENDING`, and Infineon MCAL Spi uses `Spi_DataBufferType`.

## Key scripts (`03_Project/scripts/`)

| Script | Role |
|--------|------|
| `FixVbrsFourCoresAndCan.dvgroovy` | vBRS CAN channels + PLL |
| `PostGenerate_IEM_TC387_BRS.bat` | Patch LSL + `BswM_Lcfg` UserCallout includes/`()` |
| `ReplaceComIpduCalloutWithPduGroupSwitch.dvgroovy` | BswM native IPDU/DM start (replaces Appl UserCallout) |
| `PatchBswM_Lcfg_Callouts.py` | Keep `Appl_*()` + Appl headers in `BswM_Lcfg.c` |
| `PortCanTrcv_Tja1145_ToCbd20.ps1` | Copy Tja1145 component into CBD20 SIP |
| `ActivateCanTrcvTja1145.dvgroovy` | Module / channel / SPI / CanIf Trcv refs |
| `MapCanTrcvMainFunction.dvgroovy` | Map MainFunction → `Task_Com_5ms` (**next**) |

## Next steps (priority)

1. ~~No-board SW freeze (CanTrcv / Com / BswM EnterRun+ProgReset / Tasking)~~ **done** (`generate_regen11_bswm`).
2. **Board bring-up tests (T1–T8 / `Appl_Bringup_Ok`)** — **deferred until board arrives** (`Tasking/BoardArrival_Watchlist.txt`).
3. **Stage 4 SW (no board):** ProgConditions + BusOff Dem + `Appl_CarConfig_Bringup` (E300-56) — done for shell.
4. ~~**NvM + Fee + Fls Rte/amk**~~ **done** (`regen20`).
5. ~~**DemUseNvm + Dem NvRAM**~~ **done** (`regen22`).
6. ~~**EcuM NvM ReadAll/WriteAll hooks**~~ **done** (`Appl_NvM_*`, timed so virgin/no-board cannot hang). Board: confirm `Appl_NvM_ReadAllDone` / T8 persist.
7. ~~阶段4无板 + F120 + RID0206/Security 桩~~ **done**。~~阶段5 SystemExtract 标量 SWC↔COM~~ **done**（`Appl_ComShell` v0.5，41 路）。组信号 / CCP DB / T1–T8 等板。

## Board bring-up (TJA1145 / QSPI3)

**Pins (HSI / Port ECUC / `Port_PBcfg.c`)**

| Signal | MCU | Port cfg |
|--------|-----|----------|
| CS (CHANNEL8) | P10.5 | OUT ALT3 HIGH |
| SCLK | P10.6 | OUT ALT3 |
| MISO | P10.7 | IN GPIO |
| MOSI | P10.8 | OUT ALT3 |
| NSTBCAN | P32.4 | OUT GPIO **HIGH** |
| ENCAN | P32.5 | OUT GPIO **HIGH** |

Re-apply EN/NSTB after Port ECUC edits: `Tasking/_patch_encan_pins.py` then DVCfgCmd generate + PostGenerate + `amk all`.  
Audit: `Tasking/_check_tja_pins.py`.

**On-target (download ELF, no need to call functions first)**

| When | What to watch |
|------|----------------|
| Right after init (`SmokePhase==1`) | `Appl_CanTrcv_SmokeOk==1`, `SpiSeqL/M/N==0` (SPI_SEQ_OK) |
| ~1s later (`SmokePhase==2`, via `Task_Appl_100ms`) | `LastOpMode` usually NORMAL(0) after ComM FULL |
| Manual | `Appl_CanTrcv_Smoke_SetNormal/Standby/Sleep` → `SetRet` + mode |

Mode: `0=NORMAL 1=STANDBY 2=SLEEP`. Fail → EN/NSTB HIGH, P10.5–8 QSPI3, CS=CHANNEL8; `Appl_Det_*` / `detLogBuffer` / `SpiSeq*`.

### DET (debugger)

| Symbol | Meaning |
|--------|---------|
| `Appl_Det_Count` / `Appl_Det_LastModuleId` / `_LastApiId` / `_LastErrorId` | last `Det_ReportError` |
| `detLogBuffer` / `detStatus` | Vector Det ring (size 8); set `detStatus.logActive=1` if needed |

CanTrcv module id is in CanTrcv headers (`CANTRCV_30_TJA1145_MODULE_ID`). CanIf/CanSM DET already ON.

### Can stack status (~100 ms, **Core0**)

Sampling is in `Spi_MainFunction_Handling` (called from `Task_Bsw_10ms`), not `Task_Appl_100ms` (Core2 — BSW APIs unsafe there).

| Symbol | Healthy |
|--------|---------|
| `Appl_Bringup_Ok` | **1** |
| `Appl_Bringup_FailFlags` | bit3=Nm soft, bit4=ComIpdu (clears after FULL) |
| `Appl_Com_IpduStarted` / `Appl_Com_RxChangeCnt` | 1 / live-bus activity |
| `Appl_Can_StackOk` / `Appl_Can_NmOk` | **1** |
| `Appl_Can_SampleCnt` / `Appl_Core2_Tick100ms` | increment |

### SPI coexistence

| Device | QSPI | CS | Note |
|--------|------|-----|------|
| TJA1145 | QSPI3 | CHANNEL8 / P10.5 | CanTrcv L/M/N |
| Tlf35584 | QSPI4 | (own job) | 5 MHz, 16-bit — independent |

### No-board gate

```bat
python Tasking\_offline_tja_check.py
```

## Trcv init / mode path

**Config (OK)**  
- `CANIF_TRCV_HANDLING` / `CANIF_PN_TRCV_HANDLING` = ON; `CanIfTrcvCfg_Tja1145` → `CanTrcvChannel_Tja1145`; Ctrl↔Trcv linked  
- CanIf dispatch → `CanSM_*Trcv*` indications  
- CanSM `TransceiverId` → `CanIfTrcvCfg_Tja1145`; channel trcv + PN support ON  
- CanTrcv SPI sync ON; InitState NORMAL; sequences L/M/N; MainFunction on `Task_Com_5ms`

**Runtime chain**  
`EcuM_AL_DriverInitOne` (BSW core): `Mcu`→`Port`→`Spi`→`CanTrcv`→`Can`→`CanIf`→`CanSM`→`ComM`(+Nm/CanNm/CanTp/PduR/Com/Dem/Dcm)  
→ `EcuM_StartupTwo`: `SchM_Init` + `BswM_Init`  
→ BswM `AL_EnterRun`: Allow + `ComM_RequestComMode(FULL)` + `BswMPduGroupSwitch` + DM enable  
→ CanSM requests CanIf Trcv / Ctrl modes → `CanTrcv_30_Tja1145_SetOpMode`  
→ ProgReset path: `Appl_BswM_ProgRequest()` → `Appl_ProgRequestFlag=1` then EcuM reset

**Note:** PLL may already be set by BRS (`BRS_ENABLE_PLLCLOCKS`); `Mcu_Init` still required for MCAL. Pinmux/EN/CS: see Board bring-up.

## Constraints

- Board has **4 cores** — do not start Core4/5; SIP TC397 keeps 6 in `vBrsCfg`, override in headers.
- Do **not** commit unless explicitly requested.
