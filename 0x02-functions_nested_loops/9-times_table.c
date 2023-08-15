#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, j, x;

	while (i <= 9)
	{
		_putchar('0');
		j = 1;
		while (j <= 9)
		{
			_putchar(',');
			_putchar(' ');
			x = i * j;

			if (x <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0')

			j++;
		}
		_putchar('\n');

		i++;
	}
}
