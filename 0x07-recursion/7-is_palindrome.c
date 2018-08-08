#include "holberton.h"

/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 * and 0 if not.
 *
 * @s: points to the value of first address.
 *
 * Return: int.
 */
int _strlen_recursion(char *s);
int is_palindrome(char *s)
{
	if (_strlen_recursion(s) == 0 || _strlen_recursion(s) == 1)
		return (1);
	else if (s[0] != _strlen_recursion(s) - 1)
		return (0);
	else
		return (is_palindrome(s, length - 2));
}

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

/**
 * _find_palindrome - find if a string is a palindrome or not.
 *
 * @length: the length of the string to be analyzed.
 * @s: the string.
 *
 * Return: 1 if string is palindrome, and 0 if it's not.

