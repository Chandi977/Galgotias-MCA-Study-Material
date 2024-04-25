#include <iostream>
using namespace std;;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Function to print the linked list
void printList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

// Function to reverse the linked list from position left to position right
ListNode* reverseBetween(ListNode* head, int left, int right) {
    ListNode dummy(0);
    dummy.next = head;
    ListNode* prev = &dummy;
    for (int i = 1; i < left; ++i) {
        prev = prev->next;
    }
    ListNode* current = prev->next;
    ListNode* nextNode = nullptr;
    for (int i = left; i < right; ++i) {
        nextNode = current->next;
        current->next = nextNode->next;
        nextNode->next = prev->next;
        prev->next = nextNode;
    }
    return dummy.next;
}

int main() {
    // Create a sample linked list
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // Print the original linked list
    cout << "Original Linked List: ";
    printList(head);

    // Reverse the linked list from position 2 to 4
    int left = 2, right = 4;
    ListNode* modifiedList = reverseBetween(head, left, right);

    // Print the modified linked list
    cout << "Modified Linked List: ";
    printList(modifiedList);

    // Free the memory allocated for the linked list
    ListNode* current = modifiedList;
    while (current != nullptr) {
        ListNode* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
