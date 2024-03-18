//WAP to take two integer number as input from the user and show the sum of the numbers as a result//

#include<stdio.h>
    int main() {
        int a,b,sum;
        printf("Enter a and b:");
        scanf("%d %d",&a,&b);

        sum=a+b;
        printf("The sum of a and b is %d",sum);
        return 0;
    }