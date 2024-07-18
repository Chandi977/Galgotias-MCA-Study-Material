/**
 * @file binarysearch.c
 * @author Chandi Charan Mahato 
 * @brief binary search with sorting an array
 * @version 0.1
 * @date 2024-03-26
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>
#include <string.h>

int _BinarySearch_(int arr[],int arrSize, int num){

    int startIndex = 0;
    int endIndex = arrSize - 1;
    int midIndex = startIndex +(endIndex - startIndex)/2;

    while(startIndex <= endIndex){

        if(arr[midIndex] == num){
            return midIndex;
        }else if(num > arr[midIndex]){
            startIndex = midIndex + 1;
        }else{
            endIndex = midIndex - 1;
        }
        midIndex = startIndex +(endIndex - startIndex)/2;
    }
    return -1;
}

int main(){
    int size;
    printf("Enter the size of array :");
    scanf("%d",&size);

    // inserting and assigning array size.
    int arr[size];
    printf("Enter values in array :");
    for(int i = 0; i< size; i++){
        scanf("%d",&arr[i]);
    }

    // sorting an array
    int temp = 0;
    for (int i = 0; i < size; i++) {     
        for (int j = i+1; j < size; j++) {     
           if(arr[i] > arr[j]) {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }     
    }

    // user input number
    int num;
    printf("Enter a number to search :");
    scanf("%d",&num);

    // calling binary search to find the number
    int result = _BinarySearch_(arr,size,num);
    printf("Index of %d is %d",num,result);
    return 0;
}