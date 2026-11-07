# -*- coding: utf-8 -*-
from pathlib import Path

mk = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug\Source\subdir.mk")
t = mk.read_text(encoding="utf-8")
name = "Appl_CarConfig_CcpTable"
anchor = "Appl_CarConfig_Bringup"
if name in t:
    print("already in makefile")
else:
    needle = f'C_FILES += "C:/wk_manu/xinyu/03_Project/IEM_TC387_BRS/Appl/Source/{anchor}.c"'
    i = t.find(needle)
    if i < 0:
        raise SystemExit("anchor missing")
    j = t.find(f'DEPENDENCY_FILES += "Source\\.{anchor}.o.d"', i)
    j = t.find("\n", j) + 1
    block = t[i:j].replace(anchor, name)
    t = t[:j] + "\n" + block + t[j:]
    old = f'"Source\\{anchor}.lst"'
    if old in t and f"{name}.lst" not in t:
        extra = (
            f'"Source\\{anchor}.lst" '
            f'"Source\\{name}.o" '
            f'"Source\\.{name}.o.opt" '
            f'"Source\\.{name}.o.d" '
            f'"Source\\{name}.src" '
            f'"Source\\{name}.lst"'
        )
        t = t.replace(old, extra, 1)
    mk.write_text(t, encoding="utf-8", newline="\n")
    print("makefile added")

src = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug\Source\.Appl_CarConfig_Bringup.o.opt")
dst = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug\Source\.Appl_CarConfig_CcpTable.o.opt")
dst.write_text(src.read_text(encoding="utf-8").replace(anchor, name), encoding="utf-8")
print("opt ok")
