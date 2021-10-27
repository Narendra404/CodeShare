/*
Write a program to print out all Armstrong numbers between 1 and
500. If sum of cubes of each digit of the number is equal to the
number itself, then the number is called an Armstrong number.
*/
#include <stdio.h>

int main(void)
{
    int sum = 0, t, r, i = 0;
    printf("Armstrong numbers between 1 to 500 :\n");

    while (i < 500)
    {
        t = i + 1;
        while (t > 0)
        {
            r = t % 10;
            sum += (r * r * r);
            t = t / 10;
        }
        if (sum == (i + 1))
        {
            printf("%d\n", i + 1);
        }
        sum = 0;
        i++;
    }

    return 0;
}
