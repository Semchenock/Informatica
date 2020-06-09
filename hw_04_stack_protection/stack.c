#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
input(stack** head, const int a)
{
	stack* s = (stack*)malloc(sizeof(stack));
	s->value = a;
	s->next = *head;
	*head = s;
}
output(stack** head)
{
	stack* s = *head;
	while (s != NULL)
	{
		printf("%d ", s->value);
		s = s->next;
	}
}
find_max(stack** head)
{
	int M = 0;
	stack* s = NULL;
	s = *head;
	while (s != NULL)
	{
		if (s->value > M)
			M = s->value;
		s = s->next;
	}
	printf("%d", M);
}
find_min(stack** head)
{
	stack* s = NULL;
	s = *head;
	int m = s->value;
	while (s != NULL)
	{
		if (s->value < m)
			m = s->value;
		s = s->next;
	}
	printf("%d", m);
}