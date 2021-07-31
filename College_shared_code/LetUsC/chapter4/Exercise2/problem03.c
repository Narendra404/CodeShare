/*
Write a program to find the greatest of the three numbers entered 
through the keyboard. Use conditional operators.
*/
#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Enter three numbers :\n");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b) && (a > c))
    {
        printf("The greatest number among the numbers entered is %d.\n", a);
    }
    else if ((b > a) && (b > c))
    {
        printf("The greatest number among the numbers entered is %d.\n", b);
    }
    else if ((c > a) && (c > b))
    {
        printf("The greatest number among the numbers entered is %d.\n", c);
    }
    else
    {
        printf("All the numbers entered are same.\n");
    }

    return 0;    
}
