#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: input parameter list hear pointer
 * @index: input parameter int
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmpNode = head;

	while (tmpNode)
	{
		if (i >= index)
			break;
		tmpNode = tmpNode->next;
		i++;
	}
	return (tmpNode ? tmpNode : NULL);
}
