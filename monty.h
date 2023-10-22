#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lit: flag change stack to queue
 * Description: carries values through the program
 */
typedef struct all_s
{
	char *arg;
	FILE *file;
	char *content;
	int lit;
}  all_t;
extern all_t all;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void push_to_stack(stack_t **stack, unsigned int line_num);
void _pall(stack_t **stack, unsigned int line_num);
void _pint(stack_t **stack, unsigned int line_num);
int execute(char *content, stack_t **stack, unsigned int line_num, FILE *file);
void free_stack(stack_t *stack);
void pop_out_stack(stack_t **stack, unsigned int line_num);
void swap_top_two(stack_t **stack, unsigned int line_num);
void add_top_two(stack_t **stack, unsigned int line_num);
void _nop(stack_t **stack, unsigned int line_num);
void sub_top_two(stack_t **stack, unsigned int line_num);
void div_top_two(stack_t **stack, unsigned int line_num);
void mul_top_two(stack_t **stack, unsigned int line_num);
void _mod(stack_t **stack, unsigned int line_num);
void _pchar(stack_t **stack, unsigned int line_num);
void _pstr(stack_t **stack, unsigned int line_num);
void rotl_to_top(stack_t **stack, unsigned int line_num);
void rotr_to_bottom(stack_t **stack, unsigned int line_num);
void add_to_stack(stack_t **stack, int n);
void add_to_queue(stack_t **stack, int n);
void _queue(stack_t **stack, unsigned int line_num);
void _stack(stack_t **stack, unsigned int line_num);
#endif
