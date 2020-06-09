#ifndef STACK_H
#define STACK_H
struct stack
{
	int value;
	struct stack* next;
};
typedef struct stack stack;
input(stack** head, const int a);
output(stack** head);
find_max(stack** head);
find_min(stack** head);
#endif 
