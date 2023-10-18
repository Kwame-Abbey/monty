#include "monty.h"
/**
 * add_to_stack - add node to the head stack
 * @stack: stack
 * @n: new_value
*/
void add_to_stack(stack_t **stack, int n)
{

	stack_t *new_node, *top;

	top = *stack;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (top)
		top->prev = new_node;
	new_node->n = n;
	new_node->next = *stack;
	new_node->prev = NULL;
	*stack = new_node;
}
