"""Expand Appl_ComShell to v0.5: all 41 SystemExtract scalar primitives."""
from __future__ import annotations

import importlib.util
from pathlib import Path

ROOT = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS")
BASE = ROOT / "Tasking" / "_expand_comshell_v03.py"

spec = importlib.util.spec_from_file_location("comshell_v03", BASE)
mod = importlib.util.module_from_spec(spec)
assert spec.loader is not None
spec.loader.exec_module(mod)

# direction R/P, port, iface, app_type, impl_type, signal
mod.PORTS = [
    # --- v0.4 ---
    ("R", "CarTiGlb", "CarTiGlb_5", "CarTiGlb_2", "uint32", "CarTiGlb"),
    ("R", "BkpOfDstTrvld", "BkpOfDstTrvld_7", "Len31_2", "uint32", "BkpOfDstTrvld"),
    ("R", "WhlMotSysModReq", "WhlMotSysModReq_2", "WhlMotSysModStsTyp1_2", "uint8", "WhlMotSysModReq"),
    ("R", "WhlMotSysTqReq", "WhlMotSysTqReq_2", "HvTq1_2", "uint16", "WhlMotSysTqReq"),
    ("R", "CooltTSigForDtElec", "CooltTSigForDtElec_5", "CooltTHiResl_2", "uint16", "CooltTSigForDtElec"),
    ("R", "CooltFlowForDtElec", "CooltFlowForDtElec_5", "CooltFlow2_2", "uint16", "CooltFlowForDtElec"),
    ("R", "SpdRotlForWhlsAtAxleRe", "SpdRotlForWhlsAtAxleRe_7", "N1_2", "uint16", "SpdRotlForWhlsAtAxleRe"),
    ("R", "WhlMotSysPwrLimMax", "WhlMotSysPwrLimMax_2", "PrpsnPwrLimMax_2", "uint16", "WhlMotSysPwrLimMax"),
    ("R", "WhlMotSysPwrLimMin", "WhlMotSysPwrLimMin_2", "PrpsnPwrLimMin_2", "uint16", "WhlMotSysPwrLimMin"),
    ("P", "WhlMotSysModSts", "WhlMotSysModSts_5", "WhlMotSysModStsTyp2_2", "uint8", "WhlMotSysModSts"),
    ("P", "WhlMotSysSpdAct", "WhlMotSysSpdAct_4", "IsgSpdWSgnTyp_2", "sint16", "WhlMotSysSpdAct"),
    ("P", "WhlMotSysUdc", "WhlMotSysUdc_3", "HvU1_2", "uint16", "WhlMotSysUdc"),
    ("P", "WhlMotSysMotT", "WhlMotSysMotT_3", "T3_2", "uint8", "WhlMotSysMotT"),
    ("P", "WhlMotSysInvrT", "WhlMotSysInvrT_4", "T3_2", "uint8", "WhlMotSysInvrT"),
    ("P", "WhlMotSysCooltT", "WhlMotSysCooltT_4", "HvT1_3", "uint8", "WhlMotSysCooltT"),
    ("P", "WhlMotSysIdc", "WhlMotSysIdc_5", "Ampr1_1", "uint16", "WhlMotSysIdc"),
    ("P", "WhlMotSysLimnIndcn", "WhlMotSysLimnIndcn_3", "UInt16_2", "uint16", "WhlMotSysLimnIndcn"),
    ("P", "WhlMotSysCoolgReq", "WhlMotSysCoolgReq_4", "HvCoolg1_2", "uint8", "WhlMotSysCoolgReq"),
    ("P", "WhlMotSysErrIndcnReq", "WhlMotSysErrIndcnReq_4", "OnOff1_2", "uint8", "WhlMotSysErrIndcnReq"),
    # --- remaining confirmed SystemExtract scalars ---
    ("R", "DCChrgnHndlSts", "DCChrgnHndlSts_5", "OnBdChrgrHndlSts_2", "uint8", "DCChrgnHndlSts"),
    ("R", "DrvgCyc", "DrvgCyc_3", "OnOff1_2", "uint8", "DrvgCyc"),
    ("R", "GearLvrIndcn", "GearLvrIndcn_6", "GearLvrIndcn2_2", "uint8", "GearLvrIndcn"),
    ("R", "HvBattSoc", "HvBattSoc_2", "Perc7_2", "uint16", "HvBattSoc"),
    ("R", "HvBattUDc", "HvBattUDc_3", "HvU1_2", "uint16", "HvBattUDc"),
    ("R", "HvBattUDynMaxLim", "HvBattUDynMaxLim_4", "HvU1_2", "uint16", "HvBattUDynMaxLim"),
    ("R", "HvBattUDynMinLim", "HvBattUDynMinLim_4", "HvU1_2", "uint16", "HvBattUDynMinLim"),
    ("P", "ImobEngSts2", "ImobEngSts2_4", "ImobSts_2", "uint8", "ImobEngSts2"),
    ("R", "OnBdChrgrHndlSts1", "OnBdChrgrHndlSts1_8", "OnBdChrgrHndlSts1_2", "uint8", "OnBdChrgrHndlSts1"),
    ("P", "PLockFltIndcRe", "PLockFltIndcRe_1", "FltIndcn_1", "uint8", "PLockFltIndcRe"),
    ("P", "PLockFltLvlRe", "PLockFltLvlRe_1", "FltLvl_1", "uint8", "PLockFltLvlRe"),
    ("R", "PLockParkReq", "PLockParkReq_1", "PLockParkRequest_1", "uint8", "PLockParkReq"),
    ("P", "PLockParkStsRe", "PLockParkStsRe_1", "ParkSts_1", "uint8", "PLockParkStsRe"),
    ("R", "PrpsnFbLimnIndcn", "PrpsnFbLimnIndcn_2", "UInt4_2", "uint8", "PrpsnFbLimnIndcn"),
    ("R", "RearHeatModEnad", "RearHeatModEnad_2", "FrntHeatModEnad_1", "uint8", "RearHeatModEnad"),
    ("R", "RearHeatPwrAllwd", "RearHeatPwrAllwd_1", "IsgHeatPwr_1", "uint8", "RearHeatPwrAllwd"),
    ("P", "WhlMotClrRdyReq", "WhlMotClrRdyReq_4", "OnOff1_2", "uint8", "WhlMotClrRdyReq"),
    ("P", "WhlMotCooltFlowMinReq", "WhlMotCooltFlowMinReq_2", "CooltFlowForDtElec1_2", "uint16", "WhlMotCooltFlowMinReq"),
    ("R", "WhlMotSysActvDampgModReq", "WhlMotSysActvDampgModReq_2", "WhlMotSysActvDampgModCodSts_2", "uint8", "WhlMotSysActvDampgModReq"),
    ("P", "WhlMotSysHeatFdBck", "WhlMotSysHeatFdBck_1", "WhlMotSysHeatFdBck_1", "uint8", "WhlMotSysHeatFdBck"),
    ("P", "WhlMotSysHeatPwrAct", "WhlMotSysHeatPwrAct_1", "IsgHeatPwr_1", "uint8", "WhlMotSysHeatPwrAct"),
    ("P", "WhlMotSysHeatPwrMax", "WhlMotSysHeatPwrMax_1", "IsgHeatPwr_1", "uint8", "WhlMotSysHeatPwrMax"),
]

