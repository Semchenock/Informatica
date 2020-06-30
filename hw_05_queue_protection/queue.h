#ifndef _QUEUE_H
#define _QUEUE_H

struct node
{
	char value;
	struct node* next;
	struct node* prev;
};
typedef struct node node;
struct queue
{
	char data;
	struct node* head;
	struct node* tail;
};
typedef struct queue queue;
enqueue(struct queue* queue, const char value);
char dequeue(struct queue* queue);
#endif