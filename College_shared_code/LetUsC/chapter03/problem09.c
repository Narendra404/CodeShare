/*
Given length and breadth of a rectangle, write a program to find
whether the area of the rectangle is greater than its perimeter.
*/
#include <stdio.h>

int main(void)
{
    int l, b, peri, area;
    printf("Enter the length and breadth of the rectangle : \n");
    scanf("%d %d", &l, &b);

    peri = 2 * (l + b);
    area = l * b;

    if (peri < area)
    {
        printf("Area is greater than the perimeter.\n");
    }
    else
    {
        printf("Perimeter is greater than the area.\n");
    }

    return 0;
}
