/*
Given three points (x1, y1),(x2, y2) and (x3, y3), write a program to 
check if all the three points fall on one straight line.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x1, x2, x3, y1, y2, y3, area;
    printf("Enter the three points : \n");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    area = abs((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2))) / 2;

    if (area == 0)
    {
        printf("The three points lie on a straight line.\n");
    }
    else
    {
        printf("The three points do not lie on a straight line.\n");
    }
    
    return 0;
}
