#include "monty.h"
/**
 * f_sub- sustration
 * @head: stack head
 * @lnNumber: line_number
 * Return: no nothing
 */
void sub_it(stack_t **head, unsigned int counter)
{
	stack_t *temp1;
	int hold, nodes;

	temp1 = *head;
	for (nodes = 0; temp1 != NULL; nodes++)
		temp1 = temp1->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(var.f);
		free(var.lineStr);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp1 = *head;
	hold = temp1->next->n - temp1->n;
	temp1->next->n = hold;
	*head = temp1->next;
	free(temp1);
}

