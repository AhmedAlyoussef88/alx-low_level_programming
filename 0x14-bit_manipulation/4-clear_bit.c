#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: input parameter int
 * @index: input parameter int
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 64)
	{
		return (-1);
	}
	x = 1L << index;
	if (*n & x)
	{
		*n ^= x;
	}
	return (1);
}
