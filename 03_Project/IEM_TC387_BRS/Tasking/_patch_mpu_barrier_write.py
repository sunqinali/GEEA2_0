#!/usr/bin/env python3
"""After Davinci Generate: fix MPU so StartOS multicore barriers + peripherals work.

1) TRUSTED_WRITE_SPR EndAddress → 0x7FFFFFF8 (cover Core0 DSPR @ 0x70000000)
2) WriteEnable on ALL cores PS0..PS5: REGION0|1|2|3
   (stock PS1+ only enables empty stack REGION0 → MemFault on barrier/SRC/STM writes)
3) ReadEnable on ALL cores PS0..PS5: REGION0|1|2|3
   (stock disables REGION2/3 read; RMW / barrier poll needs read)
"""
from pathlib import Path
import re

PATH = Path(__file__).resolve().parents[1] / "Appl/GenData/Os_Hal_MemoryProtection_Lcfg.c"
text = PATH.read_text(encoding="utf-8")

for old in ("0x6FFFFFF8uL", "0x5FFFFFF8uL", "0x4FFFFFF8uL"):
    text = text.replace(old, "0x7FFFFFF8uL")

all_regions = (
    "OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | "
    "OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3"
)

# Any WriteEnable / ReadEnable line that still DISABLEs a data region → open all.
text2 = re.sub(
    r"(MpuDataRegion(?:Read|Write)EnablePS[0-5]\s*=\s*\*/)[^\n]+",
    lambda m: m.group(1) + " " + all_regions + ",",
    text,
)

PATH.write_text(text2, encoding="utf-8")
n_end = sum(1 for o in ("0x6FFFFFF8", "0x5FFFFFF8", "0x4FFFFFF8") if o not in text2)
n_dis = text2.count("DISABLE_REGION")
print(
    f"patched {PATH.name}: EndAddress leftovers={n_end}/3, "
    f"DISABLE_REGION remaining={n_dis} (expect 0 in core Read/Write masks)"
)
