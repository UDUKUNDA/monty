#include "monty.h"
/**
 * pop_it - remmoves the top element
 * @head: the poiter to f ele
 * @lineNumber: line_number
 * Return: nothing
*/
void pop_it(stack_t **head, unsigned int lineNumber)
{
	stack_t *ptr;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", lineNumber);
		fclose(var.f);
		free(var.lineStr);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	*head = ptr->next;
	free(ptr);
}
