#include "main.h"
/**
 * _strncpy - function should work exactly like strncpy
 * @dest: destination string
 * @src: source string
 * @n: bytes number
 * Return: Concatenation result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	while (src[count] != '\0' && count < n)
	{
		dest[count] = src[count];
		count++;
	}

	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}

	return (dest);
}
