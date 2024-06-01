#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1 = nullptr, Node* back1 = nullptr) {
        data = data1;
        next = next1;
        back = back1;
    }
};

Node* convertArr2Dll(vector<int>& arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* prev = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* InsertionHead(Node* head, int val) {
    Node* newHead = new Node(val, head, nullptr);
    if (head != nullptr) {
        head->back = newHead;
    }
    return newHead;
}

Node* InsertionTail(Node* head, int val) {
    if (head == nullptr) {
        return InsertionHead(head, val);
    }
    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }
    Node* newNode = new Node(val, nullptr, tail);
    tail->next = newNode;
    return head;
}

Node* InsertionK(Node* head, int k, int val) {
    if (k == 1 || head == nullptr) {
        return InsertionHead(head, val);
    }
    Node* temp = head;
    int cnt = 1;
    while (temp != nullptr && cnt < k) {
        temp = temp->next;
        cnt++;
    }
    if (temp == nullptr) {
        // If k is greater than the length of the list, insert at the end
        return InsertionTail(head, val);
    }
    Node* prev = temp->back;
    Node* newNode = new Node(val, temp, prev);
    if (prev != nullptr) {
        prev->next = newNode;
    }
    temp->back = newNode;
    return head;
}

void insertionNode(Node* node, int val) {
    if (node == nullptr) return;
    Node* prev = node->back;
    Node* newNode = new Node(val, node, prev);
    if (prev != nullptr) {
        prev->next = newNode;
    }
    node->back = newNode;
}

int main() {
    vector<int> arr = {1, 5, 7, 8, 9, 0, 2, 3};
    Node* head = convertArr2Dll(arr);
    cout << "Original list: ";
    print(head);

    head = InsertionHead(head, 100);
    cout << "After inserting 100 at head: ";
    print(head);

    head = InsertionTail(head, 200);
    cout << "After inserting 200 at tail: ";
    print(head);

    head = InsertionK(head, 4, 150);
    cout << "After inserting 150 at position 4: ";
    print(head);

    insertionNode(head->next, 120);
    cout << "After inserting 120 before the second node: ";
    print(head);

    return 0;
}
