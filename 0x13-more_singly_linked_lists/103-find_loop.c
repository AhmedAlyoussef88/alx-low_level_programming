#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: input parameter list head pointer
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *l1 = head;
	listint_t *l2 = head;

	if (!head)
		return (NULL);
	while (l1 && l2 && l2->next)
	{
		l2 = l2->next->next;
		l1 = l1->next;
		if (l2 == l1)
		{
			l1 = head;
			while (l1 != l2)
			{
				l1 = l1->next;
				l2 = l2->next;
			}
			return (l2);
		}
	}
	return (NULL);
}
