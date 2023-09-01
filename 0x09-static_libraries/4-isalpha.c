#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: input integer of this function
 * Return: 1 if lower or upper  else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
