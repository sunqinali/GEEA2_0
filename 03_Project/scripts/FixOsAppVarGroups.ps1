$f = "c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Config\ECUC\IEM_TC387_BRS_vLinkGen_ecuc.arxml"
$c = Get-Content $f -Raw

$map = [ordered]@{
  "OS_OsApplication_VAR"       = @{ Core = "0"; Dspr = "MemRegion_DSPR_Core0/RegionBlock_0_DSPR_Core0" }
  "OS_OsApplication_Core1_VAR" = @{ Core = "1"; Dspr = "MemRegion_DSPR_Core1/RegionBlock_0_DSPR_Core1" }
  "OS_OsApplication_Core2_VAR" = @{ Core = "2"; Dspr = "MemRegion_DSPR_Core2/RegionBlock_0_DSPR_Core2" }
  "OS_OsApplication_Core3_VAR" = @{ Core = "3"; Dspr = "MemRegion_DSPR_Core3/RegionBlock_0_DSPR_Core3" }
}

foreach ($name in $map.Keys) {
  $core = $map[$name].Core
  $dspr = $map[$name].Dspr
  $pattern = '(?s)(<ECUC-CONTAINER-VALUE UUID="[^"]+">\s*<SHORT-NAME>' + [regex]::Escape($name) + '</SHORT-NAME>\s*' +
    '<DEFINITION-REF DEST="ECUC-PARAM-CONF-CONTAINER-DEF">/MICROSAR/vLinkGen/vLinkGenMemLayout/vLinkGenLogicalVarGroup</DEFINITION-REF>\s*' +
    '<PARAMETER-VALUES>\s*<ECUC-NUMERICAL-PARAM-VALUE>\s*' +
    '<DEFINITION-REF DEST="ECUC-INTEGER-PARAM-DEF">/MICROSAR/vLinkGen/vLinkGenMemLayout/vLinkGenLogicalVarGroup/vLinkGenVarGroupPosition</DEFINITION-REF>\s*' +
    '<VALUE>\d+</VALUE>\s*</ECUC-NUMERICAL-PARAM-VALUE>\s*</PARAMETER-VALUES>\s*' +
    '<REFERENCE-VALUES>\s*<ECUC-REFERENCE-VALUE>\s*' +
    '<DEFINITION-REF DEST="ECUC-REFERENCE-DEF">/MICROSAR/vLinkGen/vLinkGenMemLayout/vLinkGenLogicalVarGroup/vLinkGenVarGroupRegion</DEFINITION-REF>\s*' +
    '</ECUC-REFERENCE-VALUE>)'

  $c = [regex]::Replace($c, $pattern, {
    param($m)
    $block = $m.Value
    $init = @"
<PARAMETER-VALUES>
                    <ECUC-NUMERICAL-PARAM-VALUE>
                      <DEFINITION-REF DEST="ECUC-INTEGER-PARAM-DEF">/MICROSAR/vLinkGen/vLinkGenMemLayout/vLinkGenLogicalVarGroup/vLinkGenVarGroupInitCore</DEFINITION-REF>
                      <VALUE>$core</VALUE>
                    </ECUC-NUMERICAL-PARAM-VALUE>
                    <ECUC-NUMERICAL-PARAM-VALUE>
                      <DEFINITION-REF DEST="ECUC-INTEGER-PARAM-DEF">/MICROSAR/vLinkGen/vLinkGenMemLayout/vLinkGenLogicalVarGroup/vLinkGenVarGroupPosition</DEFINITION-REF>
                      <VALUE>5</VALUE>
                    </ECUC-NUMERICAL-PARAM-VALUE>
                  </PARAMETER-VALUES>
"@
    $block = [regex]::Replace($block, '(?s)<PARAMETER-VALUES>.*?</PARAMETER-VALUES>', $init)
    $regionFix = @"
<DEFINITION-REF DEST="ECUC-REFERENCE-DEF">/MICROSAR/vLinkGen/vLinkGenMemLayout/vLinkGenLogicalVarGroup/vLinkGenVarGroupRegion</DEFINITION-REF>
                      <VALUE-REF DEST="ECUC-CONTAINER-VALUE">/ActiveEcuC/vLinkGen/vLinkGenMemLayout/$dspr</VALUE-REF>
                    </ECUC-REFERENCE-VALUE>
                    <ECUC-REFERENCE-VALUE>
                      <DEFINITION-REF DEST="ECUC-REFERENCE-DEF">/MICROSAR/vLinkGen/vLinkGenMemLayout/vLinkGenLogicalVarGroup/vLinkGenVarGroupRomRegion</DEFINITION-REF>
                      <VALUE-REF DEST="ECUC-CONTAINER-VALUE">/ActiveEcuC/vLinkGen/vLinkGenMemLayout/MemRegion_PFlash0_Cached/RegionBlock_PFlash0_Cached</VALUE-REF>
                    </ECUC-REFERENCE-VALUE>
"@
    $block = [regex]::Replace(
      $block,
      '<DEFINITION-REF DEST="ECUC-REFERENCE-DEF">/MICROSAR/vLinkGen/vLinkGenMemLayout/vLinkGenLogicalVarGroup/vLinkGenVarGroupRegion</DEFINITION-REF>\s*</ECUC-REFERENCE-VALUE>',
      $regionFix
    )
    return $block
  })
  Write-Host "Patched $name"
}

Set-Content -Path $f -Value $c -Encoding UTF8
Write-Host "Saved $f"
Select-String -Path $f -Pattern 'vLinkGenVarGroupInitCore' -Context 2,1 | Select-Object -Last 8 | ForEach-Object {
  $_.Context.PreContext
  $_.Line
  $_.Context.PostContext
  "---"
}
