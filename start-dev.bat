@echo off
echo 🚀 Starting Competitive Programming C++ Environment...
echo.

REM Check if Docker is running
docker info >nul 2>&1
if errorlevel 1 (
    echo ❌ Docker is not running. Please start Docker first.
    pause
    exit /b 1
)

REM Build and start the container
echo 📦 Building Docker image...
docker-compose build

echo.
echo 🐳 Starting container...
docker-compose up -d

echo.
echo ✅ Environment ready! Connecting to container...
echo    Type 'cp-help' for available commands
echo    Type 'exit' to leave the container
echo.

REM Connect to the running container
docker-compose exec cpp-dev bash

echo.
echo 👋 Container stopped. Run 'start-dev.bat' to start again.
pause
