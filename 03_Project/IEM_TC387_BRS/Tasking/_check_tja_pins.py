from pathlib import Path
import re

t = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Config\ECUC\IEM_TC387_BRS_Port_ecuc.arxml").read_text(
    encoding="utf-8"
)
pins = ["P10_5", "P10_6", "P10_7", "P10_8", "P00_8", "P32_4", "P32_5", "P11_0", "P11_7"]
for pin in pins:
    m = re.search(rf"<SHORT-NAME>{pin}</SHORT-NAME>.*?</ECUC-CONTAINER-VALUE>", t, re.S)
    if not m:
        print(f"{pin}: MISSING")
        continue
    block = m.group(0)

    def val(name: str) -> str:
        mm = re.search(rf"{name}</DEFINITION-REF>\s*<VALUE>([^<]+)</VALUE>", block)
        return mm.group(1) if mm else "?"

    print(
        f"{pin}: dir={val('PortPinDirection')} initMode={val('PortPinInitialMode')} "
        f"level={val('PortPinLevelValue')}"
    )

cfg = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Appl\GenData\CanTrcv_30_Tja1145_Cfg.c").read_text(
    encoding="utf-8"
)
for pat in [
    r"CanTrcv_30_Tja1145_ChannelUsed\[1\] = \{[^}]+\}",
    r"CanTrcv_30_Tja1145_PnEnabled\[1\] = \{[^}]+\}",
    r"CanTrcv_30_Tja1145_SpiSequenceCfg\[1\] = \{[^;]+;",
]:
    m = re.search(pat, cfg, re.S)
    print(m.group(0).replace("\n", " ")[:220] if m else f"no {pat}")
