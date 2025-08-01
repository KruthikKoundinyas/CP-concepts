# 🏆 Competitive Programming Solutions in C++

A comprehensive collection of competitive programming solutions implemented in C++, organized by algorithm categories and problem types.

## 📁 Repository Structure

```
CPP/
├── Greedy Algorithm/
│   └── Stack-basedStringProcessing.cpp
├── Number Theory/
│   └── FlippingCoinsPerfectSquares.cpp
└── string processing/
    └── VowelBalanceInHalves.cpp
```

## 🎯 Problem Categories

### 🔸 Greedy Algorithm

- **Stack-based String Processing**: Remove adjacent duplicates in a string using stack simulation
  - Time Complexity: O(n)
  - Space Complexity: O(n)
  - Approach: Stack-like simulation using string operations

### 🔸 Number Theory

- **Flipping Coins Perfect Squares**: Count heads after flipping coins at perfect square positions
  - Time Complexity: O(√m)
  - Space Complexity: O(1)
  - Key Insight: Only perfect squares have odd number of divisors

### 🔸 String Processing

- **Vowel Balance in Halves**: Check if both halves of a string have equal vowel counts
  - Time Complexity: O(n)
  - Space Complexity: O(1)
  - Approach: Two-pointer technique with vowel counting

## 🚀 Getting Started

### Option 1: Docker (Recommended - No C++ Installation Required)

**Perfect for beginners or anyone who doesn't have C++ installed!**

1. **Install Docker Desktop:**

   - Download from [docker.com](https://www.docker.com/products/docker-desktop/)
   - Install and start Docker Desktop

2. **Clone and run:**

   ```bash
   git clone <your-repo-url>
   cd CPP

   # Windows
   start-dev.bat

   # Mac/Linux
   ./start-dev.sh
   ```

3. **That's it!** You now have a complete C++ development environment.

### Option 2: Traditional Setup (Requires C++ Compiler)

**For users who already have C++ installed:**

#### Prerequisites

- C++ compiler (GCC, Clang, or MSVC)
- Any text editor or IDE

#### Compilation

```bash
# Using GCC
g++ -std=c++11 -O2 filename.cpp -o filename

# Using Clang
clang++ -std=c++11 -O2 filename.cpp -o filename

# Using MSVC (Windows)
cl filename.cpp

# Using our Makefile
make all

# Using our scripts
./compile.sh          # Linux/Mac
compile.bat           # Windows
```

#### Running Solutions

```bash
# Compile and run
g++ -std=c++11 -O2 Greedy\ Algorithm/Stack-basedStringProcessing.cpp -o stack_string
./stack_string

# Or compile and run in one command
g++ -std=c++11 -O2 filename.cpp && ./a.out
```

## 📝 Code Style & Documentation

Each solution includes:

- **Problem description** with clear problem statement
- **Algorithm approach** with time/space complexity analysis
- **Step-by-step examples** showing input/output
- **Key insights** and competitive programming concepts
- **Feature table** with technical details
- **Comments** explaining the logic and implementation

## 🎨 Features

- ✅ **Well-documented** solutions with detailed explanations
- ✅ **Optimized** for competitive programming constraints
- ✅ **Organized** by algorithm categories
- ✅ **Ready-to-compile** C++ code
- ✅ **Multiple approaches** where applicable
- ✅ **Time/Space complexity** analysis for each solution
- ✅ **Docker support** for zero-setup development environment
- ✅ **Cross-platform** compatibility (Windows, Mac, Linux)
- ✅ **No C++ installation required** for Docker users

## 🔧 Development Setup

### Recommended IDE/Editor

- **Visual Studio Code** with C++ extensions
- **CLion** for advanced C++ development
- **CodeBlocks** for beginners
- **Online Judges**: Codeforces, LeetCode, HackerRank

### Useful Extensions (VS Code)

- C/C++ Extension Pack
- Competitive Programming Helper
- Code Runner
- Better Comments

## 📚 Learning Resources

### Competitive Programming Platforms

- [Codeforces](https://codeforces.com/)
- [LeetCode](https://leetcode.com/)
- [HackerRank](https://www.hackerrank.com/)
- [AtCoder](https://atcoder.jp/)

### C++ Resources

- [C++ Reference](https://en.cppreference.com/)
- [STL Documentation](https://www.cplusplus.com/reference/)
- [Competitive Programming Handbook](https://cses.fi/book/)

## 🤝 Contributing

1. **Fork** the repository
2. **Create** a feature branch (`git checkout -b feature/amazing-solution`)
3. **Add** your solution with proper documentation
4. **Commit** your changes (`git commit -m 'Add amazing solution'`)
5. **Push** to the branch (`git push origin feature/amazing-solution`)
6. **Open** a Pull Request

### Contribution Guidelines

- Follow the existing code style and documentation format
- Include problem description, approach, and complexity analysis
- Test your solution with multiple test cases
- Organize solutions in appropriate categories

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 🙏 Acknowledgments

- Competitive programming community
- Online judges and platforms
- C++ standard library contributors

---

**Happy Coding! 🚀**

_Feel free to star this repository if you find it helpful!_
