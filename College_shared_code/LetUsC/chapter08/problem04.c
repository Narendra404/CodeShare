/*
Any year is entered through the keyboard. Write a function to 
determine whether the year is a leap year or not.
*/
#include <stdio.h>

void Leap(int n);

int main(void)
{
    int x;

    printf("Enter a year : \n");
    scanf("%d", &x);

    Leap(x);

    return 0;
}

void Leap(int n)
{
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
}
