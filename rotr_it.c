#include "monty.h"
/**
 * rotr_it - rotates the stack to the bottom
 * @head:  head
 * @lnNumber: line_number
 * Return: nothing
 */
void rotr_it(stack_t **head, __attribute__((unused)) unsigned int lnNumber)
{
	stack_t *kp;

	kp = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (kp->next)
	{
		kp = kp->next;
	}
	kp->next = *head;
	kp->prev->next = NULL;
	kp->prev = NULL;
	(*head)->prev = kp;
	(*head) = kp;
}
