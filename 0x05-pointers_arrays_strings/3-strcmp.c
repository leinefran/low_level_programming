#include "holberton.h"

/**
 * _strcmp - a function that compares two strings.
 *
 * @s1: this is the first string to be compared.
 * @s2: this is the second string to be compared.
 *
 * Return: int.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;

	if (s1[i] !=  s2[i])
		return(s1[i] - s2[i]);
	else
		return(0);
}
