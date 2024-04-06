#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the size of matrix A and B : m X n value.");
    scanf("%d %d",&a, &b);
    int matrix1[a][b], matrix2[a][b];

    int result[a][b];
    int i, j;

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < a; i++) {
        for(j = 0; j < b; j++) {
            printf("Enter element (%d,%d): ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nEnter elements of second matrix:\n");
    for(i = 0; i < a; i++) {
        for(j = 0; j < b; j++) {
            printf("Enter element (%d,%d): ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Adding matrices
    for(i = 0; i < a; i++) {
        for(j = 0; j < b; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Displaying the result
    printf("\nSum of matrices:\n");
    for(i = 0; i < a; i++) {
        for(j = 0; j < b; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
