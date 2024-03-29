#include "monty.h"

/**
 * instruction - finds the proper instruction
 * @arg: line argument
 * @line: the command line
 * @head: the stack
 * @line_number: the line number
*/

void instruction(char *arg, char *line, stack_t **head, int line_number)
{
	arg = strtok(line, " \n\t\v\f\r$");
	if (!arg)
		return;
	if (strcmp(arg, "push") == 0)
	{
		arg = strtok(NULL, " $");
		push(head, arg, line_number);
	}
	else if (strcmp(arg, "pall") == 0)
		pall(head);
	else if (strcmp(arg, "pint") == 0)
		pint(head, line_number);
	else if (strcmp(arg, "pop") == 0)
		pop(head, line_number);
	else if (strcmp(arg, "swap") == 0)
		swap(head, line_number);
	else if (strcmp(arg, "nop") == 0)
		return;
	else if (arg[0] == '#')
		return;
	else if (strcmp(arg, "add") == 0)
		add(head, line_number);
	else if (strcmp(arg, "sub") == 0)
		sub(head, line_number);
	else if (strcmp(arg, "div") == 0)
		divide(head, line_number);
	else if (strcmp(arg, "mod") == 0)
		mod(head, line_number);
	else if (strcmp(arg, "mul") == 0)
		mul(head, line_number);
	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, arg);
		exit(EXIT_FAILURE);
	}
}
