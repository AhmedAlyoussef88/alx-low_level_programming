#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: input parameter list head
 * @str: input parameter string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newList;
	list_t *tmpList = *head;
	unsigned int i = 0;

	while (str[i])
	{
		i++;
	}
	newList = malloc(sizeof(list_t));
	if (!newList)
		return (NULL);
	newList->str = strdup(str);
	newList->len = i;
	newList->next = NULL;
	if (*head == NULL)
	{
		*head = newList;
		return (newList);
	}
	while (tmpList->next)
	{
		tmpList = tmpList->next;
	}
	tmpList->next = newList;
	return (newList);
}
