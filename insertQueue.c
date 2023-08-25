#include "monty.h"
/**
 * insertQueue - this will add a node in front of a queue
 * @head: the pointer to the front element
 * @item: the value
 *  Return: nothing
 */
void insertQueue(stack_t **head, int item)
{
	stack_t *nNode = malloc(sizeof(stack_t));
	stack_t *cNode = *head;

	if (!nNode)
	{
		printf("We can't allocate you a memory");
		exit(EXIT_FAILURE);
	}

	nNode->n = item;
	nNode->prev = NULL;
	nNode->next = NULL;

	if (*head == NULL)
	{
		*head = nNode;
		return;
	}

	while (cNode->next)
		cNode = cNode->next;
	cNode->next = nNode;
	nNode->prev = cNode;
}
