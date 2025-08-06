// ╔═════════════════════════════════════════════════════════════════════════════╗
// ║ 🔸 Problem: Remove Duplicates from Sorted LinkedList                       ║
// ╚═════════════════════════════════════════════════════════════════════════════╝

// 💡 Given a sorted linked list, merge all duplicate values into single nodes.
//    Output the de-duplicated linked list (preserving original order).
//
// 🧠 Competitive Programming Concept:
//    - Linked List Manipulation
//    - Two-pointer / In-place Deduplication for Sorted Sequences

// -----------------------------------------------------------------------------
// ✅ Approach 1: Raw Pointer Linked List (Manual Memory Management)
// -----------------------------------------------------------------------------
// • Traverse; for each input, if value ≠ previous, append to new node.
// • Handles O(N) time, O(1) extra space (excluding list).
// • Manual delete for cleanup (shows classic linked list handling in CP).
// -----------------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// struct Node
// {
//     int val;
//     Node *next;
//     Node(int v) : val(v), next(nullptr) {}
// };

// int main()
// {
//     int n;
//     cin >> n;
//     if (n == 0)
//         return 0;

//     int value;
//     cin >> value;
//     Node *head = new Node(value);
//     Node *tail = head;
//     int duplicateVal = value;
//     for (int i = 1; i < n; ++i)
//     {
//         cin >> value;
//         if (value != duplicateVal)
//         {
//             tail->next = new Node(value);
//             tail = tail->next;
//             duplicateVal = value;
//         }
//         // else skip, as duplicate!
//     }

//     // Print and cleanup
//     while (head)
//     {
//         Node *temp = head;
//         cout << head->val << " ";
//         head = head->next;
//         delete temp;
//     }

//     return 0;
// }

// -----------------------------------------------------------------------------
// ✅ Approach 2: Modern C++ (unique_ptr for Automatic Memory Management)
// -----------------------------------------------------------------------------
// • Same logic, but uses smart pointers so no manual delete needed.
// • Industry/modern best practice and more robust for large data.
//
// -----------------------------------------------------------------------------

#include <iostream>
#include <memory>
using namespace std;

struct Node
{
    int val;
    unique_ptr<Node> next;
    Node(int v) : val(v), next(nullptr) {}
};

int main()
{
    int n;
    cin >> n;
    if (n == 0)
        return 0;

    int value;
    cin >> value;
    auto head = make_unique<Node>(value);
    Node *tail = head.get();
    int lastInsertedVal = value;

    for (int i = 1; i < n; ++i)
    {
        cin >> value;
        if (value != lastInsertedVal)
        {
            tail->next = make_unique<Node>(value);
            tail = tail->next.get();
            lastInsertedVal = value;
        }
    }

    for (Node *curr = head.get(); curr != nullptr; curr = curr->next.get())
    {
        cout << curr->val << " ";
    }

    return 0; // unique_ptr auto-cleans!
}

// Example Simulation:
// Input: 5 1 2 2 3 3
// Build: head=1, 2 (skips if duplicate), 3 (skips duplicate)
// Output list: 1 2 3

// | Feature                | Approach 1 (Raw Pointers)  | Approach 2 (unique_ptr)     |
// |------------------------|----------------------------|-----------------------------|
// | **Category**           | Linked List Manipulation   | Linked List Manipulation    |
// | **CP Focus**           | Classic pointers           | Modern smart-pointer style  |
// | **Memory**             | Manual delete              | Automatic (RAII)            |
// | **Time Complexity**    | O(N)                       | O(N)                        |
// | **Space Complexity**   | O(1) extra (excl. list)    | O(1) extra (excl. list)     |
// | **Suitable for CP?**   | Yes, both are common       | Yes, if C++14 or above      |

// 📝 In summary: Remove duplicates in a sorted linked list by checking for value changes only.
