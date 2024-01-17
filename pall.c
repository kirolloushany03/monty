#include "monty.h"

/**
 * pall - prints all elements of a stack
 * @head: the stack
*/

void pall(stack_t **head)
{
	stack_t *current;

	current = *head;
	if (current == NULL)
		return;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
