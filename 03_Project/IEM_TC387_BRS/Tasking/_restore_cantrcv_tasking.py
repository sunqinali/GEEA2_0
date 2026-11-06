# -*- coding: utf-8 -*-
"""Re-apply CanTrcv_30_Tja1145 + smoke wiring after Eclipse makefile regen.

Run from anywhere:
  python Tasking/_restore_cantrcv_tasking.py
Then: cd Tasking/Debug && amk all
"""
from __future__ import annotations

import runpy
import shutil
from pathlib import Path

ROOT = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking")
SIP_IMPL = r"C:/Vector/CBD2000642_D00_Tricore/Components/CanTrcv_30_Tja1145/Implementation"
CANTRCV_INC = r'"-IC:\Vector\CBD2000642_D00_Tricore\Components\CanTrcv_30_Tja1145\Implementation"'


def ensure_project_link() -> None:
    proj = ROOT / ".project"
    t = proj.read_text(encoding="utf-8")
    if "<name>BSW_CanTrcv</name>" in t:
        print(".project: BSW_CanTrcv OK")
        return
    needle = "\t</linkedResources>\n"
    if needle not in t:
        raise SystemExit(".project: linkedResources end not found")
    block = (
        "\t\t<link>\n"
        "\t\t\t<name>BSW_CanTrcv</name>\n"
        "\t\t\t<type>2</type>\n"
        f"\t\t\t<location>{SIP_IMPL}</location>\n"
        "\t\t</link>\n"
    )
    proj.write_text(t.replace(needle, block + needle, 1), encoding="utf-8")
    print(".project: BSW_CanTrcv link added")


def ensure_cproject_inc() -> None:
    cp = ROOT / ".cproject"
    t = cp.read_text(encoding="utf-8")
    marker = '${workspace_loc:/${ProjName}/BSW_CanTrcv}'
    if marker in t:
        print(".cproject: BSW_CanTrcv include OK")
        return
    # insert after BSW_CanIf include entries
    needle = '${workspace_loc:/${ProjName}/BSW_CanIf}'
    if needle not in t:
        raise SystemExit(".cproject: BSW_CanIf include not found")
    insert = (
        f'\t\t\t\t\t\t\t\t\t<listOptionValue builtIn="false" value="&quot;{marker}&quot;"/>\n'
    )
    # add after each CanIf occurrence (Debug + configs)
    parts = t.split(f'value="&quot;{needle}&quot;"/>')
    if len(parts) < 2:
        raise SystemExit(".cproject: unexpected CanIf include format")
    out = parts[0]
    for i, p in enumerate(parts[1:], 1):
        out += f'value="&quot;{needle}&quot;"/>\n'
        out += insert
        out += p
    cp.write_text(out, encoding="utf-8")
    print(f".cproject: BSW_CanTrcv include added ({len(parts)-1}x)")


def ensure_makefile_include() -> None:
    mk = ROOT / "Debug" / "makefile"
    t = mk.read_text(encoding="utf-8")
    line = '-include "BSW_CanTrcv\\subdir.mk"'
    if line in t or '-include "BSW_CanTrcv/subdir.mk"' in t:
        print("makefile: BSW_CanTrcv include OK")
        return
    anchor = '-include "BSW_CanIf\\subdir.mk"\n'
    if anchor not in t:
        anchor = '-include "BSW_CanIf/subdir.mk"\n'
    if anchor not in t:
        raise SystemExit("makefile: BSW_CanIf include not found")
    mk.write_text(t.replace(anchor, anchor + line + "\n", 1), encoding="utf-8", newline="\n")
    print("makefile: BSW_CanTrcv include added")


