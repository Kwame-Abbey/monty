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
		fclose(all.file);
		free(all.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	top = *stack;
	*stack = top->next;
	free(top);
}
