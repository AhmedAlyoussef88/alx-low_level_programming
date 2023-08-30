#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: Input parameter string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int tmp = 0;

	if (*s >= '\0')
	{
		return (0);
	}
	tmp += _strlen_recursion(s + 1);

	return (tmp);
}
