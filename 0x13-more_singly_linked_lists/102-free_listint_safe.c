#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * free_listint_safe - frees a listint_t list.
 * @h: input parameter list pointer
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	int x = 0;
	listint_t *tmpList;

	if (!h || !*h)
	{
		return (0);
	}
	while (*h)
	{
		x = *h - (*h)->next;
		if (x > 0)
		{
			tmpList = (*h)->next;
			free(*h);
			*h = tmpList;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}
	*h = NULL;
	return (size);
}
