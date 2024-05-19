// Linear Search
#include <stdio.h>
// Function to perform linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) {
            return i; // Return the index of the element if found
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    int arr[] = {12, 45, 78, 23, 56, 89};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 56;

    // Perform linear search
    int index = linearSearch(arr, n, key);

    // Print the result
    if (index != -1) {
        printf("Element %d found at index %d\n", key, index);
    } else {
        printf("Element %d not found\n", key);
    }

    return 0;
}
