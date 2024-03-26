// Write a program to check if the given number is palindrome or not

#include <stdio.h>

int main()
{
    int num, new_number = 0, reminder = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = num; i >0; i = i / 10)
    {
        reminder = i % 10;
        new_number = new_number * 10 + reminder;
    }

    if (new_number == num)
    {
        printf("The number %d is palindrome number", num);
    }

    else
    {
        printf("The number %d is  not palindrome number", num);
    }

    return 0;
}