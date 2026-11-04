@echo off
rem Run after DaVinci Generate for IEM_TC387_BRS (vLinkGen overwrites Appl\Source\vLinkGen_Template.lsl).
set SCRIPT_DIR=%~dp0
powershell -NoProfile -ExecutionPolicy Bypass -File "%SCRIPT_DIR%PatchVlinkGenAliases.ps1"
if errorlevel 1 exit /b 1
python "%SCRIPT_DIR%PatchBswM_Lcfg_Callouts.py"
if errorlevel 1 exit /b 1
echo Post-generate OK. Rebuild Tasking\Debug (amk all) next.
exit /b 0
