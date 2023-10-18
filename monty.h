#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <ctype.h>
#include <sys/stat.h>
#include <sys/types.h>

#define UNUSED(a) (void)(a)
extern int n;

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

/* stack operations */
void push_to_stack(stack_t **stack, unsigned int line_n);
void pall_values(stack_t **stack, unsigned int line_n);

/* get_func.c */
void (*get_op_func(char *op_code))(stack_t **stack, unsigned int line_n);
int _strncmp(char *str1, char *str2, int len);
int find_length(char *op_code);

/* file operations.c */
void stacked(char *file);
void free_list(stack_t **stack);
void find_op(stack_t **stack, int lines, char *token);
char *read_file(char *file);
int num_check(char *str);

char *_strndup(const char *s, unsigned int n);
#endif
