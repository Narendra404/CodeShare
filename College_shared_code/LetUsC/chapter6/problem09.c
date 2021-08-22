/*
Population of a town today is 1,00,000. The population has increased
steadily at the rate of 10% per year for last 10 years. Write a
program to determine the population at the end of each year in the 
last decade.
*/
#include <stdio.h>
#define N 10

int main(void)
{
    int n = 100000;

    for (int i = 0; i < N; i++)
    {
        n += (n / 10);
        printf("The population at the end of %d year(s) is %d.\n", (i + 1), n);
    }
    
    return 0;
}
