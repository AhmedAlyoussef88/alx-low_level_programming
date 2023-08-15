#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n : Input parameters
 */
void print_times_table(int n)
{
	int i, j, x;

	if (n <= 15 && n >= 0)
	{
		i = 0;
		while (i <= n)
		{
			_putchar('0');
			j = 1;
			while (j <= n)
			{
				_putchar(',');
				_putchar(' ');
				x = i * j;
				if (x <= 9)
				{
					_putchar(' ');
				}
				if (x <= 99)
				{
					_putchar(' ');
				}
				if (x >= 100)
				{
					_putchar((x / 100) + '0');
					_putchar((x / 10) % 10 + '0');
				}
				else if (x <= 99 && x >= 10)
				{
					_putchar((x / 10) + '0');
				}
				_putchar((x % 10) + '0');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
