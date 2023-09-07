#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: input parameter pointer
 * @old_size: input parameter int
 * @new_size: input parameter int
 * Return: pointer memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *memoryPointer, *tmp;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	memoryPointer = malloc(new_size);
	if (!memoryPointer)
		return (NULL);
	tmp = ptr;
	if (new_size < old_size)
	{
		while (i < new_size)
		{
			memoryPointer[i] = tmp[i];
			i++;
		}
	}
	if (new_size > old_size)
	{
		i = 0;
		while (i < old_size)
		{
			memoryPointer[i] = tmp[i];
			i++;
		}
	}
	free(ptr);
	return (memoryPointer);
}

