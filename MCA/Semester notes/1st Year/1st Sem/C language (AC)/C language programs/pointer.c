#include<stdio.h>
#include<conio.h>

void dowork(int a, int b, int *sum, int *prod, int *avg);

int main(){
    int age = 20;
    int *ptr = &age;
    int _age = *ptr;

    printf("%d\n", _age);
    
    // address printing
    printf("%p\n", &age);
    printf("%u\n", &age);
    printf("%u\n", ptr);
    printf("%u\n", &ptr);

    // values printing 
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));

    // some examples of pointers 
    int x;
    int *ptr1;

    ptr1 = &x;
    *ptr1 = 0;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr1);

    *ptr1 += 5;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr1);

    (*ptr1)++;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr1);

    // pointer to pointer
    float price = 100.00;
    float *ptr2 = &price;
    float **pptr = &ptr2; 

    printf("%d\n", **pptr);

    // do work function
    int a = 5, b = 6;
    int sum, prod, avg;
    dowork(a, b, &sum, &prod, &avg);

    printf("sum = %d, prod = %d, avg = %d\n", sum, prod, avg);
    return 0;

    return 0;
}

void dowork(int a, int b, int *sum, int *prod, int *avg){
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}