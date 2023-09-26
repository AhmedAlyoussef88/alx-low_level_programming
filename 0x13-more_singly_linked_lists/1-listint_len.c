#include "lists.h"
/**
 * listint_len - number of elements in a linked listint_t list.
 * @h: input parameter list pointer
 * Return: number of nodes element
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes_number = 0;

	while (h)
	{
		nodes_number++;
		h = h->next;
	}
	return (nodes_number);
}
