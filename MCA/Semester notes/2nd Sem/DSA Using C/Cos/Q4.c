// Q4. To implement queue using array.
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

// Define a structure for the queue
struct Queue {
  int arr[MAX_SIZE];
  int front, rear;
};

// Function to initialize a queue
void initQueue(struct Queue* queue) {
  queue->front = -1;
  queue->rear = -1;
}

// Function to check if the queue is empty
int isEmpty(struct Queue* queue) {
  return (queue->front == -1 && queue->rear == -1);
}

// Function to check if the queue is full
int isFull(struct Queue* queue) {
  return ((queue->rear + 1) % MAX_SIZE == queue->front);
}

// Function to add an element to the queue
void enqueue(struct Queue* queue, int data) {
  if (isFull(queue)) {
    printf("Queue is full. Cannot enqueue.\n");
    return;
  }
  if (isEmpty(queue)) {
    queue->front = 0;
    queue->rear = 0;
  } else {
    queue->rear = (queue->rear + 1) % MAX_SIZE;
  }
  queue->arr[queue->rear] = data;
  printf("%d enqueued to queue.\n", data);
}

// Function to remove an element from the queue
int dequeue(struct Queue* queue) {
  if (isEmpty(queue)) {
    printf("Queue is empty. Cannot dequeue.\n");
    return -1;
  }
  int removedElement = queue->arr[queue->front];
  if (queue->front == queue->rear) {
    queue->front = -1;
    queue->rear = -1;
  } else {
    queue->front = (queue->front + 1) % MAX_SIZE;
  }
  return removedElement;
}

// Function to get the front element of the queue
int front(struct Queue* queue) {
  if (isEmpty(queue)) {
    printf("Queue is empty.\n");
    return -1;
  }
  return queue->arr[queue->front];
}

// Function to get the rear element of the queue
int rear(struct Queue* queue) {
  if (isEmpty(queue)) {
    printf("Queue is empty.\n");
    return -1;
  }
  return queue->arr[queue->rear];
}

int main() {
  struct Queue queue;
  initQueue(&queue);

  enqueue(&queue, 10);
  enqueue(&queue, 20);
  enqueue(&queue, 30);

  printf("Front element is %d.\n", front(&queue));
  printf("Rear element is %d.\n", rear(&queue));

  printf("%d dequeued from queue.\n", dequeue(&queue));
  printf("%d dequeued from queue.\n", dequeue(&queue));

  printf("Front element is %d.\n", front(&queue));
  printf("Rear element is %d.\n", rear(&queue));

  enqueue(&queue, 40);
  enqueue(&queue, 50);
  enqueue(&queue, 60);
  enqueue(&queue, 70);
  enqueue(&queue, 80); // Queue is full here

  printf("Front element is %d.\n", front(&queue));
  printf("Rear element is %d.\n", rear(&queue));

  return 0;
}
