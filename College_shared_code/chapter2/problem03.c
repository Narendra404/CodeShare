/*
If lengths of three sides of a triangle are input through the 
keyboard, write a program to find the area of the triangle.
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, semiper, area;
    printf("Enter the length of three sides of a triangle : \n");
    scanf("%f %f %f", &a, &b, &c);

    semiper = (a + b + c) / 2;
    area = sqrt((semiper*(semiper - a)*(semiper - b)*(semiper - c)));

    printf("Area of the triangle is : %.2f\n", area);

    return 0;
}
