#include <iostream>
using namespace std;

// Function declaration
int flipBits(int* arr, int n);

int main() {
    // Test cases
    int arr1[] = {1, 1, 0, 0, 1};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Test Case 1: " << flipBits(arr1, n1) << endl;

    int arr2[] = {0, 0, 0, 0, 0};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Test Case 2: " << flipBits(arr2, n2) << endl;

    int arr3[] = {1, 1, 1, 1, 1};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << "Test Case 3: " << flipBits(arr3, n3) << endl;

    return 0;
}

// Function definition
int flipBits(int* arr, int n) {
    // WRITE YOUR CODE HERE
    int cntone = 0;
    for(int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            arr[i] = 1;
        } else {
            cntone++;
            arr[i] = -1;
        }
    }
    int maxi = 0;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        if(sum < 0) {
            sum = 0;
        }
        if(sum >= maxi) {
            maxi = sum;
        }
    }
    return maxi + cntone;
}

