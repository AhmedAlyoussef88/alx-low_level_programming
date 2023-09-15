#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: input parameter string
 * @n: input parameter int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_l l;

	va_start(l, n);
	while (i < n)
	{
		if (!separator)
			printf("%d", va_arg(l, int));
		else if (separator && i == 0)
			printf("%d", va_arg(l, int));
		else
			printf("%s%d", separator, va_arg(l, int));
		i++;
	}
	va_end(l);
	printf("\n");
}
