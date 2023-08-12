#include <stdio.h>
/**
* main - Entry point
* Description : print using putchart from a to z
* Return: Always 0 (Success)
*/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
