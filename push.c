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
	char *int_end;

	while (*temp != '\0' && isspace((unsigned char)*temp))
		temp++;

	if (*temp == '\0')
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	n = strtol(arg, &int_end, 10);

	if (*int_end != '\0' && !isspace((unsigned char)*int_end))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

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
