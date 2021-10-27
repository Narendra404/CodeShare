/*
Write a program to add first seven terms of the following series
 1    2   3  
-- + -- + -- + .......
1!   2!   3!
using a for loop.   
*/
#include <stdio.h>

int main(void)
{
    float sum = 0;
    int fact;
    
    for (int i = 1; i <= 7; i++)
    {
        fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        sum += (float)i / fact;
    }

    printf("Sum of first seven terms of the series is %f.\n", sum);

    return 0;
}
