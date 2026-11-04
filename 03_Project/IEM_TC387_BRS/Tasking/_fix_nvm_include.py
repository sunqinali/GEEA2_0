from pathlib import Path

mk = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug\GenData\subdir.mk")
t = mk.read_text(encoding="utf-8")
old = '-include "Appl_NvM_Buffers.h" '
t2 = t.replace(old, "").replace('-include "Appl_NvM_Buffers.h"', "")
print("changed", t != t2)
if t != t2:
    mk.write_text(t2, encoding="utf-8", newline="\n")
