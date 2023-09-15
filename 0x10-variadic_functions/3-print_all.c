#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: input parameter string
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *x = "";
	va_list l;

	va_start(l, format);
	if (format)
	{
		while (format[i])
		{
			if (format[i] == 'c')
				printf("%s%c", x, va_arg(l, int));
			else if (format[i] == 'i')
				printf("%s%d", x, va_arg(l, int));
			else if (format[i] == 'f')
				printf("%s%f", x, va_arg(l, double));
			else if (format[i] == 's')
			{
				s = va_arg(l, char *);
				if (!s)
					s = "(nil)";
				printf("%s%s", x, s);
			}
			x = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
