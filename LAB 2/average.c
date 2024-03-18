// Take the population of 3 different districts and find the average population without losing the data. Lastly, perform the explicit type conversion to find the number of people

#include<stdio.h>
int main() {
    int kailali, Kanchnpur,Doti;
    printf("Enter the population of kailali:");
    scanf("%d",&kailali);

    printf("Enter the population of kanchanpur:");
    scanf("%d",&Kanchnpur);

    printf("Enter the population of Doti:");
    scanf("%d",&Doti);

    float average=(kailali+Kanchnpur+Doti)/3;
    printf("the average of 3 ditrict: %f",average);

    int totalpeople=(int)average;
    printf("\n the total people is: %d",totalpeople);

    return 0;

    
}