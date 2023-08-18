#include "main.h"
/**
 * print_line - n is the number of times the character
 *_ should be printed
 * @n: input parameter
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 1;
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
