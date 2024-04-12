#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: pointer parameter.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tt, *a;
	unsigned int i = 0;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tt = ht->array[i];
		while (tt)
		{
			a = tt;
			free(a->key);
			free(a->value);
			free(a);
			tt = tt->next;
		}
	}
	free(ht->array);
	free(ht);
}
