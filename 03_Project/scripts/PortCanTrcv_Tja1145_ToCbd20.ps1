# Copy CanTrcv_30_Tja1145 from CBD1900078 into CBD2000642 Components layout (same shape as Tja1043).
param(
    [string]$SrcSip = "C:\Vector\CBD1900078_D01_Tricore",
    [string]$DstSip = "C:\Vector\CBD2000642_D00_Tricore"
)

$ErrorActionPreference = "Stop"
$dstComp = Join-Path $DstSip "Components\CanTrcv_30_Tja1145"
$srcBsw = Join-Path $SrcSip "BSW\CanTrcv_30_Tja1145"
$srcBswmd = Join-Path $SrcSip "BSWMD\CanTrcv_30_Tja1145"

foreach ($p in @($srcBsw, $srcBswmd, (Join-Path $DstSip "Components"))) {
    if (-not (Test-Path $p)) { throw "Missing path: $p" }
}

if (Test-Path $dstComp) {
    Remove-Item $dstComp -Recurse -Force
}
New-Item -ItemType Directory -Path $dstComp -Force | Out-Null
robocopy $srcBsw $dstComp /E /NFL /NDL /NJH /NJS /nc /ns /np | Out-Null
if ($LASTEXITCODE -ge 8) { throw "robocopy failed: $LASTEXITCODE" }

New-Item -ItemType Directory -Path (Join-Path $dstComp "BSWMD") -Force | Out-Null
Copy-Item (Join-Path $srcBswmd "*") (Join-Path $dstComp "BSWMD") -Force

@"
Source SIP: $(Split-Path $SrcSip -Leaf)
Module: CanTrcv_30_Tja1145 (DrvTrans_Tja1145CanspiAsr)
Copied into: $(Split-Path $DstSip -Leaf)\Components
SW-VERSION (BSWMD): 3.08.00
Date: $(Get-Date -Format 'yyyy-MM-dd HH:mm')
"@ | Set-Content (Join-Path $dstComp "PORTED_FROM_CBD1900078.txt") -Encoding ASCII

Write-Host "Ported CanTrcv_30_Tja1145 -> $dstComp"
