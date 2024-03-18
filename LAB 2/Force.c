// WAP to calculate the gravitational force between two masses. Declare the mass as double data type and Gravitational Constant(G) as constant 

#include<stdio.h>
#include<math.h>

   int main() {
       const double G=6.67 *pow(10,-11);
       double mass1, mass2, distance, force;

       printf("Enter mass1 and mass2: ");
       scanf("%lf %lf",&mass1,&mass2);

       printf("Enter distance between them: ");
       scanf("%lf",&distance);

       force=  (G*mass1*mass2)/(distance*distance);
       printf("%lf",force);

       return 0;
   }