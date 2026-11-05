# -*- coding: utf-8 -*-
from pathlib import Path

mk = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug\Source\subdir.mk")
t = mk.read_text(encoding="utf-8")
name = "Appl_Did_F120"
if name in t:
    print("Did_F120 already in makefile")
else:
    for anchor in ("Appl_Did_E103", "Appl_CarConfig_Bringup", "Appl_Link_Stubs"):
        needle = f'C_FILES += "C:/wk_manu/xinyu/03_Project/IEM_TC387_BRS/Appl/Source/{anchor}.c"'
        if needle in t:
            break
    else:
        raise SystemExit("no insert anchor")
    src = needle.split("Source/")[-1].replace('.c"', "")
    i = t.find(needle)
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
    print("makefile Did_F120 added")

src_opt = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug\Source\.Appl_Link_Stubs.o.opt")
dst_opt = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug\Source\.Appl_Did_F120.o.opt")
o = src_opt.read_text(encoding="utf-8").replace("Appl_Link_Stubs", name)
dst_opt.write_text(o, encoding="utf-8")
print("opt ok")
