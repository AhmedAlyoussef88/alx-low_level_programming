#include "lists.h"
/**
 * dlistint_len - the number of elements in a linked dlistint_t list.
 * @h: pointer parameter
 * Return: number of nodes.
 **/
size_t dlistint_len(const dlistint_t *h)
{
	size_t _count = 0;
	
	while (h)
	{
		cont++;
		h = h->next;
	}
	return (_count);
}
