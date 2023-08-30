#include "main.h"
int calculatePrime(int n, int i);
/**
 * is_prime_number - check if input integer is a prime number
 * @n: Input parameter
 * Return: 1 if n is a prime else 0
 */
int is_prime_number(int n)
{
	return (calculatePrime(n, 2));
}
/**
 * calculatePrime - calculate prime number
 * @x: Input parameter
 * @y: Input parameter
 * Return: 1 if x is prime else 0
 */
int calculatePrime(int x, int y)
{
	if (y >= x && x > 1)
	{
		return (1);
	}
	else if ((x % y == 0) || x <= 1)
	{
		return (0);
	}
	else
	{
		return (calculatePrime(x, y + 1));
	}
}

