#include "monty.h"

void
pint(const stack_t *top, unsigned int line_number)
{
	if (top)
		printf("%d\n", top->n);
	else
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
}
