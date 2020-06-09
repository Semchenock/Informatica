#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "stack.h"
int main()
{
	int a=0;
	stack *head = NULL;
	printf("Enter the nombers:\n");
	while (a != -1)
	{
		scanf("%d", &a);
		if (a >= 0)
		input(&head, a);
	}
	output(&head);
	printf("\n");
	find_max(&head);
	printf("\n");
	find_min(&head);
	printf("\n");
}