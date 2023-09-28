#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number.
 * @n: input parameter int
 */
void print_binary(unsigned long int n)
{
	int bits = sizeof(n) * 8, x = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	while (bits)
	{
		if (n & 1L << --bits)
		{
			printf("1");
			x++;
		}
		else if (x)
		{
			printf("0");
		}
	}
	if (!x)
	{
		printf("0");
	}
}
