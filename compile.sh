#!/bin/bash

# Compile script for Competitive Programming C++ Solutions (Unix/Linux)
# Usage: ./compile.sh [filename.cpp] or ./compile.sh (compiles all)

# Set compiler and flags
CXX=g++
CXXFLAGS="-std=c++11 -O2 -Wall -Wextra"

echo "========================================"
echo "Competitive Programming C++ Compiler"
echo "========================================"

# Function to compile a single file
compile_file() {
    local file="$1"
    local basename=$(basename "$file" .cpp)

    echo "Compiling: $file"
    $CXX $CXXFLAGS -o "$basename" "$file"

    if [ $? -eq 0 ]; then
        echo "✓ Success: $basename"
        return 0
    else
        echo "✗ Failed: $file"
        return 1
    fi
}

# Check if filename is provided
if [ $# -eq 0 ]; then
    echo "Compiling all .cpp files..."
    echo

    # Compile files in Greedy Algorithm directory
    if [ -d "Greedy Algorithm" ] && [ "$(ls -A 'Greedy Algorithm'/*.cpp 2>/dev/null)" ]; then
        echo "[Greedy Algorithm]"
        for file in "Greedy Algorithm"/*.cpp; do
            if [ -f "$file" ]; then
                compile_file "$file"
            fi
        done
        echo
    fi

    # Compile files in Number Theory directory
    if [ -d "Number Theory" ] && [ "$(ls -A 'Number Theory'/*.cpp 2>/dev/null)" ]; then
        echo "[Number Theory]"
        for file in "Number Theory"/*.cpp; do
            if [ -f "$file" ]; then
                compile_file "$file"
            fi
        done
        echo
    fi

    # Compile files in string processing directory
    if [ -d "string processing" ] && [ "$(ls -A 'string processing'/*.cpp 2>/dev/null)" ]; then
        echo "[String Processing]"
        for file in "string processing"/*.cpp; do
            if [ -f "$file" ]; then
                compile_file "$file"
            fi
        done
        echo
    fi

    echo "========================================"
    echo "All files compiled successfully!"
    echo "========================================"

else
    # Compile specific file
    if [ -f "$1" ]; then
        compile_file "$1"
        if [ $? -eq 0 ]; then
            echo
            echo "To run: ./$(basename "$1" .cpp)"
        fi
    else
        echo "✗ File not found: $1"
        exit 1
    fi
fi

echo
echo "Press Enter to exit..."
read
