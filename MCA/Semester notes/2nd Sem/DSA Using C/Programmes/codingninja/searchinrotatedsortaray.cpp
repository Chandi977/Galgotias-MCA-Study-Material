#include <bits/stdc++.h>
// #include <vector>

using namespace std;

int getPivot(vector<int>&arr, int n){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;

    while(s<e){
        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int _BinarySearch_(vector<int>&arr,int s,int e, int num){
    int startIndex = s;
    int endIndex = e;
    int midIndex = startIndex +(endIndex - startIndex)/2;

    while(startIndex <= endIndex){
        if(arr[midIndex] == num){
            return midIndex;
        } else if(num > arr[midIndex]){
            startIndex = midIndex + 1;
        } else {
            endIndex = midIndex - 1;
        }
        midIndex = startIndex +(endIndex - startIndex)/2;
    }
    return -1;
}

// to find position of key in rotated array
int findPosition(vector<int>&arr , int n, int k){
    int pivot = getPivot(arr,n);
    if( k >= arr[pivot] && k <= arr[n-1]){
        return _BinarySearch_(arr,pivot,n-1,k);
    } else {
        return _BinarySearch_(arr , 0, pivot - 1 , k);
    }
}

int main() {
    vector<int> arr1 = {8, 9, 4, 5};
    int k1 = 3;
    cout << "Position of " << k1 << " in arr1: " << findPosition(arr1, arr1.size(), k1) << endl;

    vector<int> arr2 = {2, 3, 5, 8};
    int k2 = 3;
    cout << "Position of " << k2 << " in arr2: " << findPosition(arr2, arr2.size(), k2) << endl;

    return 0;
}
