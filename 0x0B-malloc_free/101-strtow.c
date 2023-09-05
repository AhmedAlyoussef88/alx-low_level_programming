#include "main.h"
#include <stdlib.h>
/**
 * WordsCounter - get counts of a string
 * @str: input parameter string
 * Return: words count
 */
int WordsCounter(char *str)
{
	int i = 0, j = 0, count = 0;

	while (str[j] != '\0')
	{
		if (str[j] == ' ')
			i = 0;
		else if (i == 0)
		{
			i = 1;
			count++;
		}
		j++;
	}
	return (count);
}
/**
 * **strtow - splits a string into words.
 * @str: input parameter string
 * Return: pointer to an array of strings (words)
 * NULL if str == NULL or str == ""
 * fails, it should return NULL
 */
char **strtow(char *str)
{
	char **x, *y;
	int i = 0, k = 0, slength = 0, wordsCount = 0, c = 0, s = 0, e = 0;

	while (*(str + slength))
		slength++;
	wordsCount = WordsCounter(str);
	if (wordsCount == 0)
		return (NULL);
	x = (char **) malloc(sizeof(char *) * (wordsCount + 1));
	if (x == NULL)
		return (NULL);
	while (i <= slength)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				e = i;
				y = (char *) malloc(sizeof(char) * (c + 1));
				if (y == NULL)
					return (NULL);
				while (s < e)
					*y++ = str[s++];
				*y = '\0';
				x[k] = y - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			s = i;
		i++;
	}
	x[k] = NULL;
	return (x);
}
