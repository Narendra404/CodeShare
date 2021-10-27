/*
write a function that receives 5 integers and returns the sum,
average and standard deviation of these numbers. Call this function
from main() and print the results in main().
*/
#include <stdio.h>
#include <math.h>

void Stat(int a, int b, int c, int d, int e, int *sum, float *avg, float *sd);

int main(void)
{
    int x, y, z, w, v, sum;
    float avg, standev;

    printf("Enter 5 integers : \n");
    scanf("%d %d %d %d %d", &x, &y, &z, &w, &v);

    Stat(x, y, z, w, v, &sum, &avg, &standev);

    printf("Sum of the 5 integers : %d\n", sum);
    printf("Average of the 5 integers : %f\n", avg);
    printf("Standard deviation of the 5 integers : %f\n", standev);

    return 0;
}

void Stat(int a, int b, int c, int d, int e, int *sum, float *avg, float *sd)
{
    *sum = a + b + c + d + e;

    *avg = *sum / 5;

    float a1 = a - (*avg);
    float b1 = b - (*avg);
    float c1 = c - (*avg);
    float d1 = d - (*avg);
    float e1 = e - (*avg);
    a1 = a1 * a1;
    b1 = b1 * b1;
    c1 = c1 * c1;
    d1 = d1 * d1;
    e1 = e1 * e1;
    float sum2 = a1 + b1 + c1 + d1 + e1;

    *sd = sqrt(sum2 / 5);
}
