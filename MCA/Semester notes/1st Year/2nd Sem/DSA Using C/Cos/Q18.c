#include <stdio.h>
#include <stdlib.h>

// Structure to represent an edge in the graph
struct Edge {
    int src, dest, weight;
};

// Structure to represent a subset for union-find
struct Subset {
    int parent, rank;
};

// Function to compare edges based on weight
int compareEdges(const void* a, const void* b) {
    struct Edge* edge1 = (struct Edge*)a;
    struct Edge* edge2 = (struct Edge*)b;
    return edge1->weight - edge2->weight;
}

// Find operation for union-find
int find(struct Subset subsets[], int i) {
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
    return subsets[i].parent;
}

// Union operation for union-find
void unionSets(struct Subset subsets[], int x, int y) {
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);
    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
    else {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}

// Function to find MST using Kruskal's algorithm
void kruskalMST(struct Edge edges[], int V, int E) {
    // Sort edges based on weight
    qsort(edges, E, sizeof(struct Edge), compareEdges);

    struct Edge result[V]; // To store the result MST
    struct Subset subsets[V];
    for (int i = 0; i < V; ++i) {
        subsets[i].parent = i;
        subsets[i].rank = 0;
    }

    int e = 0, i = 0;
    while (e < V - 1 && i < E) {
        struct Edge nextEdge = edges[i++];
        int x = find(subsets, nextEdge.src);
        int y = find(subsets, nextEdge.dest);
        if (x != y) {
            result[e++] = nextEdge;
            unionSets(subsets, x, y);
        }
    }

    // Print the MST
    printf("Minimum Spanning Tree:\n");
    for (int i = 0; i < e; ++i) {
        printf("%d - %d  Weight: %d\n", result[i].src, result[i].dest, result[i].weight);
    }
}

int main() {
    int V = 4; // Number of vertices
    int E = 5; // Number of edges
    struct Edge edges[] = {{0, 1, 10}, {0, 2, 6}, {0, 3, 5}, {1, 3, 15}, {2, 3, 4}};

    kruskalMST(edges, V, E);

    return 0;
}
