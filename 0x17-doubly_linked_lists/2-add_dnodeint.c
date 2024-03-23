#include "lists.h"
/**
 * add_dnodeint - adds a new node at the begin of a dlistint_t list.
 * @head: pointer parameter
 * @n: int parameter
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	listint_t *tmp = malloc(sizeof(listint_t));

	if (!head || !tmp)
		return (tmp ? free(tmp), NULL : NULL);
	tmp->n = n;
	tmp->prev = NULL;
	if (!*head)
	{
		*head = tmp;
		tmp->next = NULL;
	}
	else
	{
		tmp->next = *head;
		(*head)->prev = tmp;
		*head = tmp;
	}
	return (tmp);
}
