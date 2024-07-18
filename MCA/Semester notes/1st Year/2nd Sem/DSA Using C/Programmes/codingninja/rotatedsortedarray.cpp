#include <iostream>

int search(int* arr, int n, int key) {
    int startIndex = 0;
    int endIndex = n - 1;
    
    while(startIndex <= endIndex){
        int midIndex = startIndex + (endIndex - startIndex) / 2;
        if(arr[midIndex] == key){
            return midIndex;
        }else if(arr[startIndex] <= arr[midIndex]){
            if(arr[startIndex] <= key && key < arr[midIndex]){
                endIndex = midIndex - 1;
            }else{
                startIndex = midIndex + 1;
            }
        }else{
            if(arr[midIndex] <= key && key <= arr[endIndex]){
                startIndex = midIndex + 1;
            }else{
                endIndex = midIndex - 1;
            }
        }
    }
    return -1;
}

int main() {
    int arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;
    int index = search(arr, n, key);
    if (index != -1) {
        std::cout << "Element found at index: " << index << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }
    return 0;
}
