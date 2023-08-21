#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: Pointer parameter string
 *Return: converted srting
 */
int _atoi(char *s)
{
	int sign = 0, retResult = 0;

	unsigned int number = 0;

	do {
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			number = (number * 10) + (*s - '0');
		}
		else if (number > 0)
		{
			break;
		}

	} while (*s++);

	retResult = number * sign;
	return (retResult);
}
