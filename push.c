#include "monty.h"

/**
 * push - adds an element to the stack
 * @head: the stack
 * @n: data of the new element
*/

void push(stack_t **head, int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		perror("Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return;
	}
	new->next = *head;
	*head = new;
}
