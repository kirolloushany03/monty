#include "monty.h"

/**
 * sub - subtracts the top element of the stack from
 * the second top element
 * @head: the stack
 * @line_number: line number
*/

void sub(stack_t **head, int line_number)
{
	stack_t *top, *next;
	int result = 0;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	top = *head;
	next = top->next;
	result = next->n - top->n;
	next->n = result;
	pop(head, line_number);
}
