#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @head: the stack
 * @line_number: line number
*/

void swap(stack_t **head, int line_number)
{
	stack_t *current;
	stack_t *next;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	current = *head;
	next = current->next;
	current->prev = next;
	current->next = next->next;
	next->prev = NULL;
	next->next = current;
	*head = next;
}
