#include "monty.h"

/**
 * push - adds an element to the stack
 * @head: the stack
 * @arg: data of the new element
 * @line_number: line number
*/

void push(stack_t **head, char *arg, int line_number)
{
	stack_t *new;
	int n;
	char *temp = arg;

	if (*temp == '\0')
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	n = atoi(arg);

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
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
