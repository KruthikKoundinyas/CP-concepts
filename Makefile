# Makefile for Competitive Programming C++ Solutions
# Usage: make <target> or make all

# Compiler settings
CXX = g++
CXXFLAGS = -std=c++11 -O2 -Wall -Wextra -pedantic
DEBUG_FLAGS = -std=c++11 -g -Wall -Wextra -pedantic -DDEBUG
FAST_FLAGS = -std=c++11 -O3 -Wall -Wextra -pedantic -ffast-math

# Directories
GREEDY_DIR = "Greedy Algorithm"
NUMBER_THEORY_DIR = "Number Theory"
STRING_PROCESSING_DIR = "string processing"

# Find all .cpp files
GREEDY_SOURCES = $(wildcard $(GREEDY_DIR)/*.cpp)
NUMBER_THEORY_SOURCES = $(wildcard $(NUMBER_THEORY_DIR)/*.cpp)
STRING_PROCESSING_SOURCES = $(wildcard $(STRING_PROCESSING_DIR)/*.cpp)
ALL_SOURCES = $(GREEDY_SOURCES) $(NUMBER_THEORY_SOURCES) $(STRING_PROCESSING_SOURCES)

# Generate executable names
GREEDY_EXECS = $(GREEDY_SOURCES:.cpp=)
NUMBER_THEORY_EXECS = $(NUMBER_THEORY_SOURCES:.cpp=)
STRING_PROCESSING_EXECS = $(STRING_PROCESSING_SOURCES:.cpp=)
ALL_EXECS = $(GREEDY_EXECS) $(NUMBER_THEORY_EXECS) $(STRING_PROCESSING_EXECS)

# Default target
all: $(ALL_EXECS)

# Compile all solutions
$(GREEDY_EXECS): %: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

$(NUMBER_THEORY_EXECS): %: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

$(STRING_PROCESSING_EXECS): %: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

# Debug build
debug: CXXFLAGS = $(DEBUG_FLAGS)
debug: $(ALL_EXECS)

# Fast build (maximum optimization)
fast: CXXFLAGS = $(FAST_FLAGS)
fast: $(ALL_EXECS)

# Clean build artifacts
clean:
	rm -f $(ALL_EXECS)
	rm -f *.o *.out *.exe

# Test all solutions
test: all
	@echo "Testing all solutions..."
	@echo "Running Stack-based String Processing..."
	@echo "abbacad" | ./$(GREEDY_DIR)/Stack-basedStringProcessing
	@echo "Running Flipping Coins Perfect Squares..."
	@echo "10" | ./$(NUMBER_THEORY_DIR)/FlippingCoinsPerfectSquares
	@echo "Running Vowel Balance in Halves..."
	@echo "textbook" | ./$(STRING_PROCESSING_DIR)/VowelBalanceInHalves

# Help target
help:
	@echo "Available targets:"
	@echo "  all     - Compile all solutions (default)"
	@echo "  debug   - Compile with debug flags"
	@echo "  fast    - Compile with maximum optimization"
	@echo "  clean   - Remove all compiled files"
	@echo "  test    - Compile and run basic tests"
	@echo "  help    - Show this help message"
	@echo ""
	@echo "Examples:"
	@echo "  make                                    # Compile all"
	@echo "  make debug                              # Debug build"
	@echo "  make \"Greedy Algorithm/Stack-basedStringProcessing\"  # Compile specific file"
	@echo "  make clean                              # Clean build files"

# Phony targets
.PHONY: all debug fast clean test help 