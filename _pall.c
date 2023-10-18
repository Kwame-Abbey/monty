#include "monty.h"
/**
 * _pall - prints the stack
 * @stack: stack
 * @line_num: Unused parameter
*/
void _pall(stack_t **stack, unsigned int line_num)
{
	stack_t *top = *stack;
	(void)line_num;

	if (top == NULL)
		return;
	while (top)
	{
		printf("%d\n", top->n);
		top = top->next;
	}
}
