#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: input parameter list
 * @str: input parameter string
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *l;
	unsigned int i = 0;

	while (str[i])
	{
		i++;
	}
	l = malloc(sizeof(list_t));
	if (!l)
	{
		return (NULL);
	}
	l->str = strdup(str);
	l->i = i;
	l->next = (*head);
	(*head) = l;
	return (*head);
}
