#include "holberton.h"

/**
 * *leet - a function that encodes a string into 1337.
 *
 * @s: pointer to 1st char of string to be reverse.
 *
 * Return: char.
 */
char *leet(char *s)
{
	char a1[5] = {'A', 'E', 'O', 'T', 'L'};
	char a2[5] = {'a', 'e', 'o', 't', 'l'};
	char a3[5] = {'4', '3', '0', '7', '1'};

	int i, j;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 4 ; j++)
			if (s[i] == a1[j] || s[i] == a2[j])
				s[i] = a3[j];
	}

	return (s);
}
