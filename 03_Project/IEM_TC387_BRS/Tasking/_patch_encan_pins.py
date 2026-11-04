from pathlib import Path
import re

p = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Config\ECUC\IEM_TC387_BRS_Port_ecuc.arxml")
t = p.read_text(encoding="utf-8")


def patch_pin(text: str, pin: str, **kwargs: str) -> str:
    m = re.search(
        rf"(<ECUC-CONTAINER-VALUE[^>]*>\s*<SHORT-NAME>{pin}</SHORT-NAME>.*?</ECUC-CONTAINER-VALUE>)",
        text,
        re.S,
    )
    if not m:
        raise SystemExit(f"missing {pin}")
    block = m.group(1)
    new = block
    for key, val in kwargs.items():
        pat = rf"({key}</DEFINITION-REF>\s*<VALUE>)[^<]+(</VALUE>)"
        new2, n = re.subn(pat, rf"\g<1>{val}\2", new, count=1)
        if n != 1:
            raise SystemExit(f"fail {pin} {key} n={n}")
        new = new2
    return text[: m.start(1)] + new + text[m.end(1) :]


t = patch_pin(
    t,
    "P32_4",
    PortPinDirection="PORT_PIN_OUT",
    PortPinInitialMode="GPIO",
    PortPinLevelValue="PORT_PIN_LEVEL_HIGH",
)
t = patch_pin(
    t,
    "P32_5",
    PortPinDirection="PORT_PIN_OUT",
    PortPinInitialMode="GPIO",
    PortPinLevelValue="PORT_PIN_LEVEL_HIGH",
)
p.write_text(t, encoding="utf-8", newline="\n")
print("Port ECUC patched P32_4/P32_5 to OUT HIGH")
