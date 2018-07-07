#include "holberton.h"

/**
 * *_strcat - a function that concatenates two strings.
 * This function appends the src string to the dest string.
 *
 * @dest: a pointer to the string to be modified.
 * src will be copied at the end of dest.
 *
 * @src: a pointer to a string that will be appended to the end of dest.
 *
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int  dest_len = _strlen(dest);
	int src_len = _strlen(src);
	int i,n;

	n = src_len + dest_len;

	for (i = 0 ; i < n ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return dest;
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
