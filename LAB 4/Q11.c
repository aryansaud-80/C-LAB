// WAP to display multiplication tables upto 10.

#include<stdio.h>

int main() {
  int multiplication;

  for (int i = 1; i <= 10; i++){

    printf("\nMultipliction table of %d\n", i);

    for (int j = 1; j <= 10; j++){
      multiplication = i * j;
      printf("%d*%d=%d\n",i,j, multiplication);
    }

  }

  return 0;
}