/*
If a five-digit number is input through the keyboard, write a
program to reverse the number. 
*/
#include <stdio.h>

int main(void)
{
    int n, r;
    printf("Enter a five-digit number : \n");
    scanf("%d", &n);

    r = n % 10;
    printf("%d", r);
    n = n / 10;
    r = n % 10;
    printf("%d", r);
    n = n / 10;
    r = n % 10;
    printf("%d", r);
    n = n / 10;
    r = n % 10;
    printf("%d", r);
    n = n / 10;
    r = n % 10;
    printf("%d", r);
    n = n / 10;
    printf("\n");

    return 0;

}
