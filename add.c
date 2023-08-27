#include "monty.h"
/**
 * add_it - this will add the two first elements of the ds
 * @head: ptr to the 1st elem of the ds
 * @lnNumber: this is going tob e the counter
 *
 * Return: Nothing
 */
void add_it(stack_t **head, unsigned int lnNumber)
{
	stack_t *ptr;
	int length = 0, temp;

	ptr = *head;

	while (ptr)
	{
		ptr = ptr->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", lnNumber);
		fclose(var.f);
		free(var.lineStr);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	temp = ptr->n + ptr->next->n;
	ptr->next->n = temp;
	free(ptr);
}

