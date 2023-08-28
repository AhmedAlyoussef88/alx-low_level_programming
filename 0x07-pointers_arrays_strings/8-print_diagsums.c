#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: Input parameter int
 * @size: Input parameter int
 */
void print_diagsums(int *a, int size)
{
	int i = 0;

	unsigned int s1 = 0, s2 = 0;

	while (i < size)
	{
		s1 += a[(size * i) + i];
		s2 += a[(size * (i + 1)) - (i + 1)];
		i++;
	}
	printf("%d, %d\n", s1, s2);
}
