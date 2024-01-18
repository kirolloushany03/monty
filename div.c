#include "monty.h"

/**
 * divide - Divides the second element by the top element of the head
 * the top element
 * @head: Double pointer to the head of the head.
 * @line_number: The line number in the Monty file where the operation occurs.
 * Description:
 * This function divides the value of the second element of the head by
 * the value of the top element and replaces the second element
 * If the head contains fewer than two elements or if the top element is
 * zero, it prints an error message and exits the program.
 * Return:
 * This function does not return a value. It modifies the head in place
 * and exits the program if an error occurs.
*/

void divide(stack_t **head, unsigned int line_number)
{
	int result;

	if (!head || !*head || !((*head)->next))
	{
		fprintf(stderr, "L%d: can't div, head too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (((*head)->n) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
		;
		return;
	}

	result = ((*head)->next->n) / ((*head)->n);
	pop(head, line_number);/*For top node*/
	(*head)->n = result;
}
