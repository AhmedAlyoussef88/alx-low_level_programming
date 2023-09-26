#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: input parameter list head pointer
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	if (!head || !*head)
		return (0);
	listint_t *tmpNode = (*head)->next;
	int NodeNumber = (*head)->n;

	free(*head);
	*head = tmpNode;
	return (NodeNumber);
}
