#include <stdio.h>
/**
 * main - Entry point
 * Description: list all the natural numbers below 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y;

	y = 0;
	while (y < 1024)
	{
		if ((y % 3 == 0) || (y % 5 == 0))
		{
			x += y;
		}
		y++;
	}
	printf("%d\n", x);
	return (0);
}
