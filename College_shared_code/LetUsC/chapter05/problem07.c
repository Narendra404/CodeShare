/*
Write a program to enter numbers till the user wants. At the end it 
should display the count of positive, negative and zeros entered.
*/
#include <stdio.h>

int main(void)
{
    int n, pos = 0, neg = 0, zer = 0;
    char ch = 'y';

    while (ch == 'y')
    {
        printf("Enter a number : \n");
        scanf("%d", &n);
        if (n > 0)
        {
            pos++;
        }
        else if (n < 0)
        {
            neg++;
        }
        else
        {
            zer++;
        }
        printf("Do you want to enter another number? (y/n): ");
        scanf("%c");
        scanf("%c", &ch);
    }
    
    printf("The no. of positive numbers entered = %d.\n", pos);
    printf("The no. of negative numbers entered = %d.\n", neg);
    printf("The no. of zeros entered = %d.\n", zer);

    return 0;
}
