/*
Write a program to generate all combinations of 1, 2 and 3 using for
 loop.
*/
#include <stdio.h>
#define N 3

int main(void)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                if ((i == j) || (j == k) || (k == i))
                {
                    continue;
                }
                
                printf("%d%d%d\n", (i + 1),(j + 1),(k + 1));
            }
            
        }
        
    }
    
    return 0;
}
