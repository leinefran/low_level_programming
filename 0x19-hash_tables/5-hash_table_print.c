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
	hash_node_t *tmp = NULL;

	if (ht)
	{
		printf("{");
		while (i < ht->size)
		{
			tmp = ht->array[i];
			while (tmp)
			{
				if (!flag)
				{
					printf(", ");
					printf("'%s': '%s'", tmp->key,
					       tmp->value);
				}
				else
				{
					flag = 0;
					printf("'%s': '%s'", tmp->key,
					       tmp->value);
				}
				tmp = tmp->next;
			}
			i++;
		}
		printf("}\n");
	}
}
