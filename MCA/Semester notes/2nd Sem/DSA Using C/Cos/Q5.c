// circular queue using array
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

// Define a structure for the circular queue
struct CircularQueue {
  int arr[MAX_SIZE];
  int front, rear;
};

// Function to initialize a circular queue
void initCircularQueue(struct CircularQueue* queue) {
  queue->front = -1;
  queue->rear = -1;
}

// Function to check if the circular queue is empty
int isCircularQueueEmpty(struct CircularQueue* queue) {
  return (queue->front == -1);
}

// Function to check if the circular queue is full
int isCircularQueueFull(struct CircularQueue* queue) {
  return ((queue->rear + 1) % MAX_SIZE == queue->front);
}

// Function to add an element to the circular queue
void enqueue(struct CircularQueue* queue, int data) {
  if (isCircularQueueFull(queue)) {
    printf("Circular queue is full. Cannot enqueue.\n");
    return;
  }
  if (isCircularQueueEmpty(queue)) {
    queue->front = 0;
  }
  queue->rear = (queue->rear + 1) % MAX_SIZE;
  queue->arr[queue->rear] = data;
  printf("%d enqueued to circular queue.\n", data);
}

// Function to remove an element from the circular queue
int dequeue(struct CircularQueue* queue) {
  if (isCircularQueueEmpty(queue)) {
    printf("Circular queue is empty. Cannot dequeue.\n");
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

// Function to get the front element of the circular queue
int front(struct CircularQueue* queue) {
  if (isCircularQueueEmpty(queue)) {
    printf("Circular queue is empty.\n");
    return -1;
  }
  return queue->arr[queue->front];
}

// Function to get the rear element of the circular queue
int rear(struct CircularQueue* queue) {
  if (isCircularQueueEmpty(queue)) {
    printf("Circular queue is empty.\n");
    return -1;
  }
  return queue->arr[queue->rear];
}

int main() {
  struct CircularQueue queue;
  initCircularQueue(&queue);

  enqueue(&queue, 10);
  enqueue(&queue, 20);
  enqueue(&queue, 30);

  printf("Front element is %d.\n", front(&queue));
  printf("Rear element is %d.\n", rear(&queue));

  printf("%d dequeued from circular queue.\n", dequeue(&queue));
  printf("%d dequeued from circular queue.\n", dequeue(&queue));

  printf("Front element is %d.\n", front(&queue));
  printf("Rear element is %d.\n", rear(&queue));

  enqueue(&queue, 40);
  enqueue(&queue, 50);
  enqueue(&queue, 60);
  enqueue(&queue, 70);
  enqueue(&queue, 80); // Circular queue is full here

  printf("Front element is %d.\n", front(&queue));
  printf("Rear element is %d.\n", rear(&queue));

  return 0;
}
