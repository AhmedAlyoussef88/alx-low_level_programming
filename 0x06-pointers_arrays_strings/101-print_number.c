#include "main.h"
/**
 * print_number - function that prints an integer;
 * @val: input parameter;
 */
void print_number(int val)
{
	unsigned int number;

	if (val < 0)
	{
		number = -val;
		_putchar('-');
	} else
	{
		number = val;
	}
	if (number / 10)
	{
		print_number(number / 10);
	}

	_putchar((number % 10) + '0');
}
