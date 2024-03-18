/*WAP to input 2X3 matrix and display in transpose form that is
3X2 matrix.*/

#include <stdio.h>

void matrixTranpose(int matrix[2][3]);

int main()
{
  int matrix[2][3];

  matrixTranpose(matrix);

  return 0;
}

void matrixTranpose(int matrix[2][3]){

  printf("Enter the element of matrix: ");
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      scanf("%d", &matrix[i][j]);
    }
  }

  printf("The given matrix is:\n");
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  printf("The transpose of matrix is:\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("%d ", matrix[j][i]);
    }

    printf("\n");
    }
  }