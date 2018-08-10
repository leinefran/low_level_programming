#include "holberton.h"

/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 * and 0 if not.
 * @s: points to the value of first address.
 * Return: int.
 */
int _strlen(char *s);
int find_palindrome(char *s, int first, int second);
int is_palindrome(char *s)
{
	int first = 0;
	int second = _strlen(s) - 1;

	if (_strlen(s) == 0 || _strlen(s) == 1)
		return (1);
	return (find_palindrome(s, first, second));
}

/**
 * _strlen  - a function that returns the length of a string.
 * @s: points to the value of first address.
 * Return: int.
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0' ; length++ )
		;
	return (length);
}

/**
 * _find_palindrome - find if a string is a palindrome or not.
 * @length: the length of the string to be analyzed.
 * @s: the string.
 * Return: 1 if string is palindrome, and 0 if it's not.
 **/
int find_palindrome(char *s, int first, int second)
{
	if (s[first] != s[second])
		return (0);
	else if (first >= second)
		return (1);
	return (find_palindrome(s, first + 1, second - 1));
}

