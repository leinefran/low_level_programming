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
	char a1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char a2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; j <= 51 ; j++)
			if (s[i] == a1[j])
			    s[i] = a2 [j];
	}
	return (s);
}
