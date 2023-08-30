#include "monty.h"

stack_t *top = NULL;

void
push(char *arg)
{
	int value = atoi(arg);

	if (value == 0 && arg[0] != '0')
	{
		fprintf(stderr, "Error: Usage: push integer\n");
		exit(EXIT_FAILURE);
	}

	stack_t *new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->next = top;
	new_node->prev = NULL;

	if (top)
	{
		top->prev = new_node;
	}

	top = new_node;
}
