/*
Write a program to check whether a triangle is valid or not, when
the three angles of the triangle are entered through the keyboard.
A triangle is valid if the sum of all three angles is equal to 180
degrees.
*/
#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Enter the three angles of the triangle :\n");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b + c) == 180)
    {
        if (a != 0)
        {
            if (b != 0)
            { 
                if (c != 0)
                {
                    printf("The triangle is valid.\n");
                }
                else
                { 
                    printf("The triangle is not valid.\n");
                }
            }
            else
            { 
                printf("The triangle is not valid.\n");
            }
        }
        else
        { 
                printf("The triangle is not valid.\n");
        }
    }
    else
    {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
