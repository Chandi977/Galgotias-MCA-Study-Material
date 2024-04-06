#include<stdio.h>
#include<conio.h>

void main(){
    // write a programs to calculate perimeter of rectangle. take input from the user.
    int a, b, peri;
    printf("Enter length and breadth of the rectangle : \n");
    scanf("%d%d", &a, &b);
    peri = 2 * (a + b);
    printf("The perimeter of rectangle is : %d\n", peri);

    // take number from the user & output its cube
    int c, cube;
    printf("Enter the number to calculate its cube \n");
    scanf("%d", &c);
    cube = c*c*c;
    printf("Your cube is : %d\n", cube);

    // write comments for programs a&b.
}
