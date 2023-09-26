#include "lists.h"
/**
 * sum_listint - returns the sum of all the data(n) of a listint_t linked list
 * @head: input parameter list head pointer
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *tmpNode = head;

	while (tmpNode)
	{
		s += tmpNode->n;
		tmpNode = tmpNode->next;
	}
	return (s);
}
