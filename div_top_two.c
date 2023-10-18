#include "monty.h"
/**
 * div_top_two - divides the top two elements of the stack.
 * @stack: stack
 * @line_num: line_number
*/
void div_top_two(stack_t **stack, unsigned int line_num)
{
	stack_t *h;
	int len = 0, temp;

	h = *stack;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	h = *stack;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	temp = h->next->n / h->n;
	h->next->n = temp;
	*stack = h->next;
	free(h);
}
