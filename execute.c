#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t oparr[] = {
		{"push", push_it}, {"pall", pall_it}, {"pint", pint_it},
		{"pop", pop_it},
		{NULL, NULL}
	};
	unsigned int i = (0);
	char *op = strtok(content, " \n\t");

	if (op && op[0] == '#')
		return (0);
	var.agmt = strtok(NULL, " \n\t");

	while (oparr[i].opcode)
	{
		if (strcmp(op, oparr[i].opcode) == 0)
		{
			oparr[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
