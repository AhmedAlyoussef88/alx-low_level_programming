#include <stdio.h>
/**
* main - Entry point
* Description: Display Lowercase letters and Uppercase letters
* Return: Always 0 (Success)
*/
int main(void)
{
	char lcase;
	char upcase;

	for (lcase = 'a'; lcase <= 'z'; lcase++)
	{
		putchar(lcase);
	}
	for (upcase = 'A'; upcase <= 'Z'; upcase++)
	{
		putchar(upcase);
	}
	putchar('\n');
	return (0);
}
