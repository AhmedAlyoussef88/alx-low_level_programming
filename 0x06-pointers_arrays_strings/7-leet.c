#include "main.h"
/**
 * *leet - function that encodes a string into 1337
 * @str: string input parameter
 * Return: result string
 */
char *leet(char *str)
{
	int i = 0, j = 0;

	char *key = "aAeEoOtTlL";
	char *value = "4433007711";

	while (str[i] != '\0')
	{
		while (j < 10)
		{
			if (str[i] == key[j])
			{
				srt[i] = value[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
