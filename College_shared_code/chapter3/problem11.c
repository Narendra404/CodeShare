/*
Given the coordinates (x, y) of center and its radius, write
a program that will determine whether a point lies inside the circle,
on the circle or outside the circle.
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    int x, y, r, a, b, l;
    printf("Enter the coordinates of the centre of the circle :\n");
    scanf("%d %d", &x, &y);

    printf("Enter the radius of the circle :\n");
    scanf("%d", &r);

    printf("Enter the coordinates of any point :\n");
    scanf("%d %d", &a, &b);

    l = (int)sqrt(pow((x - a) , 2) + pow((y - b) , 2));

    if (l < r)
    {
        printf("The point lies inside the circle.\n");
    }
    else if (l > r)
    {
        printf("The point lies outside the circle.\n");
    }
    else
    {
        printf("The point lies on the circle.\n");
    }
    
    return 0;
}
