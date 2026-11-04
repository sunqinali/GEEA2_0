# -*- coding: utf-8 -*-
"""Add Appl_Det_ErrorHook.c to Source/subdir.mk (clone Appl_Link_Stubs)."""
from pathlib import Path

mk = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug\Source\subdir.mk")
t = mk.read_text(encoding="utf-8")
if "Appl_Det_ErrorHook" in t:
    print("Det hook already in makefile")
else:
    needle = 'C_FILES += "C:/wk_manu/xinyu/03_Project/IEM_TC387_BRS/Appl/Source/Appl_Link_Stubs.c"'
    i = t.find(needle)
    if i < 0:
        raise SystemExit("no Appl_Link_Stubs")
    j = t.find('DEPENDENCY_FILES += "Source\\.Appl_Link_Stubs.o.d"', i)
    j = t.find("\n", j) + 1
    block = t[i:j].replace("Appl_Link_Stubs", "Appl_Det_ErrorHook")
    t = t[:j] + "\n" + block + t[j:]
    old = '"Source\\Appl_Link_Stubs.lst"'
    if old in t and "Appl_Det_ErrorHook.lst" not in t:
        extra = (
            '"Source\\Appl_Link_Stubs.lst" '
            '"Source\\Appl_Det_ErrorHook.o" '
            '"Source\\.Appl_Det_ErrorHook.o.opt" '
            '"Source\\.Appl_Det_ErrorHook.o.d" '
            '"Source\\Appl_Det_ErrorHook.src" '
            '"Source\\Appl_Det_ErrorHook.lst"'
        )
        t = t.replace(old, extra, 1)
    mk.write_text(t, encoding="utf-8", newline="\n")
    print("makefile Det hook added")

src_opt = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug\Source\.Appl_Link_Stubs.o.opt")
dst_opt = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug\Source\.Appl_Det_ErrorHook.o.opt")
o = src_opt.read_text(encoding="utf-8").replace("Appl_Link_Stubs", "Appl_Det_ErrorHook")
dst_opt.write_text(o, encoding="utf-8")
print("opt ok")
