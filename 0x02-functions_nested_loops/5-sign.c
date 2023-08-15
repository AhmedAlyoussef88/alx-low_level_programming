#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: input integer of this function
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(1+'0');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0+'0');
		return (0);
	}
	else
	{
		_putchar(-1+'0');
		return (-1);
	}
}
