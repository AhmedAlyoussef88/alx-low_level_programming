#include "lists.h"
/**
 * print_dlistint - prints all the elements of list.
 * @h: pointer parameter.
 * Return: nodes num.
 **/
size_t print_dlistint(const dlistint_t *h)
{
	size_t _count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		_count++;
		h = h->next;
	}
	return (_count);
}
