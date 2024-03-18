// WAP to calculate and display real roots of a quadratic equation.

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, determinant;
    double root1, root2;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    determinant = pow(b,2) - 4 * a * c;

    if (determinant > 0)
    {
        root1 = (-b + sqrt(determinant)) / (2 * a);
        root2 = (-b - sqrt(determinant)) / (2 * a);

        printf("The roots are real and they are  %.2lf and %.2lf\n", root1, root2);
    }

    else if (determinant == 0)
    {
       root1=root2=-b/(2*a);
       printf("The root are equal and real i.e. %.lf",root1) ;
    }

    else{
        printf("The roots are imaginary");
    }

    return 0;
}