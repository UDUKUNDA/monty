#include "monty.h"
/**
 * mul_it - multiplies the top two elements of the stack.
 * @head: stack head
 * @lnNumber: line_number
 * Return: nothing
*/
void mul_it(stack_t **head, unsigned int lnNumber)
{
	stack_t *h;
	int len = 0, temp;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", lnNumber);
		fclose(var.f);
		free(var.lineStr);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	temp = h->next->n * h->n;
	h->next->n = temp;
	*head = h->next;
	free(h);
}

