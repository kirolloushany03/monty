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
	stack_t *top, *next;
	int result = 0;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	top = *head;
	next = top->next;
	result = next->n % top->n;
	next->n = result;
	pop(head, line_number);
}
