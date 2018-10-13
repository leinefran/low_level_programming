#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: is the hash table.
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp, *next;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			free(tmp->key);
			free(tmp->value);
			next = tmp->next;
			free(tmp);
			tmp = next;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
