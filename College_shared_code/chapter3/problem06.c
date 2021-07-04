/*
If ages of Ram, Shyam and Ajay are input through the keyboard,
write a program to determine the youngest of the three.
*/
#include <stdio.h>

int main(void)
{
    int ram, shyam, ajay;
    printf("Enter the ages of Ram, Shyam and Ajay in order : \n");
    scanf("%d %d %d", &ram, &shyam, &ajay);

    if (ram < shyam)
    { 
        if (ram < ajay)
        {
            printf("Ram is the yougest of all.\n");
        }
        else
        {
            printf("Ajay is the yougest of all.\n");
        }
    }
    else
    {
        if(shyam > ajay)
        {
            printf("Ajay is the yougest of all.\n");
        }
        else
        {
            printf("Shyam is the yougest of all.\n");
        }
    }
    
    return 0;
}
