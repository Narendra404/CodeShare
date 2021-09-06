/*
Write a program to generate all Pythagorean Triplets with side
length less than or equal to 30.
*/
#include <stdio.h>

int main(void)
{
   for (int i = 1; i < 31; i++)
   {
       for (int j = 1; j < 31; j++)
       {
           for (int k = 1; k < 31; k++)
           {
               if ((i * i) + (j * j) == (k * k))
               {
                   if (j < i)
                   {
                       continue;
                   }
                   else
                   {
                        printf("%d, %d, %d.\n", i, j, k);
                   }
               }
           }
       }
   }
    
    return 0;
}
