#include "monty.h"

/**
 * mul - multiplies the second top element
 * of the stack with the top element of the
 * stack
 * @head: the stack
 * @line_number: line number
*/

void mul(stack_t **head, int line_number)
{
	stack_t *top;
	int result = 0;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	top = (*head)->next;
	result = (top->n) * (top->prev->n);
	top->n = result;
	free(top->prev);
	top->prev = NULL;
}
