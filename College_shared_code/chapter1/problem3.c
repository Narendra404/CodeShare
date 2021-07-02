/*
If the marks obtained by a student in five different subjects are 
input through the keyboard, write a program to find out the 
aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student
in each subject is 100.
*/
#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, sum;
    float per;

    printf("Enter the marks of five subjects one by one : \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    
    sum = a + b + c + d + e;
    per = ((float) sum / 500) * 100;

    printf("The aggregate of the marks of the five subjects is : %d\n", sum);
    printf("The percentage obtained by the student is :          %.2f\n", per);
    
    return 0;
}
