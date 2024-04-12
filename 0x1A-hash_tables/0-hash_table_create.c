#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size:  size of the array.
 * Return: pointer.
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int x = 0;
	hash_table_t *new_n = NULL;

	new_n = malloc(sizeof(hash_table_t));
	if (!new_n)
		return (NULL);

	new_n->size = size;
	new_n->array = malloc(sizeof(hash_node_t **) * size);
	if (!new_n->array)
	{
		free(new_n);
		return (NULL);
	}
	while (x < size)
	{
		(new_n->array)[x] = NULL;
		x++;
	}
	return (new_n);
}
