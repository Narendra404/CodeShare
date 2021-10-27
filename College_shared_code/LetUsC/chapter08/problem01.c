/*
Write a function to calculate the factorial value of any integer
entered through the keyboard.
*/
#include <stdio.h>

int factorial(int x);

int main(void)
{
    int n, fact;
    printf("Enter the number : \n");
    scanf("%d", &n);
    fact = factorial(n);
    printf("Factorial of %d is %d.\n", n, fact);

    return 0;
}

int factorial(int x)
{
    int f = 1;

    for (int i = 0; i < x; i++)
    {
        f = f * (i + 1);
    }

    return f;
}
