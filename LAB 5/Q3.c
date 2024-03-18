/*WAP a program to input two matrices, add two matrices and
display in proper format*/

#include<stdio.h>

void matrixSum(int matrix1[3][2], int matrix2[3][2], int sum[3][2]);

int main() {
  int matrix1[3][2], matrix2[3][2], sum[3][2];

  matrixSum(matrix1, matrix2, sum);

  return 0;
}

void matrixSum(int matrix1[3][2], int matrix2[3][2], int sum[3][2]){
  int i, j;

  printf("Enter matrix1: \n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 2; j++)
    {
      scanf("%d", &matrix1[i][j]);
    }
  }

  printf("Enter matrix2: \n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 2; j++)
    {
      scanf("%d", &matrix2[i][j]);
    }
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      sum[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }

  printf("\n");

  printf("The sum of matrix1 and matrix2 is: \n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("%d\t", sum[i][j]);
    }
    printf("\n");

  }
}