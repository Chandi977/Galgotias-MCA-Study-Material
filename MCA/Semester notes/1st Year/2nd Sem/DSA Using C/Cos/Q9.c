// DFS using linked list
#include <stdio.h>
#include <stdlib.h>

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

// Function to perform DFS traversal of the graph
void DFSUtil(struct Graph* graph, int v, int* visited) {
    // Mark the current vertex as visited and print it
    visited[v] = 1;
    printf("%d ", v);

    // Recur for all the vertices adjacent to this vertex
    struct GraphNode* temp = graph->adjList[v];
    while (temp != NULL) {
        int adjVertex = temp->vertex;
        if (!visited[adjVertex])
            DFSUtil(graph, adjVertex, visited);
        temp = temp->next;
    }
}

// Function to perform DFS traversal of the graph starting from vertex v
void DFS(struct Graph* graph, int v) {
    // Create a boolean array to track visited vertices
    int* visited = (int*)malloc(graph->numVertices * sizeof(int));
    if (visited == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    for (int i = 0; i < graph->numVertices; ++i)
        visited[i] = 0;

    // Call the recursive DFS function
    printf("Depth First Traversal starting from vertex %d: ", v);
    DFSUtil(graph, v, visited);
    printf("\n");

    // Free allocated memory
    free(visited);
}

// Main function
int main() {
    struct Graph* graph = createGraph(4);

    // Add edges to the graph
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 3);

    // Perform DFS traversal starting from vertex 0
    DFS(graph, 0);

    // Free allocated memory
    free(graph->adjList);
    free(graph);

    return 0;
}
