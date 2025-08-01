// ╔════════════════════════════════════════════════════════════╗
// ║ 🔸 Problem: Remove All Adjacent Duplicates in a String     ║
// ╚════════════════════════════════════════════════════════════╝

// 💡 You're given a string. Remove adjacent duplicates *repeatedly*
//    until no adjacent duplicates are left.

// --------------------------------------------------------------
// ✅ Approach: Stack-like Simulation using a String (`result`)
// --------------------------------------------------------------
// • Push = result.push_back(c)
// • Pop  = result.pop_back() — when top of "stack" equals current char
// • Efficient: O(n) time, no recursion, no nested loops
// • Handles cascading removals naturally (e.g., "abba" → "")
// --------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    string result = "";  // Acts as a stack to store final characters

    for (char c : s) {
        if (!result.empty() && result.back() == c) {
            // 🧹 Adjacent duplicate found — remove last character
            result.pop_back();
        } else {
            // 🧱 No duplicate — add to result (like pushing to stack)
            result.push_back(c);
        }
    }

    cout << result << endl;  // ✅ Final processed string
    return 0;
}

// Input: abbacad

// Step-by-step simulation:
//   result = ""
//   read 'a' → push → result = "a"
//   read 'b' → push → result = "ab"
//   read 'b' → pop  → result = "a"
//   read 'a' → pop  → result = ""
//   read 'c' → push → result = "c"
//   read 'a' → push → result = "ca"
//   read 'd' → push → result = "cad"

// Output: cad

// | Feature                  | Value                               |
// | ------------------------ | ----------------------------------- |
// | **Algorithm**            | Stack simulation (via string)       |
// | **Strategy**             | Greedy                              |
// | **Time Complexity**      | O(n)                                |
// | **Why Not Recursion?**   | Risk of stack overflow on large `n` |
// | **Why Not Regex?**       | Inefficient for repeated matching   |
// | \*\*Why Not Brute-force? | O(n²), too slow for big strings     |
