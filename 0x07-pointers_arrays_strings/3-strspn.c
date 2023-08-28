#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: Input parameter string
 * @accept: Input parameter string
 * Return: number of bytes in the initial segment of s
 which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != s[i])
		{
			if (accept[j] == '\0')
				return (i);
			j++;
		}

		i++;
	}
	return (i);
}
