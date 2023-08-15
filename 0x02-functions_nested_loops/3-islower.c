#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: input integer of this function
 * Return: 1 if lower else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
