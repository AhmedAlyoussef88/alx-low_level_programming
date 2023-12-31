#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: input parameter pointer
 * Return: str is NULL, print [0] (nil)
 */
size_t print_list(const list_t *h)
{
	size_t StrSize = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		StrSize++;
	}
	return (StrSize);
}
