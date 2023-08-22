#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Descrition: Generate random valid password
 * Return: Always (0) Success
 */
int main(void)
{
	int PassLength =  100, i = 0, CharSetSize = 78, Target = 2772, x = 0, y = 0;
	char password[100];

	srand(time(NULL));
	while (i < PassLength)
	{
		password[i] = rand() % CharSetSize;
		putchar(password[i] + '0');
		x += (password[i] + '0');
		if ((Target - x) - '0' < CharSetSize)
		{
			y = Target - x - '0';
			x += y;
			putchar(y + '0');
			break;
		}

		i++;
	}

	return (0);
}
