#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new
 * @str: Pointer parameter
 */
void puts2(char *str)
{
	int length = 0, j = 0;

	while (str[length] != '\0')
		length++;

	for (j = 0; j < length; j += 2)
		_putchar(str[j]);

	_putchar('\n');
}
