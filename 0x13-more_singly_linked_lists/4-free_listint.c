#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: input parameter list pointer
 */
void free_listint(listint_t *head)
{
	listint_t *tmpNode;

	while (head)
	{
		tmpNode = head->next;
		free(head);
		head = tmpNode;
	}
}
