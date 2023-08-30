#include <unistd.h>
#include "main.h"
/**
 * _putchar - display character
 * @x: the character that will be printed
 * Return: first character
 */
int _putchar(char x)
{
	return (write(1, &x, 1));
}
