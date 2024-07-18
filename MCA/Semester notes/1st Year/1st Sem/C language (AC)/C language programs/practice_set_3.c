#include<conio.h>
#include<stdio.h>

void main(){
    // given number is armstrong or not.
    int num, var, rem, sum = 0, a = 0;

    printf("Enter an integer : ");
    scanf("%d", &num);

    var  = num;
    while(var != 0){
        var = var / 10;
        ++a;
    }

    var = num;
    while(var > 0){
        rem = var % 10;
        sum = sum + pow(rem, a);
        var = var / 10;
    }
    if(sum == num){
        printf("%d is an armstrong number \n", num);
    } else {
        printf("%d is an not an armstrong number \n", num);
    }

    // check the given number is natural or not.
        int a ;
        printf("Enter any number : \n");
        scanf("%d", &a);
        if(a>0){
            printf("%d is the natural number \n", a);
        } else {
            printf("%d is not the natural number \n", a);
        }

    
}

