/*
A 5-digit positive integer is entered through the keyboard, write a 
recursive and a non-recursive function to calculate sum of digits of
 the 5-digit number.
*/
#include <stdio.h>

int nonrecur(int x);
int recur(int x);

int main(void)
{
    int n, r , nr;

    printf("Enter a 5-digit number :\n");
    scanf("%d", &n);

    r = recur(n);
    nr = nonrecur(n);

    printf("The sum of the digits of %d is %d, using recursive function.\n", n, r);
    printf("The sum of the digits of %d is %d, using non-recursive function.\n", n, nr);

    return 0;
}

int recur(int x)
{
    if (x == 0)
    {
        return 0;
    }
    else
    {
        return (x % 10) + recur(x / 10);
    }
}

int nonrecur(int x)
{
    int d, sum = 0;

    while (x > 0)
    {
        d = x % 10;
        sum += d;
        x = x / 10;
    }
    
    return sum;
}
