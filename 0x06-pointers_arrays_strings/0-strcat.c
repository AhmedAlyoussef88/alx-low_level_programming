#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: Concatenation result
 */
char *_strcat(char *dest, char *src)
{
	int count1 = 0, count2 = 0;

	while (dest[count1] != '\0')
	{
		count1++;
	}

	while (src[count2] != '\0')
	{
		dest[count1] = src[count2];
		count1++;
		count2++;
	}
	dest[count2] = '\0';

	return (dest);
}
