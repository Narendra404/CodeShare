/*
If the lenghts of the sides of a triangle is denoted by a, b, and c
then area of triangle is given by

area = -/s(s - a)(s - b)(s - c)

where, s = (a + b + c) / 2. Write a function to calculate the area of 
the triangle.
*/
#include <stdio.h>
#include <math.h>

float Area(float a, float b, float c);

int main(void)
{
    float a, b, c, area;
    
    printf("Enter 3 sides of the triangle : \n");
    scanf("%f %f %f", &a, &b, &c);

    area = Area(a, b, c);

    printf("The area of the triangle is %f.\n", area);

    return 0;
}

float Area(float a, float b, float c)
{
    float ar, s = (a + b + c) / 2;

    ar = sqrt(s * (s - a) * (s - b) * (s - c));

    return ar;
}
