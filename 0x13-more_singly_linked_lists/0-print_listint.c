#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: input parameter list pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes_num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes_num++;
		h = h->next;
	}
	return (nodes_num);
}
