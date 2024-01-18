#include "monty.h"

/**
 * main - Entry point
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: 0 if success, -1 otherwise
*/

int main(int ac, char **av)
{
	FILE *file;
	int line_number = 1;
	char line[256];
	char *arg;
	stack_t *head = NULL;

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(av[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(line, sizeof(line), file) != NULL)
	{
		arg = strtok(line, " \n\t\v\f\r$");
		if (!arg)
			continue;
		if (strcmp(arg, "push") == 0)
		{
			arg = strtok(NULL, " $");
			if (!arg || sizeof(arg) != sizeof(int))
			{
				fprintf(stderr, "L%d: usage: push integer\n", line_number);
				exit(EXIT_FAILURE);
			}
			push(&head, atoi(arg));
		}
		else if (strcmp(arg, "pall") == 0)
			pall(&head);
		else
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_number, arg);
			exit(EXIT_FAILURE);
		}
		line_number++;
	}
	fclose(file);
	return (0);
}
