# -*- coding: utf-8 -*-
"""Generate Appl_Did_E103.c and strip UNCONNECTED E103 stubs from Rte_OsApplication.c."""
from __future__ import annotations

import re
from pathlib import Path

ROOT = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS")
RTE = ROOT / "Appl" / "GenData" / "Rte_OsApplication.c"
OUT = ROOT / "Appl" / "Source" / "Appl_Did_E103.c"
MARKER = "/* APPL_DID_E103: stubs removed — see Appl_Did_E103.c */"

ORDINAL = {
    "10th": 9,
    "1st": 0,
    "2nd": 1,
    "3rd": 2,
    "4th": 3,
    "5th": 4,
    "6th": 5,
    "7th": 6,
    "8th": 7,
    "9th": 8,
}

def _match_parens(s: str, open_idx: int) -> int:
    """Return index of matching ')' for s[open_idx]=='('."""
    depth = 0
    for i in range(open_idx, len(s)):
        if s[i] == "(":
            depth += 1
        elif s[i] == ")":
            depth -= 1
            if depth == 0:
                return i
    raise ValueError("unbalanced paren")


def find_e103_funcs(text: str) -> list[tuple[str, str, int, int]]:
    """Return list of (name, args, start, end) for E103 FUNC bodies."""
    out: list[tuple[str, str, int, int]] = []
    needle = "FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_"
    pos = 0
    while True:
        i = text.find(needle, pos)
        if i < 0:
            break
        name_start = text.find("Rte_Call_Dcm_DataServices_DID_E103_", i)
        paren = text.find("(", name_start)
        # skip back: name ends at '('
        name = text[name_start:paren]
        args_end = _match_parens(text, paren)
        args = text[paren + 1 : args_end]
        brace = text.find("{", args_end)
        if brace < 0:
            raise SystemExit(f"no body for {name}")
        body_end = text.find("}", brace)
        if body_end < 0:
            raise SystemExit(f"no body end for {name}")
        end = body_end + 1
        out.append((name, args, i, end))
        pos = end
    return out


# Legacy: used only for strip detection of leftover definitions
FUNC_RE = re.compile(
    r"FUNC\(Std_ReturnType, RTE_CODE\) "
    r"Rte_Call_Dcm_DataServices_DID_E103_[A-Za-z0-9_]+\(",
    re.M,
)


def slot_of(name: str) -> int | None:
    for key, idx in sorted(ORDINAL.items(), key=lambda x: -len(x[0])):
        if f"{key}_parameter" in name:
            return idx
    return None


def classify(name: str) -> tuple[str, int | None]:
    if "ConditionCheckRead" in name:
        return "cond", None
    if "Number_of_invalid" in name:
        return "count", None
    if "parameter_invalid_value" in name:
        return "inv", slot_of(name)
    if "parameter_number_of_the_car_configuration" in name:
        return "num", slot_of(name)
    return "unk", slot_of(name)


def normalize_args(args: str) -> str:
    args = re.sub(
        r"P2VAR\(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR\)",
        "P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR)",
        args,
    )
    args = re.sub(
        r"P2VAR\(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR\)",
        "P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR)",
        args,
    )
    return args


