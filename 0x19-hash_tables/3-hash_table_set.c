#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to.
 * @key: is the key.
 * @value: is the value associated with a key.
 * Return: 1 on Success; 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	hash_node_t *tmp;
	unsigned long int index = key_index((unsigned char *)key, ht->size);

	hash_node_t *node = malloc(sizeof(hash_node_t));


	if (node == NULL)
		return (0);

	if (value == NULL)
		return (0);

	if (key == NULL || strlen(key) == 0)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);

	if (ht->array[index])
	{
		tmp = ht->array[index];
		node->next = tmp;
		ht->array[index] = node;
	}
	else
	{
		node->next = NULL;
		ht->array[index] = node;
	}

	return (1);
}
