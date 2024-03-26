// WAP to display all the prime numbers from 1 to 100

#include<stdio.h>

int main() {

  for (int i = 2; i <= 100; i++){
    int isPrime = 1;

  for (int j = 2; j < i; j++){

      if(i%j==0){
        isPrime = 0;
      }

    }

    if(isPrime==1){
      printf("%d ", i);
    }

  }
  return 0;
}
