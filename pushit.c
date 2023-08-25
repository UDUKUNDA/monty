#include "monty.h"
/**
 * push_it - this will push the item in the stack
 * @head: this pointer to the first element of the stack
 * @lnNumber: this one right here is the line number
 *
 * Return: nothing
 */
void push_it(stack_t **head, unsigned int lnNumber)
{
	int n, i = 0, flg = 0;

	if (var.agmt)
	{
		if (var.agmt[0] == '-')
			i++;
		for (; var.agmt[i] != '\0'; i++)
		{
			if (var.agmt[i] > 57 || var.agmt[i] < 48)
				flg = 1;
		}
		if (flg == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", lnNumber);
			fclose(var.f);
			free(var.lineStr);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", lnNumber);
		fclose(var.f);
		free(var.lineStr);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(var.agmt);
	if (var.flSQ == 0)
		insertStack(head, n);
	else
		insertQueue(head, n);
}

