#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: the size of the array.
 * Return: a pointer to the newly created hash table. Otherwise, return NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;

	table = malloc(sizeof(hash_table_t) * size);

	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *));

	if (array == NULL)
		return (NULL);

	return (table);
}
