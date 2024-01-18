#include "monty.h"

/**
 * main - Entry point for the Monty interpreter program.
 * @ac: number of command-line  arguments
 * @av: An array of strings containing the command-line arguments.
 *
 * Description:
 * This function serves as the entry point for the Monty interpreter program.
 * Return: 0 if success, -1 otherwise
*/

int main(int ac, char **av)
{
	FILE *file;
	int line_number = 1;
	char line[256];
	char *arg = NULL;
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
		instruction(arg, line, &head, line_number);
		line_number++;
	}
	fclose(file);
	free_stack(&head);
	head = NULL;
	return (0);
}
