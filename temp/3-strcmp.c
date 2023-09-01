#include "main.h"
/**
 * _strcmp - function should work exactly like strncpy
 * @s1: destination string
 * @s2: source string
 * Return: less than Zero if s1 <  s2
 * 0 if s1 = s2, more than 0 if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
