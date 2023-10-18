#include "monty.h"

/**
 * pall_values - prints all values on the stack
 * @stack: stack
 * @line_n: line number
 */

void pall_values(stack_t **stack, unsigned int line_n)
{
	stack_t *top = *stack;

	UNUSED(line_n);

	while (top != NULL)
	{
		printf("%d\n", top->n);
		top = top->next;
	}
}
