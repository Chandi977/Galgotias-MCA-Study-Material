#include <iostream>

// Define the Node class
class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Function to detect loop using Floyd's algorithm
Node* floydDetectLoop(Node* head) {
    if (head == nullptr)
        return nullptr;

    Node* slow = head;
    Node* fast = head;

    while (slow != nullptr && fast != nullptr) {
        fast = fast->next;
        if (fast != nullptr) {
            fast = fast->next;
        }

        slow = slow->next;

        if (slow == fast) {
            return slow;
        }
    }

    return nullptr;
}

// Function to get the starting node of the loop
Node* getStartingNode(Node* head) {
    if (head == nullptr)
        return nullptr;

    Node* intersection = floydDetectLoop(head);

    if (intersection == nullptr)
        return nullptr;

    Node* slow = head;

    while (slow != intersection) {
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;
}

// Function to remove loop in the linked list
// Function to remove loop in the linked list
Node* removeLoop(Node* head) {
    if (head == nullptr)
        return nullptr;

    Node* startOfLoop = getStartingNode(head);

    if (startOfLoop == nullptr)
        return head;

    // Find the last node of the loop
    Node* temp = startOfLoop;
    while (temp->next != startOfLoop) {
        temp = temp->next;
    }

    // Break the loop by setting the next pointer of the last node to nullptr
    temp->next = nullptr;

    // Also update the next pointer of the starting node of the loop
    startOfLoop->next = nullptr;

    return head;
}


// Function to print the linked list
void printList(Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

// Main function for testing
int main() {
    // Creating a linked list with a loop
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = head->next; // Creating a loop

    std::cout << "Linked list before removing loop: ";
    printList(head);

    // Remove the loop
    head = removeLoop(head);

    std::cout << "Linked list after removing loop: ";
    printList(head);

    return 0;
}
