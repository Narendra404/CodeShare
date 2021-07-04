/*
According to Gregorian calendar, it was Monday on the date
01/01/01. If any year is input through the keyboard write a program
to find out what is the day on 1st January of this year.
*/
#include <stdio.h>

int main(void)
{
    int n, fours, hunds, four_hunds, total;
    printf("Enter a year : \n");
    scanf("%d", &n);

    n = n - 1;
    fours = n / 4;
    hunds = n / 100;
    four_hunds = n / 400;
    total = n + fours - hunds + four_hunds;
    total = total % 7;

    if (total == 0)
    {
        printf("The day on 01/01/%d is Monday.\n", n + 1);
    }
    if (total == 1)
    {
        printf("The day on 01/01/%d is Tuesday.\n", n + 1);
    }
    if (total == 2)
    {
        printf("The day on 01/01/%d is Wednesday.\n", n + 1);
    }
    if (total == 3)
    {
        printf("The day on 01/01/%d is Thursday.\n", n + 1);
    }
    if (total == 4)
    {
        printf("The day on 01/01/%d is Friday.\n", n + 1);
    }
    if (total == 5)
    {
        printf("The day on 01/01/%d is Saturday.\n", n + 1);
    }
    if (total == 6)
    {
        printf("The day on 01/01/%d is Sunday.\n", n + 1);
    }

    return 0;
}
