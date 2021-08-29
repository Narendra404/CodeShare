/*
Write a function that receives marks obtained by as student in 3
subjects and returns the average and percentage of these marks.
Call this function in main() and print the results in main().
*/
#include <stdio.h>

void Student(int a, int b, int c, float *avg, float *per);

int main(void)
{
    int x, y, z;
    float avg, percen;

    printf("Enter the marks obtained by the student in 3 subjects : \n");
    scanf("%d %d %d", &x, &y, &z);

    Student(x, y, z, &avg, &percen);

    printf("The average marks of the student is : %f\n", avg);
    printf("The percentage obtained by the student is : %f\n", percen);

    return 0;
}

void Student(int a, int b, int c, float *avg, float *per)
{
    int sum = a + b + c;
    *avg = (float)sum / 3;
    *per = ((float)sum / 300.0) * 100.0;
}
