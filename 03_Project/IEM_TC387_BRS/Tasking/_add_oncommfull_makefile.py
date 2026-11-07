# -*- coding: utf-8 -*-
from pathlib import Path

mk = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug\Source\subdir.mk")
t = mk.read_text(encoding="utf-8")
name = "Appl_BswM_OnComMFull"
anchor = "Appl_BswM_ProgRequest"
if name in t:
    print("OnComMFull already in makefile")
else:
    needle = f'C_FILES += "C:/wk_manu/xinyu/03_Project/IEM_TC387_BRS/Appl/Source/{anchor}.c"'
    i = t.find(needle)
    if i < 0:
        raise SystemExit(f"no {anchor} anchor")
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
    print("makefile OnComMFull added")

src_opt = Path(rf"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug\Source\.{anchor}.o.opt")
dst_opt = Path(rf"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug\Source\.{name}.o.opt")
o = src_opt.read_text(encoding="utf-8").replace(anchor, name)
dst_opt.write_text(o, encoding="utf-8")
print("opt ok")
