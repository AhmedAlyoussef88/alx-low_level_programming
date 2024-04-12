#include "hash_tables.h"
/**
  * hash_table_get - retrieves a value associated with a key.
  * @ht: pointer to hash table.
  * @key: key.
  * Return: value associated with the key, or NULL if key couldn’t be found.
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *tt;

	if (!ht || !key)
		return (NULL);

	/* get i */
	i = key_index((const unsigned char *)key, ht->size);
	tt = ht->array[i];
	while (tt)
	{
		if (strcmp(tt->key, key) == 0)
			return (tt->value);
		tt = tt->next;
	}
	return (NULL);
}
