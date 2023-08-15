#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the first 50 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count = 0;
	unsigned long x = 0, y = 1, z;


	while (count < 50)
	{
		z = x + y;
		printf("%lu", z);

		x = y;
		y = z;

		if (count == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
		count++;
	}
}
