#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <fcntl.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct var_s - will carry arround the variables
 * @agmt: this will be the argument to pass
 * @f: file to be opened
 * @lineStr: will hold the content line
 * @flSQ: this the changes btn stack and queues
 */
typedef struct var_s
{
	char *agmt;
	FILE *f;
	char *lineStr;
	int flSQ;
} var_t;

extern var_t var;
void insertStack(stack_t **head, int item);
void insertQueue(stack_t **head, int item);
void push_it(stack_t **head, unsigned int lnNUmber);
void free_stack(stack_t *head);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void pall_it(stack_t **head, unsigned int lnNumber);
void pint_it(stack_t **head, unsigned int lnNumber);
void pop_it(stack_t **head, unsigned int lineNumber);
void swap_it(stack_t **head, unsigned int lnNumber);
void add_it(stack_t **head, unsigned int lnNumber);
void nop_it(stack_t **head, unsigned int lnNumber);
void sub_it(stack_t **head, unsigned int lnNumber);
void div_it(stack_t **head, unsigned int lnNumber);
void mul_it(stack_t **head, unsigned int lnNumber);
void mod_it(stack_t **head, unsigned int lnNumber);
void pchar_it(stack_t **head, unsigned int lnNUmber);
void pstr_it(stack_t **head, unsigned int lnNumber);
void rotl_it(stack_t **head, unsigned int lnNumber);
void rotr_it(stack_t **head, __attribute__((unused)) unsigned int lnNumber);
void queue_it(stack_t **head, unsigned int lnNumber);
void stack_it(stack_t **head, unsigned int lnNumber);
#endif
