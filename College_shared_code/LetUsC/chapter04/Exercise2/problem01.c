/*
Using conditional operators determine:
(1) Whether the characters entered through the keyboard is a 
lower case alphabet or not.
(2)Whether a character entered through the keyboard is a special
 symbol or not.
 */

#include <stdio.h>

int main(void)
{
    char ch;
    int p;
    printf("Enter a character: \n");
    scanf("%c", &ch);

    p = (int)ch;

    ((p >= 97) && (p <= 122)) ? 
        printf("The character is a lower case alphabet.\n")
    :
        printf("The character is not a lower case alphabet.\n");
    (((p >= 0) && (p <= 47)) || ((p >= 58) && (p <= 64)) || ((p >= 91) && (p <= 96)) || ((p >= 123) && (p <= 127))) ?
        printf("The character is a special symbol.\n")
    :
        printf("The character is not a special symbol.\n");
    
    return 0;
}
