# -*- coding: utf-8 -*-
"""扫描 Rte_OsApplication.c 中 RTE_E_UNCONNECTED，生成阶段5未连接端口清单。"""
from __future__ import annotations

import re
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS")
RTE = ROOT / "Appl" / "GenData" / "Rte_OsApplication.c"
OUT = ROOT / "Tasking" / "Rte_Unconnected_Inventory.md"

PREFIX = "FUNC(Std_ReturnType, RTE_CODE) "


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


def classify(name: str) -> str:
    if "DID_E103_" in name:
        return "DID_E103(已由Appl提供，若仍出现=需重跑_gen_did_e103)"
    if "Application_Diagnostic_Database_Part_Number_Partnumber_" in name:
        return "DID_F120_PartNumber"
    if re.search(r"DID_[0-9A-Fa-f]{4}_", name) or "DataServices_DID_" in name:
        return "Dcm_DID_DataServices"
    if "DataServices_" in name:
        return "Dcm_other_DataServices"
    if "RoutineServices" in name:
        return "Dcm_Routine"
    if "SecurityAccess" in name:
        return "Dcm_Security"
    if "CallbackDCMRequestServices" in name or "ServiceRequestNotification" in name:
        return "Dcm_ServiceReq"
    if "ModeSwitch" in name or "SwitchAck" in name:
        return "Mode"
    return "other"


def collect() -> list[str]:
    text = RTE.read_text(encoding="utf-8", errors="replace")
    names: list[str] = []
    pos = 0
    while True:
        i = text.find(PREFIX + "Rte_", pos)
        if i < 0:
            break
        name_start = i + len(PREFIX)
        paren = text.find("(", name_start)
        name = text[name_start:paren]
        args_end = match_parens(text, paren)
        brace = text.find("{", args_end)
        end = text.find("}", brace) + 1
        body = text[brace:end]
        if "RTE_E_UNCONNECTED" in body:
            names.append(name)
        pos = end
    return names


def main() -> None:
    names = collect()
    by_cat: dict[str, list[str]] = defaultdict(list)
    for n in names:
        by_cat[classify(n)].append(n)
    counts = Counter({k: len(v) for k, v in by_cat.items()})

    lines = [
        "# RTE 未连接端口清单（阶段 5）",
        "",
        f"来源：`Appl/GenData/Rte_OsApplication.c` 中返回 `RTE_E_UNCONNECTED` 的 `Rte_Call_*`。",
        f"生成脚本：`Tasking/_gen_rte_unconnected_inventory.py`（RTE 再生后重跑）。",
        "",
        f"**合计：{len(names)}**",
        "",
        "## 分类统计",
        "",
        "| 类别 | 数量 | 说明 |",
        "|------|------|------|",
    ]
    notes = {
        "DID_E103(已由Appl提供，若仍出现=需重跑_gen_did_e103)": "应由 Appl_Did_E103 接管",
        "DID_F120_PartNumber": "平台 DID 0xF120；Appl_Did_F120 接管",
        "Dcm_DID_DataServices": "CDD 导入的大量 DID，待应用 SWC / 分批接线",
        "Dcm_Routine": "例程 0x31，待应用",
        "Dcm_Security": "安全访问，待应用",
        "Dcm_other_DataServices": "非 DID 命名的 DataServices",
        "Dcm_ServiceReq": "服务请求通知",
        "Mode": "模式切换",
        "other": "其余",
    }
    for cat, n in counts.most_common():
        lines.append(f"| `{cat}` | {n} | {notes.get(cat, '')} |")

    lines += [
        "",
        "## 阶段 5 约定",
        "",
        "- **不静默**：本清单随 RTE 再生更新；未列名的 UNCONNECTED 视为遗漏。",
        "- **优先接线**：平台观测 DID（F120/E103）、例程/安全按项目排期。",
        "- **完整 COM↔SWC 映射**属 Developer 应用壳，不挡到板 smoke。",
        "",
    ]

    # Short lists for priority cats
    for cat in ("DID_F120_PartNumber", "Dcm_Routine", "Dcm_Security", "other"):
        items = by_cat.get(cat, [])
        if not items:
            continue
        lines.append(f"## {cat}（{len(items)}）")
        lines.append("")
        for n in sorted(items)[:80]:
            lines.append(f"- `{n}`")
        if len(items) > 80:
            lines.append(f"- … 另有 {len(items) - 80} 条")
        lines.append("")

    lines.append("## Dcm_DID_DataServices（仅列 DID 前缀抽样）")
    lines.append("")
    dids = Counter()
    for n in by_cat.get("Dcm_DID_DataServices", []):
        m = re.search(r"DID_([0-9A-Fa-f]{4})_", n)
        dids[m.group(1) if m else "?"] += 1
    for did, n in dids.most_common(40):
        lines.append(f"- `0x{did}` × {n} ops")
    if len(dids) > 40:
        lines.append(f"- … 共 {len(dids)} 个 DID 前缀")
    lines.append("")

    OUT.write_text("\n".join(lines), encoding="utf-8", newline="\n")
    print(f"wrote {OUT} total={len(names)}")


if __name__ == "__main__":
    main()
