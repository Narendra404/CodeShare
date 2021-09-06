/*
Write a program using conditional operators to determine whether 
a year entered through the keyboard is a leap year or not.
*/
#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a year : \n");
    scanf("%d", &n);

    (n % 4 == 0) ?
        (n % 100 == 0) ?
            (n % 400 == 0) ?
                printf("It is a leap year.\n")
            :
                printf("It is not a leap year.\n")
        :
            printf("It is a leap year.\n")
    :
        printf("It is not a leap year.\n");
    
    return 0;
}
