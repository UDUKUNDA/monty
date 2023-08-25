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
	unsigned int i = 0;
	char *op;

	var.agmt = strtok(NULL, " \n\t");
	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	while (oparr[i].opcode && op)
	{
		if (strcmp(op, oparr[i].opcode) == 0)
		{
			oparr[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && oparr[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
