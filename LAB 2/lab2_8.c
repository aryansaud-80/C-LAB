// WAP to demonstrate the local, global and static vraibale 

// Global variable
#include<stdio.h>
float G= 6.62;

int main() {
   
//    local variable 

int a;
printf("Enter a:");
scanf("%d",&a);

// static variable
static int b;
printf("Enter b:");
scanf("%d",&b);

printf("G is global variable %f\n",G);
printf("a is local variable %d\n",a);
printf("b is static variable %d\n",b);

return 0;
}

