#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 *
 * @size: space required by the variable.
 * @nmemb: number of elements.
 * Return: pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p1;
	char *p2;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p2 = malloc(nmemb * size);

	if (p2 == NULL)
	{
		free(p2);
		return (NULL);
	}

	for (i = 0 ; i < size ; i++)
		p2[i] = 0;
	p1 = p2;

	return (p1);
}
