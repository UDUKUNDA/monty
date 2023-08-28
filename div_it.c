#include "monty.h"
/**
 * div_it - divides  two 1st elements of the stack.
 * @head:  head
 * @lnNumber: line_number
 * Return: no return
*/
void div_it(stack_t **head, unsigned int lnNumber)
{
	stack_t *h;
	int length = 0, temp;

	h = *head;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", lnNumber);
		fclose(var.f);
		free(var.lineStr);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", lnNumber);
		fclose(var.f);
		free(var.lineStr);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = h->next->n / h->n;
	h->next->n = temp;
	*head = h->next;
	free(h);
}

