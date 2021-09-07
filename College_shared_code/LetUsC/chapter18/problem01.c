/*
Define two functions xgets() and xputs() which work similar to the
standard library functions gets() and puts().
*/
#include <stdio.h>

void xgets(char *ch);
void xputs(char *ch);

int main(void)
{
    char name[40];
    printf("Enter your name :\n");
    xgets(&name);
    printf("You entered : \n");
    xputs(&name);
    printf("\n");

    return 0;
}

void xgets(char *ch)
{
    char c = ' ';
    int i = 0;
    
    scanf("%c", &c);
    while (c != '\n')
    {
        ch[i] = c;
        i++;
        scanf("%c", &c);
    }
    ch[i] = '\0';
}

void xputs(char *ch)
{
    for (int i = 0; ch[i] != '\0' && ch[i] != ' '; i++)
    {
        printf("%c", ch[i]);
    }
}
