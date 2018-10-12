#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: is the hash table.
 * @key: is the key the function is looking for.
 * Return: the value associated with the key; or Null if key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value;
	unsigned long int idx;

	idx = key_index((const unsigned char *)key, ht->size);

	if (!key)
		return (NULL);

	if (ht->array[idx] == NULL)
		return (NULL);

	value = ht->array[idx]->value;

	if (value == NULL)
		return (NULL);
	else if (strlen(value) == 0)
		return (NULL);
	else
		return (value);
}
