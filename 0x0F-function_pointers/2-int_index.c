#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: input parameter
 * @size: input parameter
 * @cmp: input parameter
 * Return: index of the first element for which the cmp function does not
 * return 0 If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}

