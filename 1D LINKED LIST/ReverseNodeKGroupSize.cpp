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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* newHead = reverseList(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next = NULL;
        return newHead;
    }
    
    ListNode* getKthNode(ListNode* temp, int k) {
        k -= 1;
        while(temp != NULL && k > 0) {
            k--;
            temp = temp->next;
        }
        return temp;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevLast = NULL;
        ListNode* newHead = NULL;
        
        while(temp != NULL) {
            ListNode* kthNode = getKthNode(temp, k);
            if(kthNode == NULL) {
                if(prevLast) prevLast->next = temp;
                break;
            }
            ListNode* nextNode = kthNode->next;
            kthNode->next = NULL;
            ListNode* reversedHead = reverseList(temp);
            
            if(newHead == NULL) {
                newHead = reversedHead;
            } else {
                prevLast->next = reversedHead;
            }
            
            prevLast = temp;
            temp = nextNode;
        }
        
        return newHead == NULL ? head : newHead;
    }
};
