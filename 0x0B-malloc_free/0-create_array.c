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
	char *x = malloc(size);

	if (size == 0 || x == 0)
	{
		return (NULL);
	}
	while (size > 0)
	{
		x[size] = c;
		size--;
	}
	x[size] = '\0';
	return (x);
}
