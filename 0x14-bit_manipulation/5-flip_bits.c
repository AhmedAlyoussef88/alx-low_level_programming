#include "main.h"
#include <stdio.h>
/**
 * flip_bits - the number of bits you would need to flip to get from
 * one number to another.
 * @n: input parameter int
 * @m: input parameter int
 * Return: the number of bits you would need to flip to get from one
 * number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d = n ^ m;
	int c = 0;

	while (d)
	{
		d &= (d - 1);
		c++;
	}
	return (c);
}

