#include "monty.h"

/**
 * add - Adds the top two elements of the stack.
 * @head: Double pointer to the head of the stack.
 * @line_number: The line number in the Monty file where the operation occurs.
 * Description:
 * This function adds the values of the top two elements of the stack and
 * replaces the second element with the result. If the stack contains fewer
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
