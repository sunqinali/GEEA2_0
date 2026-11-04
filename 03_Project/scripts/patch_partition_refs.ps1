$utf8 = New-Object System.Text.UTF8Encoding $false
$flatPath = "c:\wk_manu\xinyu\03_Project\IEM_TC387\Config\System\FlatExtract.arxml"
$ecucPath = "c:\wk_manu\xinyu\03_Project\IEM_TC387\Config\ECUC\IEM_TC387.ecuc.arxml"
$flat = [System.IO.File]::ReadAllText($flatPath)
$marker = "/MICROSAR/Dcm_swc/ComponentTypes/Dcm</TYPE-TREF>"
$at = $flat.IndexOf($marker)
if ($at -lt 0) { throw "dcm type missing" }
$close = $flat.IndexOf("</SW-COMPONENT-PROTOTYPE>", $at)
$proto = @"

                                <SW-COMPONENT-PROTOTYPE>
                                  <SHORT-NAME>Os_OsCore0_swc</SHORT-NAME>
                                  <TYPE-TREF DEST="SERVICE-SW-COMPONENT-TYPE">/MICROSAR/Os_swc/ComponentTypes/Os_OsCore0_swc</TYPE-TREF>
                                </SW-COMPONENT-PROTOTYPE>
                                <SW-COMPONENT-PROTOTYPE>
                                  <SHORT-NAME>Os_OsCore2_swc</SHORT-NAME>
                                  <TYPE-TREF DEST="SERVICE-SW-COMPONENT-TYPE">/MICROSAR/Os_swc/ComponentTypes/Os_OsCore2_swc</TYPE-TREF>
                                </SW-COMPONENT-PROTOTYPE>
"@
if (-not $flat.Contains("Os_OsCore0_swc</SHORT-NAME>")) {
    $flat = $flat.Insert($close + "</SW-COMPONENT-PROTOTYPE>".Length, $proto)
}

function Add-Iref([string]$text, [string]$partition, [string]$target) {
    $name = "<SHORT-NAME>$partition</SHORT-NAME>"
    $i = $text.IndexOf($name)
    if ($i -lt 0) { throw "missing $partition" }
    $p = $text.IndexOf("</PARAMETER-VALUES>", $i)
    if ($text.Substring($p, 400) -match [regex]::Escape($target)) { return $text }
    $iref = @"

                  <REFERENCE-VALUES>
                    <ECUC-INSTANCE-REFERENCE-VALUE>
                      <DEFINITION-REF DEST="ECUC-INSTANCE-REFERENCE-DEF">/MICROSAR/EcuC/EcucPartitionCollection/EcucPartition/EcucPartitionSoftwareComponentInstanceRef</DEFINITION-REF>
                      <VALUE-IREF>
                        <CONTEXT-ELEMENT-REF DEST="ROOT-SW-COMPOSITION-PROTOTYPE">/COM/VECTOR/CFG/WORKFLOW/SYSDESC/SYNC/SYSTEM/COMPOSITIONTYPE</CONTEXT-ELEMENT-REF>
                        <TARGET-REF DEST="SW-COMPONENT-PROTOTYPE">$target</TARGET-REF>
                      </VALUE-IREF>
                    </ECUC-INSTANCE-REFERENCE-VALUE>
                  </REFERENCE-VALUES>
"@
    return $text.Insert($p + "</PARAMETER-VALUES>".Length, $iref)
}

$ecuc = [System.IO.File]::ReadAllText($ecucPath)
$ecuc = Add-Iref $ecuc "EcucPartition_Core0" "/COM/VECTOR/CFG/WORKFLOW/SYSDESC/SYNC/COMPOSITIONTYPE/Det"
$ecuc = Add-Iref $ecuc "EcucPartition_SystemCore0" "/COM/VECTOR/CFG/WORKFLOW/SYSDESC/SYNC/COMPOSITIONTYPE/Os_OsCore0_swc"
$ecuc = Add-Iref $ecuc "EcucPartition_SystemCore2" "/COM/VECTOR/CFG/WORKFLOW/SYSDESC/SYNC/COMPOSITIONTYPE/Os_OsCore2_swc"

