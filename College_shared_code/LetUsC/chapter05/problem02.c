/*
Write a program to find the factorial value of any number entered
through the keyboard.
*/
#include <stdio.h>

int main(void)
{
    int n, t, fact = 1;
    printf("Enter a number :\n");
    scanf("%d", &n);
    t = n;

    while (n > 0)
    {
        fact = fact * n;
        n--;
    }
    
    printf("The factorial of %d is %d.\n", t, fact);

    return 0;
}
