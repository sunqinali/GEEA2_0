# -*- coding: utf-8 -*-
from pathlib import Path

mk = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug\Source\subdir.mk")
t = mk.read_text(encoding="utf-8")
name = "Appl_ComShell"
if name in t:
    print("ComShell already in makefile")
else:
    needle = 'C_FILES += "C:/wk_manu/xinyu/03_Project/IEM_TC387_BRS/Appl/Source/Appl_Link_Stubs.c"'
    i = t.find(needle)
    if i < 0:
        raise SystemExit("no Appl_Link_Stubs")
    j = t.find('DEPENDENCY_FILES += "Source\\.Appl_Link_Stubs.o.d"', i)
    j = t.find("\n", j) + 1
    block = t[i:j].replace("Appl_Link_Stubs", name)
    t = t[:j] + "\n" + block + t[j:]
    old = '"Source\\Appl_Link_Stubs.lst"'
    if old in t and f"{name}.lst" not in t:
        extra = (
            '"Source\\Appl_Link_Stubs.lst" '
            f'"Source\\{name}.o" '
            f'"Source\\.{name}.o.opt" '
            f'"Source\\.{name}.o.d" '
            f'"Source\\{name}.src" '
            f'"Source\\{name}.lst"'
        )
        t = t.replace(old, extra, 1)
    mk.write_text(t, encoding="utf-8", newline="\n")
    print("makefile ComShell added")

src_opt = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug\Source\.Appl_Link_Stubs.o.opt")
dst_opt = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug\Source\.Appl_ComShell.o.opt")
o = src_opt.read_text(encoding="utf-8").replace("Appl_Link_Stubs", name)
dst_opt.write_text(o, encoding="utf-8")
print("opt ok")
