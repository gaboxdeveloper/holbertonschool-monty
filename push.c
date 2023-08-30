#include "monty.h"

stack_t *top = NULL;

void
push(int a)
{
	stack_t *new_node = malloc(sizeof(stack_t));

    if (!new_node) {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = a;
    new_node->next = top;
    new_node->prev = NULL;

    if (top) {
        top->prev = new_node;
    }

    top = new_node;
}