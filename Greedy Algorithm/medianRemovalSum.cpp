// ╔════════════════════════════════════════════════════════════════╗
// ║ 🔸 Problem: Sum of Medians on Sequential Removal              ║
// ╚════════════════════════════════════════════════════════════════╝

// 💡 Given an array of n numbers.
//    Repeatedly do the following:
//      1. Find the median (or both medians if even).
//      2. Add the median value(s) to a running sum.
//      3. Remove ONE of the current median elements (any, for even).
//    Continue until array is empty.
//    Return the sum of all medians obtained in this way.
//
// 🧠 CP Concepts:
//    - Simulation w/ Greedy Steps
//    - Sorting and Median Extraction
//    - Data Structure Optimization (bonus: could use multiset for quick removals)

// --------------------------------------------------------------
// ✅ Approach:
// --------------------------------------------------------------
// • Start with a sorted copy of the array.
// • Each loop:
//     - Find current median (if even size, it's either of two middle values or their average as per rules).
//     - Add it to sum.
//     - Remove ONE median value.
// • Repeat till none remain.
// • Time Complexity: O(n^2) (since vector erase is O(n) each time).
// --------------------------------------------------------------
// #include <iostream>
// #include <vector>
// #include <algorithm> // for std::sort

// int user_logic(int n, const std::vector<int> &arr);

// int main()
// {
//     int n;
//     std::cin >> n;
//     std::vector<int> arr(n);
//     for (int i = 0; i < n; ++i)
//     {
//         std::cin >> arr[i];
//     }
//     int result = user_logic(n, arr);
//     std::cout << result << std::endl;
//     return 0;
// }

// int user_logic(int n, const std::vector<int> &arr)
// {
//     // Write your logic here.
//     // Return the sum of all the medians based on the problem statement
//     std::vector<int> temp = arr; // Make a copy for modification
//     int sum = 0;
//     sort(temp.begin(), temp.end());
//     while (!temp.empty())
//     {
//         int mid = temp.size() / 2;

//         if (temp.size() % 2 == 0)
//         {
//             int median = (temp[mid - 1] + temp[mid]) / 2;
//             sum += median;
//             temp.erase(temp.begin() + mid - 1); // Remove one median element
//         }
//         else
//         {
//             int median = temp[mid];
//             sum += median;
//             temp.erase(temp.begin() + mid); // Remove the median
//         }
//     }

//     return sum;
// }
// --------------------------------------------------------------
//   (Better solutions can use multiset for O(n log n))
// --------------------------------------------------------------

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int user_logic(int n, const vector<int> &arr)
{
    vector<int> temp = arr;         // Copy for safe modification
    sort(temp.begin(), temp.end()); // Always work with sorted version

    int sum = 0;
    while (!temp.empty())
    {
        int mid = temp.size() / 2;
        if (temp.size() % 2 == 0)
        {
            // Even size: median is average of two middle numbers
            int median = (temp[mid - 1] + temp[mid]) / 2;
            sum += median;
            temp.erase(temp.begin() + mid - 1); // Remove one of the medians
        }
        else
        {
            // Odd size: median is the middle number
            int median = temp[mid];
            sum += median;
            temp.erase(temp.begin() + mid);
        }
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    int result = user_logic(n, arr);
    cout << result << endl;
    return 0;
}

// Example Simulation:
// Input: 5 1 2 3 4 5
// Step 1: [1 2 3 4 5]  -> median=3, sum=3, remove 3
// Step 2: [1 2 4 5]    -> median=(2+4)/2=3, sum=6, remove 2
// Step 3: [1 4 5]      -> median=4, sum=10, remove 4
// Step 4: [1 5]        -> median=(1+5)/2=3, sum=13, remove 1
// Step 5: [5]          -> median=5, sum=18, remove 5
// Output: 18

// | Feature                 | Value                               |
// |-------------------------|-------------------------------------|
// | **Category**            | Greedy, Median Simulation           |
// | **Algorithm**           | Iterative Median, Vector erase      |
// | **Time Complexity**     | O(n^2)                              |
// | **Flexible/General**    | Could use multiset for O(n log n)   |
// | **Classic in CP**       | Yes — Median Removal Simulation     |

// 📝 Summary: Repeat removing the median, add it to sum, until the array is empty.
