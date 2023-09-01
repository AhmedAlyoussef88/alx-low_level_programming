#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: Input parameter string
 * @accept: Input parameter string
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;

	unsigned int x = 0;

	while (s[i] != '\0' && s[i] != ' ')
	{
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
				x++;
			j++;
		}
		j = 0;
		i++;
	}
	return (x);
}
