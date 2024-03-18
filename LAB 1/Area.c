//Define PI as the symbolic constant and take radius input from the user and calculate the area of a circle//
 
 #include<stdio.h>

 int main() {
    const float PI=3.14;
    float radius,area;
    printf("Enter radius:");
    scanf("%f",&radius);

    area=PI*radius*radius;
    printf("Area of circle is %.2f",area);
    return 0;
 }