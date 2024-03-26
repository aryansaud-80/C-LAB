/*WAP to display the following Fibonacci series : 1 1 2 3 5…..
upto nth term.*/

#include<stdio.h>

int main() {
  int third_term, nth_term, first_term = 0, second_term = 1;

  printf("Enter the nth terms: ");
  scanf("%d", &nth_term);

    for(int i=1; i<=nth_term; i++){

      printf("%d ", first_term);
      third_term = first_term + second_term;
      first_term = second_term;
      second_term = third_term;
  }

  return 0;
}