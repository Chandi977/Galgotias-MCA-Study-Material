// stack using linkedlist
#include <stdio.h>
#include <stdlib.h>

// Structure for stack node
struct StackNode {
    int data;
    struct StackNode* next;
};

// Function to create a new stack node
struct StackNode* newNode(int data) {
    struct StackNode* stackNode = (struct StackNode*)malloc(sizeof(struct StackNode));
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}

// Function to push an element onto the stack
void push(struct StackNode** top, int data) {
    struct StackNode* stackNode = newNode(data);
    stackNode->next = *top;
    *top = stackNode;
}

// Function to pop an element from the stack
int pop(struct StackNode** top) {
    if (*top == NULL) {
        printf("Stack underflow\n");
        return -1;
    }
    struct StackNode* temp = *top;
    *top = (*top)->next;
    int popped = temp->data;
    free(temp);
    return popped;
}

int main() {
    // Create a stack
    struct StackNode* top = NULL;

    // Push elements onto the stack
    push(&top, 1);
    push(&top, 2);
    push(&top, 3);

    // Pop and print elements
    printf("%d\n", pop(&top));
    printf("%d\n", pop(&top));
    printf("%d\n", pop(&top));

    return 0;
}
