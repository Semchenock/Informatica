#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
int main()
{
	char buf=0;
	struct queue queue;
	queue.head = NULL;
	queue.tail = NULL;
	struct node* q = NULL;
	char l=0;
	while (buf != '=')
	{
		scanf("%c", &buf);
		enqueue(&queue, buf);
	}
	q = queue.head;
	while (l != '=')
	{
			l = dequeue(&queue);
			if ('A' <= l && l <= 'Z')
				printf("%c", l);
			else
				enqueue(&queue, l);
	}
	printf("\n");
	l = 0;
	while (l != '=')
	{
		l = dequeue(&queue);
		if ('a' <= l && l <= 'z')
			printf("%c", l);
		else
			enqueue(&queue, l);
	}
	printf("\n");
	l = 0;
	while (l != '=')
	{
		l = dequeue(&queue);
		if ('0' <= l && l <= '9')
			printf("%c", l);
		else
			enqueue(&queue, l);
	}
	return 0;
}