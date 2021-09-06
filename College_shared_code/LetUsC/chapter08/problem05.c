/*
A positive integer is entered through the keyboard. Write a function 
to obtain the prime factors of this number.
*/
#include <stdio.h>

void PrimeFactors(int n);
int prime(int x);

int main(void)
{
    int x;

    printf("Enter a number : \n");
    scanf("%d", &x);

    PrimeFactors(x);

    return 0;
}

void PrimeFactors(int n)
{
    printf("The prime factors of %d are : \n", n);

    for (int i = 0; i < n; i++)
    {
        if ((prime(i + 1) == 1) && ((n % (i + 1)) == 0))
        {
            printf("%d\n", i + 1);
        }
    }
}

int prime(int x)
{
    int c = 0;
    
    for (int i = 0; i < x; i++)
    {
        if ((x % (i + 1)) == 0)
        {
            c++;
        }
    }

    if (c == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
