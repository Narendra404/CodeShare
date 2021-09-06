/*
Write a general-purpose function to convert any given year into its
Roman equivalent. Use these Roman equivalents for decimal 
numbers : 1 - I, 5 - V, 10 - X, 50 - L, 100 - C, 500 - D, 1000 - M.
*/
#include <stdio.h>

void Roman(int x);

int main(void)
{
    int n;

    printf("Enter a year : \n");
    scanf("%d", &n);

    Roman(n);

    return 0;
}

void Roman(int x)
{
    char ch;
    int i = 7, n;

    printf("The Roman equivalent of %d is ", x);

    while (1)
    {
        switch (i--)
        {
            case 7 :
            n = x / 1000;
            x = x % 1000;
            ch = 'M';
            break;

            case 6 :
            n = x / 500;
            x = x % 500;
            ch = 'D';
            break;

            case 5 :
            n = x / 100;
            x = x % 100;
            ch = 'C';
            break;

            case 4 :
            n = x / 50;
            x = x % 50;
            ch = 'L';
            break;

            case 3 :
            n = x / 10;
            x = x % 10;
            ch = 'X';
            break;

            case 2 :
            n = x / 5;
            x = x % 5;
            ch = 'V';
            break;

            case 1 :
            n = x / 1;
            x = x % 1;
            ch = 'I';
            break;

            default :
            printf(".\n");
            return;
            break;
        }

        for (int j = 0; j < n; j++)
        {
            printf("%c", ch);
        }
    }
}
