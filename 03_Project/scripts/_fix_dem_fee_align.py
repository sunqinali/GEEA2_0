# -*- coding: utf-8 -*-
from pathlib import Path
import re

fee = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Config\ECUC\IEM_TC387_BRS_Fee_ecuc.arxml")
nvm = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Config\ECUC\IEM_TC387_BRS_NvM_ecuc.arxml")
ft = fee.read_text(encoding="utf-8")
nt = nvm.read_text(encoding="utf-8")


def set_fee_num(text, name, num):
    return re.sub(
        rf"(<SHORT-NAME>{re.escape(name)}</SHORT-NAME>[\s\S]*?"
        rf"FeeBlockNumber</DEFINITION-REF>\s*<VALUE>)\d+(</VALUE>)",
        rf"\g<1>{num}\g<2>",
        text,
        count=1,
    )


# DatasetBits=1 => base FeeBlockNumber even; each native occupies 2 numbers
nums = {
    "FeeBlock_NvMConfig": 2,
    "FeeBlock_NvMConfig_cons0": 3,
    "FeeBlock_ProgRequest": 4,
    "FeeBlock_DemAdmin": 6,
    "FeeBlock_DemStatus": 8,
}
for i in range(8):
    nums[f"FeeBlock_DemPrimary{i}"] = 10 + i * 2

for name, num in nums.items():
    ft = set_fee_num(ft, name, num)
    print(f"{name} -> {num}")

ft = re.sub(
    r"(FeeMaxBlockCount</DEFINITION-REF>\s*<VALUE>)\d+(</VALUE>)",
    r"\g<1>24\g<2>",
    ft,
    count=1,
)
fee.write_text(ft, encoding="utf-8")

for blk in ["DemAdminDataBlock", "DemStatusDataBlock"] + [
    f"DemPrimaryDataBlock{i}" for i in range(8)
]:
    pat = (
        rf"(<SHORT-NAME>{re.escape(blk)}</SHORT-NAME>[\s\S]*?"
        rf"NvMBlockUseCrc</DEFINITION-REF>\s*<VALUE>)true(</VALUE>)"
    )
    nt, n = re.subn(pat, r"\g<1>false\g<2>", nt, count=1)
    print(f"{blk} CRC off n={n}")

nvm.write_text(nt, encoding="utf-8")
print("done")
