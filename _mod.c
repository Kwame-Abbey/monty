#include "monty.h"
/**
 * _mod - computes the rest of the division
 * @stack: stack
 * @line_num: line_number
*/
void _mod(stack_t **stack, unsigned int line_num)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_num);
		fclose(all.file);
		free(all.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	h = *stack;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_num);
		fclose(all.file);
		free(all.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	temp = h->next->n % h->n;
	h->next->n = temp;
	*stack = h->next;
	free(h);
}
