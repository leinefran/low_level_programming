#include "holberton.h"

/**
 * _isalpha - a function that checks for alphabetic characters
 * @c: the letter to be checked
 *
 * Return: 1 if a letter is lowercase or uppercase. 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
