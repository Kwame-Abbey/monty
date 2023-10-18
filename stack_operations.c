#include "monty.h"
int n;

/**
 * push_to_stack - pushes an element to the stack
 * @stack: stack
 * @line_n: line number
 */

void push_to_stack(stack_t **stack, unsigned int line_n)
{
	stack_t *top;

	UNUSED(line_n);

	top = malloc(sizeof(stack_t));
	if (top == NULL)
	{
		printf("Error: malloc failed\n");
		free_list(stack);
		free(stack);
		exit(EXIT_FAILURE);
	}

	top->n = n;
	top->prev = NULL;

	if (*stack)
	{
		(*stack)->prev = top;
		top->next = *stack;
	} else
		top->next = NULL;
	*stack = top;
}
