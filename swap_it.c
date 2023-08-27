#include "monty.h"
/**
 * swap_it - this will swap the two top elements of the stack
 * @head: this is a pointer to the top element of a stack
 * @lnNumber: this will be the counter
 *
 * Return: nothing
 */
void swap_it(stack_t **head, unsigned int lnNumber)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", lnNumber);
		fclose(var.f);
		free(var.lineStr);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	temp = ptr->n;
	ptr->n = ptr->next->n;
	ptr->next->n = temp;
}



