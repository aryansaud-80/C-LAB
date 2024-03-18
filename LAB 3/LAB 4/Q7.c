// Write  a program to convert from binary number system to decimal number system 

#include<stdio.h>

int main() {
    int binary_num, decimal_num=0, base=1, reminder;
    printf("Enter a binary number: ");
    scanf("%d",&binary_num);

    while(binary_num>0){
        reminder= binary_num%10;
        decimal_num += reminder*base;
        binary_num /= 10;
        base *= 2;
    }

    printf("%d",decimal_num);
    return 0;
}
