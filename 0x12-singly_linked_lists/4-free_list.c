#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t list.
 * @head: input parameter list head
 */
void free_list(list_t *head)
{
	list_t *tmpList;

	while (head)
	{
		tmpList = head->next;
		free(head->str);
		free(head);
		head = tmpList;
	}
}
