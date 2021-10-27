/*
Two numbers are entered through the keyboard. Write a program 
to find the value of one number raised to the power of another.
*/
#include <stdio.h>

int main(void)
{
    float a, ans = 1;   
    int b, i = 0;
    printf("Enter a number (Can be floating point as well):\n");
    scanf("%f", &a);
    printf("Enter an integer number :\n");
    scanf("%d", &b);

    while (i < b)
    {
        ans = ans * a;
        i++;
    }

    printf("%f raised to the power of %d is %f.\n", a, b, ans);
    
    return 0;
}
