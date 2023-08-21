#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: Pointer parameter string
 *Return: converted srting
 */
int _atoi(char *s)
{
	int sign = 0, found = 0, retresult = 0;

	unsigned int number = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			number = (number * 10) + (*s - '0');
			found = 1;
		}
		else if (found)
			break;

		s++;
	}
	retResult = number * sign;
	return (retResult);
}
