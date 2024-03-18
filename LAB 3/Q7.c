// WAP which read any two integer value from the user and calculate sum, difference and product using switch statement.

#include <stdio.h>

int main()
{
    int number1, number2;
    char operator;

    printf("Enter number1: ");
    scanf("%d", &number1);


    printf("Enter number2: ");
    scanf("%d", &number2);


    printf("Enter a operator(+, -, *): ");
    scanf(" %c", &operator);

    
    switch(operator)
    {
    case '+':
        printf("sum=%d", number1 + number2);
        break;

    case '-':
        printf("difference=%d", number1 - number2);
        break;

    case '*':
        printf("product=%d", number1 * number2);
        break;

    default:
        printf("Invalid operator!");
    }

    return 0;
}