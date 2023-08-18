#include "main.h"
/**
 * print_diagonal - n is the number of times the character
 * \ should be printed
 * @n: input parameter
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 1;
		while (i <= n)
		{
			j = 1;
			while (j <= i)
			{
				_putchar(' ');
				j++;
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
}
