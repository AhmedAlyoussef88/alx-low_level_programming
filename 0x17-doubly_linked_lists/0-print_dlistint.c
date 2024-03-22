#include "lists.h"
/**
 * print_dlistint - prints all the elements of list.
 * @h: pointer parameter.
 * Return: nodes num.
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *nodes = h;
	size_t _count = 0;

	while (nodes)
	{
		printf("%d\n", nodes->n);
		_count++;
		nodes = nodes->next;
	}
	return _count;
}
