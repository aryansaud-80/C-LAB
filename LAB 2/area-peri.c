// WAP to find the area and perimeter of the rectangle

#include<stdio.h>

int main() {
    float length, breadth, area, perimeter;
    printf("Enter length:");
    scanf("%f",&length);

    printf("Enter breadth:");
    scanf("%f",&breadth);

    area = length*breadth;
    printf("The area of rectangle is %f\n",area);

    perimeter = 2*(length+breadth);
    printf("The perimeter of rectangle %f",perimeter);
    return 0;
}