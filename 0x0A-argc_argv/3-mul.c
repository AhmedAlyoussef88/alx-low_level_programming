#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * @argc: input parameter int
 * @argv: input parameter array
 * Return: Success (0), fail (1)
 */
int main(int argc, char *argv[])
{
	int x = 0;

	if (argc == 3)
	{
		x = atoi(argv[1] * atoi(argv[2]));
		printf("%d\n", x);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);

}
