#include "holberton.h"

/**
 * _memcpy - a function that copies memory area.
 *
 * @dest: a pointer to the buffer to be modified.
 * src will be copied at the end of dest.
 * @src: a pointer to the buffer to be appended.
 * @n: length of src.
 *
 * Return: char.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
