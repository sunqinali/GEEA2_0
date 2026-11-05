"""Create UDE workspace tc387_dap_iem_brs.wsx from working DAP astemo WSX.

- Retarget ELF to IEM_TC387_BRS.elf
- Disable DF_UCBS / FlashMod_DF_UCBS (do not program UCB)
- Replace Core0 Watches with BoardArrival bring-up symbols
"""
from __future__ import annotations

import re
from datetime import datetime
from pathlib import Path

SRC = Path(r"C:\Users\Administrator\Documents\pls\UDE 2022\Workspaces\tc387_dap_astemo.wsx")
DST = Path(r"C:\Users\Administrator\Documents\pls\UDE 2022\Workspaces\tc387_dap_iem_brs.wsx")

OLD_ELF_REL = (
    r"..\..\..\..\..\..\wk_manu\astemo\06_SCM\conf\Astemo_Appsw_Hightec"
    r"\2_Out\Tricore_Gnuc\Astemo_Appsw_Hightec.elf"
)
NEW_ELF_REL = (
    r"..\..\..\..\..\..\wk_manu\xinyu\03_Project\IEM_TC387_BRS"
    r"\Tasking\Debug\IEM_TC387_BRS.elf"
)
NEW_ELF_ABS = r"C:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Tasking\Debug\IEM_TC387_BRS.elf"

WATCH_NAMES = [
    "Appl_Bringup_Ok (global) @1",
    "Appl_Bringup_FailFlags (global) @1",
    "Appl_Can_SampleCnt (global) @1",
    "Appl_Core2_Tick100ms (global) @1",
    "Appl_Com_IpduStarted (global) @1",
    "Appl_Can_PduMode (global) @1",
    "Appl_Can_StackOk (global) @1",
    "Appl_Can_ComMMode (global) @1",
    "Appl_Can_CanSMMode (global) @1",
    "Appl_Can_CtrlMode (global) @1",
    "Appl_Can_TrcvMode (global) @1",
    "Appl_CanTrcv_SmokeOk (global) @1",
    "Appl_ComShell_StepCnt (global) @1",
    "Appl_ComShell_RxOkCnt (global) @1",
    "Appl_ComShell_CarTiGlb (global) @1",
    "Appl_CarConfig_State (global) @1",
    "Appl_NvM_ReadAllDone (global) @1",
    "Appl_Det_Count (global) @1",
]


def build_watches_xml() -> str:
    lines = [
        "\t\t\t\t\t\t<Watches type=\"key\">",
        "\t\t\t\t\t\t\t<IntegralFormatForValue1 type=\"int\">3</IntegralFormatForValue1>",
        "\t\t\t\t\t\t\t<IntegralFormatForValue2 type=\"int\">3</IntegralFormatForValue2>",
        "\t\t\t\t\t\t\t<ASCIIForValue1 type=\"int\">0</ASCIIForValue1>",
        "\t\t\t\t\t\t\t<ASCIIForValue2 type=\"int\">0</ASCIIForValue2>",
        "\t\t\t\t\t\t\t<FloatFormatForValue1 type=\"int\">3</FloatFormatForValue1>",
        "\t\t\t\t\t\t\t<FloatFormatForValue2 type=\"int\">3</FloatFormatForValue2>",
        "\t\t\t\t\t\t\t<RefreshPeriodGlobalEnable type=\"int\">1</RefreshPeriodGlobalEnable>",
    ]
    for i, name in enumerate(WATCH_NAMES, start=1):
        lines += [
            f"\t\t\t\t\t\t\t<Watch{i} type=\"key\">",
            f"\t\t\t\t\t\t\t\t<Name type=\"string\">{name}</Name>",
            f"\t\t\t\t\t\t\t\t<RunningPeriod{i} type=\"int\">100</RunningPeriod{i}>",
            f"\t\t\t\t\t\t\t\t<HoldedPeriod{i} type=\"int\">0</HoldedPeriod{i}>",
            f"\t\t\t\t\t\t\t</Watch{i}>",
        ]
    lines += [
        "\t\t\t\t\t\t\t<RunningPeriod0 type=\"int\">100</RunningPeriod0>",
        "\t\t\t\t\t\t\t<HoldedPeriod0 type=\"int\">0</HoldedPeriod0>",
        "\t\t\t\t\t\t</Watches>",
    ]
    return "\n".join(lines)


def main() -> None:
    if not SRC.exists():
        raise SystemExit(f"missing source WSX: {SRC}")
    if not Path(NEW_ELF_ABS).exists():
        raise SystemExit(f"missing ELF: {NEW_ELF_ABS}")

    text = SRC.read_text(encoding="utf-8")
    text = text.replace(
        "<OriginalWsp type=\"string\">tc387_dap_astemo.wsx</OriginalWsp>",
        "<OriginalWsp type=\"string\">tc387_dap_iem_brs.wsx</OriginalWsp>",
    )
    now = datetime.now().strftime("%d.%m.%Y %H:%M:%S:000")
    text = re.sub(
        r"<LastWriteDate type=\"string\">[^<]*</LastWriteDate>",
        f"<LastWriteDate type=\"string\">{now}</LastWriteDate>",
        text,
        count=1,
    )

    n_elf = text.count(OLD_ELF_REL)
    if n_elf == 0:
        raise SystemExit("old ELF path not found")
    text = text.replace(OLD_ELF_REL, NEW_ELF_REL)

    # Memtool: keep UCB flash module disabled
    text = re.sub(
        r"<FlashMod_DF_UCBS type=\"key\">\s*(?:<Enabled type=\"flag\">.</Enabled>\s*)?</FlashMod_DF_UCBS>",
        "<FlashMod_DF_UCBS type=\"key\">\n\t\t\t\t\t\t<Enabled type=\"flag\">0</Enabled>\n\t\t\t\t\t</FlashMod_DF_UCBS>",
        text,
        flags=re.S,
    )

    # Memory map / program selection: force DF_UCBS off (do not program UCB)
    text = re.sub(
        r'(<DF_UCBS type="key">\s*)<Enabled type="flag">1</Enabled>',
        r'\1<Enabled type="flag">0</Enabled>',
        text,
        flags=re.S,
    )

    # Replace first Watches block (Core0 Watches 1)
    text2, n_watch = re.subn(
        r"<Watches type=\"key\">.*?</Watches>",
        build_watches_xml(),
        text,
        count=1,
        flags=re.S,
    )
    if n_watch != 1:
        raise SystemExit(f"expected 1 Watches replace, got {n_watch}")
    text = text2

    DST.write_text(text, encoding="utf-8", newline="\n")
    check = DST.read_text(encoding="utf-8")
    print("wrote", DST)
    print("elf_replacements", n_elf)
    print("new_elf_count", check.count(NEW_ELF_REL))
    print("old_elf_left", check.count("Astemo_Appsw_Hightec.elf"))
    print("FlashMod_DF_UCBS Enabled=0", check.count("<FlashMod_DF_UCBS type=\"key\">\n\t\t\t\t\t\t<Enabled type=\"flag\">0</Enabled>"))
    # simpler check
    m = re.search(
        r"<DF_UCBS type=\"key\">\s*<Enabled type=\"flag\">(\d)</Enabled>",
        check,
        re.S,
    )
    print("DF_UCBS Enabled", m.group(1) if m else "?")
    print("bringup watch present", "Appl_Bringup_Ok" in check)


if __name__ == "__main__":
    main()
