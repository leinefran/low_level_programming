#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: is the hash table.
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	int flag = 1;
	unsigned long int i = 0;

	if (ht)
	{
		printf("{");
		while (i < ht->size)
		{
			if (ht->array[i] != NULL)
			{
				if (!flag)
				{
					printf(", ");
					printf("'%s': '%s'", ht->array[i]->key,
					       ht->array[i]->value);
				}
				else
				{
					flag = 0;
					printf("'%s': '%s'", ht->array[i]->key,
					       ht->array[i]->value);
				}
			}
			i++;
		}
	}
	printf("}\n");
}
