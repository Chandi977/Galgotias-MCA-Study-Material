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

void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &tail,Node* &head, int position,int d){
    Node* temp = head;
    int cnt = 1;
    //inserting at head
    if(position == 1){
        insertAtHead(head,d);
        return;
    }

    //inserting at tail
    if(position == 0){
        insertAtTail(head,d);
        return;
    }
    //inserting at middle
    //traversing till position-1

    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }
    // insert at Last Position
    if(temp ->next ==NULL){
        insertAtTail(tail,d);
        return;
    }

    //creating a node for d 
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node* &head,Node* &tail){
    //deleting first or start node
    if(position == 1){
        Node* temp = head;
        head = head->next;
        //memory free start node
        temp->next = NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt <=  position){ 
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        // handle case for last node
        if(prev->next == NULL){
            tail = prev;
        }
    }


}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
// traversing of Linkedlist

// void traverse(Node* head){
//     Node* temp = head;
//     while (head != NULL){


//         head = head->next;
//     }
    
// }
 


int main(){
    Node* node1 = new Node(10);
    cout<<node1->data<<" "<< node1->next<<endl;

    Node* head = node1;
    Node* tail = node1;
    
    insertAtTail(tail, 12);
    insertAtTail(tail, 15);

    insertAtPosition(tail,head,4,33);

    print(head);
    cout << "head "<<head -> data <<endl;
    cout << "tail "<<tail -> data <<endl;

    deleteNode(4,head,tail);
    print(head);
    cout << "head "<<head -> data <<endl;
    cout << "tail "<<tail -> data <<endl;
    return 0;
}
