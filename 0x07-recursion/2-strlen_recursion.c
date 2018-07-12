#include "holberton.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 *
 * @s: points to the value of first address.
 *
 * Return: int.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(++s));
	}
	else
	{
		return (0);
	}
}
