/*
Write a program to find the absolute value of a number entered 
through the keyboard.
*/
#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a number (positive, negative or zero) : \n");
    scanf("%d", &n);

    if (n >= 0)
    {
        printf("The absolute value of %d is %d.\n", n, n);
    }
    else 
    {
        printf("The absolute value of %d is %d.\n", n, - n);
    }

    return 0;
}
