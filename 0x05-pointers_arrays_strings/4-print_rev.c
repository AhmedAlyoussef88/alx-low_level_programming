#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: Pointer Parameter
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	int j, x;

	x = i - 1;
	for (j = x; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
