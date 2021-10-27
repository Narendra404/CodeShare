/*
Write a program to print all the prime numbers from 1 to 300.
*/
#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 300; i++)
    {
        int j = 1, c = 0;
        while (j <= i)
        {
            if ((i % j) == 0)
            {
                c++;
            }
            if (c > 2)
            {
                break;
            }
            j++;
        }
        if (c != 2)
        {
            continue;
        }
        else
        {
            printf("%d\n", i);
        }
    }

    return 0;    
}
