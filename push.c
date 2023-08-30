#include "monty.h"

stack_t *top = NULL;

void
push(int a)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));

	if (!new)
		return;
	
	new->n = a;
	new->next = top;
	top = new;
}