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
	char line[256];
	char *command;
	char *arg;
	stack_t *head = NULL;

	if (ac != 2)
	{
		perror("Usage: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(av[1], "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s", av[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(line, sizeof(line), file) != NULL)
	{
		arg = strtok(line, " $");
		while (arg != NULL)
		{
			if (strstr(arg, "push") != NULL)
			{
				arg = strtok(NULL, " $");
				push(&head, atoi(arg));
			}
			else if (strstr(arg, "pall") != NULL)
			{
				pall(&head);
				arg = strtok(NULL, " $");
			}
			else
				arg = strtok(NULL, " $");
		}
	}
	fclose(file);
	return (0);
}
