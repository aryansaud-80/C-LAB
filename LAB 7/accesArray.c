// Write a c program to access array element using a pointer 

#include<stdio.h>

int main() {
    int size;
    printf("Enter the size of an array: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements of an array: \n");
    for(int i=0; i<size; i++){
        scanf(" %d",&arr[i]);
    }

    int* ptr [size];

    for(int i=0; i<size; i++){
        ptr[i] = &arr[i];
    }

    printf("Accessing array using pointer: ");
    for(int i=0; i<size; i++){
        printf("%d ",*ptr[i]);
    }

    return 0;
}