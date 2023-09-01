#include <stdio.h>
/**
 * main - Entry Point
 * @argc: Input parameter int
 * @argv: Input parameter array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}

