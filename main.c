#include "monty.h"

int
main(int argc, char *argv[])
{
    if (argc != 2)
	{
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return EXIT_FAILURE;
    }

    FILE *file = fopen(argv[1], "r");
    if (!file)
	{
        fprintf(stderr, "Error: Cannot open file %s\n", argv[1]);
        return EXIT_FAILURE;
    }

    char line[100];

    while (fgets(line, sizeof(line), file) != NULL)
	{
        char command[10];
        int argument = 0;
        sscanf(line, "%s %d", command, &argument);

        if (strcmp(command, "push") == 0)
		{
            push(argument);
        }
		else if (strcmp(command, "pall") == 0)
		{
            pall(top);
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
