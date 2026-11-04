@echo off
REM After DaVinci Generate: LSL patch + Tasking CanTrcv restore + offline check + amk
setlocal
set ROOT=%~dp0..
set TASKING=%~dp0
set PATH=C:\TASKING\TriCore_v631\ctc\bin;%PATH%

echo === PostGenerate LSL ===
call "%ROOT%\..\scripts\PostGenerate_IEM_TC387_BRS.bat"
if errorlevel 1 exit /b 1

echo === Restore CanTrcv / smoke / Det / CanStack makefile wiring ===
python "%TASKING%_restore_cantrcv_tasking.py"
if errorlevel 1 exit /b 1

echo === Offline TJA check ===
python "%TASKING%_offline_tja_check.py"
if errorlevel 1 exit /b 1

echo === amk all ===
cd /d "%TASKING%Debug"
amk all
if errorlevel 1 exit /b 1

echo === DONE: %TASKING%Debug\IEM_TC387_BRS.elf ===
endlocal
