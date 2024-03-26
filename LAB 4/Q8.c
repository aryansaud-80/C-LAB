// Write a program to find the HCF and LCM of two numbers.

#include<stdio.h>

int main() {
  int number1, number2, hcf, lcm;

  printf("Enter a number1: ");
  scanf("%d", &number1);

  printf("Enter a number2: ");
  scanf("%d", &number2);

  for (int i = 1; i <= number1 && i <= number2; i++){
    if(number1%i==0 && number2%i==0){
      hcf = i;
    }
  }

  lcm = (number1 * number2) / hcf;

  printf("The hcf of two number %d and %d is %d\n", number1, number2, hcf);
  printf("The lcm of two number %d and %d is %d\n", number1, number2, lcm);

  return 0;
}