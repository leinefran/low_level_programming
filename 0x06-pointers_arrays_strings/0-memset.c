#include "holberton.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: pointer to 1st char of string to be reverse.
 * @n: number of elements.
 * @b: constant byte.
 *
 * Return: char.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
