/*Take input and store in integer variable "a" and assign a value to integer "x" after both
"Increment prefix" and "Increment postfix" and print the value of "a" and "x" for both case*/

#include<stdio.h>

int main() {
    int a,x;
    printf("Enter the value of a:");
    scanf("%d",&a);

    x=++a; // Increment prefx//
    printf("The value of x is %d\n",x);
    printf("The value of a is %d\n",a);
      
    x=a++; // Increment postfix//
    printf("The value of x is %d\n",x);
    printf("The value of a is %d\n",a);

    return 0;
}