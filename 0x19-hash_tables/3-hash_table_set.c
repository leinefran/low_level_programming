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

	index = key_index((const unsigned char *)key, ht->size);

	if (node == NULL || value == NULL || key == NULL || strlen(key) == 0)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);

	if (ht->array[index])
	{
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
	}
	else
	{
		node->next = NULL;
		ht->array[index] = node;
	}

	return (1);
}
