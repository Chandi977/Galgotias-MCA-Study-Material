#include<stdio.h>
#include<conio.h>

void main() {
    int i,j,n;
    printf("Enter the number of lines\n");
    scanf("%d", &n);
    for(i=0; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("%c", (char)(i+64));
        }
        printf("\n");
    }
}