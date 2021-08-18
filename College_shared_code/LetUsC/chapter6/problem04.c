/*
Write a program to print the multiplication table of the number
entered by the user.
*/
#include <stdio.h>
#define N 10

int main(void)
{
    int k, p;
    printf("Enter a number : \n");
    scanf("%d", &k);

    printf("\n");
    for (int i = 0; i < N; i++)
    {
        p = k * (i + 1);
        if (i == 9)
        {
            printf("%d * %d = %d\n", k, (i + 1), p);
        }
        else
        {
            printf("%d * %d  = %d\n", k, (i + 1), p);
        }
    }
    
    return 0;
}
