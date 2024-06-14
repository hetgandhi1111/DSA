#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next, *prev;

    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

class Solution {
public:
    Node* findTail(Node* head) {
        Node* tail = head;
        while (tail->next != nullptr) tail = tail->next;
        return tail;
    }

    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        vector<pair<int,int>> ans;
        if (head == NULL) return ans;

        Node* left = head;
        Node* right = findTail(head);

        while (left != right && left->data < right->data) {
            int sum = left->data + right->data;
            if (sum == target) {
                ans.push_back({left->data, right->data});
                left = left->next;
                right = right->prev;
            } else if (sum < target) {
                left = left->next;
            } else {
                right = right->prev;
            }
        }

        return ans;
    }
};