if (-not $ecuc.Contains("Os_OsCore0_swc_EcuSwComposition")) {
    $m = $ecuc.IndexOf("<SHORT-NAME>McalLib</SHORT-NAME>")
    $c = $ecuc.LastIndexOf("<ECUC-CONTAINER-VALUE", $m)
    $block = @"
            <ECUC-CONTAINER-VALUE>
              <SHORT-NAME>Os_OsCore0_swc_EcuSwComposition</SHORT-NAME>
              <DEFINITION-REF DEST="ECUC-PARAM-CONF-CONTAINER-DEF">/MICROSAR/Rte/RteSwComponentInstance</DEFINITION-REF>
              <REFERENCE-VALUES>
                <ECUC-REFERENCE-VALUE>
                  <DEFINITION-REF DEST="ECUC-FOREIGN-REFERENCE-DEF">/MICROSAR/Rte/RteSwComponentInstance/RteSoftwareComponentInstanceRef</DEFINITION-REF>
                  <VALUE-REF DEST="SW-COMPONENT-PROTOTYPE">/COM/VECTOR/CFG/WORKFLOW/SYSDESC/SYNC/COMPOSITIONTYPE/Os_OsCore0_swc</VALUE-REF>
                </ECUC-REFERENCE-VALUE>
              </REFERENCE-VALUES>
              <SUB-CONTAINERS>
                <ECUC-CONTAINER-VALUE>
                  <SHORT-NAME>OpEventGetCounterValue_SystemTimer</SHORT-NAME>
                  <DEFINITION-REF DEST="ECUC-PARAM-CONF-CONTAINER-DEF">/MICROSAR/Rte/RteSwComponentInstance/RteEventToTaskMapping</DEFINITION-REF>
                  <PARAMETER-VALUES>
                    <ECUC-NUMERICAL-PARAM-VALUE>
                      <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/Rte/RteSwComponentInstance/RteEventToTaskMapping/RteImmediateRestart</DEFINITION-REF>
                      <VALUE>false</VALUE>
                    </ECUC-NUMERICAL-PARAM-VALUE>
                    <ECUC-NUMERICAL-PARAM-VALUE>
                      <DEFINITION-REF DEST="ECUC-INTEGER-PARAM-DEF">/MICROSAR/Rte/RteSwComponentInstance/RteEventToTaskMapping/RtePositionInTask</DEFINITION-REF>
                      <VALUE>11</VALUE>
                    </ECUC-NUMERICAL-PARAM-VALUE>
                  </PARAMETER-VALUES>
                  <REFERENCE-VALUES>
                    <ECUC-REFERENCE-VALUE>
                      <DEFINITION-REF DEST="ECUC-FOREIGN-REFERENCE-DEF">/MICROSAR/Rte/RteSwComponentInstance/RteEventToTaskMapping/RteEventRef</DEFINITION-REF>
                      <VALUE-REF DEST="OPERATION-INVOKED-EVENT">/MICROSAR/Os_swc/ComponentTypes/Os_OsCore0_swc/Os_OsCore0InternalBehavior/OpEventGetCounterValue_SystemTimer</VALUE-REF>
                    </ECUC-REFERENCE-VALUE>
                    <ECUC-REFERENCE-VALUE>
                      <DEFINITION-REF DEST="ECUC-REFERENCE-DEF">/MICROSAR/Rte/RteSwComponentInstance/RteEventToTaskMapping/RteMappedToTaskRef</DEFINITION-REF>
                      <VALUE-REF DEST="ECUC-CONTAINER-VALUE">/ActiveEcuC/Os/Task_Bsw_10ms</VALUE-REF>
                    </ECUC-REFERENCE-VALUE>
                  </REFERENCE-VALUES>
                </ECUC-CONTAINER-VALUE>
              </SUB-CONTAINERS>
            </ECUC-CONTAINER-VALUE>
            <ECUC-CONTAINER-VALUE>
              <SHORT-NAME>Os_OsCore2_swc_EcuSwComposition</SHORT-NAME>
              <DEFINITION-REF DEST="ECUC-PARAM-CONF-CONTAINER-DEF">/MICROSAR/Rte/RteSwComponentInstance</DEFINITION-REF>
              <REFERENCE-VALUES>
                <ECUC-REFERENCE-VALUE>
                  <DEFINITION-REF DEST="ECUC-FOREIGN-REFERENCE-DEF">/MICROSAR/Rte/RteSwComponentInstance/RteSoftwareComponentInstanceRef</DEFINITION-REF>
                  <VALUE-REF DEST="SW-COMPONENT-PROTOTYPE">/COM/VECTOR/CFG/WORKFLOW/SYSDESC/SYNC/COMPOSITIONTYPE/Os_OsCore2_swc</VALUE-REF>
                </ECUC-REFERENCE-VALUE>
              </REFERENCE-VALUES>
              <SUB-CONTAINERS>
                <ECUC-CONTAINER-VALUE>
                  <SHORT-NAME>OpEventGetCounterValue_SystemTimer_Core2</SHORT-NAME>
                  <DEFINITION-REF DEST="ECUC-PARAM-CONF-CONTAINER-DEF">/MICROSAR/Rte/RteSwComponentInstance/RteEventToTaskMapping</DEFINITION-REF>
                  <PARAMETER-VALUES>
                    <ECUC-NUMERICAL-PARAM-VALUE>
                      <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/Rte/RteSwComponentInstance/RteEventToTaskMapping/RteImmediateRestart</DEFINITION-REF>
                      <VALUE>false</VALUE>
                    </ECUC-NUMERICAL-PARAM-VALUE>
                    <ECUC-NUMERICAL-PARAM-VALUE>
                      <DEFINITION-REF DEST="ECUC-INTEGER-PARAM-DEF">/MICROSAR/Rte/RteSwComponentInstance/RteEventToTaskMapping/RtePositionInTask</DEFINITION-REF>
                      <VALUE>1</VALUE>
                    </ECUC-NUMERICAL-PARAM-VALUE>
                  </PARAMETER-VALUES>
                  <REFERENCE-VALUES>
                    <ECUC-REFERENCE-VALUE>
                      <DEFINITION-REF DEST="ECUC-FOREIGN-REFERENCE-DEF">/MICROSAR/Rte/RteSwComponentInstance/RteEventToTaskMapping/RteEventRef</DEFINITION-REF>
                      <VALUE-REF DEST="OPERATION-INVOKED-EVENT">/MICROSAR/Os_swc/ComponentTypes/Os_OsCore2_swc/Os_OsCore2InternalBehavior/OpEventGetCounterValue_SystemTimer_Core2</VALUE-REF>
                    </ECUC-REFERENCE-VALUE>
                    <ECUC-REFERENCE-VALUE>
                      <DEFINITION-REF DEST="ECUC-REFERENCE-DEF">/MICROSAR/Rte/RteSwComponentInstance/RteEventToTaskMapping/RteMappedToTaskRef</DEFINITION-REF>
                      <VALUE-REF DEST="ECUC-CONTAINER-VALUE">/ActiveEcuC/Os/Task_Appl_10ms</VALUE-REF>
                    </ECUC-REFERENCE-VALUE>
                  </REFERENCE-VALUES>
                </ECUC-CONTAINER-VALUE>
              </SUB-CONTAINERS>
            </ECUC-CONTAINER-VALUE>

"@
    $ecuc = $ecuc.Insert($c, $block)
}

[System.IO.File]::WriteAllText($flatPath, $flat, $utf8)
[System.IO.File]::WriteAllText($ecucPath, $ecuc, $utf8)
Write-Host "patched"
