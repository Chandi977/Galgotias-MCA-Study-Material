#include<stdio.h>
#include<conio.h>

void printHello(); // declaration / prototype
int sum(int a,  int b); 
void square(int n);
void _square(int* n);
void swap(int c, int d); 
void _swap(int *c, int *d); 


int main() {

    printHello(); // function call
    int a,b,c = 3,d = 5;
    printf("Enter the first number: \n");
    scanf("%d",&a);
    printf("Enter the second number: \n");
    scanf("%d",&b);
    int s = sum(a,b);
    printf("Your result is : %d\n", s);
    
    // call by value
    int number = 4;
    square(number);
    printf("The number is : %d\n", number);

    // call by reference
    _square(&number);
    printf("The number is : %d\n", number);

    // swap call by value
    printf("before swapping c = %d & d = %d \n", c,d);
    swap(c,d);
    printf("after swapping c = %d & d = %d \n", c,d);

    // swap call by reference
    printf("before swapping c = %d & d = %d \n", c,d);
    _swap(&c,&d);
    printf("after swapping c = %d & d = %d \n", c,d);


    return 0;
}

// function defination
void printHello(){
    printf("Hello World \n");
}
int sum(int a, int b){
    int c = a + b;
    return c;
}

// call by value 
void square(int n){
    n = n * n;
    printf("square is: %d\n",n);
}

// call by reference
void _square(int* n){
    *n = (*n) * (*n);
    printf("square is: %d\n",*n);
}

// swap by call by value but this will not do our swapping
void swap(int c, int d){
    int temp = c;
    c = d;
    d = temp;
}

// swap using call by reference pointer
void _swap(int *c, int *d){
    int temp = *c;
    *c = *d;
    *d = temp;
}

// if (a>b && a>c) ? printf("%d", a) : (b>c ? printf("%d", b) : c>d ? printf("%d", c) :printf("%d",d));