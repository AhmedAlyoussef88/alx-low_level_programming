#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - pointer to a 2 dimensional tmpay of integers
 * @width: input parameter int
 * @height: input parameter int
 * Return: width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **tmp;
	int i = 0, j = 0;

	if (height <= 0 || width <= 0)
		return (NULL);
	tmp = (int **) malloc(sizeof(int *) * height);
	if (tmp == NULL)
		return (NULL);
	while (i < height)
	{
		tmp[i] = (int *) malloc(sizeof(int) * width);
		if (tmp[i] == NULL)
		{
			free(tmp);
			j = 0;
			while (j <= i)
			{
				free(tmp[j]);
				j++;
			}
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			tmp[i][j] = 0;
			j++;
		}
	}
	return (tmp);
}
