/*
Write a function to compute the greatest common divisor given by 
Euclid's algorithm.
*/
#include <stdio.h>

int gcd(int x, int y);

int main(void)
{
    int j, k, n;
    printf("Enter two numbers : \n");
    scanf("%d %d", &j, &k);

    n = gcd(j, k);

    printf("The greatest common divisor of %d and %d is %d.\n", j, k, n);

    return 0;
}

int gcd(int x, int y)
{
    int n, q;

    if (y > x)
    {
        int t = x;
        x = y;
        y = t;
    }
    
    while (y != 0)
    {
        n = x / y;
        q = y;
        y = x - (n * y);
        x = q;
    }

    return x;
}

