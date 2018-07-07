#include "holberton.h"

/**
 * *_strncpy - a function that copies a string.
 *
 * @dest: a pointer to the string to be modified.
 * src will be copied at the end of dest.
 *
 * @src: a pointer to a string that will be appended to the end of dest.
 *
 * Return: char.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
