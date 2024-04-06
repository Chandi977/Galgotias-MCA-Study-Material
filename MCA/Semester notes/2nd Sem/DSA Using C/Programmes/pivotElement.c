#include <stdio.h>
#include <string.h>

int getPivot(int arr[], int n){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;

    while(s<e){
        if (arr[mid] >= arr[0]) {
            s = mid + 1;
            /* code here */ 
        }else{
            e = mid;
        }
        mid = s + (e-s)/2;
    
    }
    return s;
}



int main(){
    int arr[] = {8,10,17,1,3};
    printf("Pivot is : %d",getPivot(arr,5));
    return 0;
}