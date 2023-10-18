#include "monty.h"
/**
 * _pchar - prints the char at the top
 * @stack: stack
 * @line_num: line_number
*/
void _pchar(stack_t **stack, unsigned int line_num)
{
	stack_t *top;

	top = *stack;
	if (!top)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	if (top->n > 127 || top->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", top->n);
}
