#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void push(int *a, int n);
void pop();
void display(int *a);

int top;

int main(void)
{
	int n, *arr, i, ch, flag = 1;

	clrscr();
	printf("\t\t\tSTACK\n\n");
	printf("\tEnter the size of stack :");
	scanf("%d", &n);
	arr = (int*)malloc(n * sizeof(int));
	top = 0;
	while (flag == 1)
	{
		clrscr();
		printf("\tEnter 1 to display contents of stack.\n");
		printf("\tEnter 2 to push an element into the stack.\n");
		printf("\tEnter 3 to pop an element off the stack.\n\n");
		printf("\tEnter your choice : ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
			display(arr);
			break;
			case 2:
			push(arr, n);
			break;
			case 3:
			pop();
			break;
			default:
			printf("Wrong Choice!!\n");
			break;
		}

		printf("\tWant to continue again(y : 1; n = 0) :");
		scanf("%d", &flag);

	}
	getch();
	return 0;
}

void display(int *a)
{
	int i;

	if(top == 0)
	{
		printf("\tThe stack is empty.\n");
		return;
	}

	for (i = 1; i <= top; i++)
	{
		printf("\t\tElement[%d] = %d\n", i, a[i]);
	}
}

void push(int *a, int n)
{
	int x;
	if (top == n)
	{
		printf("\tBUFFER OVERFLOW\n");
		return;
	}

	printf("\tEnter the element to push :");
	scanf("%d", &x);

	a[top + 1] = x;
	top = top + 1;

	printf("\tElement pushed.\n");
}

void pop()
{
	if(top == 0)
	{
		printf("\tBUFFER UNDERFLOW\n");
		return;
	}

	top = top - 1;
	printf("\tElement popped.\n");
}