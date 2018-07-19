#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * If malloc fails, the malloc_checked function should cause normal process
 * termination with a status value of 98
 *
 * @b: size.
 *
 * Return: pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
