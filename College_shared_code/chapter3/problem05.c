/*
A five-digit number is entered through the keyboard. Write a 
program to obtain the reversed number and to determine whether
the original and reversed numbers are equal or not.
*/
#include <stdio.h>

int main(void)
{
    int n, r, t = 0, m;
    printf("Enter a five-digit number : \n");
    scanf("%d", &n);

    m = n;
    r = n % 10;
    t = (t * 10) + r;
    n = n / 10;
    r = n % 10;
    t = (t * 10) + r;
    n = n / 10;
    r = n % 10;
    t = (t * 10) + r;
    n = n / 10;
    r = n % 10;
    t = (t * 10) + r;
    n = n / 10;
    r = n % 10;
    t = (t * 10) + r;
    n = n / 10;

    if (t == m)
    { 
        printf("The original number %d is equal to its reversed number %d.\n", m, t);
    }
    else
    {
        printf("The original number %d is not equal to its reversed number %d.\n", m, t);
    }

    return 0;
}
