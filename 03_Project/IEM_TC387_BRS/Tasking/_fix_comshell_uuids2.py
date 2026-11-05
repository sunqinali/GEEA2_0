from pathlib import Path
import re
import uuid

p = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Config\ApplicationComponents\Appl_ComShell.arxml")
t = p.read_text(encoding="utf-8")
hex_re = re.compile(
    r"^[0-9a-fA-F]{8}-[0-9a-fA-F]{4}-[0-9a-fA-F]{4}-[0-9a-fA-F]{4}-[0-9a-fA-F]{12}$"
)


def repl(m: re.Match[str]) -> str:
    u = m.group(1)
    if hex_re.fullmatch(u):
        return m.group(0)
    return f'UUID="{uuid.uuid4()}"'


t2 = re.sub(r'UUID="([^"]+)"', repl, t)
p.write_text(t2, encoding="utf-8", newline="\n")
print("ok", len(re.findall(r"UUID=", t2)))
