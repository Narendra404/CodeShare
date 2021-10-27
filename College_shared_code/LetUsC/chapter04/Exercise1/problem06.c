/*
A certain grade of steel is graded according to the following
conditions :
(i) Hardness must be greater than 50
(ii) Carbon content must be less than 0.7
(iii) Tensile strength must be greater than 5600

The grades are as follows :
Grade is 10 if all three conditions are met 
Grade is 9 if conditions (i) and (ii) are met 
Grade is 8 if conditions (ii) and (iii) are met 
Grade is 7 if conditions (i) and (iii) are met 
Grade is 6 if only one condition is met 
Grade is 5 if none of the conditions are met 

Write a program, which will require the user to give values of 
hardness, carbon content and tensile strength of the steel under
consideration and output the grade of the steel.
*/
#include <stdio.h>

int main(void)
{
    int h, ts, grade;
    float cc;
    printf("Enter the Hardness of the steel : \n");
    scanf("%d", &h);
    printf("Enter the Carbon content of the steel : \n");
    scanf("%f", &cc);
    printf("Enter the Tensile strength of the steel : \n");
    scanf("%d", &ts);

    if ((h > 50) && ((cc - 0.7) > 0.0) && (ts > 5600))
    {
        grade = 10;
    }
    else if ((h > 50) && ((cc - 0.7) > 0.0) && (ts <= 5600))
    {
        grade = 9;
    }
    else if ((h <= 50) && ((cc - 0.7) > 0.0) && (ts > 5600))
    {
        grade = 8;
    }
    else if ((h > 50) && ((cc - 0.7) <= 0.0) && (ts > 5600))
    {
        grade = 7;
    }
    else if ((h > 50) || ((cc - 0.7) > 0.0) || (ts > 5600))
    {   
        grade = 6;
    }
    else
    {
        grade = 5;
    }
   
   printf("The grade of steel is : %d\n", grade);

   return 0;
}
