#include "monty.h"

/**
 * add - adds the top two elements of the stack
 * @head: the stack
 * @line_number: line number
*/

void add(stack_t **head, int line_number)
{
	stack_t *result;
	stack_t *top;
	int sum = 0;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	top = *head;
	result = top->next;
	sum = (top->n) + (result->n);
	result->n = sum;
	pop(head, line_number);
}
