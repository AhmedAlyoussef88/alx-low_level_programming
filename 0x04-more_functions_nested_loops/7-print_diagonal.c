#include "main.h"
/**
 * print_diagonal - n is the number of times the character
 * \ should be printed
 * @n: input parameter
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0 y < x; y++)
			{
				_putchar(' ');
			}
			_putchar(\\);
			_putchar('\n');
		}
	}
}
