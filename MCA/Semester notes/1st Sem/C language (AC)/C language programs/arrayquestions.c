#include<conio.h>
#include<stdio.h>

int countadd(int arr[], int n);
void reverse(int arr[], int n);
void printarr(int arr[], int n);
void storetables(int arr[][], int n, int m, int number);

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    printf("%d\n", countadd(arr, 7));

    reverse(arr, 7);
    printarr(arr, 7);

    //print fibonacci series using array
    int n;
    printf("Enter the value of n (n>2)");
    scanf("%d", &n);
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    printf("%d\t%d\t", fib[0], fib[1]);
    for(int i = 0; i < n; i++){
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d \t", fib[i]);
    }
    printf("\n");

    // print tables using array 
    int tables[2][10];
    storetables(tables, 0, 10, 2);
    storetables(tables, 1, 10, 3);

    for(int i=0; i<10; i++){
        printf("%d\t", tables[0][i]);
    }
    printf("\n");
    for(int i=0; i<10; i++){
        printf("%d\t", tables[1][i]);
    }

    return 0;
}

int countadd(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]%2 != 0){
            count++;
        }
    }
    return count;
}

void printarr(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

// this function is call by reference.
void reverse(int arr[], int n){
    for(int i=0; i<n/2; i++){
        int firstvalue = arr[i];
        int secondvalue = arr[n-i-1];
        arr[i] = secondvalue;
        arr[n-i-1] = firstvalue; 
    }
}

// function to print the table in array
void storetables(int arr[][], int n, int m, int number){
    for(int i=0; i<m; i++){
        arr[n][i] = number * (i+1);
    }
}
