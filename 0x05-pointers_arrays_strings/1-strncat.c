#include "holberton.h"

/**
 * *_strncat - concatenates two strings;
 * The _strncat function is similar to the _strcat function, except that:
 * it will use at most n bytes from src; and,
 * src does not need to be null-terminated if it contains n or more bytes.
 *
 * @dest: a pointer to the string to be modified.
 * src will be copied at the end of dest.
 * @n: src_len.
 * @src: a pointer to a string that will be appended to the end of dest.
 *
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int  dest_len = _strlen(dest);
	int i;

	for (i = 0 ; i < n ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
/**
 * _strlen - returns the length of a string
 * @s: pointer to the address of the string to be tested
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s > 0)
	{
		s = s + 1;
		count++;
	}
	return (count);
}
