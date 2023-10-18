#include "monty.h"

/**
 * _strndup - allocate memory dynamically
 * @str: string
 * @n: bytes
 * Return: copied string
 */

char *_strndup(const char *s, unsigned int n)
{
	unsigned int len;
	char *copy;

	if (s == NULL)
		return (NULL);
	len = strlen(s);
	if (len > n)
		len = n;
	copy = (char *) malloc (len + 1);
	if(copy != NULL)
	{
		memcpy(copy, s, len);
		copy[len] = '\0';
	} else
		return (NULL);

	return (copy);
}
