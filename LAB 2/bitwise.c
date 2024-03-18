// WAP to swap two numbers using a bitwise operator

#include <stdio.h>



int main()
{
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    printf("Before swapping: x= %d and y= %d\n", x, y);

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    
    printf("After swapping: x=%d and y=%d\n", x, y);

    return 0;
}

