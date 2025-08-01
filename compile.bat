@echo off
REM Compile script for Competitive Programming C++ Solutions (Windows)
REM Usage: compile.bat [filename.cpp] or compile.bat (compiles all)

setlocal enabledelayedexpansion

REM Set compiler and flags
set CXX=g++
set CXXFLAGS=-std=c++11 -O2 -Wall -Wextra

echo ========================================
echo Competitive Programming C++ Compiler
echo ========================================

REM Check if filename is provided
if "%~1"=="" (
    echo Compiling all .cpp files...
    echo.

    REM Compile files in Greedy Algorithm directory
    if exist "Greedy Algorithm\*.cpp" (
        echo [Greedy Algorithm]
        for %%f in ("Greedy Algorithm\*.cpp") do (
            echo Compiling: %%f
            %CXX% %CXXFLAGS% -o "%%~nf.exe" "%%f"
            if !errorlevel! equ 0 (
                echo ✓ Success: %%~nf.exe
            ) else (
                echo ✗ Failed: %%f
            )
        )
        echo.
    )

    REM Compile files in Number Theory directory
    if exist "Number Theory\*.cpp" (
        echo [Number Theory]
        for %%f in ("Number Theory\*.cpp") do (
            echo Compiling: %%f
            %CXX% %CXXFLAGS% -o "%%~nf.exe" "%%f"
            if !errorlevel! equ 0 (
                echo ✓ Success: %%~nf.exe
            ) else (
                echo ✗ Failed: %%f
            )
        )
        echo.
    )

    REM Compile files in string processing directory
    if exist "string processing\*.cpp" (
        echo [String Processing]
        for %%f in ("string processing\*.cpp") do (
            echo Compiling: %%f
            %CXX% %CXXFLAGS% -o "%%~nf.exe" "%%f"
            if !errorlevel! equ 0 (
                echo ✓ Success: %%~nf.exe
            ) else (
                echo ✗ Failed: %%f
            )
        )
        echo.
    )

    echo ========================================
    echo All files compiled successfully!
    echo ========================================

) else (
    REM Compile specific file
    echo Compiling: %1
    %CXX% %CXXFLAGS% -o "%~n1.exe" "%1"
    if !errorlevel! equ 0 (
        echo ✓ Success: %~n1.exe
        echo.
        echo To run: %~n1.exe
    ) else (
        echo ✗ Compilation failed!
    )
)

echo.
echo Press any key to exit...
pause >nul
