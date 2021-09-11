/*
Write a recursive function to obtain the sum of first 25 natural numbers. 
*/
#include <stdio.h>
#define A 25

int sum(int x);

int main(void)
{
    int n;

    n = sum(A);

    printf("The sum of first 25 natural numbers is %d.\n", n);

    return 0;
}

int sum(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        return (x + sum(x - 1));
    }
}
