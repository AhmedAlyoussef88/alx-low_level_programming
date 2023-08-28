#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: Input parameter string
 * @accept: Input parameter string
 *
 * Return: number of bytes in the initial segment of s
 which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, x, y;

	x = 0;

	while (s[i] != '\0')
	{
		y = 0;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				x++;
				y = 1;
			}
			j++;
		}
		if (y == 0)
			return (x);

		i++;
	}
	return (0);
}
