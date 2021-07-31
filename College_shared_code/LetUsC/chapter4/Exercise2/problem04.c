/*
Write a program to receive value of an angle in degrees and check 
whether sum of squares of sine and cosine of this angle is equal to 1.
*/
#include <stdio.h>
#include <math.h>
#define PI 3.142

int main(void)
{
    float deg, sine, cosine;
    printf("Enter an angle in degrees :\n");
    scanf("%f", &deg);

    deg = (deg * PI) / 180.0;
    sine = sin(deg);
    cosine = cos(deg);
    sine = pow(sine , 2.0);
    cosine = pow(cosine , 2.0);
    if ((sine + cosine) == 1)
    {
        printf("The sum of the squares of the sine and cosine of the entered angle is equal to 1.\n");
    }
    else
    {
        printf("The sum of the squares of the sine and cosine of the entered angle is not equal to 1.\n");
    }
    
    return 0;
}
