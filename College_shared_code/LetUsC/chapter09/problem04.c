/*
Given 3 variables x, y, z write function to circularly shift their
values to right. In other words if x = 5, y = 8, z = 10, after circular
shift y = 5, z = 8, x = 10. Call the function with variables a, b, c to
circularly shift values.
*/
#include <stdio.h>

void circushift(int *x, int *y, int *z);

int main(void)
{
    int a, b, c;
    
    printf("Enter 3 integers to store in a, b and c : \n");
    scanf("%d %d %d", &a, &b, &c);
    printf("The value stored in a is %d and in b is %d and in c is %d.\n", a, b, c);

    circushift(&a, &b, &c);

    printf("The value stored, after circular shift, in a is %d and in b is %d and in c is %d.\n", a, b, c);

    return 0;
}

void circushift(int *x, int *y, int *z)
{
    int i;

    i = *x;
    *x = *y;
    *y = *z;
    *z = i;
}
