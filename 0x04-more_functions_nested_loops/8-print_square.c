#include "main.h"
/**
 * print_square - size is the size of the square
 * If size is 0 or less, the function should
 * print only a new line
 * @size: input parameter
 */
void print_square(int size)
{
	int i, j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			++j;
		}
		_putchar('\n');
		++i;
	}
}
