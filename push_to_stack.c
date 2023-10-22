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

	if (all.arg)
	{
		if (all.arg[0] == '-')
			j++;
		for (; all.arg[j] != '\0'; j++)
		{
			if (all.arg[j] > 57 || all.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", line_num);
			fclose(all.file);
			free(all.content);
			free_stack(*stack);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", line_num);
		fclose(all.file);
		free(all.content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	n = atoi(all.arg);
	if (all.lit == 0)
		add_to_stack(stack, n);
	else
		add_to_queue(stack, n);
}
