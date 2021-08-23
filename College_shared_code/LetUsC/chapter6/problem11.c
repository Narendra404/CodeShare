/*
Write a program to print 24 hours of day with suitable suffixes like
AM, PM, Noon and Midnight.
*/
#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 24; i++)
    {
        if ((i / 10) == 0)
        {
            printf("0%d", i);
        }
        else
        {
            printf("%d", i);
        }

        if (i == 0)
        {
            printf(" Midnight");
        }
        else if (i == 12)
        {
            printf(" Noon");
        }
        else if (i < 12)
        {
            printf(" AM");
        }
        else 
        {
            printf(" PM");
        }

        printf("\n");
    }

    return 0; 
}
