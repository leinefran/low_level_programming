#include "holberton.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * _putchar -  prints a char at a time.
 *
 * @s: the string.
 * @accept: the initial segment of s.
 *
 * Return: char.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (s);
}
