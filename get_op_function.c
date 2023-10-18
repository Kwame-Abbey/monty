#include "monty.h"
/**
 * _strncmp - compares two strings
 * @str1: string 1
 * @str2: string 2
 * @len: length of string 1
 *
 * Return: 1 if equal, 0 if not equal
 */
int _strncmp(char *str1, char *str2, int len)
{
	int i = 0;

	while (str1[i] && i < len)
	{
		if (str1[i] != str2[i])
			return (0);
		i++;
	}

	return (1);
}

/**
 * find_length - returns length of a string
 * @op_code: string
 *
 * Return: length
 */

int find_length(char *op_code)
{
	int len = 0, i = 0;

	while (isalpha(op_code[i]))
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * get_op_func - returns opcode function
 * @op_code: opcode
 *
 * Return: function corresponding to that opcode
 */

void (*get_op_func(char *op_code))(stack_t **stack, unsigned int line_n)
{
	int i, len;
	instruction_t inst[] = {
		{"push", push_to_stack},
		{"pall", pall_values},
		{NULL, NULL}
	};

	len = find_length(op_code);
	for (i = 0; inst[i].opcode != NULL; i++)
	{
		if (_strncmp(op_code, inst[i].opcode, len))
			return (inst[i].f);
	}
	return (inst[i].f);
}
