#include "main.h"
/**
 * rev_string - reverses a string
 * @s: Pointer Parameter
 */
void rev_string(char *s)
{
	int length = 0, i = 0;

	char tmpStr;

	while (s[length] != '\0')
		length++;

	for (i = 0; i < (length / 2); i++)
	{
		tmpStr = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = tmpStr;
	}

}
