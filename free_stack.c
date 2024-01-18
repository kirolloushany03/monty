#include "monty.h"

/**
 * free_stack - free stack
 * @head: the stack
*/

void free_stack(stack_t **head)
{
	stack_t *current, *next;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
