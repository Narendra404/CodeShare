/*
Paper of size A0 has dimensions 1189 mm x 841 mm. Each
subsequent size A(n) is defined as A(n-1) cut in half parallel to its
shortest sides. Thus paper of size A1 would have dimensions 841
mm x 594 mm. Write a program to calculate and print paper sizes 
A0,A1,A2, ... A8.
*/
#include <stdio.h>

int main(void)
{
    int l, b;
    l = 1189;
    b = 841;
    
    printf("The paper size of A0 is %d mm x %d mm\n", l, b);
    l = l / 2;
    printf("The paper size of A1 is %d mm x %d mm\n", b, l);
    b = b / 2;
    printf("The paper size of A2 is %d mm x %d mm\n", l, b);
    l = l / 2;
    printf("The paper size of A3 is %d mm x %d mm\n", b, l);
    b = b / 2;
    printf("The paper size of A4 is %d mm x %d mm\n", l, b);
    l = l / 2;
    printf("The paper size of A5 is %d mm x %d mm\n", b, l);
    b = b / 2;
    printf("The paper size of A6 is %d mm x %d mm\n", l, b);
    l = l / 2;
    printf("The paper size of A7 is %d mm x %d mm\n", b, l);
    b = b / 2;
    printf("The paper size of A8 is %d mm x %d mm\n", l, b);

    return 0;
}

