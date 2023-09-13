#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: input parameter
 * @argv: input parameter
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int by, i = 0;
	char *array;

	if (argc < 2)
	{
		printf("Error\n");
		exit(1);
	}
	by = atoi(argv[1]);
	if (by < 0)
	{
		printf("Error\n");
		exit(2);
	}
	array = (char *)main;
	while (i < by)
	{
		if (i == by - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx ", array[i]);
		i++;
	}
	return (0);
}
