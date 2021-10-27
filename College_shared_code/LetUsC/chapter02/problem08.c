/*
Two numbers are input through the keyboard into two locations C
and D. Write a program to interchange the contents of C and D.
*/
#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Enter the two numbers : \n");
    scanf("%d %d", &a, &b);

    printf("%d is stored in a.\n", a);
    printf("%d is stored in b.\n", b);
    c = a;
    a = b;
    b = c;
    printf("After swap : \n");
    printf("%d is stored in a.\n", a);
    printf("%d is stored in b.\n", b);
    
    return 0;
}
