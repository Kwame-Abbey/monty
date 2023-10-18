#include "monty.h"
/**
 * _pstr - prints the string from top
 * @stack: stack
 * @line_num: line_number
*/
void _pstr(stack_t **stack, unsigned int line_num)
{
	stack_t *top;
	(void)line_num;

	top = *stack;
	while (top)
	{
		if (top->n > 127 || top->n <= 0)
		{
			break;
		}
		printf("%c", top->n);
		top = top->next;
	}
	printf("\n");
}
