#include <stdio.h>
/**
 * main - Entry point
 * @argc: Input parameter int
 * @argv: input parameter array
 * Return: Always 0 (Success)
 */
int main(int argc, char const *argv[])
{
	if(argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
