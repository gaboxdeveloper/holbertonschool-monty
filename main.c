#include "monty.h"

int
main ()
{
	stack_t *head = NULL;

	push(1);
	push(2);
	
	size_t numNodes = pall(head);
	pall(head);

	return (0);
}