#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: is the hash table.
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht)
	{
		printf("{");
		while (i < ht->size)
		{
			if (ht->array[i] != NULL)
			{
				printf("'%s': '%s'", ht->array[i]->key,
				       ht->array[i]->value);
				if(ht->array[i]->next != NULL)
					printf(",");
			}
			i++;
		}
	}
	printf("}\n");
}
