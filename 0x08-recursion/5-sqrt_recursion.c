#include "main.h"
int square_recursion(int n, int i);
/**
 * _sqrt_recursion - the natural square root of a number.
 * @x: Input parameter
 * Return: If n does not have a natural square root,
 * the function should return -1
 */
int _sqrt_recursion(int x)
{
	if (x < 0)
	{
		return (-1);
	}
	return (square_recursion(x, 0));
}
/**
 * square_recursion - recurses to find the natural
 * square root of a number
 * @n: Input parameter
 * @i: input parameter
 * Return: Square root
 */
int square_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (square_recursion(n, i + 1));
}