# short C symbol aliases for readable globals (fallback = port name)
ALIAS = {
    "WhlMotSysModReq": "ModReq",
    "WhlMotSysTqReq": "TqReq",
    "CooltTSigForDtElec": "CooltTSig",
    "CooltFlowForDtElec": "CooltFlow",
    "SpdRotlForWhlsAtAxleRe": "SpdRotlRe",
    "WhlMotSysPwrLimMax": "PwrLimMax",
    "WhlMotSysPwrLimMin": "PwrLimMin",
    "WhlMotSysModSts": "ModSts",
    "WhlMotSysSpdAct": "SpdAct",
    "WhlMotSysUdc": "Udc",
    "WhlMotSysMotT": "MotT",
    "WhlMotSysInvrT": "InvrT",
    "WhlMotSysCooltT": "CooltT",
    "WhlMotSysIdc": "Idc",
    "WhlMotSysLimnIndcn": "LimnIndcn",
    "WhlMotSysCoolgReq": "CoolgReq",
    "WhlMotSysErrIndcnReq": "ErrIndcnReq",
    "WhlMotSysActvDampgModReq": "ActvDampgModReq",
    "WhlMotClrRdyReq": "ClrRdyReq",
    "WhlMotCooltFlowMinReq": "CooltFlowMinReq",
    "WhlMotSysHeatFdBck": "HeatFdBck",
    "WhlMotSysHeatPwrAct": "HeatPwrAct",
    "WhlMotSysHeatPwrMax": "HeatPwrMax",
}


def alias(port: str) -> str:
    return ALIAS.get(port, port)


def ctype_of(impl: str) -> str:
    return {
        "uint8": "uint8",
        "uint16": "uint16",
        "uint32": "uint32",
        "sint16": "sint16",
        "sint8": "sint8",
        "boolean": "boolean",
    }[impl]


def zero_lit(impl: str) -> str:
    return "0" if impl.startswith("sint") else "0u"


