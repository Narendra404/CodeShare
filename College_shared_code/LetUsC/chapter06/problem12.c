/*
Write a program to produce the following output:
      1
    2   3
  4   5   6
7   8   9   10
*/
#include <stdio.h>

int main(void)
{
    int x = 1;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 3 - i; j > 0; j--)
        {
            printf("  ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("%d   ", x++);
        }
        printf("\n");
    }
        
    return 0;
}
