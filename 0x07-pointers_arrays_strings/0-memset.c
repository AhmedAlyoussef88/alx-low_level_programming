#include "main.h"
/**
 * *_memset - fills memory with a constant byte.
 * @s: Input parameter string
 * @b: Input parameter string
 * @n: Input parameter int
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
