#include "monty.h"

/**
 * divide - Divides the second element by the top element of the stack
 * the top element
 * @head: Double pointer to the head of the stack.
 * @line_number: line number
*/

void divide(stack_t **head, int line_number)
{
	stack_t *top, *next;
	int result = 0;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	top = *head;
	next = top->next;
	result = top->n / next->n;
	next->n = result;
	pop(head, line_number);
}
