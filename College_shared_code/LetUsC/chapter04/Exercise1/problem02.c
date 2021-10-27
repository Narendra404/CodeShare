/*
If a character is entered through the keyboard, write a program to
determine whether the character is a capital letter, a small case
letter, a digit or a special symbol.
*/
#include <stdio.h>

int main(void)
{
    char ch;
    int p;

    printf("Enter a character : \n");
    scanf("%c", &ch);

    p = (int)ch;
    if ((p >= 65) && (p <= 90))
    {
        printf("The character is a capital letter.\n");
    }
    else if ((p >= 97) && (p <= 122))
    {
        printf("The character is a small case letter.\n");
    }
    else if ((p >= 48) && (p <= 57))
    {
        printf("The character is a digit.\n");
    }
    else
    {
        printf("The character is a special symbol.\n");
    }

    return 0;
}
