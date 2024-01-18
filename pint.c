#include "monty.h"

/**
 * pint - prints the value at the top of the stack
 * @head: the stack
*/

void pint(stack_t **head, int line_number)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
