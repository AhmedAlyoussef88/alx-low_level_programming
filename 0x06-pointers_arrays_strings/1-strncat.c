#include "main.h"
/**
 * _strcat - concatenates two strings
 * it will use at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: bytes number
 * Return: Concatenation result
 */
char *_strcat(char *dest, char *src, int n)
{
	int count1 = 0, count2 = 0;

	while (dest[count1] != '\0')
	{
		count1++;
	}

	while (src[count2] != '\0' && count2 < n)
	{
		dest[count1] = src[count2];
		count1++;
		count2++;
	}
	dest[count1] = '\0';

	return (dest);
}
