#include<bits/stdc++.h>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head; // Initialize slow pointer
        ListNode* fast = head; // Initialize fast pointer

        // Traverse the list with two pointers
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;         // Move slow pointer one step
            fast = fast->next->next;   // Move fast pointer two steps

            if (slow == fast) {        // If they meet, there is a cycle
                slow = head;           // Reset slow to head
                while (slow != fast) { // Move both one step at a time
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;           // The start of the cycle
            }
        }

        return NULL; // No cycle detected
    }
};
