/*Take one integer input from the user.Check whether the number is divisible by 2 and 5. If number is divisible by both 2 and 5
increment the number, if number is divided by one of the 2 and 5 decrement the number else leave the number it is and print */

#include<stdio.h>

int main() {
    int num;
    printf("Enter num: ");
    scanf("%d",&num);

    if (num%2==0 && num%5 ==0) {
        num++;
        printf("num become %d",num);
    }

    else if(num%2 ==0 || num%5==0){
         num--;
         printf("num become %d",num);
    }

    else {
        printf("num is %d",num);
    }

    return 0;
}
