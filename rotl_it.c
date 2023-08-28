#include "monty.h"
/**
 * rotl_it - rotates the stack to the top
 * @head: stack head
 * @lnNumber: line_number
 * Return: nothing
 */
void rotl_it(stack_t **head,  __attribute__((unused)) unsigned int lnNumber)
{
	stack_t *temp = *head, *temp2;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	temp2 = (*head)->next;
	temp2->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = temp2;
}
