#include "hash_tables.h"
/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hh;
	int x;

	hh = 5381;
	while ((x = *str++))
	{
		hh = ((hh << 5) + hh) + x; /* hh * 33 + x */
	}
	return (hh);
}
