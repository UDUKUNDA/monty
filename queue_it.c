#include "monty.h"
/**
 * queue_it - prints the top
 * @head: head
 * @lnNumber: line_number
 * Return: nothing
*/
void queue_it(stack_t **head, unsigned int lnNumber)
{
	(void)head;
	(void)lnNumber;
	var.flSQ = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: arg
 * @head: head
 * Return: nothing
*/
void addqueue(stack_t **head, int n)
{
	stack_t *Nnode, *temp;

	temp = *head;
	Nnode = malloc(sizeof(stack_t));
	if (Nnode == NULL)
	{
		printf("Error\n");
	}
	Nnode->n = n;
	Nnode->next = NULL;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*head = Nnode;
		Nnode->prev = NULL;
	}
	else
	{
		temp->next = Nnode;
		Nnode->prev = temp;
	}
}
