#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: Input parameter string
 * @needle: Input parameter string
 * Return: pointer to beginning of located substring
 * or NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (!needle[j])
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}
