/*
Write a program to find the range of a set of numbers entered 
through the keyboard. Range is the difference between the smallest
and biggest number in the list.
*/
#include <stdio.h>

int main(void)
{
    int n, max, min;
    char ch;
    printf("Enter a number for the list : \n");
    scanf("%d", &n);

    max = n;
    min = n;

    printf("Do you want to enter another number for the list ? (y/n) :");
    scanf("%c");
    scanf("%c", &ch);
    printf("\n");

    while (ch == 'y')
    {
        printf("Enter a number for the list : \n");
        scanf("%d", &n);

        if (n < min)
        {
            min = n;
        }
        if (n > max)
        {
            max = n;
        }
        
        printf("Do you want to enter another number for the list ? (y/n) :");
        scanf("%c");
        scanf("%c", &ch);
        printf("\n");
    }

    printf("The range of the list is %d.\n", max - min);
    
    return 0;
}
