#include <stdlib.h>
#include "main.h"
/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: Input parameter int
 * @c: input parameter char
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *x = (char *) malloc(sizeof(char) * size);

	unsigned int i = 0;

	if (size == 0 || x == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		*(x + i) = c;
		i++;
	}
	*(x + i) = '\0';
	return (x);
}
