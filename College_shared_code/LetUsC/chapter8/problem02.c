/*
Write a function power(a, b), to calculate the value of a raised to b.
*/
#include <stdio.h>

float power(float a, int b);

int main(void)
{
    float x, ans;
    int y;

    printf("Enter a number (can be floating a point) : \n");
    scanf("%f", &x);
    printf("Enter another number (must be an integer) : \n");
    scanf("%d", &y);
    
    ans = power(x, y);

    printf("%f raised to the power %d is %f.\n", x, y, ans);

    return 0;
}

float power(float a, int b)
{
    float sol = 1.0;

    for (int i = 0; i < b; i++)
    {
        sol = sol * a;
    }

    return sol;
}
