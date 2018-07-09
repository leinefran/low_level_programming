#include "holberton.h"

/**
 * *rot13 - a function that encodes a string using rot13.
 *
 * @s: pointer to 1st char of string to be reverse.
 *
 * Return: char.
 */
char *rot13(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		for (i = 0 ; (s[i] >= 'a' && s[i] <= 'm') ||
			     (s[i] >= 'A' && s[i] <= 'M'); s[i]++)
			s[i] = (s[i] + 13);
		if ((s[i] >= 'n' && s[i] <= 'z') ||
		    (s[i] >= 'N' && s[i] <= 'Z'))
			s[i] = (s[i] - 13);
	}
	return (s);
}
