#include "monty.h"

void
push(stack_t **head, int a)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));

	if (!new)
		return;
	
	new->n = a;
	new->next = top;
	top = new;
}