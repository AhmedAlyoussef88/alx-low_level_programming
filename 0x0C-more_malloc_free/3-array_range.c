#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers.
 * @min: input parameter int
 * @max: input parameter int
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *strPointer = malloc(sizeof(int) * size);
	int i = 0, size = 0;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	if (strPointer == NULL)
		return (NULL);
	while (min <= max)
	{
		strPointer[i] = min;
		i++;
		min++;
	}
	return (strPointer);
}
