/* 
The length and breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the area
and perimeter of the rectangle, and the area and circumference of 
the circle.
*/
#include <stdio.h>

int main(void)
{
    float length, breadth, radius;

    printf("Enter the length and breadth of the rectangle\n");
    scanf("%f %f", &length, &breadth);
    printf("Enter the radius of the circle\n");
    scanf("%f", &radius);
     
    printf("The perimeter of the rectangle is:  %.2f\n", 2*( length + breadth ));
    printf("The area of the rectangle is:       %.2f\n", length * breadth);
    printf("The circumference of the circle is: %.2f\n", 2 * 3.142 * radius);
    printf("The area of the circle is:          %.2f\n", 3.142 * radius * radius);

    return 0;
}

