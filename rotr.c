#include "monty.h"
/**
  *rotr_to_bottom - rotates the stack to the bottom
  *@stack: stack
  *@line_num: line_number
 */
void rotr_to_bottom(stack_t **stack, unsigned int line_num)
{
	stack_t *temp;

	(void)line_num;
	temp = *stack;
	if (*stack == NULL || (*stack)->next == NULL)
	{
		return;
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = *stack;
	temp->prev->next = NULL;
	temp->prev = NULL;
	(*stack)->prev = temp;
	(*stack) = temp;
}
