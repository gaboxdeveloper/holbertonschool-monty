#include "monty.h"

void
pint(const stack_t *top)
{
    if (top)
	{
        printf("%d\n", top->n);
    }
	else
	{
        fprintf(stderr, "Error: can't pint, stack empty\n");
        exit(EXIT_FAILURE);
    }
}