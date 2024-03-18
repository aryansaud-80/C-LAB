// WAP to find largest of 3 numbers. 


#include<stdio.h>

int main() {
    float a,b,c;
    printf("Enter a,b and c:");
    scanf("%f %f %f",&a,&b,&c);

   

    if (a>b && a>c) {
        printf("a is greater ");
    }

    else if (b>a && b>c) {
        printf("b is greater ");
    }

    else if (c>a && c>b) {
        printf("c is greater");
    }

    else if (a==b && b==c) {
        printf("All number are equal");
    }
   

    return 0;
}