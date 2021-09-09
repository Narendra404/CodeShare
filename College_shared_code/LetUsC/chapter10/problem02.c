/*
A positive integer is entered through the keyboard, write a program
to obtain the prime factors of the number. Modify the function
suitably to obtain the prime factors recursively.
*/
#include <stdio.h>
#define N 2

int prime(int x);
void PrimeFactors(int n, int i);

int main(void)
{
    int n;

    printf("Enter a number : \n");
    scanf("%d", &n);

    printf("The prime factors of %d are : \n", n);
    PrimeFactors(n, N);

    return 0;
}

void PrimeFactors(int n, int i)
{
    if (i <= n)
    {
        if ((prime(i) == 1) && ((n % i) == 0))
        {
            printf("%d\n", i);
        }

        PrimeFactors(n, i + 1);
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
