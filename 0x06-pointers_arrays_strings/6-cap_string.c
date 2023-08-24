#include "main.h"
/**
 * *cap_string - Separators of words: space, tabulation
 * @str: string input parameter
 * Return: result string
 */
char *cap_string(char *str)
{
	char separators[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}'};

	int i = 0, j = 0;

	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;

		while (separators[j] != '\0')
		{
			if (str[i] == separators[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] = str[i + 1] - 32;
			}
			j++;
		}
		i++;
	}

	return (str);
}
