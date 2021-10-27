/*
Write a recursive function to obtain the first 25 numbers of a
Fibonacci sequence.
*/
#include <stdio.h>
#define N 25
#define A 0
#define B 0
#define C 1

void fibonacci(int x, int y, int z, int i);

int main(void)
{
    printf("The first 25 numbers of the Fibonacci sequence are : \n");
    fibonacci(A, B, C, C);

    return 0;
}

void fibonacci(int x, int y, int z, int i)
{
    if (i <= N)
    {
        printf("%d\n", z);

        fibonacci(y, z, y + z, i + 1);
    }
}
