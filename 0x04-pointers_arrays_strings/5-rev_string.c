#include "holberton.h"

/**
 * rev_string - reverses a string
 * _putchar - prints a character at a time
 * @s: points to the address of the 1st character of the string
 *
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int length, i, *p;

	p = &(s[length]);

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (length = i - 1 ; length >= 0 ; length--)
	{
		_putchar(s[length]);
	}
	*s = p;
}
