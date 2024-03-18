// Write a program to input seconds and convert it into hours, minutes and seconds. 

#include<stdio.h>

int main() {
    int sec, hour, min,rem_sec;

    printf("Enter second:");
    scanf("%d",&sec);

    hour=sec/(60*60);
    sec %=3600;
    min=sec/60; 
    rem_sec=sec%60;
    printf("sec to hour is: %d\n",hour);
    printf("sec to min is: %d\n",min);
    printf("Seconds: %d",rem_sec);

    return 0;
}