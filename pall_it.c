#include "monty.h"
/**
 * pall_it - will print the stack or queue
 * @head: pointer the first element
 * @lnNumber: the coounter
 * Return: nothing
 */
void pall_it(stack_t **head, unsigned int lnNumber)
{
	stack_t *ptr;
	(void)lnNumber;

	ptr = *head;
	if (ptr == NULL)
	{
		return;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	}
}

