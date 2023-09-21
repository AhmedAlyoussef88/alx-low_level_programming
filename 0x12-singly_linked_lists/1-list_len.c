#include "lists.h"
#include <stdlib.h>
/**
 * list_len - number of elements in a linked list_t list.
 * @h: input parameter pointer
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
