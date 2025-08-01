// ╔════════════════════════════════════════════════════════════╗
// ║ 🔸 Problem: Halves Are Alike — Vowel Balance              ║
// ╚════════════════════════════════════════════════════════════╝

// 💡 Given an even-length string s:
//      - Split into two halves: a and b.
//      - Return true if both halves contain the same number of vowels (a, e, i, o, u; case-insensitive).

// 🧠 Competitive Programming Concept:
//    - String Processing — Character Counting
//    - Efficient Linear Scan, No Extra Space

// --------------------------------------------------------------
// ✅ Approach: Two-Pointer or Single-Pass Vowel Counting
// --------------------------------------------------------------
// • Traverse the first and second half in parallel (in a single loop).
// • Count vowels in each half with two counters.
// • Return (count1 == count2).
// • Handles upper/lower case (simple ASCII checks).
// • Time Complexity: O(n)
// • Space Complexity: O(1)
// --------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

// Checks if character is a vowel (case-insensitive)
bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

int main() {
    string s;
    cin >> s;

    int n = s.length(), mid = n / 2;
    int countA = 0, countB = 0;

    for (int i = 0; i < mid; ++i) {
        if (isVowel(s[i])) countA++;
        if (isVowel(s[i + mid])) countB++;
    }
    cout << (countA == countB ? "true" : "false") << endl;
    return 0;
}

// Example: 
// Input:    textbook
// Split:    "text" | "book"
// Vowels:   1 ('e') | 2 ('o','o')
// Output:   false
//
// Input:    book
// Split:    "bo" | "ok"
// Vowels:   1 ('o') | 1 ('o')
// Output:   true

// | Feature                | Value                                 |
// |------------------------|---------------------------------------|
// | **CP Category**        | String Processing, Counting           |
// | **Key Concept**        | Compare properties of two string parts|
// | **Algorithm**          | Linear scan (O(n)), two counters      |
// | **Time Complexity**    | O(n)                                  |
// | **Space Complexity**   | O(1)                                  |
// | **Why not map/set?**   | Unneeded, just simple char checks     |
// | **Suitable for**       | Input size up to 10⁵ or more          |

// 📝 Conclusion: Vowel balance problems are standard in CP rounds, and this style is clean, fast, and robust.