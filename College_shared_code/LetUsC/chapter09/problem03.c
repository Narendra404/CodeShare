/*
Write a C function to evaluate the series

sin(x) = x - (x^3 / 3!) + (x^5 / 5!) - (x^7 / 7!) + ...

upto 10 terms.
*/
#include <stdio.h>
#include <math.h>

float sinfunc(float x);
long int fact(int n);

int main(void)
{
    float x, ans;
    printf("Enter the value of x : \n");
    scanf("%f", &x);

    ans = sinfunc(x);

    printf("The value of the series sin(%f) is %f.\n", x, ans);
}

float sinfunc(float x)
{
    float sum = 0.0, power;

    int j = 1;
    for (int i = 0; i < 10; i++)
    {
        power = pow(x , j);
        if (i % 2 == 0)
        {
            sum += (power / (fact(j)));
        }
        else
        {
            sum -= (power / (fact(j)));
        }
        j = j + 2;
    }

    return sum;
}

long int fact(int n)
{
    long int f = 1;

    for (int i = 0; i < n; i++)
    {
        f = f * (i + 1);
    }

    return f;
}
