#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: Pointer parameter
 */
void puts_half(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;

	length = (length + 1) / 2;

	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}
	_putchar('\n');
}
