#include<stdio.h>
#include<conio.h>

void main(){
    // average of three numbers.
    int a, b, c, avg;
    printf("Enter three numbers to find its average : \n");
    scanf("%d%d%d", &a, &b, &c);
    avg = (a+b+c)/3;
    printf("Average : %d\n", avg);

    // check if given character is digit or not.
    char ch;
    printf("Enter the character : \n");
    scanf("%c", &ch);
    if(ch>='0' && ch<='9'){
        printf("%c is digit : \n", ch);
    } else {
        printf("%c is not digit : \n", ch);
    }

    // print the smallest number of two numbers.
    int d, e;
    printf("Enter the two numbers : \n");
    scanf("%d%d", &d, &e);
    if(d>e){
        printf("%d is greater\n", d);
    } else {
        printf("%d is greater\n", e);
    }
}