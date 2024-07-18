// C program to add and multiply two compatible matrices
#include <stdio.h>
#include <conio.h>
#define N 50
int main(){
    int a[N][N], b[N][N], c[N][N] = {0};
    int i, j, k, m, n, p, q;
    printf("Enter no. of rows and columns in matrix A: \n");
    scanf("%d%d", &m, &n);
    printf("Enter no. of rows and columns in matrix B: \n");
    scanf("%d%d", &p, &q);
    if (n != p){
        printf("2D array Multiplication is not possible");
        return;
    }else{
        printf("Enter elements of 2D array A: \n");
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                scanf("%d", &a[i][j]);

        printf("Enter elements of 2D Array B: \n");
        for (i = 0; i < p; i++)
            for (j = 0; j < q; j++)
                scanf("%d", &b[i][j]);

        // Array  Multiplication
        for (i = 0; i < m; i++)
            for (j = 0; j < q; j++)
                for (k = 0; k < p; k++)
                    c[i][j] += a[i][k] * b[k][j];

        printf("\nResult of 2D array Multiplication:\n");
        for (i = 0; i < m; i++){
            for(j=0;j<q;j++){   
                printf("%d ", c[i][j]); 
            }
            printf("\n");
        }
    }
    return 0;
}
