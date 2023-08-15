#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n : Input parameters
 * Return: Always 0 success
 */
void print_to_98(int n)
{
	int i = n;

	if (n > 98)
	{
		while (i > 98)
		{
			printf("%d, ", i);
			i--;
		}
	}
	else
	{
		while (i < 98)
		{
			printf("%i, ", i);
			i++;
		}
	}
	printf("98\n");
}
