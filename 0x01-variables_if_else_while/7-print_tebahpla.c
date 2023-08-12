#include <stdio.h>
/**
* main - Entry point
* Description: Prints the lowercase alphabet in reverse
* Return: Always 0 (Success)
*/

int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}

	putchar('\n');
	return (0);
}
