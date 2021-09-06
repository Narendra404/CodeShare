/*
If cost price and selling price of an item are input through the
keyboard, write a program to determine whether the seller has 
made profit or incurred loss. Also determine how much profit he
made or loss he incurred.
*/
#include <stdio.h>

int main(void)
{
    int sp, cp, profit, loss;
    printf("Enter the cost price and selling price of the item : \n");
    scanf("%d %d", &cp, &sp);

    if (sp > cp)
    {
        profit = sp - cp;
        printf("%d profit is made.\n", profit);
    }
    else
    {
        loss = cp - sp;
        printf("%d loss is incurred.\n", loss);
    }

    return 0;
}
