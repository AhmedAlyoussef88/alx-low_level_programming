#include <stdio.h>
/**
* main - Entry point
* Description: Prints all possible different combinations of two digits
* Return: Always 0 (Success)
*/

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 100; num1++)
	{
		for (num2 = num1; num2 < 100; num2++)
		{
			if (num1 != num2)
			{
				putchar('0' + (num1 / 10));
				putchar('0' + (num1 % 10));
				putchar(' ');
				putchar('0' + (num2 / 10));
				putchar('0' + (num2 % 10));
				if (num1 != 98 || num2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	printf("\n");

	return (0);
}
