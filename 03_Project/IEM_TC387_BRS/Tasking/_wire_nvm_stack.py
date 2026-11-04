"""Wire Fls/Fee/MemIf/NvM (+ GenData cfg) into Tasking Debug after Rte green."""
from __future__ import annotations

import re
from pathlib import Path

DEBUG = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug")
SIP = Path(r"C:\Vector\CBD2000642_D00_Tricore")
MCAL = (
    SIP
    / "ThirdParty"
    / "Mcal_Tc3xx"
    / "Supply"
    / "MC-ISAR_AS422_TC3xx_BASIC_2.0.0"
    / "McIsar"
    / "Src"
    / "Mcal"
    / "Tricore"
)
GENDATA = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Appl\GenData")
DEM_MK = DEBUG / "BSW_Dem" / "subdir.mk"

EXTRA_INCLUDES = [
    str(SIP / "Components" / "NvM" / "Implementation"),
    str(SIP / "Components" / "MemIf" / "Implementation"),
    str(MCAL / "Fee" / "ssc" / "inc"),
    str(MCAL / "Fls_17_Dmu" / "ssc" / "inc"),
]


def dem_opt_flags() -> str:
    text = DEM_MK.read_text(encoding="utf-8")
    m = re.search(
        r'@argfile "BSW_Dem\\\.Dem\.o\.opt" -o "BSW_Dem\\Dem\.o" "[^"]+" (.+) --dep-file=',
        text,
    )
    if not m:
        raise SystemExit("cannot parse Dem opt flags")
    return m.group(1)


def with_extra_includes(flags: str) -> str:
    spi = '-I"' + str(MCAL / "Spi" / "ssc" / "inc") + '"'
    extras = " ".join(f'-I"{p}"' for p in EXTRA_INCLUDES)
    if EXTRA_INCLUDES[0] in flags:
        return flags
    if spi in flags:
        return flags.replace(spi, extras + " " + spi, 1)
    return flags + " " + extras


def extract_block(text: str, template_name: str) -> str:
    lines = text.splitlines(keepends=True)
    start = None
    for i, ln in enumerate(lines):
        if ln.startswith("C_FILES") and f"{template_name}.c" in ln:
            start = i
            break
    if start is None:
        raise SystemExit(f"template {template_name} not found")
    end = start
    while end < len(lines) and not lines[end].startswith("DEPENDENCY_FILES"):
        end += 1
    if end >= len(lines):
        raise SystemExit(f"DEPENDENCY_FILES missing after {template_name}")
    end += 1
    return "".join(lines[start:end])


def append_gendata_clones(subdir_mk: Path, template_name: str, new_names: list[str]) -> None:
    text = subdir_mk.read_text(encoding="utf-8")
    block = with_extra_includes(extract_block(text, template_name))
    inserts = []
    gen_add = []
    for name in new_names:
        if f"{name}.c" in text:
            print(f"skip existing {name}")
            continue
        b = block.replace(template_name, name)
        inserts.append(b.rstrip() + "\n\n")
        # infer obj path prefix from block
        m = re.search(rf'OBJ_FILES \+= "([^"]*\\){re.escape(template_name)}\.o"', block)
        prefix = m.group(1) if m else "GenData\\"
        for suf in (f"{name}.o", f".{name}.o.opt", f".{name}.o.d", f"{name}.src", f"{name}.lst"):
            gen_add.append(f'"{prefix}{suf}"')
        print(f"add {prefix}{name}")
    if not inserts:
        return
    gf = text.rfind("\nGENERATED_FILES +=")
    if gf < 0:
        gf = text.rfind("GENERATED_FILES +=")
    if gf < 0:
        raise SystemExit(f"no GENERATED_FILES in {subdir_mk}")
    text = text[:gf] + "\n" + "".join(inserts) + text[gf:]
    # extend GENERATED_FILES line
    m = re.search(r"GENERATED_FILES \+= ([^\n]*)", text[gf:])
    if m and gen_add:
        old_line = "GENERATED_FILES += " + m.group(1)
        new_line = old_line + " " + " ".join(gen_add)
        text = text[:gf] + text[gf:].replace(old_line, new_line, 1)
    subdir_mk.write_text(text, encoding="utf-8", newline="\n")


