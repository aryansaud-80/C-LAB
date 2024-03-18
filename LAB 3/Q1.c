// WAP to input name,age and salary and print them on screen.

#include <stdio.h>

int main()
{
    char name[] = "Aryan";
    int age, s;
    printf("%s\n", name);

    printf("Enter age:");
    scanf("%d", &age);
    printf("%d\n", age);

    printf("Enter salary:");
    scanf("%d", &s);
    printf("%d\n", s);

    return 0;
}