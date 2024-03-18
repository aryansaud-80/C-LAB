// WAP to find the 1’s and 2’s complement of the binary number.

#include <stdio.h>

void onesComplement(int binary[], int n);
void twosComplement(int binary[], int n);

int main()
{
  int binary[50];
  int n;

  printf("Enter number of bits: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    printf("Enter binary number(%d bit): ",i+1);
    scanf("%d", &binary[i]);
  }

  printf("The given binary number is: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d", binary[i]);
  }

  onesComplement(binary,n);
  printf("\nones complement of given binary number is: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d", binary[i]);
  }

  twosComplement(binary, n);

  printf("\nTwos complement of given binary number is: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d", binary[i]);
  }

  return 0;
}

void onesComplement(int binary[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (binary[i] == 0)
    {
      binary[i] = 1;
    }

    else
    {
      binary[i] = 0;
    }
  }
}

void twosComplement(int binary[], int n)
{
  int carry = 1;
  for (int i = n - 1; i >= 0; i--)
  {
    binary[i] += carry;
    if(binary[i]>1){
      carry= 1;
    }

    else{
      carry= 0;
    }
    binary[i] %= 2;
  }
}
