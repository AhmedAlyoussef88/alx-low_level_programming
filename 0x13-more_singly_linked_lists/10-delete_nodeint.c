#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a
 * listint_t linked list.
 * @head: input parameter list head
 * @index: input parameter int
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmpNode = *head;
	listint_t *c = NULL;
	unsigned int x = 0;

	if (*head == NULL)
                return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmpNode);
		return (1);
	}
	while (x < index - 1)
	{
		if (!tmpNode || !(tmpNode->next))
			return (-1);
		tmpNode = tmpNode->next;
		x++;
	}
	c = tmpNode->next;
	tmpNode->next = c->next;
	free(c);
	return (1);
}
