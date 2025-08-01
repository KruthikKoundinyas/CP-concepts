# Docker Setup for Competitive Programming

This Docker setup provides a consistent, isolated environment for C++ competitive programming across all platforms.

## 🚀 Quick Start

### Windows
```bash
start-dev.bat
```

### Linux/Mac
```bash
./start-dev.sh
```

### Manual Docker Commands
```bash
# Build the image
docker-compose build

# Start the container
docker-compose up -d

# Connect to the container
docker-compose exec cpp-dev bash

# Stop the container
docker-compose down
```

## 🛠️ What's Included

- **GCC 12** with C++17 support
- **Make** for build automation
- **CMake** for advanced builds
- **Git** for version control
- **Vim/Nano** for editing
- Pre-configured compiler flags optimized for competitive programming

## 📝 Available Commands

Once inside the container:

```bash
# Get help
cp-help

# Compile all solutions
make all

# Debug build
make debug

# Maximum optimization
make fast

# Clean build files
make clean

# Run tests
make test

# Compile specific file
g++ -std=c++17 -O2 -Wall -Wextra -pedantic -o program program.cpp
```

## 🔧 Environment Variables

- `CXXFLAGS="-std=c++17 -O2 -Wall -Wextra -pedantic"`
- `CFLAGS="-std=c99 -O2 -Wall -Wextra -pedantic"`

## 📁 File Structure

Your local files are mounted to `/workspace` in the container:
- `Greedy Algorithm/` → `/workspace/Greedy Algorithm/`
- `Number Theory/` → `/workspace/Number Theory/`
- `string processing/` → `/workspace/string processing/`

## 🎯 Benefits Over Traditional Setup

1. **Consistency**: Same environment everywhere
2. **Isolation**: No conflicts with system installations
3. **Reproducibility**: Exact same compiler version
4. **Easy Setup**: One command to get started
5. **Clean**: No system pollution

## 🐛 Troubleshooting

### Docker not running
Make sure Docker Desktop is installed and running.

### Permission issues (Linux/Mac)
```bash
sudo chmod +x start-dev.sh
```

### Port conflicts
The container doesn't expose any ports, so conflicts are unlikely.

### Build cache issues
```bash
docker-compose build --no-cache
``` 