#include "lists.h"
/**
 * dlistint_len - elements num in a linked dlistint_t list.
 * @h: pointer parameter
 * Return: number of nodes.
 **/
size_t dlistint_len(const dlistint_t *h)
{
	size_t _count = 0;
	
	while (h)
	{
		h = h->next;
		_count++;
	}
	return (_count);
}
