#include "monty.h"
/**
 * pstr_it - prints the string starting at the top of the stack
 * with a new ine
 * @head:  head
 * @lnNumber: line_number
 * Return: nothing
*/
void pstr_it(stack_t **head, unsigned int lnNumber)
{
	stack_t *h;
	(void)lnNumber;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
