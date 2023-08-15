#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: input integer of this function
 * Return: Abs of the input
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
