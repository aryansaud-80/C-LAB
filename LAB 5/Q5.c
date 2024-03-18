// WAP to display the Fibonacci series up to nth term using recursive function.

#include<stdio.h>

int fibonacciNumber(int n);

int main(){
  int n;

  printf("Enter n: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++){
    printf("%d ", fibonacciNumber(i));
  }

  return 0;
}

int fibonacciNumber(int n){
  if(n<=1){
    return n;
  }

  else{
    return fibonacciNumber(n - 1) + fibonacciNumber(n - 2);
  }
}