#include <stdio.h>
/**
* main - Entry point
* Description: Print all the numbers of base 16 in lowercase
* Return: Always 0 (Success)
*/

int main(void)
{
	int d = 48;

	while (d <= 102)
	{
		putchar(d);
		if (d == 57)
		{
			d += 39;
		}
		d++;
	}

	putchar('\n');
	return (0);
}
