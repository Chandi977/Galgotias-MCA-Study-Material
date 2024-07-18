#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        return prev;
    }
    
    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next) {
            return;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode* secondHalf = reverseList(slow->next);
        slow->next = nullptr;
        
        ListNode* first = head;
        while (secondHalf) {
            ListNode* temp1 = first->next;
            ListNode* temp2 = secondHalf->next;
            first->next = secondHalf;
            secondHalf->next = temp1;
            first = temp1;
            secondHalf = temp2;
        }
    }
};

// Function to print the linked list
void printList(ListNode* head) {
    while (head) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // Create a test linked list
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    
    // Create a solution object
    Solution sol;
    
    // Reorder the list
    sol.reorderList(head);
    
    // Print the reordered list
    printList(head);
    
    // Clean up memory
    ListNode* temp;
    while (head) {
        temp = head;
        head = head->next;
        delete temp;
    }
    
    return 0;
}


// Chat Gpt approach

/*
#include <iostream>

// Definition for singly-linked list node
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

// Definition of Solution class
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        return prev;
    }
    
    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next) {
            return;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        // Find the middle of the linked list
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // Reverse the second half of the linked list
        ListNode* secondHalf = reverseList(slow->next);
        slow->next = nullptr;
        
        // Merge the first half with the reversed second half
        ListNode* first = head;
        while (secondHalf) {
            ListNode* temp1 = first->next;
            ListNode* temp2 = secondHalf->next;
            first->next = secondHalf;
            secondHalf->next = temp1;
            first = temp1;
            secondHalf = temp2;
        }
    }
};

// Function to print the linked list
void printList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        std::cout << current->val << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

// Main function
int main() {
    // Create a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // Print the original linked list
    std::cout << "Original linked list: ";
    printList(head);

    // Apply reorderList function
    Solution solution;
    solution.reorderList(head);

    // Print the reordered linked list
    std::cout << "Reordered linked list: ";
    printList(head);

    // Deallocate memory
    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}


*/