#include "holberton.h"

/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 * and 0 if not.
 * @s: points to the value of first address.
 * Return: int.
 */
int _strlen_recursion(char *s);
int is_palindrome(char *s)
{
	int first = 0;
	int second = _strlen_recursion(s) - 1;

	if (_strlen_recursion(s) == 0 || _strlen_recursion(s) == 1)
		return (1);
	return (find_pal(s, first, second));
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
 * find_pal - find if a string is a palindrome or not.
 * @first: the first letter to be compared.
 * @second: the second letter to be compared.
 * @s: the string.
 * Return: 1 if string is palindrome, and 0 if it's not.
 **/
int find_pal(char *s, int first, int second)
{
	if (s[first] != s[second])
		return (0);
	else if (first >= second)
		return (1);
	return (find_pal(s, first + 1, second - 1));
}

