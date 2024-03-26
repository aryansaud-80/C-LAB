// WAP to calculate and display the sum of the digits present in the given number 

#include<stdio.h>

int main() {
    int n, sum=0, rem;
    printf("Enter number: ");
    scanf("%d",&n);

    for(int i=n; i>0; i=i/10){
        rem=i%10;
        sum=sum+rem;
    }
    printf("%d",sum);
    return 0;
}