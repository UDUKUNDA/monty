#include "monty.h"
/**
 * free_stack - this is going to free stacks*
 * @head: the pointer to the first element
 * Return: nothing
 */
void free_stack(stack_t *head)
{
	while (head)
	{
		stack_t *temp = head;

		head = head->next;
		free(temp);
	}
}

