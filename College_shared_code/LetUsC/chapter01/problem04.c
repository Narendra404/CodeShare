/*
Temperature of a city in Fahrenheit degrees is input through the
keyboard. Write a program to convert this temperature into
Centigrade degrees.
*/
#include <stdio.h>

int main(void)
{
    float F, C;

    printf("Enter the temperature in fahrenheit :\n");
    scanf("%f", &F);

     C = (5*(F - 32)) / 9;

     printf("The temperature is %.2f degree celsius. \n", C);

     return 0;
}

