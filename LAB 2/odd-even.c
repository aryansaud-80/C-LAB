// WAP to find whether the number is odd or even using ternery operator 

#include<stdio.h>

int main() {
    int num;
    printf("Enter number:");
    scanf("%d",&num);

    if(num%2==0) {
        printf("The num is even");
    }

    else{
        printf("The num is odd");
    }

    return 0;

}