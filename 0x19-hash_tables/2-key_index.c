#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key.
 * @key: the key.
 * @size: the size of the array of the hash table.
 * Return: Always EXIT_SUCCESS.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