def write_appl_v05() -> None:
    rx = [(d, p, i, a, impl, s) for d, p, i, a, impl, s in mod.PORTS if d == "R"]
    tx = [(d, p, i, a, impl, s) for d, p, i, a, impl, s in mod.PORTS if d == "P"]

    hdr_vars = []
    for _d, port, _i, _a, impl, _s in mod.PORTS:
        hdr_vars.append(f"extern volatile {impl} Appl_ComShell_{alias(port)};")

    src_defs = []
    for _d, port, _i, _a, impl, _s in mod.PORTS:
        src_defs.append(f"volatile {impl} Appl_ComShell_{alias(port)} = {zero_lit(impl)};")

    # locals only for RX reads (TX writes use Appl_ComShell_* directly)
    need = sorted({impl for d, _p, _i, _a, impl, _s in mod.PORTS if d == "R"})
    local_decls = "\n".join(f"  {t} tmp_{t};" for t in need)

    rx_body = []
    for idx, (_d, port, _i, _a, impl, _s) in enumerate(rx):
        al = alias(port)
        tmp = f"tmp_{impl}"
        extra = ""
        if idx == 0:
            extra = "\n    Appl_ComShell_RxOkCnt++;"
        rx_body.append(
            f"""  if (Rte_Read_{port}_{port}(&{tmp}) == RTE_E_OK)
  {{
    Appl_ComShell_{al} = {tmp};{extra}
  }}"""
        )

    tx_body = []
    for idx, (_d, port, _i, _a, impl, _s) in enumerate(tx):
        al = alias(port)
        # keep legacy patterns for original TX set; others hold last value / 0
        if port == "WhlMotSysModSts":
            prep = f"  Appl_ComShell_{al} = (uint8)((Appl_ComShell_StepCnt >> 4) & 0x0Fu);"
        elif port == "WhlMotSysSpdAct":
            prep = f"  Appl_ComShell_{al} = (sint16)((Appl_ComShell_StepCnt & 0x00FFu) - 128);"
        elif port == "WhlMotSysUdc":
            prep = f"  Appl_ComShell_{al} = (uint16)(400u + (Appl_ComShell_StepCnt & 0x1Fu));"
        elif port == "WhlMotSysMotT":
            prep = f"  Appl_ComShell_{al} = (uint8)(40u + (Appl_ComShell_StepCnt & 0x0Fu));"
        elif port == "WhlMotSysInvrT":
            prep = f"  Appl_ComShell_{al} = (uint8)(35u + ((Appl_ComShell_StepCnt >> 1) & 0x0Fu));"
        elif port == "WhlMotSysCooltT":
            prep = f"  Appl_ComShell_{al} = (uint8)(30u + ((Appl_ComShell_StepCnt >> 2) & 0x0Fu));"
        elif port == "WhlMotSysIdc":
            prep = f"  Appl_ComShell_{al} = (uint16)(100u + (Appl_ComShell_StepCnt & 0x3Fu));"
        elif port == "WhlMotSysLimnIndcn":
            prep = f"  Appl_ComShell_{al} = (uint16)(Appl_ComShell_StepCnt & 0x00FFu);"
        elif port == "WhlMotSysCoolgReq":
            prep = f"  Appl_ComShell_{al} = (uint8)((Appl_ComShell_StepCnt >> 3) & 0x03u);"
        elif port == "WhlMotSysErrIndcnReq":
            prep = f"  Appl_ComShell_{al} = 0u;"
        else:
            prep = None

        if prep:
            tx_body.append(prep)

        if idx == 0:
            tx_body.append(
                f"""  if (Rte_Write_{port}_{port}(Appl_ComShell_{al}) == RTE_E_OK)
  {{
    Appl_ComShell_TxOkCnt++;
  }}"""
            )
        else:
            tx_body.append(f"  (void)Rte_Write_{port}_{port}(Appl_ComShell_{al});")

    n_rx = len(rx)
    n_tx = len(tx)
    hdr = f"""#ifndef APPL_COMSHELL_H
#define APPL_COMSHELL_H

#include "Std_Types.h"

/*! Appl_ComShell v0.5 — {n_rx} RX + {n_tx} TX primitives via Rte↔COM (all SystemExtract scalars) */
void Appl_ComShell_Init(void);
void Appl_ComShell_Step(void);

extern volatile uint8 Appl_ComShell_InitDone;
extern volatile uint16 Appl_ComShell_StepCnt;
extern volatile uint16 Appl_ComShell_RxOkCnt;
extern volatile uint16 Appl_ComShell_TxOkCnt;

{chr(10).join(hdr_vars)}

#endif /* APPL_COMSHELL_H */
"""
    src = f"""/**********************************************************************************************************************
 * Appl_ComShell.c v0.5 — Task_Bsw_10ms, Rte↔COM ({n_rx} RX + {n_tx} TX)
 *********************************************************************************************************************/
#include "Rte_Appl_ComShell.h"
#include "Appl_ComShell.h"

volatile uint8 Appl_ComShell_InitDone = 0u;
volatile uint16 Appl_ComShell_StepCnt = 0u;
volatile uint16 Appl_ComShell_RxOkCnt = 0u;
volatile uint16 Appl_ComShell_TxOkCnt = 0u;

{chr(10).join(src_defs)}

void Appl_ComShell_Init(void)
{{
  Appl_ComShell_InitDone = 1u;
}}

#define Appl_ComShell_START_SEC_CODE
#include "Appl_ComShell_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(void, Appl_ComShell_CODE) Appl_ComShell_Step(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{{
{local_decls}

  if (Appl_ComShell_InitDone == 0u)
  {{
    Appl_ComShell_Init();
  }}
  Appl_ComShell_StepCnt++;

{chr(10).join(rx_body)}

{chr(10).join(tx_body)}
}}

#define Appl_ComShell_STOP_SEC_CODE
#include "Appl_ComShell_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
"""
    (ROOT / "Appl/Include/Appl_ComShell.h").write_text(hdr, encoding="utf-8", newline="\n")
    (ROOT / "Appl/Source/Appl_ComShell.c").write_text(src, encoding="utf-8", newline="\n")
    print("wrote Appl C/H", n_rx, "RX", n_tx, "TX")


