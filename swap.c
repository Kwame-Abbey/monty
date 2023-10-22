#include "monty.h"
/**
 * swap_top_two - adds the top two elements of the stack.
 * @stack: stack
 * @line_num: line_number
*/
void swap_top_two(stack_t **stack, unsigned int line_num)
{
	stack_t *top;
	int len = 0, i;

	top = *stack;
	while (top)
	{
		top = top->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_num);
		fclose(all.file);
		free(all.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	top = *stack;
	i = top->n;
	top->n = top->next->n;
	top->next->n = i;
}
