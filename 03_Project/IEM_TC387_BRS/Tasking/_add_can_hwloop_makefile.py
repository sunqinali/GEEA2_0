# -*- coding: utf-8 -*-
from pathlib import Path

NAME = "Appl_Can_HwLoopTimer"
mk = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug\Source\subdir.mk")
t = mk.read_text(encoding="utf-8")
if NAME in t:
    print("already in makefile")
else:
    needle = 'C_FILES += "C:/wk_manu/xinyu/03_Project/IEM_TC387_BRS/Appl/Source/Appl_Link_Stubs.c"'
    i = t.find(needle)
    if i < 0:
        raise SystemExit("no Appl_Link_Stubs C_FILES")
    j = t.find('DEPENDENCY_FILES += "Source\\.Appl_Link_Stubs.o.d"', i)
    if j < 0:
        raise SystemExit("no Appl_Link_Stubs DEPENDENCY")
    j = t.find("\n", j) + 1
    block = t[i:j]
    extra_src = block.replace("Appl_Link_Stubs", NAME)
    t = t[:j] + "\n" + extra_src + t[j:]
    old = '"Source\\Appl_Link_Stubs.lst"'
    if old in t and f"{NAME}.lst" not in t:
        extra = (
            f'"Source\\Appl_Link_Stubs.lst" '
            f'"Source\\{NAME}.o" '
            f'"Source\\.{NAME}.o.opt" '
            f'"Source\\.{NAME}.o.d" '
            f'"Source\\{NAME}.src" '
            f'"Source\\{NAME}.lst"'
        )
        t = t.replace(old, extra, 1)
    mk.write_text(t, encoding="utf-8", newline="\n")
    print("makefile rule added")

src_opt = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug\Source\.Appl_Link_Stubs.o.opt")
dst_opt = Path(rf"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug\Source\.{NAME}.o.opt")
o = src_opt.read_text(encoding="utf-8")
o = o.replace("Appl_Link_Stubs", NAME)
after = '"-IC:\\Vector\\CBD2000642_D00_Tricore\\Components\\CanIf\\Implementation"'
line = '"-IC:\\Vector\\CBD2000642_D00_Tricore\\Components\\Can\\Implementation"'
if after in o and "Components\\Can\\Implementation" not in o:
    nl = "\r\n" if "\r\n" in o else "\n"
    o = o.replace(after, after + nl + line)
dst_opt.write_text(o, encoding="utf-8")
print("opt ok")
