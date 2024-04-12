#include "hash_tables.h"
/**
 * shash_table_create - creates a sorted hash table.
 * @size:  size of the array.
 * Return: pointer to new sorted hash table, or NULL if somethong was wrong.
 **/
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int index = 0;
	shash_table_t *ht;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t **) * size);
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	while (index < size)
	{
		ht->array[index] = NULL;
		index++;
	}
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}
/**
 * shash_table_set - adds an element to the sorted hash table.
 * @ht: pointer to the sorted hash table.
 * @key: key string.
 * @value: string associated with key.
 * Return: 1 if it succeeded, 0 otherwise.
 **/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	shash_node_t *nn = NULL, *tt = NULL;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);

	/* check if key is in the hash table to update its value */
	tt = (ht->array)[i];
	while (tt)
	{
		if (strcmp(tt->key, key) == 0)
		{
			free(tt->value);
			tt->value = strdup(value);
			if (!tt->value)
				return (0);
			return (1);
		}
		tt = tt->next;
	}
	nn = malloc(sizeof(shash_node_t));
	if (!nn)
		return (0);
	nn->key = strdup(key);
	if (!nn->key)
	{
		free(nn);
		return (0);
	}
	nn->value = strdup(value);
	if (!nn->value)
	{
		free(nn->key);
		free(nn);
		return (0);
	}
	return (shash_table_add(ht, i, nn));
}


int shash_table_add(shash_table_t *ht, unsigned long int index,
					shash_node_t *new_node)
{
	shash_node_t *tt = NULL;

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	/* empty list */
	if (!ht->shead)
	{
		new_node->sprev = new_node->snext = NULL;
		ht->shead = ht->stail = new_node;
	}
	/* insert node in the first position */
	else if (strcmp(ht->shead->key, new_node->key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		tt = ht->shead;
		while (tt->snext && strcmp(tt->snext->key, new_node->key) < 0)
			tt = tt->snext;
		new_node->sprev = tt;
		new_node->snext = tt->snext;
		if (!tt->snext)
			ht->stail = new_node;
		else
			tt->snext->sprev = new_node;
		tt->snext = new_node;
	}
	return (1);
}
/**
  * shash_table_get - retrieves a value associated with a key.
  * @ht: pointer to the sorted hash table.
  * @key: key string.
  * Return: value associated with the key, or NULL if key couldn’t be found.
  */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int i;
	shash_node_t *tt;

	if (!ht || !key)
		return (NULL);

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

/**
 * shash_table_print - prints a sorted hash table.
 * @ht: pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tt;

	if (ht == NULL)
		return;

	tt = ht->shead;
	printf("{");
	while (tt)
	{
		printf("'%s': '%s'", tt->key, tt->value);
		tt = tt->snext;
		if (tt != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - prints a sorted hash table in reverse order.
 * @ht: pointer to the sorted hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tt;

	if (ht == NULL)
		return;

	tt = ht->stail;
	printf("{");
	while (tt)
	{
		printf("'%s': '%s'", tt->key, tt->value);
		tt = tt->sprev;
		if (tt != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_delete - deletes a sorted hash table.
 * @ht: pointer to hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tt, *aux_node;

	if (!ht)
		return;

	tt = ht->shead;
	while (tt)
	{
		aux_node = tt;
		free(aux_node->key);
		free(aux_node->value);
		free(aux_node);
		tt = tt->snext;
	}
	free(ht->array);
	free(ht);
}
