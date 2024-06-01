#include<bits/stdc++.h>
using namespace std;

struct Node {
    public:
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
    if(arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void print(Node* head) {
    while(head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* Deletehead(Node* head) {
    if(head == nullptr || head->next == nullptr) {
        delete head;
        return nullptr;
    }
    Node* temp = head;
    head = head->next;
    head->back = nullptr;
    delete temp;
    return head;
}
Node* Deletetail(Node* head){
    if(head==nullptr || head->next==nullptr){
        delete head;
        return NULL;
    }
    Node*temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    Node* prev=temp->back;

    prev->next=nullptr;
    temp->back=nullptr;
    delete temp;
    return head;
}
Node* Deletek(Node* head,int k){
    if(head==nullptr) return NULL;
    Node* temp=head;
    int cnt=0;
    Node* prev=temp->back;
    Node* front=temp->next;
    while(temp!=nullptr){
        cnt++;
        if(cnt==k){
            break;
        }
        temp=temp->next;
    }
    if(prev==nullptr && front==nullptr){
        return nullptr;
    }
    else if(prev==nullptr){
        return Deletehead(head);
    }
    else if(front==nullptr){
        return Deletetail(head);
    }
    prev->next=front;
    front->back=prev;
    temp->next=nullptr;
    temp->back=nullptr;
    delete temp;
    return head;
}
void DeleteNode(Node* temp){
    Node* prev=temp->back;
    Node* front=temp->next;
    if(front==NULL){
        prev->next=NULL;
        temp->back=nullptr;
        delete temp;
        return;
    }
    prev->next=front;
    front->back=prev;
    temp->next=temp->back=nullptr;
    free(temp);
}
int main() {
    vector<int> arr = {1, 5, 7, 8, 9, 0, 2, 3};
    Node* head = convertArr2Dll(arr);
    cout << "Original list: ";
    print(head);

    DeleteNode(head->next);
    cout << "After deleting head: ";
    print(head);

    return 0;
}
