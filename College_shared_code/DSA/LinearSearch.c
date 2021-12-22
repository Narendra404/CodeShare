#include <stdio.h>

int main()
{
    int list[100],size,i,SearchElem;

    printf("Enter the number of elements: ");
    scanf("%d",&size);

    printf("Enter any %d integer elements: \n",size);
    for(i = 0; i < size; i++)
    {
        scanf("%d",&list[i]);
    }

    printf("Enter the element to be searched : ");
    scanf("%d",&SearchElem);
  
    for(i = 0; i < size; i++)
    {
        if(SearchElem == list[i])
        {
            printf("Element found at index %d.\n", i);
            break;
        }
    }

    if(i == size)
    {
        printf("The element to be searched is not found in the list.\n");
    }

  return 0;
}
