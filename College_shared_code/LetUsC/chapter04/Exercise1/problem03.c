/*
If the three sides of a triangle are entered through the keyboard,
Write a program to check whether the triangle is valid or not.
*/
#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Enter the sides of the triangle: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (((a + b) > c) && ((b + c) > a) && ((c + a) > b))
    {
        printf("The triangle is valid.\n");
    }
    else
    {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
