# Dockerfile for Competitive Programming C++ Development
FROM gcc:12

# Set working directory
WORKDIR /workspace

# Install additional tools
RUN apt-get update && apt-get install -y \
    make \
    cmake \
    git \
    vim \
    nano \
    && rm -rf /var/lib/apt/lists/*

# Copy source files
COPY . .

# Set compiler flags for competitive programming
ENV CXXFLAGS="-std=c++17 -O2 -Wall -Wextra -pedantic"
ENV CFLAGS="-std=c99 -O2 -Wall -Wextra -pedantic"

# Create a build script
RUN echo '#!/bin/bash\n\
echo "=== Competitive Programming C++ Environment ==="\n\
echo "Compiler: $(g++ --version | head -1)"\n\
echo "Available commands:"\n\
echo "  make all     - Compile all solutions"\n\
echo "  make debug   - Debug build"\n\
echo "  make fast    - Maximum optimization"\n\
echo "  make clean   - Clean build files"\n\
echo "  make test    - Run tests"\n\
echo "  ./compile.sh - Compile all (alternative)"\n\
echo ""\n\
echo "To compile a specific file:"\n\
echo "  g++ -std=c++17 -O2 -Wall -Wextra -pedantic -o program program.cpp"\n\
echo ""\n\
echo "To run a compiled program:"\n\
echo "  ./program"\n\
echo "================================"\n\
' > /usr/local/bin/cp-help && chmod +x /usr/local/bin/cp-help

# Set default command
CMD ["/bin/bash"] 