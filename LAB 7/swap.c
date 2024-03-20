// Write a c program to swap element using call by reference

#include<stdio.h>

void swap(int *a, int *b);

int main() {
    int number_1, number_2;
    printf("Enter number 1: ");
    scanf(" %d",&number_1);

    printf("Enter number 2: ");
    scanf(" %d",&number_2);

    printf("The value before swap:\n");
    printf("Number_1: %d\nNumber_2: %d\n",number_1, number_2);

    swap(&number_1,&number_2);
    printf("The value after swap:\n");
    printf("Number_1: %d\nNumber_2: %d\n",number_1, number_2);


    return 0;
}


void swap(int *a, int *b){
    *a = *a ^ *b;
    *b=  *a ^ *b;
    *a = *a ^ *b;
}