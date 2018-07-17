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
	int length, i;

	if (str == NULL)
	{
		return (NULL);
	}

	for (length = 0 ; str[length] != '\0' ; length++)
		;

	copy = malloc(sizeof(char) * length);

	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i <= length ; i++)
		copy[i] = str[i];

	return (copy);
}
