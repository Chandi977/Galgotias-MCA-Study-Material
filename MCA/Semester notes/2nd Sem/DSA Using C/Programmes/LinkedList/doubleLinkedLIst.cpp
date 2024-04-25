#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;

public:
    // Constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    // Destructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory freed for node with data "<<value<<endl;
    }
    
    

};

// Print the linked list
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

// Get the length of the linked list
int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
// Insert at Head
void insertAtHead(Node* &tail, Node* &head, int d) {
    if (head == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp; // Update tail pointer
    } else {
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp; // Update previous pointer of current head
        head = temp;
    }
}


void insertAtTail(Node* &tail, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
    }else{
        Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
    
}

// void insertAtHead(Node* &head, int d){
//     Node* temp = new Node(d);
//     temp -> next = head;
//     head = temp;
// }
// insertion in double linkedlist at any position
void insertAtPosition(Node* &tail,Node* &head, int position,int d){
    Node* temp = head;
    int cnt = 1;
    //inserting at head
    if(position == 1){
        insertAtHead(tail,head,d);
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
    temp->next -> prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

int main(){
    // Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;
    print(head); // Print the linked list
    cout << "Length: " << getLength(head) << endl; // Get the length of the linked list
    insertAtHead(tail,head,12);
    print(head); // Print the linked list after insertion

    insertAtTail(tail,65);
    print(head); // Print the linked list after insertion
    insertAtTail(tail,70);
    print(head);
    insertAtTail(tail,75);
    print(head);

    insertAtPosition(tail,head,4,54);
    print(head);
    insertAtPosition(tail,head,1,54);
    print(head);
    insertAtPosition(tail,head,7,54);
    print(head);

    return 0;
}
