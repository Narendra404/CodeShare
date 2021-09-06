/*
Write a program to print all the ASCII values and their equivalent
characters using a while loop. The ASCII values vary from 0 to 255.
*/
#include <stdio.h>

int main(void)
{
    int i = 0;

    printf("ASCII       Character\n");
    printf("\n");

    while (i < 256)
    {
        if (i > 99)
        {
            printf("%d           %c\n", i, (char)i);
        }
        else if (i == 10 || i == 11 || i == 12 || i == 27)
        {
            printf("%d\n", i);
        }
        else
        {
            printf("%d            %c\n", i, (char)i);
        }
        i++;
    }

    return 0;
}
