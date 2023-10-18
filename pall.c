#include "monty.h"
/**
 * _pall - prints the stack
 * @stack: stack
 * @line_num: unused parameter
*/
void _pall(stack_t **stack, unsigned int line_num)
{
	stack_t *h = *stack;
	(void)counter;

	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
