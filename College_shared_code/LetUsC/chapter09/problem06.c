/*
Write a function to compute the distance between two points and 
use it to develop another function that will compute the area of the 
triangle whose vertices are A(x1, y1), B(x2, y2) and C(x3, y3). Use
these functions to develop a function which returns a value 1 if the
point (x, y) lies inside the triangle ABC, otherwise returns a value 0.
*/
#include <stdio.h>
#include <math.h>

int InsideTri(float a1, float a2, float a3, float b1, float b2, float b3, float a, float b);
float dis(float m1, float m2, float n1, float n2);
float area(float p1, float p2, float p3, float q1, float q2, float q3);

int main(void)
{
    float x1, x2, x3, y1, y2, y3, x, y;

    printf("Enter the three vertices of the triangle [(a b)], one by one: \n");
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    scanf("%f %f", &x3, &y3);

    printf("Enter the co-ordinates of the point : \n");
    scanf("%f %f", &x, &y);

    if (InsideTri(x1, x2, x3, y1, y2, y3, x, y))
    {
        printf("The point lies inside the triangle.\n");
    }
    else
    {
        printf("The point lies outside the triangle.\n");
    }

    return 0;
}

int InsideTri(float a1, float a2, float a3, float b1, float b2, float b3, float a, float b)
{
    float ar = area(a1, a2, a3, b1, b2, b3);

    float ar1 = area(a1, a2, a, b1, b2, b);
    float ar2 = area(a, a2, a3, b, b2, b3);
    float ar3 = area(a1, a, a3, b1, b, b3);
    printf("%f\n", ar1 + ar2 + ar3);
    printf("%f\n", ar);

    if (((ar1 + ar2 + ar3) - ar) <= 0.5)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

float dis(float m1, float m2, float n1, float n2)
{
    float d;
    float d1 = m2 - m1;
    float d2 = n2 - n1;

    d1 = d1 * d1;
    d2 = d2 * d2;

    d = sqrt(d1 + d2);

    return d;
}
    
float area(float p1, float p2, float p3, float q1, float q2, float q3)
{
    float d1 = dis(p1, p2, q1, q2);
    float d2 = dis(p2, p3, q2, q3);
    float d3 = dis(p3, p1, q3, q1);

    float s = (d1 + d2 + d3) / 2;

    float ar = sqrt(s * (s - d1) * (s - d2) * (s - d3));

    return ar;
}
