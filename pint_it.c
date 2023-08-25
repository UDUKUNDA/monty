#include "monty.h"
/**
 * pint_it - will print the top
 * @head: pointrt to top
 * @lnNumber: the counting
 *
 * Return: nothing
 */

void pint_it(stack_t **head, unsigned int lnNumber)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", lnNumber);
		fclose(var.f);
		free(var.lineStr);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

