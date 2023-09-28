#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: input parameter string
 * Return: the converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int index = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}
		res = res * 2 + (b[index] - '0');
		index++;
	}
	return (res);
}
