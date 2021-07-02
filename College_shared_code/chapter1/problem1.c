/*
Ramesh's basic salary is input through the keyboard. His dearness 
allowance is 40% of basic salary, and house rent allowance is 20% of
basic salary. Write a program to calculate his gross salary.
*/
#include <stdio.h> 

int main(void)
{
    int basic;
    float dear, rent, gross;

    printf("Enter the basic salary : ");
    scanf("%d", &basic);
    dear = 0.4 * (float)basic;
    rent = 0.2 * (float)basic;
    gross = (float)basic + dear + rent;
    printf("The gross salary is : %.2f\n", gross);

    return 0;
}
