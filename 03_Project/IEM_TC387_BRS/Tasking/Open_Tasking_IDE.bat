@echo off
set TASKING_ECLIPSE=C:\TASKING\TriCore_v631\ctc\eclipse\eclipse.exe
rem Tasking 6.3.1 needs Java 8; PATH currently has JDK 25 which breaks startup
set JAVA8_VM=C:\Program Files\Java\jre1.8.0_162\bin
set PROJ=%~dp0
set WS=%~dp0..\..\..\_tasking_ws_IEM_TC387_BRS
if not exist "%JAVA8_VM%\javaw.exe" (
  echo ERROR: Java 8 not found at "%JAVA8_VM%"
  echo Install/restore JRE 8 or update JAVA8_VM in this bat.
  pause
  exit /b 1
)
if not exist "%WS%" mkdir "%WS%"
start "" "%TASKING_ECLIPSE%" -vm "%JAVA8_VM%" -data "%WS%"
echo.
echo 1) File - Import - General - Existing Projects into Workspace
echo 2) Select root directory: %PROJ%
echo 3) Project: IEM_TC387_BRS  (CPU tc38x, LSL = Source\vLinkGen_Template.lsl)
echo 4) Build Project (Debug)
pause
