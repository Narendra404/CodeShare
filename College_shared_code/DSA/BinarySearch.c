#include <stdio.h>

int main()
{
    int first = 0, last, middle, size, i, SearchElem, list[100];

    printf("Enter the number of elements : ");
    scanf("%d",&size);

    printf("Enter %d integer elements in Assending order : \n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d",&list[i]);
    }

    printf("Enter value to be searched: ");
    scanf("%d", &SearchElem);

    last = size - 1;
    middle = (first+last)/2;

    while (first <= last) 
    {
        if (list[middle] < SearchElem)
        {
            first = middle + 1;    
        }
        else if (list[middle] == SearchElem) 
        {
            printf("Element found at index %d.\n",middle);
            break;
        }
        else
        {
            last = middle - 1;
        }

        middle = (first + last)/2;
    }

    if (first > last)
    {
        printf("Element Not found in the list.");
    }

    return 0;
}
