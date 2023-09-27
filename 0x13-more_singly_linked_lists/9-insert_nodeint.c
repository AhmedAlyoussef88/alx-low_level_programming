#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: input parameter list head pointer
 * @idx: input parameter int
 * @n: input parameter int
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *tmpNode = *head;

	if (!newNode || !head)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	while (tmpNode && i < idx)
	{
		if (i == idx - 1)
		{
			newNode->next = tmpNode->next;
			tmpNode->next = newNode;
			return (newNode);
		}
		else
			tmpNode = tmpNode->next;
		i++;
	}
	return (NULL);
}
