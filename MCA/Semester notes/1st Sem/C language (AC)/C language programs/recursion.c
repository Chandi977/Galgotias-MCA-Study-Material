#include<conio.h>
#include<stdio.h>

void printhw(int count);
int sumofnaturalnumber(int n);
int factorialofnumber(int n);
float converttemprature(float celsius);
int fibonacci(int n);

void main(){
    printhw(10);
    printf("Sum is: %d\n",sumofnaturalnumber(5));
    printf("Factorial is %d\n", factorialofnumber(14));
    printf("farhenite value is: %f\n", converttemprature(0));
    printf("fibonacci of :  %d  \n ", fibonacci(6));
}

// recursion for hello world
void printhw(int count){
    if(count == 0){
        return;
    }
    printf("Hello World \n ");
    printhw(count-1);
}
// sum of first natural numbers
int sumofnaturalnumber(int n){
    if(n == 0){
        return 1;
    }
    int sumNm1 = sumofnaturalnumber(n-1);
    int sumN = sumNm1 + n;
    return sumN;
}
// factorial of the number 
int factorialofnumber(int n){
    if(n == 0){
        return 1;
    }
    int fact1 = factorialofnumber(n-1);
    int fact =  fact1 * n;
    return fact;
}
// celsius to fahrenheit
float converttemprature(float celsius){
    float far = celsius * (9.0/5.0) +32;
    return far;
}
// fibonacci sequence
int fibonacci(int n){
        if(n == 0){
            return 0;
        }
        if(n==1){
            return 1;
        }
    int fibo1 = fibonacci(n-1) ;
    int fibo2 = fibonacci(n-2) ;
    int fibo = fibo1 + fibo2;
    return fibo;
}