/*
Write a program to calculate overtime pay of 10 employees.
Overtime is paid at the rate of Rs. 12.00 per hour for every hour 
worked above 40 hours. Assume that employees do not work for 
fractional part of an hour.
*/
#include <stdio.h>

int main(void)
{
    int over, time;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the no. of hours worked by employee %d :", i + 1);
        scanf("%d", &time);

        if (time <= 40)
        {
            printf("Overtime pay of the employee is zero since not worked for more than 40 hours.\n");
        }
        else
        {
            over = (time - 40) * 12;
            printf("Overtime pay of the employee is Rs. %d.\n", over);
        }
    }
    
    return 0;
}
