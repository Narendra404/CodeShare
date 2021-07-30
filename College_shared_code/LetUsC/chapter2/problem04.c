/*
Write a program to receive Cartesian co-ordinates (x , y) of a point 
and convert them into polar co-ordinates (r , θ).
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    float x, y, r, theta;
    printf("Enter the Cartesian co-ordinates :\n");
    scanf("%f %f", &x, &y);

    r = sqrt(pow(x , 2) + pow(y , 2));
    theta = atan(y / x);

    printf("The given co-ordinates in polar form are : (%.2f , %.2f)\n", r, theta);

    return 0;
}
