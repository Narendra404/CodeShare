/*
Any year is input through the keyboard. Write a program to 
determine whether the year is leap year or not.
*/
#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a year : \n");
    scanf("%d", &n);

    if (n % 4 == 0)
    {
        if (n % 100 == 0)
        {
            if (n % 400 == 0)
            {
                printf("It is a leap year.\n");
            }
            else
            {
                printf("It is not a leap year.\n");
            }
        }
        else 
        {
            printf("It is a leap year.\n");
        }
    }
    else
    {
            printf("It is not a leap year.\n");
    }
    
    return 0;
}