def gen_appl(funcs: list[tuple[str, str]]) -> str:
    lines = [
        "/**********************************************************************************************************************",
        " * Appl_Did_E103.c — Dcm DID 0xE103 providers (replaces Rte UNCONNECTED stubs)",
        " * Re-run Tasking/_gen_did_e103.py after each RTE generate.",
        " *********************************************************************************************************************/",
        '#include "Std_Types.h"',
        '#include "Rte_Type.h"',
        '#include "Compiler.h"',
        '#include "Appl_CarConfig_Bringup.h"',
        "",
        "#ifndef RTE_CODE",
        "# define RTE_CODE",
        "#endif",
        "#ifndef RTE_DCM_APPL_VAR",
        "# define RTE_DCM_APPL_VAR",
        "#endif",
        "",
        "static Std_ReturnType Appl_Did_E103_CondOk(",
        "  Dcm_OpStatusType OpStatus,",
        "  P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)",
        "{",
        "  (void)OpStatus;",
        "  if (ErrorCode != NULL_PTR)",
        "  {",
        "    *ErrorCode = 0u;",
        "  }",
        "  return E_OK;",
        "}",
        "",
        "static Std_ReturnType Appl_Did_E103_ReadCount(",
        "  Dcm_OpStatusType OpStatus,",
        "  P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)",
        "{",
        "  (void)OpStatus;",
        "  if (Data != NULL_PTR)",
        "  {",
        "    Data[0] = Appl_CarConfig_GetFaultCount();",
        "  }",
        "  return E_OK;",
        "}",
        "",
        "static Std_ReturnType Appl_Did_E103_ReadCcpNum(",
        "  uint8 slot,",
        "  Dcm_OpStatusType OpStatus,",
        "  P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)",
        "{",
        "  uint16 ccp = 0u;",
        "  uint8 inv = 0u;",
        "  (void)OpStatus;",
        "  (void)Appl_CarConfig_GetFault(slot, &ccp, &inv);",
        "  if (Data != NULL_PTR)",
        "  {",
        "    Data[0] = (uint8)((ccp >> 8) & 0xFFu);",
        "    Data[1] = (uint8)(ccp & 0xFFu);",
        "  }",
        "  return E_OK;",
        "}",
        "",
        "static Std_ReturnType Appl_Did_E103_ReadInv(",
        "  uint8 slot,",
        "  Dcm_OpStatusType OpStatus,",
        "  P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)",
        "{",
        "  uint16 ccp = 0u;",
        "  uint8 inv = 0u;",
        "  (void)OpStatus;",
        "  (void)Appl_CarConfig_GetFault(slot, &ccp, &inv);",
        "  if (Data != NULL_PTR)",
        "  {",
        "    Data[0] = inv;",
        "  }",
        "  return E_OK;",
        "}",
        "",
    ]

    unc = 0
    for name, args in funcs:
        kind, slot = classify(name)
        args_u = normalize_args(args)
        lines.append(f"FUNC(Std_ReturnType, RTE_CODE) {name}({args_u})")
        lines.append("{")
        if kind == "cond":
            lines.append("  return Appl_Did_E103_CondOk(OpStatus, ErrorCode);")
        elif kind == "count":
            lines.append("  return Appl_Did_E103_ReadCount(OpStatus, Data);")
        elif kind == "num" and slot is not None:
            lines.append(f"  return Appl_Did_E103_ReadCcpNum({slot}u, OpStatus, Data);")
        elif kind == "inv" and slot is not None:
            lines.append(f"  return Appl_Did_E103_ReadInv({slot}u, OpStatus, Data);")
        else:
            unc += 1
            lines.append(f"  /* unclassified {kind} slot={slot} */")
            lines.append("  (void)OpStatus;")
            if "ErrorCode" in args_u:
                lines.append("  if (ErrorCode != NULL_PTR) { *ErrorCode = 0u; }")
            if "Data" in args_u:
                lines.append("  (void)Data;")
            lines.append("  return E_OK;")
        lines.append("}")
        lines.append("")

    if unc:
        raise SystemExit(f"unclassified functions: {unc}")
    return "\n".join(lines) + "\n"


def parse_decls_from_rte_dcm_h() -> list[tuple[str, str]]:
    hdr = (ROOT / "Appl" / "GenData" / "Components" / "Rte_Dcm.h").read_text(
        encoding="utf-8", errors="replace"
    )
    needle = "FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_"
    by_name: dict[str, str] = {}
    pos = 0
    while True:
        i = hdr.find(needle, pos)
        if i < 0:
            break
        name_start = hdr.find("Rte_Call_Dcm_DataServices_DID_E103_", i)
        paren = hdr.find("(", name_start)
        name = hdr[name_start:paren]
        args_end = _match_parens(hdr, paren)
        args = hdr[paren + 1 : args_end]
        # Prefer uint8* form when both exist (PTR2ARRAYBASETYPE)
        if name not in by_name or "uint8" in args:
            by_name[name] = args
        pos = args_end + 1
    return list(by_name.items())


def strip_rte(text: str) -> tuple[str, int]:
    found = find_e103_funcs(text)
    if not found:
        return text, 0
    # Remove from end so indices stay valid
    for name, _args, start, end in reversed(found):
        text = text[:start] + f"{MARKER}\n/* removed {name} */\n" + text[end:]
    return text, len(found)


def main() -> None:
    text = RTE.read_text(encoding="utf-8", errors="replace")
    found = find_e103_funcs(text)
    if found:
        funcs = [(n, a) for n, a, _s, _e in found]
        print(f"parsed {len(funcs)} E103 stubs from Rte_OsApplication.c")
    else:
        funcs = parse_decls_from_rte_dcm_h()
        print(f"stubs already gone; using Rte_Dcm.h decls: {len(funcs)}")

    if len(funcs) != 42:
        raise SystemExit(f"expected 42 E103 providers, got {len(funcs)}")

    OUT.write_text(gen_appl(funcs), encoding="utf-8", newline="\n")
    print(f"wrote {OUT}")

    text2, n = strip_rte(RTE.read_text(encoding="utf-8", errors="replace"))
    if n:
        RTE.write_text(text2, encoding="utf-8", newline="\n")
        print(f"stripped {n} E103 stubs from Rte_OsApplication.c")
    else:
        print("no E103 stubs left to strip (ok if already patched)")


if __name__ == "__main__":
    main()
