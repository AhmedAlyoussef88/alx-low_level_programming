#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: Pointer parameter
 * @b: Pointer parameter
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
