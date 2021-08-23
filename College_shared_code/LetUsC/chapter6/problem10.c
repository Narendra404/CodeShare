/*
Ramanujan number is the smallest number that can be expressed 
as the sum of two cubes in two different ways. Write a program to print
all such numbers up to a reasonable limit.
*/
#include <stdio.h>
#define N 4500

int main(void)
{
    for (int i = 1; i < N; i++)
    {
        int c = 0;
        for (int j = 1; j < i; j++)
        {
            for (int k = j + 1; k < i; k++)
            {
                if (((j * j * j) + (k * k * k)) == i)
                {
                    c++;
                }
            }
        }
        if (c == 2)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
