# -*- coding: utf-8 -*-
from pathlib import Path

mk = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug\Source\subdir.mk")
t = mk.read_text(encoding="utf-8")
if "Appl_CanTrcv_Smoke" in t:
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
    smoke = block.replace("Appl_Link_Stubs", "Appl_CanTrcv_Smoke")
    t = t[:j] + "\n" + smoke + t[j:]
    # GENERATED_FILES list often has Appl_Link_Stubs.lst
    old = '"Source\\Appl_Link_Stubs.lst"'
    if old in t and "Appl_CanTrcv_Smoke.lst" not in t:
        extra = (
            '"Source\\Appl_Link_Stubs.lst" '
            '"Source\\Appl_CanTrcv_Smoke.o" '
            '"Source\\.Appl_CanTrcv_Smoke.o.opt" '
            '"Source\\.Appl_CanTrcv_Smoke.o.d" '
            '"Source\\Appl_CanTrcv_Smoke.src" '
            '"Source\\Appl_CanTrcv_Smoke.lst"'
        )
        t = t.replace(old, extra, 1)
    mk.write_text(t, encoding="utf-8", newline="\n")
    print("makefile smoke rule added")

# Ensure .opt exists
src_opt = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug\Source\.Appl_Link_Stubs.o.opt")
dst_opt = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug\Source\.Appl_CanTrcv_Smoke.o.opt")
o = src_opt.read_text(encoding="utf-8")
o = o.replace("Appl_Link_Stubs", "Appl_CanTrcv_Smoke")
after = '"-IC:\\Vector\\CBD2000642_D00_Tricore\\Components\\CanIf\\Implementation"'
line = '"-IC:\\Vector\\CBD2000642_D00_Tricore\\Components\\CanTrcv_30_Tja1145\\Implementation"'
if after in o and "CanTrcv_30_Tja1145\\Implementation" not in o:
    nl = "\r\n" if "\r\n" in o else "\n"
    o = o.replace(after, after + nl + line)
dst_opt.write_text(o, encoding="utf-8")
print("opt ok")
