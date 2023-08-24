#include "main.h"
/**
 * _strcmp - function should work exactly like strncpy
 * @s1: destination string
 * @s2: source string
 * Return: less than Zero if s1 <  s2
 * 0 if s1 = s2, more than 0 if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int count1 = 0, count2 = 0;

	while (s1[count1] != '\0')
		count1++;

	while (s2[count2] != '\0')
		count2++;

	if (count1 == count2)
		return (0);

	if (count1 < count2)
		return (count2 - count1);

	if (count1 > count2)
		return (count1 - count2);
}
