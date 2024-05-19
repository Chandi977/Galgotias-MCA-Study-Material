// BFS using linkedlist
#include <stdio.h>
#include <stdlib.h>
// Structure for queue node
struct QueueNode {
    int data;
    struct QueueNode* next;
};
// Structure for the queue
struct Queue {
    struct QueueNode* front; // Front of the queue
    struct QueueNode* rear;  // Rear of the queue
};
// Structure for graph node
struct GraphNode {
    int vertex;
    struct GraphNode* next;
};
// Structure for the graph
struct Graph {
    int numVertices;
    struct GraphNode** adjList;
};
// Function to create a new graph node
struct GraphNode* createGraphNode(int v) {
    struct GraphNode* newNode = (struct GraphNode*)malloc(sizeof(struct GraphNode));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}
// Function to create a graph with 'numVertices' vertices
struct Graph* createGraph(int numVertices) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    if (graph == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    graph->numVertices = numVertices;
    graph->adjList = (struct GraphNode**)malloc(numVertices * sizeof(struct GraphNode*));
    if (graph->adjList == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    for (int i = 0; i < numVertices; ++i)
        graph->adjList[i] = NULL;
    return graph;
}
// Function to add an edge to the graph
void addEdge(struct Graph* graph, int src, int dest) {
    // Add an edge from src to dest
    struct GraphNode* newNode = createGraphNode(dest);
    newNode->next = graph->adjList[src];
    graph->adjList[src] = newNode;

    // For undirected graph, add an edge from dest to src as well
    newNode = createGraphNode(src);
    newNode->next = graph->adjList[dest];
    graph->adjList[dest] = newNode;
}
// Function to create a new queue node
struct QueueNode* createQueueNode(int data) {
    struct QueueNode* newNode = (struct QueueNode*)malloc(sizeof(struct QueueNode));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
// Function to create an empty queue
struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    if (queue == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    queue->front = queue->rear = NULL;
    return queue;
}
// Function to check if the queue is empty
int isEmpty(struct Queue* queue) {
    return (queue->front == NULL);
}
// Function to enqueue an element into the queue
void enqueue(struct Queue* queue, int data) {
    struct QueueNode* newNode = createQueueNode(data);
    if (isEmpty(queue)) {
        queue->front = queue->rear = newNode;
    } else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}
// Function to dequeue an element from the queue
int dequeue(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        exit(1);
    }
    struct QueueNode* temp = queue->front;
    int data = temp->data;
    queue->front = queue->front->next;
    if (queue->front == NULL)
        queue->rear = NULL;
    free(temp);
    return data;
}
// Function to perform BFS traversal of the graph
void BFS(struct Graph* graph, int startVertex) {
    // Create a boolean array to track visited vertices
    int* visited = (int*)malloc(graph->numVertices * sizeof(int));
    if (visited == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    for (int i = 0; i < graph->numVertices; ++i)
        visited[i] = 0;
    // Create a queue for BFS
    struct Queue* queue = createQueue();
    // Mark the current vertex as visited and enqueue it
    visited[startVertex] = 1;
    enqueue(queue, startVertex);
    printf("Breadth First Traversal starting from vertex %d: ", startVertex);
    while (!isEmpty(queue)) {
        // Dequeue a vertex from the queue and print it
        int currentVertex = dequeue(queue);
        printf("%d ", currentVertex);
        // Get all adjacent vertices of the dequeued vertex. If an adjacent vertex
        // has not been visited, mark it as visited and enqueue it.
        struct GraphNode* temp = graph->adjList[currentVertex];
        while (temp != NULL) {
            int adjVertex = temp->vertex;
            if (!visited[adjVertex]) {
                visited[adjVertex] = 1;
                enqueue(queue, adjVertex);
            }
            temp = temp->next;
        }
    }
    printf("\n");
    // Free allocated memory
    free(visited);
    free(queue);
}
// Main function
int main() {
    struct Graph* graph = createGraph(4);
    // Add edges to the graph
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 3);
    // Perform BFS traversal starting from vertex 0
    BFS(graph, 0);
    // Free allocated memory
    free(graph->adjList);
    free(graph);

    return 0;
}
