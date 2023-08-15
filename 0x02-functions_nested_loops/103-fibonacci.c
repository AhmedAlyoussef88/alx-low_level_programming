#include <stdio.h>
/**
 * main - Entry point
 * Description: Each new term in the Fibonacci sequence is generated
 * by adding the previous two terms
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long x = 0, y = 1, z;
	float totalSum;

	while (1)
	{
		z = x + y;
		if (z > 4000000)
		{
			break;
		}
		if ((z % 2) == 0)
		{
			totalSum += z;
		}
		x = y;
		y = z;
	}
	printf("%.0f\n", totalSum);
	return (0);

}
