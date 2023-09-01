#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: input parameter int
 * @argv: input parameter array
 * Return: success (0), fail (1)
 */
int main(int argc, char *argv[])
{
	int y = 0, z = 0;

	int i = 1, j = 0, x = 0;

	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
			j++;
		}
		i++;
	}
	x = 1;
	while (x < argc)
	{
		z = atoi(argv[x]);
		if (z >= 0)
		{
			y += z;
		}
		x++;
	}
	printf("%d\n", y);
	return (0);
}
