#include "monty.h"

int
main (void)
{
	stack_t *head = NULL;

    push(1);
    push(2);

    pall(head);

    while (head != NULL) {
        stack_t *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}