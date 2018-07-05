#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: points to the address of the 1st character of the string
 *
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int length, i, temp, j;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	length = i - 1;
	j = length;

	for (i = 0 ; i < length / 2 ; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;

		j--;
	}
}
