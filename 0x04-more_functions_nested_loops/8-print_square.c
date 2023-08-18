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

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
