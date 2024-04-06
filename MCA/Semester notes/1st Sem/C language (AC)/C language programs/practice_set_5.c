#include<stdio.h>
#include<conio.h>

void sum_of_digit(int n);

void main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    sum_of_digit(n);

}

void sum_of_digit(int n){
    int n, m, count = 0;
    while(n>0){
        m = n % 10;
        count = count + m;
        n = n / 10;
    }
    printf("sum is : %d\n", count);
}