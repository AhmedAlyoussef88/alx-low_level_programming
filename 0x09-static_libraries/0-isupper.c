#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: input integer of this function
 * Return: 1 if upper else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
