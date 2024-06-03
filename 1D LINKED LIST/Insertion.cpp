#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertArr2LL(vector<int>&arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=mover->next;
    }
    return head;
}
void print(Node* head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

Node* insertionathead(Node* head,int val){
    Node* temp= new Node(val,head);
    return temp;
}
Node* insertatend(Node* head,int val){
    if(head==NULL){
        return new Node(val,head);
    }
    Node* go=new Node(val,head);
    Node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=go;
    go->next=nullptr;
    return head;
}
Node* insertk(Node* head,int el,int k){
    if(head==nullptr){
        if(k==1){
            return new Node(el);
        }
        else{
            return head;
        }
    }
    if(k==1){
        Node* newHead=new Node(el,head);

    }
    int cnt=0;
    Node* temp=head;
    while(temp!=NULL){
        cnt++;
        if(cnt==k-1){
            Node* x=new Node(el,temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
}
Node* insertatval(Node* head,int el,int val){
    if(head==nullptr){
        return NULL;
    }
    if(head->data==val){
        Node* newHead=new Node(el,head);

    }
    
    Node* temp=head;
    while(temp->next!=NULL){
       
        if(temp->next->data==val){
            Node* x=new Node(el,temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
}
int main(){
    vector<int>arr={12,3,7,4,8,9,0};
    Node* head=convertArr2LL(arr);
    print(head);
    head=insertatval(head,100,3);
    print(head);
}