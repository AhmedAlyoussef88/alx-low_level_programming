#include "main.h"
#include <stdio.h>
/**
 * printing - prints buffer
 * @a: buffer to print
 * @size: bytes of the buffer
 * @i: line of the buffer
 */
void printing(char *a, int size, int i)
{
	int x = 0, y = 0;

	while (x <= 9)
	{
		if (x <= s)
			printf("%02x", a[i * 10 + x]);
		else
			printf("  ");
		if (x % 2)
			putchar(' ');
		x++;
	}
	y = 0;
	while (y <= s)
	{
		if (a[i * 10 + y] > 31 && a[i * 10 + y] < 127)
			putchar(a[i * 10 + y]);
		else
			putchar('.');
	}
}
/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int i = 0;

	while (i <= (size - 1) / 10 && size)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			printing(b, 9, i);
		}
		else
		{
			printing(b, size % 10 - 1, i);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
