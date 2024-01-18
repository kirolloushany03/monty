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
	stack_t *second;
	int result = 0;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	top = *head;
	second = top->next;
	result = (top->n) * (second->n);
	second->n = result;
	pop(head, line_number);
}
