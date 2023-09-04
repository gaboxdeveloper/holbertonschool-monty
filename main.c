#include "monty.h"

stack_t *top = NULL;

int
main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	FILE *file = fopen(argv[1], "r");

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	char line[100];
	int line_number = 0;

	while (fgets(line, sizeof(line), file) != NULL)
	{
		line_number++;
		char command[10] = "";
		char argument[100] = "";

		int num_items = sscanf(line, "%9s %99s", command, argument);

		if (strcmp(command, "push") == 0)
			push(argument);
		else if (strcmp(command, "pint") == 0)
			pint(top, line_number);
		else if (strcmp(command, "pall") == 0)
			pall(top);
		else if (strcmp(command, "pop") == 0)
			pop(&top, line_number);
		else if (strcmp(command, "swap") == 0)
			swap(&top, line_number);
		else
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", line_number, command);
			return (1);
		}
	}

	fclose(file);

	while (top != NULL)
	{
		stack_t *temp = top;

		top = top->next;
		free(temp);
	}

	return (0);
}
