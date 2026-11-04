# After DaVinci/vLinkGen regenerate, restore TC387 link patches.
# 1) Os HAL expects _OS_COREn_STACKS_END (vLinkGen emits _OS_STACKS_COREn_VAR_ALL_END)
# 2) BRS may declare Core4/5 vectors under TC397 SIP; BoardOverride keeps runtime at 4 cores
# 3) Remap Core4/5 "DSPR" placeholders into LMU (TC387 has no Core4/5 DSPR)
param(
    [string]$LslPath = (Join-Path $PSScriptRoot "..\IEM_TC387_BRS\Appl\Source\vLinkGen_Template.lsl")
)

$ErrorActionPreference = "Stop"
$LslPath = [System.IO.Path]::GetFullPath($LslPath)
if (-not (Test-Path $LslPath)) {
    throw "LSL not found: $LslPath"
}

$marker = "Aliases expected by Os HAL / BRS (TC387: Core4/5 unused)"
$aliasBlock = @"

  /* $marker */
  "_OS_CORE0_STACKS_END" = "_OS_STACKS_CORE0_VAR_ALL_END";
  "_OS_CORE1_STACKS_END" = "_OS_STACKS_CORE1_VAR_ALL_END";
  "_OS_CORE2_STACKS_END" = "_OS_STACKS_CORE2_VAR_ALL_END";
  "_OS_CORE3_STACKS_END" = "_OS_STACKS_CORE3_VAR_ALL_END";
  "_OS_EXCVEC_CORE4_CODE_START" = "_OS_EXCVEC_CORE0_CODE_START";
  "_OS_INTVEC_CORE4_CODE_START" = "_OS_INTVEC_CORE0_CODE_START";
  "_OS_EXCVEC_CORE5_CODE_START" = "_OS_EXCVEC_CORE0_CODE_START";
  "_OS_INTVEC_CORE5_CODE_START" = "_OS_INTVEC_CORE0_CODE_START";
"@

$c = Get-Content $LslPath -Raw
$changed = $false

# Remap Core4/5 memory windows off non-existent DSPR into LMU scratch (unused at runtime with 4 cores)
if ($c -match 'RegionBlock_0_DSPR_Core5[\s\S]{0,220}?dest_offset = 0x10000000') {
    $c = [regex]::Replace(
        $c,
        '(memory RegionBlock_0_DSPR_Core5\s*\{[\s\S]*?size = )98304;( /\* 96 KiB \*/\s*map \(dest=bus:local_bus, dest_offset = )0x10000000(, size = )98304(\);)',
        '${1}12288; /* TC387: park unused Core5 CSA/stack in LMU */${2}0x90000000${3}12288${4}'
    )
    $changed = $true
    Write-Host "Remapped DSPR_Core5 -> LMU 0x90000000"
}
if ($c -match 'RegionBlock_0_DSPR_Core4[\s\S]{0,220}?dest_offset = 0x30000000') {
    $c = [regex]::Replace(
        $c,
        '(memory RegionBlock_0_DSPR_Core4\s*\{[\s\S]*?size = )98304;( /\* 96 KiB \*/\s*map \(dest=bus:local_bus, dest_offset = )0x30000000(, size = )98304(\);)',
        '${1}12288; /* TC387: park unused Core4 CSA/stack in LMU */${2}0x90003000${3}12288${4}'
    )
    $changed = $true
    Write-Host "Remapped DSPR_Core4 -> LMU 0x90003000"
}

if ($c -notlike "*$marker*") {
    if ($c -notlike "*_Data_Default_ALL_LIMIT*") {
        throw "Unexpected LSL layout (missing _Data_Default_ALL_LIMIT): $LslPath"
    }
    $c2 = [regex]::Replace(
        $c,
        '(?ms)("_Data_Default_ALL_LIMIT"\s*=\s*"_zdata_LIMIT";\s*\}\s*)\}',
        ('$1' + $aliasBlock + "`r`n}")
    )
    if ($c2 -eq $c -or $c2 -notlike "*$marker*") {
        throw "Failed to insert LSL aliases into $LslPath"
    }
    $c = $c2
    $changed = $true
    Write-Host "LSL aliases inserted"
} else {
    Write-Host "LSL aliases already present"
}

if ($changed) {
    Set-Content -Path $LslPath -Value $c -NoNewline -Encoding ASCII
    Write-Host "Updated: $LslPath"
} else {
    Write-Host "No LSL changes needed: $LslPath"
}
