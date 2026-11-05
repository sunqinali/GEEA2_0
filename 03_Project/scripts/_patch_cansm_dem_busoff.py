# -*- coding: utf-8 -*-
"""Enable CanSM native Dem BusOff → Dem event COM_Busoff (BSW kind)."""
from __future__ import annotations

import re
import uuid
from pathlib import Path

ROOT = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Config\ECUC")
CANSM = ROOT / "IEM_TC387_BRS_CanSM_ecuc.arxml"
DEM = ROOT / "IEM_TC387_BRS_Dem_ecuc.arxml"


def uid() -> str:
    return str(uuid.uuid4())


def patch_dem_busoff_kind() -> None:
    t = DEM.read_text(encoding="utf-8")
    marker = "<SHORT-NAME>COM_Busoff</SHORT-NAME>"
    i = t.find(marker)
    if i < 0:
        raise SystemExit("COM_Busoff not found in Dem ECUC")
    # Limit edits to this event container (until next DemEventParameter SHORT-NAME at same indent is hard;
    # use a window until DemEventClass of this event + a few params).
    window_end = t.find("<SHORT-NAME>COM_CarConfigErr</SHORT-NAME>", i)
    if window_end < 0:
        window_end = i + 4000
    chunk = t[i:window_end]
    orig = chunk
    chunk = chunk.replace(
        "<VALUE>DEM_EVENT_KIND_SWC</VALUE>",
        "<VALUE>DEM_EVENT_KIND_BSW</VALUE>",
        1,
    )
    # BSW events should not expose SWC info ports
    chunk, n_port = re.subn(
        r"(DemEventCreateInfoPort</DEFINITION-REF>\s*<VALUE>)true(</VALUE>)",
        r"\1false\2",
        chunk,
        count=1,
    )
    if n_port:
        print("  CreateInfoPort → false")
    if chunk == orig:
        if "DEM_EVENT_KIND_BSW" in chunk:
            print("Dem COM_Busoff already BSW")
            return
        raise SystemExit("failed to patch COM_Busoff kind")
    t = t[:i] + chunk + t[window_end:]
    DEM.write_text(t, encoding="utf-8", newline="\n")
    print("Dem COM_Busoff → DEM_EVENT_KIND_BSW, CreateInfoPort=false")


def patch_cansm_dem_ref() -> None:
    t = CANSM.read_text(encoding="utf-8")
    if "CanSMDemEventParameterRefs" in t and "CANSM_E_BUS_OFF" in t:
        print("CanSM Dem BusOff ref already present")
        return

    block = f"""                    <ECUC-CONTAINER-VALUE UUID="{uid()}">
                      <SHORT-NAME>CanSMDemEventParameterRefs</SHORT-NAME>
                      <DEFINITION-REF DEST="ECUC-PARAM-CONF-CONTAINER-DEF">/MICROSAR/CanSM/CanSMConfiguration/CanSMManagerNetwork/CanSMDemEventParameterRefs</DEFINITION-REF>
                      <REFERENCE-VALUES>
                        <ECUC-REFERENCE-VALUE>
                          <DEFINITION-REF DEST="ECUC-SYMBOLIC-NAME-REFERENCE-DEF">/MICROSAR/CanSM/CanSMConfiguration/CanSMManagerNetwork/CanSMDemEventParameterRefs/CANSM_E_BUS_OFF</DEFINITION-REF>
                          <VALUE-REF DEST="ECUC-CONTAINER-VALUE">/ActiveEcuC/Dem/DemConfigSet/COM_Busoff</VALUE-REF>
                        </ECUC-REFERENCE-VALUE>
                      </REFERENCE-VALUES>
                    </ECUC-CONTAINER-VALUE>
"""

    # Insert as sibling before CanSMController sub-container inside PropulsionCAN network
    needle = """                  <SUB-CONTAINERS>
                    <ECUC-CONTAINER-VALUE UUID="2433acdf-8d00-33a1-9367-1f7d9a3b93fe">
                      <SHORT-NAME>PropulsionCAN_2f5e3e32</SHORT-NAME>"""
    if needle not in t:
        # Fallback: first CanSMController under ManagerNetwork
        needle2 = 'DEFINITION-REF DEST="ECUC-PARAM-CONF-CONTAINER-DEF">/MICROSAR/CanSM/CanSMConfiguration/CanSMManagerNetwork/CanSMController</DEFINITION-REF>'
        j = t.find(needle2)
        if j < 0:
            raise SystemExit("CanSMController anchor not found")
        # find preceding <SUB-CONTAINERS> of the network
        k = t.rfind("<SUB-CONTAINERS>", 0, j)
        if k < 0:
            raise SystemExit("SUB-CONTAINERS for network not found")
        insert_at = t.find("\n", k) + 1
        t = t[:insert_at] + block + t[insert_at:]
    else:
        insert_at = t.find(needle) + len("                  <SUB-CONTAINERS>\n")
        t = t[:insert_at] + block + t[insert_at:]

    CANSM.write_text(t, encoding="utf-8", newline="\n")
    print("CanSM CANSM_E_BUS_OFF → COM_Busoff added")


def main() -> None:
    patch_dem_busoff_kind()
    patch_cansm_dem_ref()
    print("done — run DVCfgCmd generate next")


if __name__ == "__main__":
    main()
