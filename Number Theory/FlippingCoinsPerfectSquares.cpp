// ╔═══════════════════════════════════════════════════════════════════╗
// ║ 🔸 Problem: Flipping Coins — Count of Heads (Perfect Squares)    ║
// ╚═══════════════════════════════════════════════════════════════════╝

// 💡 You are given m coins laid out in a row, all initially tails up.
//    For each i from 1 to m, in the i-th round you flip every coin
//    at a position that is a multiple of i. 
//    After all rounds, how many coins are heads?
//
// 🧠 Key Insight:
//    - A coin is flipped once for each of its divisors.
//    - Only perfect squares have an ODD number of divisors, so only those
//      positions end up heads.

// --------------------------------------------------------------
// ✅ Approach: Count Perfect Squares up to m
// --------------------------------------------------------------
// • For i = 1 up to √m, i*i ≤ m, increment a counter.
// • Each i*i represents a position that will be heads in the end.
// • Efficient: Loop only up to sqrt(m)
// • Time Complexity: O(√m)
// --------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;

    int cnt = 0;
    for (int i = 1; i * i <= m; ++i) {
        cnt++; // For each perfect square position
    }
    cout << cnt << endl;
    return 0;
}


// Example: Input/Simulation
// Input: 10
// Perfect squares ≤ 10: 1, 4, 9   (i = 1, 2, 3; 1*1, 2*2, 3*3)
// So cnt = 3
// Output: 3

// Input: 25
// Perfect squares ≤ 25: 1, 4, 9, 16, 25   (i = 1..5)
// Output: 5

// | Feature                | Value                            |
// |------------------------|----------------------------------|
// | **Category**           | Number Theory (Competitive Prog.)|
// | **Key Concept**        | Divisor Count, Perfect Squares   |
// | **Algorithm**          | Count perfect squares ≤ m        |
// | **Time Complexity**    | O(√m)                            |
// | **Space Complexity**   | O(1)                             |
// | **Type**               | Classic Math Puzzle/Observation  |

// 📝 In summary: After all flips, exactly as many coins are heads as there are perfect squares ≤ m.