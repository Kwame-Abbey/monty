#include "monty.h"
/**
 * _queue - prints the top of a queue
 * @stack: stack
 * @line_num: line_number
*/
void _queue(stack_t **stack, unsigned int line_num)
{
	(void)stack;
	(void)line_num;
	bus.lifi = 1;
}

/**
 * add_to_queue - add node to the tail stack
 * @n: new_value
 * @stack: stack
*/
void add_to_queue(stack_t **stack, int n)
{
	stack_t *new_node, *top;

	top = *stack;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (top)
	{
		while (top->next)
			top = top->next;
	}
	if (!top)
	{
		*stack = new_node;
		new_node->prev = NULL;
	}
	else
	{
		top->next = new_node;
		new_node->prev = top;
	}
}
