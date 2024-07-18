#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define ROWS 3
#define COLS 3

void addMatrices(int mat1[][COLS], int mat2[][COLS], int result[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void displayMatrix(int matrix[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
 void main() {
    int *ptr;
    int *ptr = (int *)malloc (sizeof(int));
    *ptr = 10;
    printf("%d", *ptr);
    free(ptr);
    printf("a = %d\n", *ptr); 
    // {
    //     int a = 9;
    //     ptr = &a;
    //     printf("a = %d\n", *ptr); // should print "
    // }
    // printf("a = %d\n", *ptr);  
    // int arr[5][5] = {0};
    // printf("%d",arr[3][4]);

    // int matrix1[ROWS][COLS] = {{1, 2, 3},
    //                             {4, 5, 6},
    //                             {7, 8, 9}};
    // int matrix2[ROWS][COLS] = {{9, 8, 7},
    //                             {6, 5, 4},
    //                             {3, 2, 1}};
    // int result[ROWS][COLS];

    // // Adding matrices
    // addMatrices(matrix1, matrix2, result);

    // // Displaying the result
    // printf("Matrix 1:\n");
    // displayMatrix(matrix1);

    // printf("\nMatrix 2:\n");
    // displayMatrix(matrix2);

    // printf("\nSum of the matrices:\n");
    // displayMatrix(result);
 }