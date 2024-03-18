// Write a program to enter the number of days and convert it into years,months and days.

#include <stdio.h>

int main()
{
    int days;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    int years = days / 365;
    int remainingdays = (days % 365);
    int months = remainingdays / 30;
    remainingdays %= 30;

    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Days: %d\n", remainingdays);

    return 0;
}
