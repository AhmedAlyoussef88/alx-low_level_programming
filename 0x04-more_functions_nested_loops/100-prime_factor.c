i#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int x, int y, int maxNum;

	x = 612852475143;
	maxNum = -1;

	while (x % 2 == 0)
	{
		maxNum = 2;
		x /= 2;
	}

	for (y = 3; y <= sqrt(x); y = y + 2)
	{
		while (x % y == 0)
		{
			maxNum = y;
			x = x / y;
		}
	}

	if (x > 2)
		maxNum = x;
	printf("%ld\n", maxNum);

	return (0);
}
