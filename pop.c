#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @head: the stack
 * @line_number: line number
*/

void pop(stack_t **head, int line_number)
{
	stack_t *current;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	current = *head;
	*head = current->next;
	if (*head)
	{
		(*head)->prev = NULL;
	}
	current->next = NULL;
	free(current);
}
