#include<conio.h>
#include<stdio.h>

void main() {
    // printing the pattern
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("*");
        }
        printf("\n");
    }

    // check the number is prime or not
    int n, i, flag = 0;
    printf("Enter the positive number: \n");
    scanf("%d", &n);

    if(n == 0 || n == 1){
        flag = 1; // flag is 1 that is showing number is prime. 
    }
    for(i = 2; i<=n/2; ++i){
        if(n%i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("%d is a prime number. ", n);
    } else {
        printf("%d is not a prime number", n);
    }

}