#include<bits/stdc++.h>
using namespace std;

struct Node {
    public:
    int data;
    Node* next;
    
    Node(int data1, Node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};

Node* sortlist(Node* head) {
    if (!head || !head->next) return head;

    Node* zerohead = new Node(-1);
    Node* onehead = new Node(-1);
    Node* twohead = new Node(-1);

    Node* zero = zerohead;
    Node* one = onehead;
    Node* two = twohead;
    Node* temp = head;

    while (temp) {
        if (temp->data == 0) {
            zero->next = temp;
            zero = zero->next;
        } else if (temp->data == 1) {
            one->next = temp;
            one = one->next;
        } else {
            two->next = temp;
            two = two->next;
        }
        temp = temp->next;
    }

    zero->next = (onehead->next) ? (onehead->next) : (twohead->next);
    one->next = twohead->next;
    two->next = nullptr;

    Node* newhead = zerohead->next;

    delete zerohead;
    delete onehead;
    delete twohead;

    return newhead;
}

// Helper function to print the list
void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Creating a linked list: 2 -> 1 -> 2 -> 0 -> 1 -> 0
    Node* head = new Node(2);
    head->next = new Node(1);
    head->next->next = new Node(2);
    head->next->next->next = new Node(0);
    head->next->next->next->next = new Node(1);
    head->next->next->next->next->next = new Node(0);

    cout << "Original list: ";
    printList(head);

    head = sortlist(head);

    cout << "Sorted list: ";
    printList(head);

    // Free the allocated memory
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
