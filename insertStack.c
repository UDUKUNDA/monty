#include "monty.h"

/**
 * insertStack - this will pop up the stack
 * @head: this will point to the top of the stack
 * @item: this will be the value to pop
 *
 * Return: no return
 */

void insertStack(stack_t **head, int item)
{
	stack_t *nNode = malloc(sizeof(stack_t));

	if (!nNode)
	{
		printf("We can't allocate you a memory");
		exit(EXIT_FAILURE);
	}
	nNode->n = item;
	nNode->prev = NULL;
	nNode->next = *head;

	if (*head)
		(*head)->prev = nNode;
	*head = nNode;
}
