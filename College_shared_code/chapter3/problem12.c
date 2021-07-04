/*
Given a point (x, y), write a program to find out if lies on the X-
axis, Y-axis or on the origin.
*/
#include <stdio.h>

int main(void)
{
    int x, y;
    printf("Enter a point :\n");
    scanf("%d %d", &x, &y);

    if (x == 0 && y!=0)
    {
        printf("The point lies on the Y-axis.\n");
    }
    else if (y == 0 && x!=0)
    {
        printf("The point lies on the X-axis.\n");
    }
    else if (x == 0 && y==0)
    {
        printf("The point lies on the origin.\n");
    }
    else
    {
        printf("The point does not lie on X-axis, Y-axis or the origin.\n");
    }

    return 0;
}
