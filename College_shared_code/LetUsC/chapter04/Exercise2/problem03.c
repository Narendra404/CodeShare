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

    (a > b) ?
        (a > c) ?
            printf("%d is the greatest number among the entered numbers.\n", a)
        :
            printf("%d is the greatest number among the entered numbers.\n", c)
    :
        (b > c) ?
            printf("%d is the greatest number among the entered numbers.\n", b)
        :
            printf("%d is the greatest number among the entered numbers.\n", c);

    return 0;    
}
