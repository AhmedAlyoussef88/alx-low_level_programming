#include "lists.h"
/**
 * free_listint2 -  frees a listint_t list.
 * @head: input parameter list head
 */
void free_listint2(listint_t **head)
{
	listint_t *tmpNode;

	if (head == NULL)
		return;
	while (*head)
	{
		tmpNode = (*head)->next;
		free(*head);
		*head = tmpNode;
	}
	*head = NULL;
}
