// WAP to find the given number is divisible by 5 and not by 10 using the nested if else statement 

#include<stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num%5==0){
        if(num%10 !=0){
            printf("The number %d is divisible by 5 but not by 10",num);
        }

        else{
            printf("The number %d is divisible by both 5 and 10",num);
        }
    }

    else{
        printf("The number %d is not divisible by 5",num);
    }

    return 0;
}