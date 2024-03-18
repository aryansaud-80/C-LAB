// Write a c program to find largest number using Dynamic Memory Allocation 

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *number;
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);

    number = (int *)(malloc(size *sizeof (int)));

    if(number == NULL){
        printf("Memory allocation is failed!");
        return 0;
    }

    printf("Enter the %d integer: \n",size);
    for(int i=0; i<size; i++){
        scanf(" %d",&number[i]);
    }

    int largest = number[1];

    for(int i=0; i<size; i++){
        if(number[i]>largest){
            largest = number[i];
        }
    }

    printf("The largest number is %d",largest);

    free(number);
    return 0;
}