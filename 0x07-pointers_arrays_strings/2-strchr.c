#include "main.h"
#include <stdio.h>
/**
 * *_strchr - locates a character in a string.
 * @s: Input parameter string
 * @c: Input parameter string
 * Return: pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int x;

	while (1)
	{
		x = *s++;
		if (x == c)
			return (s - 1);

		if (x == 0)
			return (NULL);
	}
}
