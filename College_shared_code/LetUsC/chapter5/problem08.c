/*
Write a program to receive an integer and find its octal equivalent.
*/
#include <stdio.h>

int main(void)
{
    int n, r = 0, d, t;
    printf("Enter a number : \n");
    scanf("%d", &n);
    t = n;

    while (n > 0)
    {
        d = n % 8; 
        r = (10 * r) + d;
        n = n / 8;
    }
    printf("The Octal equivalent of %d is ", t);
    while (r > 0)
    {
        printf("%d", r % 10);
        r = r / 10;
    }
    printf(".\n");
}
