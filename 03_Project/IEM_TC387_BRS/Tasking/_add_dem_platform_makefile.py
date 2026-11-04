# -*- coding: utf-8 -*-
from pathlib import Path

mk = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug\Source\subdir.mk")
t = mk.read_text(encoding="utf-8")
name = "Appl_Dem_Platform"
if name in t:
    print("Dem_Platform already in makefile")
else:
    needle = 'C_FILES += "C:/wk_manu/xinyu/03_Project/IEM_TC387_BRS/Appl/Source/Appl_BswM_ProgRequest.c"'
    if needle not in t:
        needle = 'C_FILES += "C:/wk_manu/xinyu/03_Project/IEM_TC387_BRS/Appl/Source/Appl_Link_Stubs.c"'
    i = t.find(needle)
    if i < 0:
        raise SystemExit("no insert anchor")
    src = needle.split("Source/")[-1].replace('.c"', "")
    j = t.find(f'DEPENDENCY_FILES += "Source\\.{src}.o.d"', i)
    j = t.find("\n", j) + 1
    block = t[i:j].replace(src, name)
    t = t[:j] + "\n" + block + t[j:]
    old = f'"Source\\{src}.lst"'
    if old in t and f"{name}.lst" not in t:
        extra = (
            f'"Source\\{src}.lst" '
            f'"Source\\{name}.o" '
            f'"Source\\.{name}.o.opt" '
            f'"Source\\.{name}.o.d" '
            f'"Source\\{name}.src" '
            f'"Source\\{name}.lst"'
        )
        t = t.replace(old, extra, 1)
    mk.write_text(t, encoding="utf-8", newline="\n")
    print("makefile Dem_Platform added")

src_opt = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug\Source\.Appl_Link_Stubs.o.opt")
dst_opt = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug\Source\.Appl_Dem_Platform.o.opt")
o = src_opt.read_text(encoding="utf-8").replace("Appl_Link_Stubs", name)
dst_opt.write_text(o, encoding="utf-8")
print("opt ok")
