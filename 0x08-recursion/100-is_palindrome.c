#include "main.h"
int checkPalindrome(char *s, int i, int len);
int GetStringlength(char *s);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (checkPalindrome(s, 0, GetStringlength(s)));
}
/**
 * checkPalindrome - checks character for palindrome
 * @x: input parameter string
 * @y: input parameter
 * @length: string length
 * Return: 1 if palindrome, 0 if not
 */
int checkPalindrome(char *x, int y, int length)
{
	if (*(x + y) != *(x + length - 1))
	{
		return (0);
	}
	if (y >= length)
	{
		return (1);
	}
	return (checkPalindrome(x, y + 1, length - 1));
}
/**
 * GetStringlength - returns the length of a string
 * @text: string to calculate the length of
 * Return: length of the string
 */
int GetStringlength(char *text)
{
	if (*text == '\0')
	{
		return (0);
	}
	return (1 + GetStringlength(text + 1));
}


