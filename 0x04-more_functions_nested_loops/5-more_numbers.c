#include "main.h"
/**
 * most_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line
 */
void most_numbers(void)
{
	int i = 0, j, x;

	while (i <= 10)
	{
		j = 0;
		while (j <= 14)
		{
			x = j;
			if (j > 9)
			{
				_putchar('1');
				x = j % 10;
			}
			_putchar(x + '0');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
