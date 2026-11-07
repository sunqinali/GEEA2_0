# -*- coding: utf-8 -*-
"""Generate Appl_CarConfig_CcpTable.c from CSV (CCdB / demo import).

Usage:
  python Tasking/gen_ccp_table.py
  python Tasking/gen_ccp_table.py path/to/export.csv

CSV columns: ccpNumber,minVal,maxVal[,vcpBlockId,vcpBytePos,name]
Values may be decimal or 0xNN. Lines starting with # are comments.
"""
from __future__ import print_function

import csv
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
DEFAULT_CSV = ROOT / "Appl" / "Config" / "Appl_CarConfig_CcpTable.csv"
OUT_C = ROOT / "Appl" / "Source" / "Appl_CarConfig_CcpTable.c"


def parse_u8(s):
    s = s.strip()
    if s.lower().startswith("0x"):
        v = int(s, 16)
    else:
        v = int(s, 10)
    if not (0 <= v <= 255):
        raise ValueError("byte out of range: %s" % s)
    return v


def parse_u16(s):
    s = s.strip()
    if s.lower().startswith("0x"):
        v = int(s, 16)
    else:
        v = int(s, 10)
    if not (0 <= v <= 0xFFFF):
        raise ValueError("u16 out of range: %s" % s)
    return v


def load_rows(path):
    rows = []
    text = path.read_text(encoding="utf-8")
    # strip comment lines for csv module
    lines = [ln for ln in text.splitlines() if ln.strip() and not ln.lstrip().startswith("#")]
    reader = csv.DictReader(lines)
    need = {"ccpNumber", "minVal", "maxVal"}
    if not need.issubset(set(reader.fieldnames or [])):
        raise SystemExit("CSV needs columns ccpNumber,minVal,maxVal")
    for rec in reader:
        ccp = parse_u16(rec["ccpNumber"])
        if ccp == 0:
            continue
        mn = parse_u8(rec["minVal"])
        mx = parse_u8(rec["maxVal"])
        if mn > mx:
            raise SystemExit("min>max for CCP %u" % ccp)
        name = (rec.get("name") or "").strip()
        rows.append((ccp, mn, mx, name))
    if not rows:
        raise SystemExit("no CCP rows in %s" % path)
    return rows


def emit_c(rows):
    lines = []
    lines.append("/**********************************************************************************************************************")
    lines.append(" * Appl_CarConfig_CcpTable.c — GENERATED from Appl_CarConfig_CcpTable.csv")
    lines.append(" * Do not edit by hand; run: python Tasking/gen_ccp_table.py")
    lines.append(" *********************************************************************************************************************/")
    lines.append('#include "Appl_CarConfig_Bringup.h"')
    lines.append("")
    lines.append("const Appl_CarConfig_CcpEntryType Appl_CarConfig_CcpTable[] =")
    lines.append("{")
    for ccp, mn, mx, name in rows:
        comment = (" /* %s */" % name) if name else ""
        lines.append("  { %uu, 0x%02Xu, 0x%02Xu },%s" % (ccp, mn, mx, comment))
    lines.append("};")
    lines.append("")
    lines.append("const uint16 Appl_CarConfig_CcpTableLen =")
    lines.append("    (uint16)(sizeof(Appl_CarConfig_CcpTable) / sizeof(Appl_CarConfig_CcpTable[0]));")
    lines.append("")
    return "\n".join(lines) + "\n"


def main():
    csv_path = Path(sys.argv[1]) if len(sys.argv) > 1 else DEFAULT_CSV
    rows = load_rows(csv_path)
    OUT_C.write_text(emit_c(rows), encoding="utf-8", newline="\n")
    print("wrote %s (%d entries) from %s" % (OUT_C, len(rows), csv_path))


if __name__ == "__main__":
    main()
