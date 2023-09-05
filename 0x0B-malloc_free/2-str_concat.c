#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings.
 * @s1: input parameter string
 * @s2: input parameter string
 * Return: if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int x = 0, y = 0, s1Len = 0, s2Len = 0;

	while (s1 != NULL && s1[s1Len])
		s1Len++;
	while (s2 != NULL && s2[s2Len])
		s2Len++;
	s3 = malloc(sizeof(char) * (s1Len + s2Len + 1));
	if (s3 == NULL)
		return (NULL);
	if (s1)
	{
		while (x < s1Len)
		{
			s3[x] = s1[x];
			x++;
		}
	}
	if (s2)
	{
		while (x < (s1Len + s2Len))
		{
			s3[x] = s2[y];
			x++;
			y++;
		}
	}
	s3[y] = '\0';
	return (s3);
}

