#include "monty.h"
/**
 * push_to_stack - add node to the stack
 * @stack: stack
 * @line_num: line_number
 * Return: no return
*/
void push_to_stack(stack_t **stack, unsigned int line_num)
{
	int n, j = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", line_num);
			fclose(bus.file);
			free(bus.content);
			free_stack(*stack);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		add_to_stack(stack, n);
	else
		add_to_queue(stack, n);
}
