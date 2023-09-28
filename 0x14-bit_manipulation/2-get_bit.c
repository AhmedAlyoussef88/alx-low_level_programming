#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: input parameter int
 * @index: input parameter int
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x;
	
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	x = n >> index;

	return (x & 1);
}
