#include "monty.h"
/**
* execute - executes
* @stack: stack
* @line_num: line_counter
* @file: poiner to monty file
* @content: line content
* Return: integer
*/
int execute(char *content, stack_t **stack, unsigned int line_num, FILE *file)
{
	instruction_t opst[] = {
				{"push", push_to_stack}, {"pall", _pall}, {"pint", _pint},
				{"pop", pop_out_stack},
				{"swap", swap_top_two},
				{"add", add_top_two},
				{"nop", _nop},
				{"sub", sub_top_two},
				{"div", div_top_two},
				{"mul", mul_top_two},
				{"mod", _mod},
				{"pchar", _pchar},
				{"pstr", _pstr},
				{"rotl", rotl_to_top},
				{"rotr", rotr_to_bottom},
				{"queue", _queue},
				{"stack", _stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, line_num);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", line_num, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
