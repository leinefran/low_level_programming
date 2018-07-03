#include "holberton.h"

/**
 * int _strlen - returns the length of a string
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
	return(count);
}
