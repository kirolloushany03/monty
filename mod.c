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
<<<<<<< HEAD
	stack_t *top, *next;
	int result = 0;

	if (*head == NULL || (*head)->next == NULL)
=======
	stack_t *current;
	stack_t *second;
	int result;

	if (!*head || !((*head)->next))
>>>>>>> c8b4efafc0f90bfe3d3bdce5edbddaf2d7d176fc
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
<<<<<<< HEAD
	top = *head;
	next = top->next;
	result = next->n % top->n;
	next->n = result;
	pop(head, line_number);
=======
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
>>>>>>> c8b4efafc0f90bfe3d3bdce5edbddaf2d7d176fc
}
