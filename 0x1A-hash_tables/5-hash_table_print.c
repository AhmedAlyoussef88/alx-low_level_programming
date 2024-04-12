#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: pointer parameter.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tt;
	unsigned int i = 0, f = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tt = ht->array[i];
		while (tt)
		{
			if (f == 1)
				printf(", ");
			printf("'%s': '%s'", tt->key, tt->value);
			tt = tt->next;
			f = 1;
		}
	}
	printf("}\n");
}
