/*
Write a program to find grace marks for a student using switch.
The user should enter the class obtained by the students and the 
number of subjects he has failed in. Use the following logic:

--  If the student gets first class and the number of subjects he
    failed in is greater than 3, then he does not get any grace.
    Otherwise the grace is of 5 marks per subject.

--  If the student gets second class and the number of subjects he
    failed in is greater than 2, then he does not get any grace.
    Otherwise the grace is of 4 marks per subject.

--  If the student gets third class and the number of subjects he 
    failed in is greater than 1, then he does not get any grace.
    Otherwise the grace is of 5.
*/
#include <stdio.h>

int main(void)
{
    int n, f;
    printf("Enter the class of the student (1, 2 or 3): \n");
    scanf("%d", &n);
    printf("Enter the number of subjects the student has failed in : \n");
    scanf("%d", &f);

    switch (n)
    {
        case 1 :
        if (f > 3)
        {
            printf("The student does not get any grace.\n");
        }
        else
        {
            printf("The student gets 5 marks of grace per subject.\n");
        }
        break;
            
        case 2 :
        if (f > 2)
        {
            printf("The student does not get any grace.\n");
        }
        else
        {
            printf("The student gets 4 marks of grace per subject.\n");
        }
        break;

        case 3 :
        if (f > 1)
        {
            printf("The student does not get any grace.\n");
        }
        else
        {
            printf("The student gets 5 marks of grace per subject.\n");
        }
        break;

        default :
        printf("You entered wrong class.\n");
        printf("Please enter 1, 2 or 3 as class for the student.\n");
        break;
    }

    return 0;
}
