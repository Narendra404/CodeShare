/*
If value of an angle is input through the keyboard, write a program
to print all its Trignometric ratios.
*/
#include <stdio.h>
#include <math.h>
#define pi 3.142

int main(void)
{
    float angle;
    printf("Enter an angle :\n");
    scanf("%f", &angle);

    angle = (angle * pi) / 180;

    printf("sine of %f is %.2f.\n", (angle * 180) / pi, sin(angle));
    printf("cosine of %f is %.2f.\n", (angle * 180) / pi, cos(angle));
    printf("tangent of %f is %.2f.\n", (angle * 180) / pi, tan(angle));
    printf("cosecant of %f is %.2f.\n", (angle * 180) / pi, 1 / sin(angle));
    printf("secant of %f is %.2f.\n", (angle * 180) / pi, 1 / cos(angle));
    printf("cotangent of %f is %.2f.\n", (angle * 180) / pi, 1 / tan(angle));

    return 0;
}
