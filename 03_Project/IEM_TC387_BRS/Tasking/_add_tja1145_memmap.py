from pathlib import Path

memmap = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Appl\Include\MemMap.h")
compiler = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Appl\Include\Compiler_Cfg.h")

# --- MemMap.h: clone GENERICCAN block as TJA1145 ---
text = memmap.read_text(encoding="utf-8", errors="replace")
if "CANTRCV_30_TJA1145 START" not in text and "CANTRCV_30_TJA1145_START_SEC_CODE" not in text:
    start = text.find("/**********************************************************************************************************************\n *  CANTRCV_30_GENERICCAN START")
    if start < 0:
        start = text.find(" *  CANTRCV_30_GENERICCAN START")
        # back up to comment start
        start = text.rfind("/**********************************************************************************************************************", 0, start)
    end_marker = " *  CANTRCV_30_GENERICCAN END"
    end = text.find(end_marker, start)
    end = text.find("\n", end) + 1
    # include trailing blank / PRQA comment line if present
    while end < len(text) and text[end] in "\r\n":
        # keep one newline after END line already consumed; stop
        break
    # also take the PRQA line after END
    next_line_end = text.find("\n", end)
    if next_line_end > 0 and "PRQA" in text[end:next_line_end]:
        end = next_line_end + 1

    block = text[start:end]
    tja = block.replace("CANTRCV_30_GENERICCAN", "CANTRCV_30_TJA1145")
    # Insert after GENERICCAN END block (after 'end')
    text = text[:end] + "\n" + tja + text[end:]
    memmap.write_text(text, encoding="utf-8", newline="\n")
    print("MemMap.h: inserted TJA1145 block")
else:
    print("MemMap.h: TJA1145 already present")

# --- Compiler_Cfg.h ---
ct = compiler.read_text(encoding="utf-8", errors="replace")
if "CANTRCV_30_TJA1145_CODE" not in ct:
    start = ct.find(" *  CANTRCV_30_GENERICCAN START")
    start = ct.rfind("/**********************************************************************************************************************", 0, start)
    end_marker = " *  CANTRCV_30_GENERICCAN END"
    end = ct.find(end_marker, start)
    end = ct.find("\n", end) + 1
    block = ct[start:end]
    tja = block.replace("CANTRCV_30_GENERICCAN", "CANTRCV_30_TJA1145")
    ct = ct[:end] + "\n" + tja + "\n" + ct[end:]
    compiler.write_text(ct, encoding="utf-8", newline="\n")
    print("Compiler_Cfg.h: inserted TJA1145 memory classes")
else:
    print("Compiler_Cfg.h: TJA1145 already present")

# strip accidental UTF-8 BOM from .project / .cproject if present
for p in [
    Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\.project"),
    Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\.cproject"),
]:
    raw = p.read_bytes()
    if raw.startswith(b"\xef\xbb\xbf"):
        p.write_bytes(raw[3:])
        print(f"stripped BOM: {p.name}")
