// Calculate the power of a number using recursion

#include<stdio.h>

int power(int base, int exponential);

int main()
{
  int base, exponential;
  printf("Enter base: ");
  scanf("%d", &base);

  printf("Enter exponential: ");
  scanf("%d", &exponential);


  printf("%d", power(base,exponential));

  return 0;
}

  int power(int base, int exponential)
  {
    if(exponential==0){
      return 1;
    }

    else{
      return base * power(base, exponential - 1);
    }
  }