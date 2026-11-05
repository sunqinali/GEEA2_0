#!/usr/bin/env python3
"""Convert Tasking TriCore ELF PT_LOAD segments to Intel HEX for MemtoolCli."""
import struct
import sys

path = sys.argv[1] if len(sys.argv) > 1 else r"C:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug\IEM_TC387_BRS.elf"
out = sys.argv[2] if len(sys.argv) > 2 else path.rsplit(".", 1)[0] + ".hex"

data = open(path, "rb").read()
assert data[:4] == b"\x7fELF"
ei_class = data[4]
ei_data = data[5]
endian = "<" if ei_data == 1 else ">"
if ei_class != 1:
    raise SystemExit("need ELF32")

e_phoff = struct.unpack_from(endian + "I", data, 28)[0]
e_phentsize = struct.unpack_from(endian + "H", data, 42)[0]
e_phnum = struct.unpack_from(endian + "H", data, 44)[0]
print("phoff", hex(e_phoff), "phentsize", e_phentsize, "phnum", e_phnum)

segments = []
for i in range(e_phnum):
    off = e_phoff + i * e_phentsize
    (p_type, p_offset, p_vaddr, p_paddr, p_filesz, p_memsz, p_flags, p_align) = struct.unpack_from(
        endian + "IIIIIIII", data, off
    )
    if p_type == 1 and p_filesz > 0:
        blob = data[p_offset : p_offset + p_filesz]
        segments.append((p_paddr or p_vaddr, blob, p_vaddr))
        print(
            f"LOAD vaddr={p_vaddr:08X} paddr={p_paddr:08X} filesz={p_filesz:X} flags={p_flags:X}"
        )


def ihex_recs(addr, blob):
    lines = []
    base = None
    i = 0
    while i < len(blob):
        a = addr + i
        page = a >> 16
        if base != page:
            base = page
            hi = (page >> 8) & 0xFF
            lo = page & 0xFF
            reclen = 2
            checksum = (reclen + 0 + 0 + 4 + hi + lo) & 0xFF
            checksum = ((~checksum) + 1) & 0xFF
            lines.append(f":{reclen:02X}000004{hi:02X}{lo:02X}{checksum:02X}")
        chunk = blob[i : i + 16]
        offset = a & 0xFFFF
        reclen = len(chunk)
        s = reclen + ((offset >> 8) & 0xFF) + (offset & 0xFF) + 0 + sum(chunk)
        checksum = ((~s) + 1) & 0xFF
        lines.append(":" + f"{reclen:02X}{offset:04X}00" + chunk.hex().upper() + f"{checksum:02X}")
        i += len(chunk)
    return lines


lines = []
for paddr, blob, vaddr in segments:
    use = paddr if paddr else vaddr
    # Map non-cached PFLASH mirror A0xxxxxx -> 80xxxxxx
    if 0xA0000000 <= use < 0xA1000000:
        use = use - 0x20000000
    lines += ihex_recs(use, blob)
lines.append(":00000001FF")
open(out, "w", newline="\n").write("\n".join(lines) + "\n")
print("wrote", out, "lines", len(lines))
