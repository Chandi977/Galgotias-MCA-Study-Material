/**
 * @file firstandlastposition.c
 * @author Chandi Charan Mahato (pappumahato000@gmail.com)
 * @brief Problem statement
            You have been given a sorted array/list 'arr' consisting of ‘n’ elements. 
                You are also given an integer ‘k’.
            Now, your task is to find the first and last occurrence of ‘k’ in 'arr'.
            
            Note :
            1. If ‘k’ is not present in the array, then  the first and the last occurrence will be -1. 
            2. 'arr' may contain duplicate elements.

            Example:
            Input: 'arr' = [0,1,1,5] , 'k' = 1
            Output: 1 2
            Explanation:
            If 'arr' = [0, 1, 1, 5] and 'k' = 1, then the first and last occurrence of 1 will be 1(0 - indexed) and 2.
 
 * @version 0.1
 * @date 2024-03-26
 * 
 * 
 */
#include <stdio.h>
#include <string.h>

int firtsOcc(int arr[],int n, int key){
    int s = 0,e = n - 1; 
    //s = Startindex , e = EndIndex , n = size of array
    int mid = s + (e - s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }else if(key > arr[mid]){
            s = mid + 1;
        }else{
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

int lastOcc(int arr[],int n, int key){
    int s = 0,e = n - 1; 
    //s = Startindex , e = EndIndex , n = size of array
    int mid = s + (e - s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }else if(key > arr[mid]){
            s = mid + 1;
        }else{
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

int main(){
    int arr[12] = {1,2,3,3,3,3,3,3,3,3,5,5};
    printf("first Occurrence of 3 is at Index %d\n",firtsOcc(arr,12,3));
    printf("last Occurrence of 3 is at Index %d\n",lastOcc(arr,12,3));

    return 0;
}

// coding ninja Solution
/*

int firstOcc(vector<int>&arr,int n, int key){
    int s = 0,e = n - 1; 
    //s = Startindex , e = EndIndex , n = size of array
    int mid = s + (e - s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }else if(key > arr[mid]){
            s = mid + 1;
        }else{
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

int lastOcc(vector<int>&arr,int n, int key){
    int s = 0,e = n - 1; 
    //s = Startindex , e = EndIndex , n = size of array
    int mid = s + (e - s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }else if(key > arr[mid]){
            s = mid + 1;
        }else{
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int,int>p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    return p;
}
 

*/