def ensure_bsw_subdir() -> None:
    dst_dir = ROOT / "Debug" / "BSW_CanTrcv"
    dst_dir.mkdir(parents=True, exist_ok=True)
    dst = dst_dir / "subdir.mk"
    src_canif = ROOT / "Debug" / "BSW_CanIf" / "subdir.mk"
    if dst.exists() and "CanTrcv_30_Tja1145.c" in dst.read_text(encoding="utf-8", errors="replace"):
        print("BSW_CanTrcv/subdir.mk OK")
        return
    # Clone from CanIf and rewrite paths/names
    t = src_canif.read_text(encoding="utf-8")
    t = t.replace("BSW_CanIf", "BSW_CanTrcv")
    t = t.replace("CanIf.c", "CanTrcv_30_Tja1145.c")
    t = t.replace("CanIf.o", "CanTrcv_30_Tja1145.o")
    t = t.replace(".CanIf.o", ".CanTrcv_30_Tja1145.o")
    t = t.replace("/CanIf/Implementation", "/CanTrcv_30_Tja1145/Implementation")
    t = t.replace("\\CanIf\\Implementation", "\\CanTrcv_30_Tja1145\\Implementation")
    # header comment
    t = t.replace("# CanIf", "# CanTrcv_30_Tja1145")
    if CANTRCV_INC not in t and "CanTrcv_30_Tja1145\\Implementation" not in t:
        after = '"-IC:\\Vector\\CBD2000642_D00_Tricore\\Components\\CanIf\\Implementation"'
        if after in t:
            nl = "\r\n" if "\r\n" in t else "\n"
            t = t.replace(after, after + nl + "\t" + CANTRCV_INC)
    dst.write_text(t, encoding="utf-8", newline="\n")
    # seed .opt from CanIf if present
    opt_src = ROOT / "Debug" / "BSW_CanIf" / ".CanIf.o.opt"
    opt_dst = dst_dir / ".CanTrcv_30_Tja1145.o.opt"
    if opt_src.exists() and not opt_dst.exists():
        o = opt_src.read_text(encoding="utf-8")
        o = o.replace("BSW_CanIf", "BSW_CanTrcv")
        o = o.replace("CanIf.c", "CanTrcv_30_Tja1145.c")
        o = o.replace("CanIf.o", "CanTrcv_30_Tja1145.o")
        o = o.replace("/CanIf/Implementation", "/CanTrcv_30_Tja1145/Implementation")
        o = o.replace("\\CanIf\\Implementation", "\\CanTrcv_30_Tja1145\\Implementation")
        after = '"-IC:\\Vector\\CBD2000642_D00_Tricore\\Components\\CanIf\\Implementation"'
        if after in o and "CanTrcv_30_Tja1145\\Implementation" not in o:
            nl = "\r\n" if "\r\n" in o else "\n"
            o = o.replace(after, after + nl + CANTRCV_INC)
        opt_dst.write_text(o, encoding="utf-8")
    print("BSW_CanTrcv/subdir.mk created")


def main() -> None:
    ensure_project_link()
    ensure_cproject_inc()
    ensure_makefile_include()
    ensure_bsw_subdir()
    runpy.run_path(str(ROOT / "_wire_cantrcv_gendata.py"), run_name="__main__")
    runpy.run_path(str(ROOT / "_add_smoke_makefile.py"), run_name="__main__")
    runpy.run_path(str(ROOT / "_add_det_hook_makefile.py"), run_name="__main__")
    runpy.run_path(str(ROOT / "_add_canstack_makefile.py"), run_name="__main__")
    runpy.run_path(str(ROOT / "_add_com_bringup_makefile.py"), run_name="__main__")
    runpy.run_path(str(ROOT / "_add_progrequest_makefile.py"), run_name="__main__")
    runpy.run_path(str(ROOT / "_add_dem_platform_makefile.py"), run_name="__main__")
    runpy.run_path(str(ROOT / "_add_carconfig_makefile.py"), run_name="__main__")
    runpy.run_path(str(ROOT / "_add_comgroup_makefile.py"), run_name="__main__")
    runpy.run_path(str(ROOT / "_gen_did_e103.py"), run_name="__main__")
    runpy.run_path(str(ROOT / "_add_did_e103_makefile.py"), run_name="__main__")
    runpy.run_path(str(ROOT / "_gen_did_f120.py"), run_name="__main__")
    runpy.run_path(str(ROOT / "_add_did_f120_makefile.py"), run_name="__main__")
    runpy.run_path(str(ROOT / "_gen_diag_bringup.py"), run_name="__main__")
    runpy.run_path(str(ROOT / "_add_diag_bringup_makefile.py"), run_name="__main__")
    runpy.run_path(str(ROOT / "_add_diag_rxprobe_makefile.py"), run_name="__main__")
    runpy.run_path(str(ROOT / "_add_comshell_makefile.py"), run_name="__main__")
    runpy.run_path(str(ROOT / "_gen_rte_unconnected_inventory.py"), run_name="__main__")
    print("restore done — rebuild: cd Tasking\\Debug && amk all")


if __name__ == "__main__":
    main()
