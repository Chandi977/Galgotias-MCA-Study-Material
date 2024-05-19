// Implement stack using array.
#include<stdio.h>
#include<stdbool.h>

#define MAX_SIZE 5

typedef struct {
  int stackArray[MAX_SIZE];
  int top;
}Mystack;

void init_stack(Mystack *stack){
  stack->top = -1;
}

void push(Mystack *stack, int value){
  if(stack->top == MAX_SIZE-1){
    printf("Stack is full you cannot push element\n");
    return;
  }
  stack->stackArray[++stack->top] = value;
}

int pop(Mystack *stack){
  if(stack->top == -1){
    printf("Stack is empty\n");
    return -1;
  }
  return stack->stackArray[stack->top--];
}

int peek(Mystack *stack){
  if(stack->top == -1){
    printf("Stack is empty\n");
    return -1;
  }
  return stack->stackArray[stack->top];
}

bool isEmpty(Mystack *stack){
  return (stack->top == -1);
}

bool isfull(Mystack *stack){
  return (stack->top == MAX_SIZE - 1);
}

int main() {
  Mystack stack;
  init_stack(&stack);

  push(&stack, 10);
  push(&stack, 20);
  push(&stack, 30);

  printf("peek : %d\n", peek(&stack));

  printf("Pop : %d\n", pop(&stack));
  printf("Pop : %d\n", pop(&stack));

  push(&stack, 40);
  push(&stack, 50);
  push(&stack, 60);
  push(&stack, 70);
  push(&stack, 80); // here our stack is full 

  printf("peek : %d\n", peek(&stack));

}    