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
	unsigned long int index;

	hash_node_t *node = malloc(sizeof(hash_node_t));


	if (node == NULL || value == NULL || key == NULL || strlen(key) == 0
	    || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(node->key);
			free(node->value);
			free(node);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
