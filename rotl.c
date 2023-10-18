#include "monty.h"
/**
  *rotl_to_top - rotates the stack to the top
  *@stack: stack
  *@line_num: line_number
 */
void rotl_to_top(stack_t **stack, unsigned int line_num)
{
	stack_t *temp = *stack, *top;

	(void)line_num;
	if (*stack == NULL || (*stack)->next == NULL)
	{
		return;
	}
	top = (*stack)->next;
	top->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *stack;
	(*stack)->next = NULL;
	(*stack)->prev = temp;
	(*stack) = top;
}
