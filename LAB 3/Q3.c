// Write a program to convert temperature in Centigrade(C) to Fahrenheit(F). [HINT : f=1.8c+32] 

#include<stdio.h>

int main() {
    float tempInC, tempInF;

    printf("Enter temperature in centigrade: ");
    scanf("%f",&tempInC);

    tempInF=(1.8*tempInC)+32;
    printf(" temperature in Fahrenheit: %f",tempInF);

    return 0;
}