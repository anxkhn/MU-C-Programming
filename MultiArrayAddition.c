#include <stdio.h>
int main() {
  int r, c, a[3][3], b[3][3], sum[3][3], i, j;

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < 3; ++i)
    for (j = 0; j < 3; ++j)
    {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < 3; ++i)
    for (j = 0; j < 3; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

  // adding two matrices
  for (i = 0; i < 3; ++i)
    for (j = 0; j < 3; ++j)
    {
      sum[i][j] = a[i][j] + b[i][j];
    }

  // printing the result
  printf("\nSum of two matrices: \n");
  for (i = 0; i < 3; ++i)
  {
    for (j = 0; j < 3; ++j)
    {
      printf("%d ", sum[i][j]);
    }
    printf("\n");
  }
  return 0;
}
