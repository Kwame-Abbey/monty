#include "monty.h"
/**
 * _pint - prints the top integer
 * @stack: stack
 * @line_num: line_number
*/
void _pint(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
		fclose(all.file);
		free(all.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
