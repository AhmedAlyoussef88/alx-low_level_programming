#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * @argc: Input parameter int
 * @argv: input parameter array
 * Return: success (0), fail (1)
 */
int main(int argc, char *argv[])
{
	int x, i = 0, s = 0;

	int arr[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("0\n");
		return (0);
	}
	while (i < 5 && x >= 0)
	{
		while (x >= arr[i])
		{
			s++;
			x -= arr[i];
		}
		i++;
	}
	printf("%d\n", s);
	return (0);
}
