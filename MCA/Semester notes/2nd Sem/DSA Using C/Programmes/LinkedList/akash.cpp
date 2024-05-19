#include<bits/stdc++.h>

using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
    
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    // Node* node1 = new Node(10);
    // cout<<node1->data<<" "<< node1->next<<endl;

    Node* head = NULL;
    // Node* tail = node1;
    insertAtHead(head ,1);
    insertAtHead(head ,7);
    insertAtHead(head ,2);
    insertAtHead(head ,3);
    insertAtHead(head ,2);
    insertAtHead(head ,9);
    insertAtHead(head ,2);

    print(head);
    Node* temp = head;
    int k,count = 0;
    cout<< "Enter the key to find :";
    cin>>k;
    while (temp != NULL){
        if(temp->data == k){
            count++;
        }
        temp = temp->next;
    }
    cout<<k <<" is present "<<count<<" times in the linked list"<<endl;
    
    
    return 0;
}