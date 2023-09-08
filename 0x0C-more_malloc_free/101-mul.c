#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * checkDigit - check digits
 * @str: input parameter string
 * Return: if there is non-digit (0), otherwise (1)
 */
int checkDigit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * Printerror - print error
 */
void Printerror(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * stringLength - get length of a string
 * @str: input parameter string
 * Return: length of string
 */
int stringLength(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * main - Entry point
 * @argc: input parameter int
 * @argv: input parameter array
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *str1 = argv[1], *str2 = argv[2];
	int i = 0, x = 0, str1len, str2len, strlen, c, dig1, dig2;

	if (argc != 3 || !checkDigit(str1) || !checkDigit(str2))
		Printerror();
	str1len = stringLength(str1), str2len = stringLength(str2);
	strlen = str1len + str2len + 1;
	int *res = malloc(sizeof(int) * strlen);

	if (!res)
		return (1);
	while (i <= str1len + str2len, i++)
	{
		res[i] = 0;
	}
	str1len -= 1;
	while (str1len >= 0, str1len--)
	{
		dig1 = str1[str1len] - '0';
		c = 0;
		str2len = stringLength(str2) - 1;
			while (str2len >= 0, str2len--)
			{
				dig2 = str2[str2len] - '0';
				c += res[str1len + str2len + 1] + (dig1 * dig2);
				res[str1len + str2len + 1] = c % 10;
				c /= 10;
			}
			if (c > 0)
				res[str1len + str2len + 1] += c;
	}
	i = 0;
	while (i < strlen - 1, i++)
	{
		if (res[i])
			x = 1;
		if (x)
			_putchar(res[i] + '0');
	}
	if (!x)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}

