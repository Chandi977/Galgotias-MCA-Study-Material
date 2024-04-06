#include <stdio.h>

int sum(int,int);
void main(){
    int s = 0;
    int (*ptr)(int,int)=&sum; //Declaration of a function pointer to
    s = (*ptr)(1,2);
    printf("sum = %d",s);
}
int sum(int a, int b){
    return a+b;
}