def write_sources_subdir(rel_folder: str, sources: list[tuple[str, Path]], flags: str) -> None:
    d = DEBUG / rel_folder
    d.mkdir(parents=True, exist_ok=True)
    parts = [
        "################################################################################",
        f"# {rel_folder}",
        "################################################################################",
        "",
    ]
    gen = []
    for stem, src in sources:
        src_s = str(src).replace("\\", "/")
        obj = f"{rel_folder}\\{stem}.o"
        opt = f"{rel_folder}\\.{stem}.o.opt"
        dep = f"{rel_folder}\\.{stem}.o.d"
        parts += [
            f'C_FILES += "{src_s}"',
            f'OBJ_FILES += "{obj}"',
            f'"{obj}" : "{src_s}" "{opt}"',
            "\t@echo Compiling ${<F}",
            f'\t@"${{PRODDIR}}\\bin\\cctc" -f "{opt}"',
            "",
            f'"{opt}" : .refresh',
            f'\t@argfile "{opt}" -o "{obj}" "{src_s}" {flags} --dep-file="{dep}" -Wc--make-target="{obj}"',
            f'DEPENDENCY_FILES += "{dep}"',
            "",
        ]
        gen += [f'"{obj}"', f'"{opt}"', f'"{dep}"']
    parts.append("GENERATED_FILES += " + " ".join(gen))
    parts.append("")
    (d / "subdir.mk").write_text("\n".join(parts), encoding="utf-8", newline="\n")
    print(f"wrote {rel_folder}/subdir.mk ({len(sources)})")


def patch_makefile() -> None:
    mf = DEBUG / "makefile"
    text = mf.read_text(encoding="utf-8")
    inserts = [
        '-include "BSW_MemIf\\subdir.mk"',
        '-include "BSW_NvM\\subdir.mk"',
        '-include "MCAL_Fee\\src\\subdir.mk"',
        '-include "MCAL_Fls\\src\\subdir.mk"',
    ]
    anchor = '-include "BSW_Nm\\subdir.mk"'
    if anchor not in text:
        raise SystemExit("makefile anchor missing")
    for line in inserts:
        if line not in text:
            text = text.replace(anchor, anchor + "\n" + line, 1)
            print("makefile +", line)
    mf.write_text(text, encoding="utf-8", newline="\n")


def patch_all_includes() -> None:
    spi = '-I"' + str(MCAL / "Spi" / "ssc" / "inc") + '"'
    extras = " ".join(f'-I"{p}"' for p in EXTRA_INCLUDES)
    n = 0
    for mk in DEBUG.rglob("subdir.mk"):
        text = mk.read_text(encoding="utf-8")
        if spi not in text or EXTRA_INCLUDES[0] in text:
            continue
        mk.write_text(text.replace(spi, extras + " " + spi), encoding="utf-8", newline="\n")
        n += 1
    print(f"patched includes in {n} subdir.mk files")


def main() -> None:
    flags = with_extra_includes(dem_opt_flags())

    nvm_srcs = sorted((SIP / "Components" / "NvM" / "Implementation").glob("NvM*.c"))
    write_sources_subdir("BSW_NvM", [(p.stem, p) for p in nvm_srcs], flags)
    write_sources_subdir(
        "BSW_MemIf",
        [("MemIf", SIP / "Components" / "MemIf" / "Implementation" / "MemIf.c")],
        flags,
    )
    write_sources_subdir(
        "MCAL_Fee\\src",
        [("Fee", MCAL / "Fee" / "ssc" / "src" / "Fee.c")],
        flags,
    )
    write_sources_subdir(
        "MCAL_Fls\\src",
        [
            ("Fls_17_Dmu", MCAL / "Fls_17_Dmu" / "ssc" / "src" / "Fls_17_Dmu.c"),
            ("Fls_17_Dmu_ac", MCAL / "Fls_17_Dmu" / "ssc" / "src" / "Fls_17_Dmu_ac.c"),
        ],
        flags,
    )

    patch_makefile()
    patch_all_includes()

    assert (GENDATA / "NvM_Cfg.c").is_file()
    assert (GENDATA / "MemIf_Cfg.c").is_file()
    assert (GENDATA / "src" / "Fee_PBcfg.c").is_file()
    assert (GENDATA / "src" / "Fls_17_Dmu_PBcfg.c").is_file()

    append_gendata_clones(DEBUG / "GenData" / "subdir.mk", "Det_Cfg", ["NvM_Cfg", "MemIf_Cfg"])
    append_gendata_clones(
        DEBUG / "GenData" / "src" / "subdir.mk", "Spi_PBcfg", ["Fee_PBcfg", "Fls_17_Dmu_PBcfg"]
    )
    print("done")


if __name__ == "__main__":
    main()
