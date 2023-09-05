#include "main.h"
/**
 * *_strdup - pointer to a new string which is a duplicate of the string str
 * Memory for the new string is obtained with malloc,and can be freed with free
 * @str: input parameter array
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	unsigned int i = 0, x = 0;

	char *duplicate = malloc(sizeof(char) * (x + 1));

	if (str == NULL || duplicate == NULL)
	{
		return (NULL);
	}
	while (str[x])
	{
		x++;
	}
	while ((duplicate[i] = str[i]) != '\0')
	{
		i++;
	}
	return (duplicate);
}

