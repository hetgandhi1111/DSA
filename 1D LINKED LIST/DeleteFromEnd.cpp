#include<bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr || n <= 0) return head; // Error checking

        ListNode* fast = head;
        ListNode* slow = head;

        for (int i = 0; i < n; i++) {
            if (fast == nullptr) return head; // In case n is greater than the length of the list
            fast = fast->next;
        }

        if (fast == nullptr) return head->next;

        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        ListNode* delNode = slow->next;
        slow->next = slow->next->next;
        delete delNode;

        return head;
    }
};
