# -*- coding: utf-8 -*-
"""剥离 Rte 中编程前置条件 + Security L3/L4 UNCONNECTED stubs（实现见 Appl_Diag_Bringup.c）。"""
from __future__ import annotations

from pathlib import Path

ROOT = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS")
RTE = ROOT / "Appl" / "GenData" / "Rte_OsApplication.c"
MARKER = "/* APPL_DIAG_BRINGUP: stubs removed — see Appl_Diag_Bringup.c */"

TARGETS = (
    "Rte_Call_Dcm_RoutineServices_Check_programming_pre_conditions_Start",
    "Rte_Call_Dcm_SecurityAccess_CommonUnlock_Level_3_CompareKey",
    "Rte_Call_Dcm_SecurityAccess_CommonUnlock_Level_3_GetSeed",
    "Rte_Call_Dcm_SecurityAccess_ImmoUnlocked_Level_4_CompareKey",
    "Rte_Call_Dcm_SecurityAccess_ImmoUnlocked_Level_4_GetSeed",
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


def find_func(text: str, name: str) -> tuple[int, int] | None:
    needle = f"FUNC(Std_ReturnType, RTE_CODE) {name}("
    i = text.find(needle)
    if i < 0:
        return None
    name_pos = text.find(name, i)
    paren = text.find("(", name_pos)
    args_end = match_parens(text, paren)
    brace = text.find("{", args_end)
    end = text.find("}", brace) + 1
    return i, end


def main() -> None:
    text = RTE.read_text(encoding="utf-8", errors="replace")
    spans: list[tuple[int, int, str]] = []
    for name in TARGETS:
        hit = find_func(text, name)
        if hit:
            spans.append((hit[0], hit[1], name))
    if not spans:
        print("diag bringup stubs already stripped")
        return
    for start, end, name in sorted(spans, key=lambda x: -x[0]):
        text = text[:start] + f"{MARKER}\n/* removed {name} */\n" + text[end:]
    RTE.write_text(text, encoding="utf-8", newline="\n")
    print(f"stripped {len(spans)} diag bringup stubs")


if __name__ == "__main__":
    main()
