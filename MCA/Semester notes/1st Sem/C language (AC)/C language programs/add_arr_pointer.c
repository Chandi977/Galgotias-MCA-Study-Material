#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int *ptr = arr; // Pointer pointing to the first element of the array
    int sum = 0;

    // Add the contents of the array using pointer arithmetic
    for (int i = 0; i < n; i++) {
        sum += *ptr; // Dereference the pointer to get the value at the current position
        ptr++; // Move the pointer to the next element
    }

    printf("Sum of the elements of the array: %d\n", sum);

    return 0;
}
