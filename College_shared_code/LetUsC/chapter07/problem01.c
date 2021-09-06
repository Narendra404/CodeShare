/*
Write a menu driven program which has the following options:
1. Factorial of a number
2. Prime or not
3. Odd or even
4. Exit

Once a menu item is selected the appropriate action should be
taken and once this action is finished, the menu should reappear.
Unless the user selects the 'Exit' option the program should
continue to run.
*/
#include <stdio.h>

int main(void)
{
    int k;
    char ch = 'y';

    do
    {
        printf("\t\tMENU\n");
        printf("To find factorial of a number, enter '1'.\n");
        printf("To find whether a number is prime or not, enter '2'.\n");
        printf("To find whether a number is odd or even, enter '3'.\n");
        printf("To Exit the program, enter '4'.\n");
        printf("Enter your choice : \n");
        scanf("%d", &k);

        switch (k)
        {
            case 1 :
            int n, fact = 1;
            printf("Enter the number whose factorial is to be found :\n");
            scanf("%d", &n);

            for (int i = 0; i < n; i++)
            {
                fact = fact * (i + 1);
            }

            printf("Factorial of %d is %d.\n", n, fact);
            break;

            case 2 :
            int m, c = 0;
            printf("Enter the number :\n");
            scanf("%d", &m);

            for (int i = 0; i < m; i++)
            {
                if (m % (i + 1) == 0)
                {
                    c++;
                }
            }

            if (c == 2)
            {
                printf("%d is a prime number.\n", m);
            }
            else
            {
                printf("%d is not a prime number.\n", m);
            }
            break;

            case 3 :
            int w;
            printf("Enter the number :\n");
            scanf("%d", &w);

           if (w % 2 == 0)
            {
                printf("%d is an even number.\n", w);
            }
            else
            {
                printf("%d is an odd number.\n", w);
            }
            break;
            
            case 4 :
            ch = 'n';
            printf("\t\tExiting\n");
            break;

            default :
            printf("Wrong choice!!\n");
            printf("Please enter a correct choice.\n");
            break;
        }
    } while (ch == 'y');

    return 0;    
}
