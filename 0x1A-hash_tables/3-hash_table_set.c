#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table.
 * @key: key.
 * @value: value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	char *value_ = NULL, *key_ = NULL;
	hash_node_t *new_node = NULL;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	key_ = strdup(key);
	if (!key_)
	{
		free(new_node);
		return (0);
	}
	value_ = strdup(value);
	if (!value_)
	{
		free(new_node);
		free(key_);
		return (0);
	}

	new_node->key = key_;
	new_node->value = value_;
	new_node->next = NULL;
	i = key_index((unsigned char *)key, ht->size);

	if (!((ht->array)[i]))
		(ht->array)[i] = new_node;
	else
		hash_table_update(ht, key_, value_, i, new_node);
	return (1);
}
/**
 * hash_table_update - adds an element to the hash table.
 * @ht: hash table.
 * @key_: key.
 * @value_: value associated with the key.
 * @index: index in the hash table to insert/update the node.
 * @new_node: node to insert into hash table.
 * Return: Always 1.
 **/
int hash_table_update(hash_table_t *ht, char *key_, char *value_,
						unsigned long int index, hash_node_t *new_node)
{
	hash_node_t *tt = (ht->array)[index];

	while (tt)
	{
		if (strcmp(tt->key, key_) == 0)
		{
			free(key_);
			free(new_node);
			free(ht->array[index]->value);
			ht->array[index]->value = value_;
			return (1);
		}
		tt = tt->next;
	}
	tt = (ht->array)[index];
	new_node->next = tt;
	(ht->array)[index] = new_node;
	return (1);
}
