#include "main.h"
/**
 * rot13 - function that encodes a string using rot13
 * @str: string input parameter
 * Return: result string
 */
char *rot13(char *str)
{
	int i = 0, j;

	char x[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char y[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (str[i] != '\0')
	{
		j = 0;
		while (x[j] != '\0')
		{
			if (str[i] == x[j])
			{
				str[i] = y[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
