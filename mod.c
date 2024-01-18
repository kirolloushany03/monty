#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * mod - computes the remainder of the division
 * @head: head given by main
 * @line_number: line counter
 *
 * Return: void
 */
void mod(stack_t **head, unsigned int line_number)
{
	stack_t *current;
	stack_t *second;
	int result;

	if (!*head || !((*head)->next))
	{
		fprintf(stderr, "L%d: can't mod, head too short\n", line_number);
		exit(EXIT_FAILURE);
		return;
	}
	current = *head;
	second = current->next;
	if (second->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	result = (second->n) % (current->n);
	second->n = result;
	pop(head, line_number);/*For top node*/
}
