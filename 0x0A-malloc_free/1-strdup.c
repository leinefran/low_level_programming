#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str:
 *
 * Return: char.
 */
char *_strdup(char *str)
{
	char *copy;

	if (str == 0)
	{
		return (NULL);
	}

	int length;

	copy = malloc(sizeof(char) * length);

	if (copy == NULL)
	{
		return (NULL);
	}
	for (length = 0, str[length] != '\0' ; length++)
		copy[length] = str[length];

	return (copy);
}
