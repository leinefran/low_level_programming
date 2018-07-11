#include "holberton.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 *
 * @s: the string.
 * @accept: the initial segment of s.
 *
 * Return: char.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				count++;

				break;
			}
		}
		if (accept[j] == '\0' && count > 0)
			return (count);
	}
	return (count);
}
