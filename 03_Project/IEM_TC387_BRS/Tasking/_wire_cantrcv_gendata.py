from pathlib import Path

gd = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug\GenData\subdir.mk")
text = gd.read_text(encoding="utf-8", errors="replace")

marker = 'C_FILES += "C:/wk_manu/xinyu/03_Project/IEM_TC387_BRS/Appl/GenData/CanIf_Lcfg.c"'
start = text.find(marker)
end = text.find('DEPENDENCY_FILES += "GenData\\.CanIf_Lcfg.o.d"', start)
end = text.find("\n", end) + 1
block = text[start:end]
assert "CanIf_Lcfg" in block, "CanIf_Lcfg block not found"

anchor = 'DEPENDENCY_FILES += "GenData\\.CanIf_PBcfg.o.d"\n'
pos = text.find(anchor)
if pos < 0:
    anchor = 'DEPENDENCY_FILES += "GenData\\.CanIf_PBcfg.o.d"\r\n'
    pos = text.find(anchor)
assert pos >= 0, "CanIf_PBcfg anchor not found"
pos += len(anchor)
if text[pos:pos + 1] == "\n":
    pos += 1
elif text[pos:pos + 2] == "\r\n":
    pos += 2


def clone(name: str) -> str:
    b = block.replace("CanIf_Lcfg", name)
    b = b.replace(
        '-I"C:\\Vector\\CBD2000642_D00_Tricore\\Components\\CanIf\\Implementation"',
        '-I"C:\\Vector\\CBD2000642_D00_Tricore\\Components\\CanIf\\Implementation" '
        '-I"C:\\Vector\\CBD2000642_D00_Tricore\\Components\\CanTrcv_30_Tja1145\\Implementation"',
    )
    return b


if "CanTrcv_30_Tja1145_Cfg.c" not in text:
    insert = "\n" + clone("CanTrcv_30_Tja1145_Cfg") + "\n" + clone("CanTrcv_30_Tja1145_PBcfg")
    text = text[:pos] + insert + text[pos:]
    gd.write_text(text, encoding="utf-8", newline="\n")
    print("inserted GenData CanTrcv rules")
else:
    print("already present")

t2 = gd.read_text(encoding="utf-8")
print("Cfg", "CanTrcv_30_Tja1145_Cfg.c" in t2)
print("PBcfg", "CanTrcv_30_Tja1145_PBcfg.c" in t2)
print("count", t2.count("CanTrcv_30_Tja1145"))
