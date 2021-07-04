/*
If a five-digit number is input through the keyboard, write a 
program to calculate the sum of its digits.(Hint: Use the modulus
operator '%')
*/
#include <stdio.h>

int main(void)
{
    int n, sum , a, b, c, d, e;
    printf("Enter a five-digit number: \n");
    scanf("%d", &n);

    a = n % 10;
    n = n / 10;
    b = n % 10;
    n = n / 10;
    c = n % 10;
    n = n / 10;
    d = n % 10;
    n = n / 10;
    e = n % 10;
    sum = a + b + c + d + e;

    printf("The sum of digits of the number entered is : %d\n", sum);

    return 0;
}
