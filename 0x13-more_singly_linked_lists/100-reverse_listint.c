#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: input parameter list head
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *l1 = NULL;
	listint_t *l2 = NULL;

	if (*head == NULL)
		return (NULL)
	while (*head)
	{
		l2 = (*head)->l2;
		(*head)->l2 = l1;
		l1 = *head;
		*head = l2;
	}
	*head = l1;
	return (*head);
}
