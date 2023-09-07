#include "main.h"
#include <stdlib.h>
/**
 * *fillmemory - fill memory
 * @str: input parameter string
 * @x: input parameter string
 * @y: num of copy
 * Return: pointer to memory
 */
char *fillmemory(char *str, char x, unsigned int y)
{
	unsigned int i = 0;

	while (i < y)
	{
		str[i] = x;
		i++;
	}
	return (str);
}
/**
 * *_calloc - allocates memory for an array of nmemb elements of size bytes
 * each and returns a pointer to the allocated memory.
 * @nmemb: input parameter int
 * @size: input parameter int
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *strPointer;

	if (nmemb == 0 || size == 0)
		return (NULL);
	strPointer = malloc(size * nmemb);
	if (strPointer == NULL)
		return (NULL);
	fillmemory(strPointer, 0, nmemb * size);
	return (strPointer);
}
