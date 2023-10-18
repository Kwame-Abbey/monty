#include "monty.h"
/**
 * pop_out_stack - prints the top
 * @stack: stack
 * @line_num: line_number
*/
void pop_out_stack(stack_t **stack, unsigned int line_num)
{
	stack_t *top;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	top = *stack;
	*top = top->next;
	free(top);
}
