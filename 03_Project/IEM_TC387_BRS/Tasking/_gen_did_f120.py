# -*- coding: utf-8 -*-
"""生成 Appl_Did_F120.c，并剥离 Rte 中 0xF120 PartNumber UNCONNECTED stubs。"""
from __future__ import annotations

from pathlib import Path

ROOT = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS")
RTE = ROOT / "Appl" / "GenData" / "Rte_OsApplication.c"
OUT = ROOT / "Appl" / "Source" / "Appl_Did_F120.c"
MARKER = "/* APPL_DID_F120: stubs removed — see Appl_Did_F120.c */"

TARGETS = (
    "Rte_Call_Dcm_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Main_ConditionCheckRead",
    "Rte_Call_Dcm_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Main_ReadData",
    "Rte_Call_Dcm_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Variant_ConditionCheckRead",
    "Rte_Call_Dcm_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Variant_ReadData",
)


def match_parens(s: str, open_idx: int) -> int:
    depth = 0
    for i in range(open_idx, len(s)):
        if s[i] == "(":
            depth += 1
        elif s[i] == ")":
            depth -= 1
            if depth == 0:
                return i
    raise ValueError("unbalanced")


def find_func(text: str, name: str) -> tuple[str, int, int] | None:
    needle = f"FUNC(Std_ReturnType, RTE_CODE) {name}("
    i = text.find(needle)
    if i < 0:
        return None
    paren = text.find("(", i + len("FUNC(Std_ReturnType, RTE_CODE) "))
    # name starts after FUNC(...)
    name_pos = text.find(name, i)
    paren = text.find("(", name_pos)
    args_end = match_parens(text, paren)
    args = text[paren + 1 : args_end]
    brace = text.find("{", args_end)
    end = text.find("}", brace) + 1
    return args, i, end


def normalize_args(args: str) -> str:
    return (
        args.replace(
            "P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR)",
            "P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR)",
        )
        .replace(
            "P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR)",
            "P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR)",
        )
    )


def gen_appl(arg_map: dict[str, str]) -> str:
    main_args = normalize_args(arg_map[TARGETS[1]])
    var_args = normalize_args(arg_map[TARGETS[3]])
    cond_args = normalize_args(arg_map[TARGETS[0]])
    return f"""/**********************************************************************************************************************
 * Appl_Did_F120.c — 平台 DID 0xF120 Application Diagnostic Database Part Number
 * Main 4B + Variant 3B；RTE 再生后重跑 Tasking/_gen_did_f120.py
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "Rte_Type.h"
#include "Compiler.h"

#ifndef RTE_CODE
# define RTE_CODE
#endif
#ifndef RTE_DCM_APPL_VAR
# define RTE_DCM_APPL_VAR
#endif

/* Bring-up 占位；量产零件号从标定/NvM 替换 */
static const uint8 Appl_Did_F120_Main[4] = {{ (uint8)'I', (uint8)'E', (uint8)'M', (uint8)'1' }};
static const uint8 Appl_Did_F120_Variant[3] = {{ (uint8)'0', (uint8)'0', (uint8)'1' }};

static Std_ReturnType Appl_Did_F120_CondOk(
  Dcm_OpStatusType OpStatus,
  P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{{
  (void)OpStatus;
  if (ErrorCode != NULL_PTR)
  {{
    *ErrorCode = 0u;
  }}
  return E_OK;
}}

FUNC(Std_ReturnType, RTE_CODE) {TARGETS[0]}({cond_args})
{{
  return Appl_Did_F120_CondOk(OpStatus, ErrorCode);
}}

FUNC(Std_ReturnType, RTE_CODE) {TARGETS[1]}({main_args})
{{
  uint8 i;
  (void)OpStatus;
  if (Data != NULL_PTR)
  {{
    for (i = 0u; i < 4u; i++)
    {{
      Data[i] = Appl_Did_F120_Main[i];
    }}
  }}
  return E_OK;
}}

FUNC(Std_ReturnType, RTE_CODE) {TARGETS[2]}({cond_args})
{{
  return Appl_Did_F120_CondOk(OpStatus, ErrorCode);
}}

FUNC(Std_ReturnType, RTE_CODE) {TARGETS[3]}({var_args})
{{
  uint8 i;
  (void)OpStatus;
  if (Data != NULL_PTR)
  {{
    for (i = 0u; i < 3u; i++)
    {{
      Data[i] = Appl_Did_F120_Variant[i];
    }}
  }}
  return E_OK;
}}
"""


def main() -> None:
    text = RTE.read_text(encoding="utf-8", errors="replace")
    arg_map: dict[str, str] = {}
    spans: list[tuple[int, int, str]] = []
    for name in TARGETS:
        hit = find_func(text, name)
        if hit is None:
            # already stripped — get args from Appl or Rte_Dcm.h
            continue
        args, start, end = hit
        arg_map[name] = args
        spans.append((start, end, name))

    if len(arg_map) < 4:
        # fallback fixed signatures
        arg_map.setdefault(
            TARGETS[0],
            "Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode",
        )
        arg_map.setdefault(
            TARGETS[1],
            "Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data",
        )
        arg_map.setdefault(
            TARGETS[2],
            "Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode",
        )
        arg_map.setdefault(
            TARGETS[3],
            "Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data",
        )
        print(f"stubs present {len(spans)}/4 — using fallback/remaining args")

    OUT.write_text(gen_appl(arg_map), encoding="utf-8", newline="\n")
    print(f"wrote {OUT}")

    if spans:
        for start, end, name in sorted(spans, key=lambda x: -x[0]):
            text = text[:start] + f"{MARKER}\n/* removed {name} */\n" + text[end:]
        RTE.write_text(text, encoding="utf-8", newline="\n")
        print(f"stripped {len(spans)} F120 stubs")
    else:
        print("no F120 stubs left to strip")


if __name__ == "__main__":
    main()
