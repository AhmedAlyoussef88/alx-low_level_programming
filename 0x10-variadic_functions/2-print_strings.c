#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: input parameter
 * @n: input parameter
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *s;
	va_list l;

	va_start(l, n);
	while (i < n)
	{
		s = va_arg(l, char *);
		if (!s)
			s = "(nil)";
		if (!separator)
			printf("%s", s);
		else if (separator && i == 0)
			printf("%s", s);
		else
			printf("%s%s", separator, s);
		i++;
	}
	printf("\n");
	va_end(l);
}
