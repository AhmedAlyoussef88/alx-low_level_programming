#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number.
 * @n: input parameter int
 */
void print_binary(unsigned long int n)
{
	int bits = sizeof(n) * 8;
	unsigned long int x;

	if (n == 0)
	{
		printf("0\n");
		return;
	}
	int i = bits - 1;
	int p = 0;

	while (i >= 0)
	{
		x = 1UL << i;
		if ((n & x) != 0)
		{
			_putchar('1');
			p = 1;
		}
		else if (p || i == 0)
		{
			_putchar('0');
		}
		i--;
	}
	_putchar('\n');
}
