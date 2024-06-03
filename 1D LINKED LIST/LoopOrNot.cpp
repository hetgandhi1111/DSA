#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head; // Initialize slow pointer
        ListNode* fast = head; // Initialize fast pointer

        // Traverse the list with two pointers
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;         // Move slow pointer one step
            fast = fast->next->next;   // Move fast pointer two steps

            if (slow == fast) {        // If they meet, there's a cycle
                return true;
            }
        }
        return false; // If the loop ends, there's no cycle
    }
};
