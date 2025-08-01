#!/bin/bash

echo "🚀 Starting Competitive Programming C++ Environment..."
echo ""

# Check if Docker is running
if ! docker info > /dev/null 2>&1; then
    echo "❌ Docker is not running. Please start Docker first."
    exit 1
fi

# Build and start the container
echo "📦 Building Docker image..."
docker-compose build

echo ""
echo "🐳 Starting container..."
docker-compose up -d

echo ""
echo "✅ Environment ready! Connecting to container..."
echo "   Type 'cp-help' for available commands"
echo "   Type 'exit' to leave the container"
echo ""

# Connect to the running container
docker-compose exec cpp-dev bash

echo ""
echo "👋 Container stopped. Run './start-dev.sh' to start again."
