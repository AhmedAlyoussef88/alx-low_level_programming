#include "variadic_functions.h"
/**
 * sum_them_all -  the sum of all its parameters.
 * @n: input parameter int
 * Return: n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int s = 0;
	va_list l;

	va_start(l, n);
	while (i < n)
	{
		s += va_arg(l, int);
		i++;
	}
	va_end(l);
	return (s);
}
