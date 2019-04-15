echo off

rem build parameter 
set PARAMETER_1=%1
rem command parameter
set PARAMETER_2=%2
rem file to write
set PARAMETER_3=%3
rem String to write
set PARAMETER_4=%4
rem command name
set COMMAND_NAME=My_Command

rem clean application if exists
IF exist %COMMAND_NAME%.exe (
	make clean
) ELSE (
    echo No clean Needed
)

rem make and test the command
make %PARAMETER_1%
%COMMAND_NAME% %PARAMETER_2% %PARAMETER_3% %PARAMETER_4%

rem check the return value of the command
IF %ERRORLEVEL% == 0 ( 
	echo Success
) ELSE ( 
	echo Fail 
)