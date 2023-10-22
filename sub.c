#include "monty.h"
/**
  *sub_top_two - subtracts top two
  *@stack: stack
  *@line_num: line_number
 */
void sub_top_two(stack_t **stack, unsigned int line_num)
{
	stack_t *top;
	int i, j;

	top = *stack;
	for (j = 0; top != NULL; j++)
		top = top->next;
	if (j < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_num);
		fclose(all.file);
		free(all.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	top = *stack;
	i = top->next->n - top->n;
	top->next->n = i;
	*stack = top->next;
	free(top);
}
