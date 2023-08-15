#include <stdio.h>
/**
 * main - Entry point
 * Description: list all the natural numbers below 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y;

	x = 0;
	while (x < 1024)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			x += y;
		}
		x++;
	}
	printf("%d\n", x);
	return (0);
}
