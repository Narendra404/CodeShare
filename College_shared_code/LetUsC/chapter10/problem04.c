/*
A positive integer entered through the keyboard, write a function
to find the binary equivalent of this number:
(1) Without using recursion
(2) Using recursion
*/
#include <stdio.h>
#define A 0

void nonrecur(int x);
void recur(int x, int r, int m);

int main(void)
{
    int n;

    printf("Enter a number : \n");
    scanf("%d", &n);

    printf("Using non-recursive function, the binary equivalent of %d is ", n);
    nonrecur(n);
    printf("Using recursive function, the binary equivalent of %d is ", n);
    recur(n, A, A);

    return 0;
}

void nonrecur(int x)
{
    int r = 0, d, m = 0, n = 0;

    while (x > 0)
    {
        d = x % 2; 
        r = (10 * r) + d;
        x = x / 2;
        m++;
    }


    while (r > 0)
    {
        printf("%d", r % 10);
        r = r / 10;
        n++;
    }

    for (int i = 0; i < (m - n); i++)
    {
        printf("0");
    }

    printf(".\n");
} 

void recur(int x, int r, int m)
{
    if (x == 0)
    {
        int n = 0;

        while (r > 0)
        {
            printf("%d", r % 10);
            r = r / 10;
            n++;
        }

        for (int i = 0; i < (m - n); i++)
        {
             printf("0");
        }

        printf(".\n");
    }
    else
    {
        r = (10 * r) + (x % 2);
        
        recur((x / 2), r, m + 1);
    }
}
