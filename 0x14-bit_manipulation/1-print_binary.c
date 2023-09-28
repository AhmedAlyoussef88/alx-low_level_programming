#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number.
 * @n: input parameter int
 */
void print_binary(unsigned long int n)
{
	int bits = sizeof(n) * 8, x = 0;
	unsigned long int x;

	while (bits)
	{
		if (n & 1L << --bits)
		{
			_putchar('1');
			x++;
		}
		else if (x)
		{
			_putchar('0');
		}
	}
	if (!x)
	{
		_putchar('0');
	}
}
