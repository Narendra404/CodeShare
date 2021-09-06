/*
Where interest compounds q times per year at an annual rate of 
r % for n years, the principal p compounds to an amount a as per 
the following formula 

a = p (1 + r / q) ^(nq)

Write a program to read 10 sets of p, r,n & q and calculate the
corresponding a.
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    int q, n;
    float r, p, a;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the principal :\n");
        scanf("%f", &p);
        printf("Enter the rate of interest :\n");
        scanf("%f", &r);
        printf("Enter the number of years :\n");
        scanf("%d", &n);
        printf("Enter the number of times the interst compounds per year :\n");
        scanf("%d", &q);

        a = p * pow((1 + (r / q)), (n * q));
        printf("The compounded amount is %f.\n", a);
    }
    
    return 0;
}
