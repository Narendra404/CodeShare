/*
Write a program to receive values of latitude (L1 , L2) and longitude
(G1 , G2), in degrees, of two places on earth and output the 
distance (D) between them in nautical miles. 
*/
#include <stdio.h>
#include <math.h>
#define pi 3.142

int main(void)
{
    float L1, L2, G1, G2, D;
    printf("Enter the latitudes of the two places in degrees :\n");
    scanf("%f %f", &L1, &L2);
    printf("Enter the longitudes of the two places in degrees :\n");
    scanf("%f %f", &G1, &G2);

    L1 = (L1 * pi) / 180;
    G1 = (G1 * pi) / 180;
    D = 3963 * acos((sin(L1) * sin(L2)) + (cos(L1) * cos(L2) * cos(G2 - G1)));
    
    printf("The distance between the two places in nautical miles is %.2f.\n", D);

    return 0;
}
