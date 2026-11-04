"""Add BSW_Crc include+source required by NvM_PrivateCfg.h."""
from __future__ import annotations

import re
from pathlib import Path

DEBUG = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug")
SIP = Path(r"C:\Vector\CBD2000642_D00_Tricore")
CRC_INC = str(SIP / "Components" / "Crc" / "Implementation")
NVM_INC = str(SIP / "Components" / "NvM" / "Implementation")
DEM_MK = DEBUG / "BSW_Dem" / "subdir.mk"


def main() -> None:
    text = DEM_MK.read_text(encoding="utf-8")
    m = re.search(
        r'@argfile "BSW_Dem\\\.Dem\.o\.opt" -o "BSW_Dem\\Dem\.o" "[^"]+" (.+) --dep-file=',
        text,
    )
    if not m:
        raise SystemExit("dem flags missing")
    flags = m.group(1)
    crc_i = f'-I"{CRC_INC}"'
    nvm_i = f'-I"{NVM_INC}"'
    if crc_i not in flags:
        flags = flags.replace(nvm_i, crc_i + " " + nvm_i, 1) if nvm_i in flags else flags + " " + crc_i

    folder = "BSW_Crc"
    d = DEBUG / folder
    d.mkdir(parents=True, exist_ok=True)
    src = SIP / "Components" / "Crc" / "Implementation" / "Crc.c"
    src_s = str(src).replace("\\", "/")
    stem = "Crc"
    obj = f"{folder}\\{stem}.o"
    opt = f"{folder}\\.{stem}.o.opt"
    dep = f"{folder}\\.{stem}.o.d"
    content = "\n".join(
        [
            "################################################################################",
            f"# {folder}",
            "################################################################################",
            "",
            f'C_FILES += "{src_s}"',
            f'OBJ_FILES += "{obj}"',
            f'"{obj}" : "{src_s}" "{opt}"',
            "\t@echo Compiling ${<F}",
            f'\t@"${{PRODDIR}}\\bin\\cctc" -f "{opt}"',
            "",
            f'"{opt}" : .refresh',
            f'\t@argfile "{opt}" -o "{obj}" "{src_s}" {flags} --dep-file="{dep}" -Wc--make-target="{obj}"',
            f'DEPENDENCY_FILES += "{dep}"',
            "",
            f'GENERATED_FILES += "{obj}" "{opt}" "{dep}"',
            "",
        ]
    )
    (d / "subdir.mk").write_text(content, encoding="utf-8", newline="\n")
    print("wrote BSW_Crc")

    mf = DEBUG / "makefile"
    mt = mf.read_text(encoding="utf-8")
    line = '-include "BSW_Crc\\subdir.mk"'
    if line not in mt:
        mt = mt.replace(
            '-include "BSW_MemIf\\subdir.mk"',
            line + "\n" + '-include "BSW_MemIf\\subdir.mk"',
            1,
        )
        mf.write_text(mt, encoding="utf-8", newline="\n")
        print("makefile +Crc")

    n = 0
    for mk in DEBUG.rglob("subdir.mk"):
        t = mk.read_text(encoding="utf-8")
        if CRC_INC in t:
            continue
        if nvm_i in t:
            mk.write_text(t.replace(nvm_i, crc_i + " " + nvm_i), encoding="utf-8", newline="\n")
            n += 1
    print(f"patched includes in {n} files")


if __name__ == "__main__":
    main()
