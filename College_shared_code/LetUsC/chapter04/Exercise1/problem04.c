/*
If the three sides of a triangle are entered through the keyboard,
write a program to check whether the triangle is isosceles, 
equilateral, scalene or right angled triangle.
*/
#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Enter the sides of the triangle: \n");
    scanf("%d %d %d", &a, &b, &c);

    if ((a == b) && (b == c) && (c == a))
    {
        printf("It is an equilateral triangle.\n");
    }
    else if ((a == b) || (b == c) || (c == a))
    {
        printf("It is an isosceles triangle.\n");
    }
    else if (((a * a) == (b * b) + (c * c)) || ((b * b) == (a * a) + (c * c)) || ((c * c) == (b * b) + (a * a)))
    {
        printf("It is a right angled triangle.\n");
    }
    else
    {
        if (((a + b) > c) && ((b + c) > a) && ((c + a) > b))
        {
            printf("It is a scalene triangle.\n");
        }
        else
        {
            printf("The triangle is not valid.\n");
        }
    }

    return 0;
}
