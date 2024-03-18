// Write a program to convert from decimal number system to binary

#include <stdio.h>

int main()
{
    int decimal_num, binary_num = 0, reminder, base=1;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal_num);

    while(decimal_num>0) 
    {
        reminder = decimal_num % 2;
        binary_num += reminder*base;
        decimal_num= decimal_num/2;
        base *=10;
    }
    
    printf("%d", binary_num);
    return 0;
}