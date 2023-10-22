#include "monty.h"
/**
 * mul_top_two - multiplies the top two elements of the stack.
 * @stack: stack
 * @line_num: line_number
*/
void mul_top_two(stack_t **stack, unsigned int line_num)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_num);
		fclose(all.file);
		free(all.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	h = *stack;
	temp = h->next->n * h->n;
	h->next->n = temp;
	*stack = h->next;
	free(h);
}
