#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array parameter
 * @n: number of elemets
 */
void reverse_array(int *a, int n)
{
	int x = 0, j = n - 1, tmpVal;

	while (x < (n / 2))
	{
		tmpVal = a[x];
		a[x] = a[j];
		a[j--] = tmpVal;
		x++;
	}
}
