/*
The distance between two cities (in km.) is input through the 
keyboard. Write a program to convert and print this distance in 
meters, feet, inches and centimeters.
*/
#include <stdio.h>

int main(void)
{
   float km, m, in, ft, cm;
   printf("Enter the distance between the two cities in kilometers : ");
   scanf("%f", &km);
   m = 1000 * km;
   cm = 100000 * km;
   in = 39370.0787 * km;
   ft = 3280.8399 * km;
   printf("The distance in meters :      %.2f\n", m);
   printf("The distance in feet :        %.2f\n", ft);
   printf("The distance in inches :      %.2f\n", in);
   printf("The distance in centimeters : %.2f\n", cm);

   return 0;
}