def write_inventory() -> None:
    rx = [p for d, p, *_ in mod.PORTS if d == "R"]
    tx = [p for d, p, *_ in mod.PORTS if d == "P"]
    lines = [
        "# Developer SWC ↔ COM 清单（阶段5）",
        "",
        "## 现状",
        "",
        "- `Config/Developer`：`IEM` 组合 = `IEMHOST` + `IEMDTCS`（仅端口壳，无原子 runnable）",
        "- IEMHOST：P-Port **27** / R-Port **34**",
        "- `SystemExtract`：已有 IEM 端口 → SystemSignal / SignalGroup 的 DATA-MAPPING",
        "- `FlatExtract` COMPOSITIONTYPE：原先只有 BSW Service SWC；本补丁加入最小应用壳 `Appl_ComShell`",
        "- ECU Projects `ECU_Composition`：空（未同步 System Extract 应用到 Flat）",
        "",
        f"## 壳 `Appl_ComShell`（v0.5，{len(mod.PORTS)} 路标量 = 全部 SystemExtract 标量）",
        "",
        "| 方向 | Port | SystemSignal |",
        "|------|------|--------------|",
    ]
    for d, port, _i, _a, _impl, sig in mod.PORTS:
        lines.append(f"| {'RX' if d == 'R' else 'TX'} | {port} | {sig} |")
    lines += [
        "",
        f"- RX **{len(rx)}** / TX **{len(tx)}**",
        "",
        "## SystemExtract 组映射（仍未进壳）",
        "",
        "共 **23** 条组信号（含 `VehCfgPrm` / `VehCfgPrmExt`）。CarConfig BlkID 已由 `Appl_CarConfig_Bringup` 直接 `Com_ReceiveSignal`；CCP 值表待 DB。组端口进 RTE 壳可后续扩。",
        "",
        "## 运行时（待 amk）",
        "",
        "- Rte：`Rte_Read_*` / `Rte_Write_*` → Com；Step 在 **`Task_Bsw_10ms`**",
        "- 观测：`Appl_ComShell_*` 与 `RxOkCnt`/`TxOkCnt`",
        "",
        "## 后续",
        "",
        "1. 组信号（`VehCfgPrm` 等）进壳或保持 CarConfig 直连",
        "2. 板测 RX/TX；CCP DB / T1–T8 等板",
        "",
    ]
    inv = ROOT / "Tasking" / "Developer_Swc_Com_Inventory.md"
    inv.write_text("\n".join(lines), encoding="utf-8", newline="\n")
    print("wrote", inv)


def main() -> None:
    orig = mod.write_arxml

    def write_arxml_v05() -> None:
        orig()
        for p in (mod.ARXML, mod.DEV):
            t = p.read_text(encoding="utf-8")
            t = (
                t.replace("0.3.0", "0.5.0")
                .replace("0.4.0", "0.5.0")
                .replace("3 RX + 6 TX", f"{sum(1 for d, *_ in mod.PORTS if d == 'R')} RX + {sum(1 for d, *_ in mod.PORTS if d == 'P')} TX")
                .replace("9 RX + 10 TX", f"{sum(1 for d, *_ in mod.PORTS if d == 'R')} RX + {sum(1 for d, *_ in mod.PORTS if d == 'P')} TX")
            )
            p.write_text(t, encoding="utf-8", newline="\n")

    write_arxml_v05()
    mod.patch_flat()
    write_appl_v05()
    write_inventory()
    print("ok v0.5 ports", len(mod.PORTS))


if __name__ == "__main__":
    main()
