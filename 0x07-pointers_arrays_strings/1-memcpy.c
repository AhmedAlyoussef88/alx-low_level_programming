#include "main.h"
/**
 * *_memcpy - copies memory area.
 * @dest: Input parameter string
 * @src: Input parameter string
 * @n: Input parameter int
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	while (i < n)
	{
		dest[i] = src[i];
	}
	return (dest);
}
