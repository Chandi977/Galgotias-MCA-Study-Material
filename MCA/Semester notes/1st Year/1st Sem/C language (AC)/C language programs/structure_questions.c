#include<conio.h>
#include<stdio.h>
#include<string.h>

struct address{
    int houseno;
    int block;
    char city[50];
    char state[100];
};

void printadd(struct address add);

struct vector{
    int x;
    int y;
};

void calcsum(struct vector v1, struct vector v2, struct vector sum);

struct complex {
    int real;
    int img;
};

void main(){
    struct address adds[5];
    //input
    printf("Enter info for person 1 : \n");
    scanf("%d", &adds[0].houseno);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

    printf("Enter info for person 2 : \n");
    scanf("%d", &adds[1].houseno);
    scanf("%d", &adds[1].block);
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);

    printf("Enter info for person 3 : \n");
    scanf("%d", &adds[3].houseno);
    scanf("%d", &adds[3].block);
    scanf("%s", adds[3].city);
    scanf("%s", adds[3].state);

    printf("Enter info for person 4 : \n");
    scanf("%d", &adds[4].houseno);
    scanf("%d", &adds[4].block);
    scanf("%s", adds[4].city);
    scanf("%s", adds[4].state);

    printf("Enter info for person 5 : \n");
    scanf("%d", &adds[5].houseno);
    scanf("%d", &adds[5].block);
    scanf("%s", adds[5].city);
    scanf("%s", adds[5].state);

    printadd(adds[0]);
    printadd(adds[1]);
    printadd(adds[2]);
    printadd(adds[3]);
    printadd(adds[4]);

    // vectoer implementation
    struct vector v1 = {5, 10};
    struct vector v2 = {3, 7};
    struct vector sum = {0}; 

    calcsum(v1, v2, sum);

    // complex number
    struct complex number1 = {5, 8};
    struct complex *ptr = &number1;
    printf("real part is : %d\n", ptr->real);
    printf("img part is : %d\n", ptr->img);
}

void calcsum(struct vector v1, struct vector v2, struct vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y; 

    printf("Sum of x  is : %d\n", sum.x);
    printf("Sum of y  is : %d\n", sum.y);
}


void printadd(struct address add){
    printf("Address is : %d, %d, %s, %s\n", add.houseno, add.block, add.city, add.state);
}
