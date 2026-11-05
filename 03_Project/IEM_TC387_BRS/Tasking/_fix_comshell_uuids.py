from pathlib import Path
import re
import uuid

p = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Config\ApplicationComponents\Appl_ComShell.arxml")
t = p.read_text(encoding="utf-8")
t2 = re.sub(
    r"b1a0c0m5-hell-4a0[0-9a-f]-9f0[0-9a-f]-applcomshell0[0-9a-f]",
    lambda _m: str(uuid.uuid4()),
    t,
)
p.write_text(t2, encoding="utf-8", newline="\n")
print("uuids", re.findall(r'UUID="([^"]+)"', t2)[:4])
