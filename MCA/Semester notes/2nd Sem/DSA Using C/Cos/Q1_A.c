// Addition of 2D array
#include <stdio.h>
#include <conio.h>
#define N 50
int main(){
    int a[N][N], b[N][N], c[N][N] = {0};
    int i, j, m, n, p, q;
    printf("Enter no. of rows and columns in matrix A: \n");
    scanf("%d%d", &m, &n);
    printf("Enter no. of rows and columns in matrix B: \n");
    scanf("%d%d", &p, &q);
    if (m != p || n != q){
        printf("2D array Addition is not possible");
        return 0 ;
    }else{
        printf("Enter elements of 2D array A: \n");
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                scanf("%d", &a[i][j]);

        printf("Enter elements of 2D Array B: \n");
        for (i = 0; i < p; i++)
            for (j = 0; j < q; j++)
                scanf("%d", &b[i][j]);

        // Matrix Addition
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                c[i][j] = a[i][j] + b[i][j];

        printf("\nResult of 2D array Addition:\n");
        for (i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
