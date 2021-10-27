/*
Consider a currency system in which there are notes of seven
denominations, namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If
a sum of Rs. N is entered through the keyboard, write a program to
compute the smallest number of notes that will combine to give Rs.
N.
*/
#include <stdio.h>

int main(void)
{
    int N, t, hundred, fifty, ten, five, two, one, total;
    printf("Enter a sum of money :\n");
    scanf("%d", &N);

    t = N;
    hundred = N / 100;
    N = N % 100;
    fifty = N / 50;
    N = N % 50;
    ten = N / 10;
    N = N % 10;
    five = N / 5;
    N = N % 5;
    two = N / 2;
    N = N % 2;
    one = N / 1;
    N = N % 1;
    total = hundred + fifty + ten + five + two + one;
    
    printf("The smallest number of notes that will combine to give %d is %d.\n", t, total);

    return 0;
}
