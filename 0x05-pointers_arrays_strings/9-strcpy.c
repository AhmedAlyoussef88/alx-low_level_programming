#include "main.h"
/**
 * *_strcpy -  copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: Pointer Parameter
 * @src: Pointer parameter string
 * Return: Dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0, destLen = 0;

	while (src[length] != '\0')
		length++;

	while (destLen < length)
	{
		dest[destLen] = str[destLen];
		destLen++;
	}
	dest[destLen] = '\0';

	return (dest);
}
