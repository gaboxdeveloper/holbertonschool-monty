#include "monty.h"

int
main (void)
{
	stack_t *head = NULL;

    push(&head, 1);
    push(&head, 2);

    size_t numNodes = pall(head);
    printf("Número de nodos en la pila: %zu\n", numNodes);

    while (head != NULL) {
        stack_t *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}