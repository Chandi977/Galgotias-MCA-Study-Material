// Transpose of 2D array.
#include <stdio.h>
#include <conio.h>
#define N 50

int main()
{
  int m, n, i, j, array[N][N], transpose[N][N];

  printf("Enter rows and columns : ");
  scanf("%d%d", &m, &n);

  printf("Enter elements of the 2D array : \n");
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      scanf("%d", &array[i][j]);

  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      transpose[j][i] = array[i][j];

  printf("Transpose of the 2D array :\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
      printf("%d ", transpose[i][j]);
    printf("\n");
  }
  return 0;
}