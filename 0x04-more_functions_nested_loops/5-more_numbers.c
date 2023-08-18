#include "main.h"
/**
 * print_most_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line
 */
void print_most_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			_putchar(j + '0');
			j++;
		}
		i++;
	}
	_putchar('\n');
}
