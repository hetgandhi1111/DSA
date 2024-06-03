#include<bits/stdc++.h>
using namespace std;
  struct ListNode {
     int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == NULL || headB == NULL) return NULL;

        ListNode* temp1 = headA;
        ListNode* temp2 = headB;

        // Traverse both lists
        while (temp1 != temp2) {
            // If the end of one list is reached, switch to the other list
            temp1 = (temp1 == NULL) ? headB : temp1->next;
            temp2 = (temp2 == NULL) ? headA : temp2->next;
        }
        // Both pointers meet at the intersection or at the end (NULL)
        return temp1;
    }
};
