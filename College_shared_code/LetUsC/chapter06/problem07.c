/*
Natural logarithm can be approximated by the following series.

 x - 1   1(x - 1)2   1(x - 1)3   1(x - 1)4  
 ----- + --------- + --------- + --------- + ......
   x      2( x )      2( x )      2( x ) 
If x is input through the keyboard, write a program to calculate the 
sum of first seven terms of this series.
*/
#include <stdio.h>

int main(void)
{
    float x;
    printf("Enter a number :\n");
    scanf("%f", &x);

    float k = (x - 1), sum = 0, t;
    sum += (k / x);
    t = k;
    printf("%f\n", k);

    for (int i = 2; i <= 7; i++)
    {
        t = t * k;
        sum += (t / (2 * x));
    }
    
    printf("The sum of the series is %f.\n", sum);

    return 0;
}
