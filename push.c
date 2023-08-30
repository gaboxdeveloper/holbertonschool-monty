#include "monty.h"

void
push(int a)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));

	if (!new)
		return (NULL);
	
	new->n = a;
	new->next = top;
	top = new;
}