#include "monty.h"
/**
 * main - gets argv[1] file and gives it to stacked
 *
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	stacked(argv[1]);
	return (0);
}
