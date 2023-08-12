#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* Description : last digit is between 0 and 6 with different conditions
* Return: Always 0 (Success)
*/

int main(void)
{
	int n, lDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lDigit = n % 10;

	if (lDigit < 6 && lDigit != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lDigit);
	}
	else if (lDigit > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, lDigit);
	}
	else if (lDigit == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, lDigit);
	}

	return (0);
}
