# Contributing to Competitive Programming Solutions

Thank you for your interest in contributing to this competitive programming solutions repository! This document provides guidelines for contributing new solutions and improving existing ones.

## 🎯 How to Contribute

### 1. Fork and Clone

1. Fork this repository to your GitHub account
2. Clone your fork locally:
   ```bash
   git clone https://github.com/your-username/competitive-programming-cpp.git
   cd competitive-programming-cpp
   ```

### 2. Create a Feature Branch

```bash
git checkout -b feature/algorithm-name-problem-name
```

### 3. Add Your Solution

#### File Organization

- Place your solution in the appropriate category directory
- Use descriptive filenames: `ProblemName.cpp`
- If a category doesn't exist, create it with a clear name

#### Code Style Guidelines

**Header Template:**

```cpp
// ╔════════════════════════════════════════════════════════════╗
// ║ 🔸 Problem: [Problem Name]                                 ║
// ╚════════════════════════════════════════════════════════════╝

// 💡 [Clear problem description]

// 🧠 Key Insight:
//    [Important observation or approach]

// --------------------------------------------------------------
// ✅ Approach: [Algorithm name/strategy]
// --------------------------------------------------------------
// • [Key point 1]
// • [Key point 2]
// • [Key point 3]
// • Time Complexity: O(...)
// • Space Complexity: O(...)
// --------------------------------------------------------------
```

**Required Documentation:**

- Problem description with clear problem statement
- Algorithm approach with time/space complexity
- Step-by-step examples with input/output
- Key insights and competitive programming concepts
- Feature table with technical details

**Example Feature Table:**

```cpp
// | Feature                | Value                                 |
// |------------------------|---------------------------------------|
// | **Algorithm**          | [Algorithm name]                      |
// | **Strategy**           | [Greedy/DP/Graph/etc.]               |
// | **Time Complexity**    | O(...)                               |
// | **Space Complexity**   | O(...)                               |
// | **Key Concept**        | [Main concept used]                   |
// | **Suitable for**       | [Input size constraints]              |
```

### 4. Code Quality Standards

#### Compilation

- Ensure your code compiles without warnings
- Use C++11 or later standard
- Test with multiple compilers if possible

#### Optimization

- Optimize for competitive programming constraints
- Consider time and space complexity
- Use efficient data structures and algorithms

#### Readability

- Use clear variable names
- Add comments for complex logic
- Follow consistent indentation (4 spaces)

### 5. Testing

- Test your solution with multiple test cases
- Include edge cases and corner cases
- Verify time complexity with large inputs

### 6. Commit and Push

```bash
git add .
git commit -m "Add [Algorithm]: [Problem Name] solution

- Time Complexity: O(...)
- Space Complexity: O(...)
- Approach: [Brief description]"
git push origin feature/algorithm-name-problem-name
```

### 7. Create Pull Request

1. Go to your fork on GitHub
2. Click "New Pull Request"
3. Select your feature branch
4. Fill in the PR template
5. Submit the PR

## 📋 Pull Request Template

```markdown
## Description

Brief description of the problem and solution added.

## Algorithm Category

- [ ] Greedy Algorithm
- [ ] Dynamic Programming
- [ ] Graph Theory
- [ ] Number Theory
- [ ] String Processing
- [ ] Data Structures
- [ ] Other: **\_**

## Problem Details

- **Problem Name**: [Name]
- **Source**: [Platform/Contest] (optional)
- **Difficulty**: [Easy/Medium/Hard] (optional)

## Solution Analysis

- **Time Complexity**: O(...)
- **Space Complexity**: O(...)
- **Approach**: [Brief description]

## Test Cases

- [ ] Small test cases
- [ ] Edge cases
- [ ] Large input tests
- [ ] Multiple test scenarios

## Checklist

- [ ] Code compiles without warnings
- [ ] Follows documentation template
- [ ] Includes complexity analysis
- [ ] Tested with multiple inputs
- [ ] Added to appropriate category
```

## 🏷️ Algorithm Categories

### Greedy Algorithm

- Problems solved using greedy approach
- Local optimal choices leading to global optimum
- Examples: Activity Selection, Huffman Coding

### Dynamic Programming

- Problems requiring optimal substructure
- Memoization or tabulation approaches
- Examples: LCS, Knapsack, Edit Distance

### Graph Theory

- Problems involving graphs and networks
- BFS, DFS, shortest paths, MST
- Examples: BFS/DFS, Dijkstra, Kruskal

### Number Theory

- Mathematical problems and properties
- Prime numbers, divisibility, modular arithmetic
- Examples: Sieve, GCD/LCM, Modular Exponentiation

### String Processing

- Text manipulation and pattern matching
- String algorithms and data structures
- Examples: KMP, Trie, Suffix Array

### Data Structures

- Implementation and usage of data structures
- Custom data structures for specific problems
- Examples: Segment Tree, Fenwick Tree, Union-Find

## 🚫 What Not to Include

- Solutions without proper documentation
- Code that doesn't compile
- Plagiarized solutions
- Solutions without complexity analysis
- Poorly formatted or unreadable code

## 🎉 Recognition

Contributors will be recognized in the README file. Make sure to:

- Add your name to the contributors list
- Include a brief description of your contribution
- Link to your GitHub profile

## 📞 Getting Help

If you have questions or need help:

1. Check existing issues and discussions
2. Create an issue with your question
3. Join our community discussions

## 📄 License

By contributing, you agree that your contributions will be licensed under the MIT License.

---

**Thank you for contributing to the competitive programming community! 🚀**
