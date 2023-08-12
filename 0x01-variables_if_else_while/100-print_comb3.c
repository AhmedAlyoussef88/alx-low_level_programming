#include <stdio.h>
/**
* main - Entry point
* Description: Prints all possible different combinations of two digits
* Return: Always 0 (Success)
*/

int main(void)
{
	int d1, d2;

	for (d1 = 0; d1 <= 8; d1++)
	{
		for (d2 = d1 + 1; d2 <= 9; d2++)
		{
			putchar('0' + d1);
			putchar('0' + d2);
			if (d1 != 8 || d2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	printf("\n");

	return (0);
}
